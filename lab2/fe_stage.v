 `include "define.vh" 


module FE_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_DE_to_FE_WIDTH-1:0] from_DE_to_FE,
  input wire [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,   
  input wire [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,   
  input wire [`from_WB_to_FE_WIDTH-1:0] from_WB_to_FE, 
  output wire [`FE_latch_WIDTH-1:0] FE_latch_out
);

  `UNUSED_VAR (from_MEM_to_FE)
  `UNUSED_VAR (from_WB_to_FE)

  // I-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] imem [`IMEMWORDS-1:0];
 
  initial begin
      $readmemh(`IDMEMINITFILE , imem);
  end

  // Display memory contents with verilator 
  /*
  always @(posedge clk) begin
    for (integer i=0 ; i<`IMEMWORDS ; i=i+1) begin
        $display("%h", imem[i]);
    end
  end
  */

  /* pipeline latch */ 
  reg [`FE_latch_WIDTH-1:0] FE_latch;  // FE latch 
  wire valid_FE;
   
  reg [`DBITS-1:0] PC_FE_latch; // PC latch in the FE stage   // you could use a part of FE_latch as a PC latch as well 
  
  reg [`DBITS-1:0] inst_count_FE; /* for debugging purpose */ 
  
  wire [`DBITS-1:0] inst_count_AGEX; /* for debugging purpose. resent the instruction counter */ 

  wire [`INSTBITS-1:0] inst_FE;  // instruction value in the FE stage 
  wire [`DBITS-1:0] pcplus_FE;  // pc plus value in the FE stage 
  wire stall_pipe_FE; // signal to indicate when a front-end needs to be stall
  
  wire [`FE_latch_WIDTH-1:0] FE_latch_contents;  // the signals that will be FE latch contents 

  wire [7:0]  pht_index;
  wire [31:0] predicted_pc;

  assign valid_FE = !stall_pipe_FE && !br_mispred_AGEX;
  
  // reading instruction from imem 
  assign inst_FE = imem[PC_FE_latch[`IMEMADDRBITS-1:`IMEMWORDBITS]];  // this code works. imem is stored 4B together 
  
  // wire to send the FE latch contents to the DE stage 
  assign FE_latch_out = FE_latch; 
 

  // This is the value of "incremented PC", computed in the FE stage
  assign pcplus_FE = PC_FE_latch + `INSTSIZE;
  
   
   // the order of latch contents should be matched in the decode stage when we extract the contents. 
  assign FE_latch_contents = {
                                valid_FE, 
                                inst_FE, 
                                PC_FE_latch, 
                                pcplus_FE, // please feel free to add more signals such as valid bits etc. 
                                inst_count_FE,
                                 // if you add more bits here, please increase the width of latch in VX_define.vh 
                                pht_index,
                                predicted_pc
                                };




  // **TODO: Complete the rest of the pipeline 
  //assign stall_pipe_FE = 1;   // you need
  wire br_mispred_AGEX;  
  wire [`DBITS-1:0] br_target_AGEX;  

 
  wire [31:0] new_btb_target;
  wire is_prev_br_taken;
  wire [7:0] prev_pht_index;
  wire was_branch_inst;
  wire [31:0] PC_AGEX;

  assign {
    stall_pipe_FE
  } = from_DE_to_FE[0]; 

  assign {
    br_mispred_AGEX,
    br_target_AGEX,
    new_btb_target,
    is_prev_br_taken,
    prev_pht_index,
    PC_AGEX,
    was_branch_inst
  } = from_AGEX_to_FE;

  // create BTB, PHT, BHR
  reg [7:0]   bhr;
  reg [58:0]  btb [0:15];
  reg [1:0]   pht [0:255];

  // index into PHT
  assign pht_index = PC_FE_latch[9:2] ^ bhr;
  wire pht_result = (pht[pht_index] > 2'b01) ? 1 : 0;

  // index into btb
  wire [3:0] btb_index = PC_FE_latch[5:2];
  wire [58:0] btb_line = btb[btb_index];

  // extract info
  wire btb_valid = btb_line[58];
  wire [25:0] btb_tag = btb_line[57:32];
  wire [31:0] btb_addr = btb_line[31:0];

  // do logic
  wire btb_hit = ((btb_valid) && (btb_tag == PC_FE_latch[31:6]));
  wire take_branch = (btb_hit && pht_result);

  assign predicted_pc = (take_branch == 1'b1) ? btb_addr : pcplus_FE;

  always @ (posedge clk) begin
  /* you need to extend this always block */
   if (reset) begin 
      PC_FE_latch <= `STARTPC;
      inst_count_FE <= 1;  /* inst_count starts from 1 for easy human reading. 1st fetch instructions can have 1 */ 

      // initialize BHR
      bhr <= 8'b0;

      // initialize PHT
      for (integer i = 0; i < 256; i = i+1) begin
        pht[i] <= 2'b01;
      end

      // initialize BTB
      for (integer i = 0; i < 16; i=i+1) begin
        btb[i] <= 59'b0;
      end
      
      end 
    else if (br_mispred_AGEX)
      PC_FE_latch <= br_target_AGEX;
    else if (stall_pipe_FE) 
      PC_FE_latch <= PC_FE_latch; 
    else begin 
      PC_FE_latch <= predicted_pc;
      inst_count_FE <= inst_count_FE + 1; 
      end 
  end

  wire [3:0] prev_btb_index = PC_AGEX[5:2];
  wire [25:0] prev_btb_tag = PC_AGEX[31:6];
  
  always @ (posedge clk) begin

    if (was_branch_inst) begin

      // update BHR
      bhr <= {bhr[6:0], is_prev_br_taken};

      // update PHT
      if (is_prev_br_taken) begin
        case (pht[prev_pht_index])
          2'b00: pht[prev_pht_index] <= 2'b01;
          2'b01: pht[prev_pht_index] <= 2'b10;
          2'b10: pht[prev_pht_index] <= 2'b11;
          2'b11: pht[prev_pht_index] <= 2'b11;
        endcase
      end else begin
        case(pht[prev_pht_index])
          2'b00: pht[prev_pht_index] <= 2'b00;
          2'b01: pht[prev_pht_index] <= 2'b00;
          2'b10: pht[prev_pht_index] <= 2'b01;
          2'b11: pht[prev_pht_index] <= 2'b10;
        endcase
      end

      // update BTB
      btb[prev_btb_index] <= {
        1'b1,
        prev_btb_tag,
        new_btb_target
      };

    end

  end

  always @ (posedge clk) begin
    if (reset) begin 
      FE_latch <= '0; 
    end else begin 
      if (br_mispred_AGEX)
        FE_latch <= '0;
      else if (stall_pipe_FE)
        FE_latch <= FE_latch; 
      else 
        FE_latch <= FE_latch_contents; 
    end  
  end

endmodule
