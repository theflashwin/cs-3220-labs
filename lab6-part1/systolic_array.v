module systolic_array #(
    parameter IN_WIDTH          = 8,
    parameter IN_FRAC           = 0,
    parameter OUT_WIDTH         = 8,
    parameter OUT_FRAC          = 0,
    parameter MULT_LAT          = 3,                 // Multiplication latency
    parameter ACC_LAT           = 1,                 // Addition latency (<=1, not support pipelined acc)
    parameter ROWS              = 4,                 // Row number of systolic array
    parameter K                 = 4,
    parameter COLS              = 4                  // Column number of systolic array
)(
    input                       clk,
    input                       rst_in,
    input                       rst_accumulator_rdy_in, // If 1, reset accumulator in array
    input                       stream_out_rdy_in_in,      // If 1, stream acc result out

    input [IN_WIDTH*ROWS-1:0]   row_data_in_in,
    input [IN_WIDTH*COLS-1:0]   col_data_in_in,
    output [OUT_WIDTH*ROWS-1:0] row_data_out
);
    //TODO: Signal declarations
    // register inputs // something todo with verilator timing issue
    reg       rst;
    reg       rst_accumulator_rdy;
    reg       stream_out_rdy;
    reg [IN_WIDTH*ROWS-1:0] row_data_in;
    reg [IN_WIDTH*COLS-1:0] col_data_in;

    always @(posedge clk) begin
        rst                 <= rst_in;
        rst_accumulator_rdy <= rst_accumulator_rdy_in;
        stream_out_rdy      <= stream_out_rdy_in_in;
        row_data_in         <= row_data_in_in;
        col_data_in         <= col_data_in_in;
    end

    // control buses from crtl module
    wire [COLS-1:0] col_rst_accumulator;
    wire [COLS-1:0] col_stream_out_rdy;

    // data wires
    //
    wire [IN_WIDTH-1:0]  row_data  [0:ROWS-1][0:COLS];
    wire [IN_WIDTH-1:0]  col_data  [0:ROWS][0:COLS-1];
    wire                 rst_acc   [0:ROWS][0:COLS-1];
    wire                 stream    [0:ROWS][0:COLS-1];
    wire [OUT_WIDTH-1:0] psum      [0:ROWS-1][0:COLS];


    //TODO: MAC units instantiation
    genvar i, j;

    // connect array edges, feed data left and right is the psums
    generate
        for (i = 0; i < ROWS; i = i + 1) begin : gen_left_edge
            assign row_data[i][0] = row_data_in[IN_WIDTH*i +: IN_WIDTH];
            assign psum[i][COLS]  = '0;   // rightmost MAC's bypass input = 0
        end
        for (j = 0; j < COLS; j = j + 1) begin : gen_top_edge
            assign col_data[0][j] = col_data_in[IN_WIDTH*j +: IN_WIDTH];
            assign rst_acc[0][j]  = col_rst_accumulator[j];
            assign stream[0][j]   = col_stream_out_rdy[j];
        end
    endgenerate

    // mac grid
    generate
        for (i = 0; i < ROWS; i = i + 1) begin : gen_mac_row
            for (j = 0; j < COLS; j = j + 1) begin : gen_mac_col
                mac #(
                    .IN_WIDTH(IN_WIDTH),
                    .IN_FRAC(IN_FRAC),
                    .OUT_WIDTH(OUT_WIDTH),
                    .OUT_FRAC(OUT_FRAC),
                    .MULT_LAT(MULT_LAT),
                    .ADD_LAT(ACC_LAT),
                    .K(K),
                    .ROWS(ROWS),
                    .COLS(COLS),
                    .COLS_IDX(j),
                    .ROWS_IDX(i)
                ) u_mac (
                    .clk(clk),
                    .rst(rst),
                    .rst_accumulator_in(rst_acc[i][j]),
                    .stream_out_rdy_in(stream[i][j]),
                    .row_data_in(row_data[i][j]),
                    .col_data_in(col_data[i][j]),
                    .bypass_data_in(psum[i][j+1][IN_WIDTH-1:0]),
                    .row_data_out(row_data[i][j+1]),
                    .col_data_out(col_data[i+1][j]),
                    .rst_accumulator_out(rst_acc[i+1][j]),
                    .stream_out_rdy_out(stream[i+1][j]),
                    .psum_out(psum[i][j])
                );
            end
        end
    endgenerate

    // row outputs come from the elftmost MAC's psum in each row
    generate
        for (i = 0; i < ROWS; i = i + 1) begin : gen_row_out
            assign row_data_out[OUT_WIDTH*i +: OUT_WIDTH] = psum[i][0];
        end
    endgenerate


    //TODO: Ctrl unit instantiation
    ctrl #(
        .IN_WIDTH(IN_WIDTH),
        .OUT_WIDTH(OUT_WIDTH),
        .ROWS(ROWS),
        .COLS(COLS),
        .MULT_LAT(MULT_LAT),
        .ACC_LAT(ACC_LAT)
    ) u_ctrl (
        .clk(clk),
        .rst(rst),
        .input_rst_accumulator(rst_accumulator_rdy),
        .input_stream_out_rdy(stream_out_rdy),
        .rst_accumulator(col_rst_accumulator),
        .stream_out_rdy(col_stream_out_rdy)
    );

endmodule
