`include "define.vh" 

module FU_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire [`from_DE_to_FU_WIDTH-1:0]    from_DE_to_FU,   
  output wire [`from_FU_to_DE_WIDTH-1:0]   from_FU_to_DE
);
  /////////////////////////////////////////////////////////////////
  //TODO: add your code here to instantiate the external_alu module

  wire [31:0] OP1 = from_DE_to_FU[70:39];
  wire [31:0] OP2 = from_DE_to_FU[38:7];
  wire [3:0] ALUOP = from_DE_to_FU[6:3];
  wire [2:0] CSR_IN = from_DE_to_FU[2:0];

  wire [31:0] OP3;
  wire [2:0] CSR_OUT;

  external_alu alu(
    .clk(clk),
    .rst(reset),
    .OP1(OP1),
    .OP2(OP2),
    .OP3(OP3),
    .ALUOP(ALUOP),
    .CSR_ALU_OUT(CSR_OUT),
    .CSR_ALU_IN(CSR_IN)
  );

  assign from_FU_to_DE = {
    OP3,
    CSR_OUT
  };


endmodule