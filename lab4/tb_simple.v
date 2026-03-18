`timescale 1ns / 1ps
module tb_simple (
    input  wire        clk,
    input  wire        reset,
    input  wire [31:0] wr_data,
    input  wire        wr_vld,
    output wire        wr_rdy,
    output wire [31:0] rd_data,
    output wire        rd_vld,
    input  wire        rd_rdy
);

axis_fifo #(
    .ADDR_WIDTH(4),
    .AXIS_DATA_WIDTH(32)
) dut (
    .wr_aclk(clk), .wr_rstn(!reset),
    .wr_axis_data(wr_data), .wr_axis_vld(wr_vld), .wr_axis_rdy(wr_rdy),
    .rd_aclk(clk), .rd_rstn(!reset),
    .rd_axis_data(rd_data), .rd_axis_vld(rd_vld), .rd_axis_rdy(rd_rdy)
);

endmodule
