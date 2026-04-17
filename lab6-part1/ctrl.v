module ctrl #(
    parameter IN_WIDTH = 8,
    parameter OUT_WIDTH = 16,
    parameter ROWS = 4,
    parameter COLS = 4,
    parameter MULT_LAT = 1,
    parameter ACC_LAT = 1
)(
    input clk,
    input rst,
    input input_rst_accumulator,
    input input_stream_out_rdy,
    output [COLS-1:0] rst_accumulator,
    output [COLS-1:0] stream_out_rdy
);

    //TODO: Signal declarations

    // declare delays
    localparam integer STREAM_DELAY = MULT_LAT + ACC_LAT + COLS - 1;
    localparam integer RST_DELAY = (MULT_LAT >= 1) ? (MULT_LAT - 1) : 0;


    //TODO: Rst and stream out rdy signal propagation and synchronization logic among different MAC units
    wire stream_aligned;
    wire rst_aligned;

    generate
        if (STREAM_DELAY <= 0) begin : gen_no_stream_delay
            assign stream_aligned = input_stream_out_rdy;
        end else begin : gen_stream_delay
            reg stream_chain [0:STREAM_DELAY-1];
            integer s;
            always @(posedge clk) begin
                if (rst) begin
                    for (s = 0; s < STREAM_DELAY; s = s + 1) stream_chain[s] <= 1'b0;
                end else begin
                    stream_chain[0] <= input_stream_out_rdy;
                    for (s = 1; s < STREAM_DELAY; s = s + 1) stream_chain[s] <= stream_chain[s-1];
                end
            end
            assign stream_aligned = stream_chain[STREAM_DELAY-1];
        end
    endgenerate

    generate
        if (RST_DELAY <= 0) begin : gen_no_rst_delay
            assign rst_aligned = input_rst_accumulator;
        end else begin : gen_rst_delay
            reg rst_chain [0:RST_DELAY-1];
            integer r;
            always @(posedge clk) begin
                if (rst) begin
                    for (r = 0; r < RST_DELAY; r = r + 1) rst_chain[r] <= 1'b0;
                end else begin
                    rst_chain[0] <= input_rst_accumulator;
                    for (r = 1; r < RST_DELAY; r = r + 1) rst_chain[r] <= rst_chain[r-1];
                end
            end
            assign rst_aligned = rst_chain[RST_DELAY-1];
        end
    endgenerate


    assign stream_out_rdy = {COLS{stream_aligned}};
    reg [COLS-1:0] rst_col_skew;
    integer cs;

    always @(posedge clk) begin
        if (rst) begin
            rst_col_skew <= '0;
        end else begin
            rst_col_skew[0] <= rst_aligned;
            for (cs = 1; cs < COLS; cs = cs + 1) begin
                rst_col_skew[cs] <= rst_col_skew[cs-1];
            end
        end
    end
    assign rst_accumulator = rst_col_skew;

endmodule
