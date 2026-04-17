module mac #(
    parameter IN_WIDTH = 8,
    parameter IN_FRAC = 0,
    parameter OUT_WIDTH = 8,
    parameter OUT_FRAC = 0,
    parameter MULT_LAT = 3,
    parameter ADD_LAT = 1,
    parameter K = 1,
    parameter ROWS = 1,
    parameter COLS = 1,
    parameter COLS_IDX = 1,
    parameter ROWS_IDX = 1
)(
    input                      clk,
    input                      rst,
    input                      rst_accumulator_in,
    input                      stream_out_rdy_in,
    input       [IN_WIDTH-1:0] row_data_in,
    input       [IN_WIDTH-1:0] col_data_in,
    input       [IN_WIDTH-1:0] bypass_data_in,
    output reg  [IN_WIDTH-1:0] row_data_out,
    output reg  [IN_WIDTH-1:0] col_data_out,
    output reg                 rst_accumulator_out,
    output reg                 stream_out_rdy_out,
    output reg [OUT_WIDTH-1:0] psum_out
);


    //TODO: Signal declarations
    wire [OUT_WIDTH-1:0] mult_out;
    wire                 mult_done;
    wire [OUT_WIDTH-1:0] add_out;
    wire                 add_done;

    wire [OUT_WIDTH-1:0] adder_b_in = rst_accumulator_in ? '0 : add_out;


    //TODO: multiplier instantiation
    multiplier #(
        .INPUT_A_WIDTH(IN_WIDTH),
        .INPUT_A_FRAC(IN_FRAC),
        .INPUT_B_WIDTH(IN_WIDTH),
        .INPUT_B_FRAC(IN_FRAC),
        .OUTPUT_WIDTH(OUT_WIDTH),
        .OUTPUT_FRAC(OUT_FRAC),
        .DELAY(MULT_LAT)
    ) u_mult (
        .clk(clk),
        .reset(rst),
        .en(1'b1),
        .stall(1'b0),
        .a_in(row_data_in),
        .b_in(col_data_in),
        .out(mult_out),
        .done(mult_done)
    );


    //TODO: adder instantiation
    adder #(
        .INPUT_A_WIDTH(OUT_WIDTH),
        .INPUT_A_FRAC(OUT_FRAC),
        .INPUT_B_WIDTH(OUT_WIDTH),
        .INPUT_B_FRAC(OUT_FRAC),
        .OUTPUT_WIDTH(OUT_WIDTH),
        .OUTPUT_FRAC(OUT_FRAC),
        .DELAY(ADD_LAT)
    ) u_add (
        .clk(clk),
        .reset(rst),
        .en(mult_done),
        .stall(1'b0),
        .a_in(mult_out),
        .b_in(adder_b_in),
        .out(add_out),
        .done(add_done)
    );


    //TODO: signal propagation and synchronization
    //Major approaches to look out for:
    // 1. rst_accumulator and stream_out_rdy are major control signals that dictates the flow of the data and when to reset the accumulator between different matrix multiplications
    // 2. An important part of the following design is to figure out how the data from multipliers and adders should be paired with the above two control signals
    // 3. Mainly you need to know: should I pass the results of this very own MAC's accumulator to the next MAC's accumulator or should I pass the results of the previous MAC's accumulator to this MAC's accumulator and when to do so
    // 4. Also, when should be the exact time point to reset the accumulator so my current results will not be cleared by mistake and the next matrix multiplication can start cleanly.

    // fix the amt of delay we need for resl!
    localparam integer DELAY = (COLS - COLS_IDX - 1 < 0) ? 0 : (COLS - COLS_IDX - 1);
    wire [OUT_WIDTH-1:0] delayed_acc;

    // prop signals
    generate
        if (DELAY == 0) begin : gen_no_delay
            assign delayed_acc = add_out;
        end else begin : gen_delay
            reg [OUT_WIDTH-1:0] delay_chain [0:DELAY-1];
            integer d;
            always @(posedge clk) begin
                if (rst) begin
                    for (d = 0; d < DELAY; d = d + 1) delay_chain[d] <= '0;
                end else begin
                    delay_chain[0] <= add_out;
                    for (d = 1; d < DELAY; d = d + 1) delay_chain[d] <= delay_chain[d-1];
                end
            end
            assign delayed_acc = delay_chain[DELAY-1];
        end
    endgenerate

    wire [OUT_WIDTH-1:0] bypass_extended = {{(OUT_WIDTH-IN_WIDTH){1'b0}}, bypass_data_in};
    wire [OUT_WIDTH-1:0] mux_out = stream_out_rdy_in ? delayed_acc : bypass_extended;

    // get and register ourputs w everyone
    always @(posedge clk) begin
        if (rst) begin
            row_data_out        <= '0;
            col_data_out        <= '0;
            rst_accumulator_out <= 1'b0;
            stream_out_rdy_out  <= 1'b0;
            psum_out            <= '0;
        end else begin
            row_data_out        <= row_data_in;
            col_data_out        <= col_data_in;
            rst_accumulator_out <= rst_accumulator_in;
            stream_out_rdy_out  <= stream_out_rdy_in;
            psum_out            <= mux_out;
        end
    end


endmodule
