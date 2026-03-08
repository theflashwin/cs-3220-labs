// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declBus(c+4,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+5,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+10,"DE_latch_out", false,-1, 248,0);
    tracep->declArray(c+18,"AGEX_latch_out", false,-1, 142,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+28,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+29,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+338,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+339,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+32,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+338,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+33,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+340,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+340,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+339,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+250,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+233,"from_FU_to_DE", false,-1, 34,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declBus(c+340,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+340,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+10,"from_DE_latch", false,-1, 248,0);
    tracep->declArray(c+18,"AGEX_latch_out", false,-1, 142,0);
    tracep->declArray(c+29,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+32,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+18,"AGEX_latch", false,-1, 142,0);
    tracep->declArray(c+35,"AGEX_latch_contents", false,-1, 142,0);
    tracep->declBit(c+40,"valid_AGEX", false,-1);
    tracep->declBus(c+41,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+42,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+43,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+44,"pcnext_AGEX", false,-1, 31,0);
    tracep->declBus(c+45,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+46,"br_cond_AGEX", false,-1);
    tracep->declBit(c+47,"is_br_AGEX", false,-1);
    tracep->declBit(c+48,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+49,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+50,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+51,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+52,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+53,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+54,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+55,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+56,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+57,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+58,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+32,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+59,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+60,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+61,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declArray(c+5,"from_FE_latch", false,-1, 136,0);
    tracep->declBus(c+32,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+338,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+33,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+28,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+233,"from_FU_to_DE", false,-1, 34,0);
    tracep->declArray(c+250,"from_DE_to_FU", false,-1, 70,0);
    tracep->declArray(c+10,"DE_latch_out", false,-1, 248,0);
    tracep->declBus(c+341,"ALU_IDLE", false,-1, 2,0);
    tracep->declBus(c+342,"ALU_ALUOP", false,-1, 2,0);
    tracep->declBus(c+343,"ALU_OP1", false,-1, 2,0);
    tracep->declBus(c+344,"ALU_OP2", false,-1, 2,0);
    tracep->declBus(c+345,"ALU_WAIT", false,-1, 2,0);
    tracep->declArray(c+10,"DE_latch", false,-1, 248,0);
    tracep->declBit(c+62,"valid_DE", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+253+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+63,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+64,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+65,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+66,"pcnext_DE", false,-1, 31,0);
    tracep->declBus(c+67,"pc_xor_bhr_DE", false,-1, 7,0);
    tracep->declArray(c+235,"DE_latch_contents", false,-1, 248,0);
    tracep->declBus(c+68,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+69,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+70,"op_DE", false,-1, 6,0);
    tracep->declBus(c+71,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+72,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+73,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+74,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+75,"wr_reg_WB", false,-1);
    tracep->declBus(c+76,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+77,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+28,"pipeline_stall_DE", false,-1);
    tracep->declBus(c+78,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+79,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+80,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+243,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+244,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+81,"is_br_DE", false,-1);
    tracep->declBit(c+82,"is_jmp_DE", false,-1);
    tracep->declBit(c+83,"rd_mem_DE", false,-1);
    tracep->declBit(c+84,"wr_mem_DE", false,-1);
    tracep->declBit(c+85,"wr_reg_DE", false,-1);
    tracep->declBit(c+86,"use_rs1_DE", false,-1);
    tracep->declBit(c+87,"use_rs2_DE", false,-1);
    tracep->declBus(c+88,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+89,"has_data_hazards", false,-1);
    tracep->declBit(c+32,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+245,"op3_fu", false,-1, 31,0);
    tracep->declBus(c+246,"csr_fu", false,-1, 2,0);
    tracep->declBus(c+285,"op1_reg", false,-1, 31,0);
    tracep->declBus(c+286,"op2_reg", false,-1, 31,0);
    tracep->declBus(c+287,"aluop_reg", false,-1, 3,0);
    tracep->declBus(c+288,"csr_alu_reg", false,-1, 2,0);
    tracep->declBus(c+289,"alu_state_reg", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declBus(c+28,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+29,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+338,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+339,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+5,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+5,"FE_latch", false,-1, 136,0);
    tracep->declBit(c+90,"valid_FE", false,-1);
    tracep->declBus(c+91,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+92,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+93,"pcplus_FE", false,-1, 31,0);
    tracep->declBus(c+94,"pcnext_FE", false,-1, 31,0);
    tracep->declBit(c+28,"stall_pipe_FE", false,-1);
    tracep->declArray(c+95,"FE_latch_contents", false,-1, 136,0);
    tracep->declBit(c+32,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+58,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+59,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+60,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+61,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->declBus(c+42,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+100,"BHR", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+101+i*1,"BTB_TAG", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+117+i*1,"BTB_VALID", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+133+i*1,"BTB_TARGET", true,(i+0), 31,0);
    }
    tracep->declBus(c+149,"pc_xor_bhr_FE", false,-1, 7,0);
    tracep->declBit(c+150,"pht_pred", false,-1);
    tracep->declBus(c+151,"btb_tag_fetched", false,-1, 25,0);
    tracep->declBit(c+152,"btb_valid_fetched", false,-1);
    tracep->declBus(c+153,"btb_target_fetched", false,-1, 31,0);
    tracep->declBus(c+154,"num_brjmp", false,-1, 31,0);
    tracep->declBus(c+155,"mis_pred", false,-1, 31,0);
    tracep->declBus(c+156,"correct_pred", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FU_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declArray(c+250,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+233,"from_FU_to_DE", false,-1, 34,0);
    tracep->declBus(c+285,"OP1", false,-1, 31,0);
    tracep->declBus(c+286,"OP2", false,-1, 31,0);
    tracep->declBus(c+287,"ALUOP", false,-1, 3,0);
    tracep->declBus(c+288,"CSR_IN", false,-1, 2,0);
    tracep->declBus(c+245,"OP3", false,-1, 31,0);
    tracep->declBus(c+246,"CSR_OUT", false,-1, 2,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"rst", false,-1);
    tracep->declBus(c+285,"OP1", false,-1, 31,0);
    tracep->declBus(c+286,"OP2", false,-1, 31,0);
    tracep->declBus(c+245,"OP3", false,-1, 31,0);
    tracep->declBus(c+287,"ALUOP", false,-1, 3,0);
    tracep->declBus(c+246,"CSR_ALU_OUT", false,-1, 2,0);
    tracep->declBus(c+288,"CSR_ALU_IN", false,-1, 2,0);
    tracep->declBit(c+157,"div_input_a_ack", false,-1);
    tracep->declBit(c+158,"div_input_b_ack", false,-1);
    tracep->declBit(c+159,"mult_input_a_ack", false,-1);
    tracep->declBit(c+160,"mult_input_b_ack", false,-1);
    tracep->declBit(c+290,"div_output_z_ack", false,-1);
    tracep->declBit(c+291,"mult_output_z_ack", false,-1);
    tracep->declBit(c+292,"div_input_a_stb", false,-1);
    tracep->declBit(c+293,"div_input_b_stb", false,-1);
    tracep->declBit(c+294,"mult_input_a_stb", false,-1);
    tracep->declBit(c+295,"mult_input_b_stb", false,-1);
    tracep->declBit(c+161,"div_output_z_stb", false,-1);
    tracep->declBit(c+162,"mult_output_z_stb", false,-1);
    tracep->declBit(c+247,"ALU_ready_1", false,-1);
    tracep->declBit(c+248,"ALU_ready_2", false,-1);
    tracep->declBit(c+249,"ALU_resutls_valid", false,-1);
    tracep->declBus(c+163,"div_output_z", false,-1, 31,0);
    tracep->declBus(c+164,"mult_output_z", false,-1, 31,0);
    tracep->pushNamePrefix("div0 ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"rst", false,-1);
    tracep->declBus(c+285,"input_a", false,-1, 31,0);
    tracep->declBit(c+292,"input_a_stb", false,-1);
    tracep->declBit(c+157,"input_a_ack", false,-1);
    tracep->declBus(c+286,"input_b", false,-1, 31,0);
    tracep->declBit(c+293,"input_b_stb", false,-1);
    tracep->declBit(c+158,"input_b_ack", false,-1);
    tracep->declBus(c+163,"output_z", false,-1, 31,0);
    tracep->declBit(c+161,"output_z_stb", false,-1);
    tracep->declBit(c+290,"output_z_ack", false,-1);
    tracep->declBit(c+161,"s_output_z_stb", false,-1);
    tracep->declBus(c+163,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+157,"s_input_a_ack", false,-1);
    tracep->declBit(c+158,"s_input_b_ack", false,-1);
    tracep->declBus(c+165,"state", false,-1, 3,0);
    tracep->declBus(c+340,"get_a", false,-1, 3,0);
    tracep->declBus(c+346,"get_b", false,-1, 3,0);
    tracep->declBus(c+347,"unpack", false,-1, 3,0);
    tracep->declBus(c+348,"special_cases", false,-1, 3,0);
    tracep->declBus(c+349,"normalise_a", false,-1, 3,0);
    tracep->declBus(c+350,"normalise_b", false,-1, 3,0);
    tracep->declBus(c+351,"divide_0", false,-1, 3,0);
    tracep->declBus(c+352,"divide_1", false,-1, 3,0);
    tracep->declBus(c+353,"divide_2", false,-1, 3,0);
    tracep->declBus(c+354,"divide_3", false,-1, 3,0);
    tracep->declBus(c+355,"normalise_1", false,-1, 3,0);
    tracep->declBus(c+356,"normalise_2", false,-1, 3,0);
    tracep->declBus(c+357,"round", false,-1, 3,0);
    tracep->declBus(c+358,"pack", false,-1, 3,0);
    tracep->declBus(c+359,"put_z", false,-1, 3,0);
    tracep->declBus(c+166,"a", false,-1, 31,0);
    tracep->declBus(c+167,"b", false,-1, 31,0);
    tracep->declBus(c+168,"z", false,-1, 31,0);
    tracep->declBus(c+169,"a_m", false,-1, 23,0);
    tracep->declBus(c+170,"b_m", false,-1, 23,0);
    tracep->declBus(c+171,"z_m", false,-1, 23,0);
    tracep->declBus(c+172,"a_e", false,-1, 9,0);
    tracep->declBus(c+173,"b_e", false,-1, 9,0);
    tracep->declBus(c+174,"z_e", false,-1, 9,0);
    tracep->declBit(c+175,"a_s", false,-1);
    tracep->declBit(c+176,"b_s", false,-1);
    tracep->declBit(c+177,"z_s", false,-1);
    tracep->declBit(c+178,"guard", false,-1);
    tracep->declBit(c+179,"round_bit", false,-1);
    tracep->declBit(c+180,"sticky", false,-1);
    tracep->declQuad(c+181,"quotient", false,-1, 50,0);
    tracep->declQuad(c+183,"divisor", false,-1, 50,0);
    tracep->declQuad(c+185,"dividend", false,-1, 50,0);
    tracep->declQuad(c+187,"remainder", false,-1, 50,0);
    tracep->declBus(c+189,"count", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mult0 ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"rst", false,-1);
    tracep->declBus(c+285,"input_a", false,-1, 31,0);
    tracep->declBit(c+294,"input_a_stb", false,-1);
    tracep->declBit(c+159,"input_a_ack", false,-1);
    tracep->declBus(c+286,"input_b", false,-1, 31,0);
    tracep->declBit(c+295,"input_b_stb", false,-1);
    tracep->declBit(c+160,"input_b_ack", false,-1);
    tracep->declBus(c+164,"output_z", false,-1, 31,0);
    tracep->declBit(c+162,"output_z_stb", false,-1);
    tracep->declBit(c+291,"output_z_ack", false,-1);
    tracep->declBit(c+162,"s_output_z_stb", false,-1);
    tracep->declBus(c+164,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+159,"s_input_a_ack", false,-1);
    tracep->declBit(c+160,"s_input_b_ack", false,-1);
    tracep->declBus(c+190,"state", false,-1, 3,0);
    tracep->declBus(c+340,"get_a", false,-1, 3,0);
    tracep->declBus(c+346,"get_b", false,-1, 3,0);
    tracep->declBus(c+347,"unpack", false,-1, 3,0);
    tracep->declBus(c+348,"special_cases", false,-1, 3,0);
    tracep->declBus(c+349,"normalise_a", false,-1, 3,0);
    tracep->declBus(c+350,"normalise_b", false,-1, 3,0);
    tracep->declBus(c+351,"multiply_0", false,-1, 3,0);
    tracep->declBus(c+352,"multiply_1", false,-1, 3,0);
    tracep->declBus(c+353,"normalise_1", false,-1, 3,0);
    tracep->declBus(c+354,"normalise_2", false,-1, 3,0);
    tracep->declBus(c+355,"round", false,-1, 3,0);
    tracep->declBus(c+356,"pack", false,-1, 3,0);
    tracep->declBus(c+357,"put_z", false,-1, 3,0);
    tracep->declBus(c+191,"a", false,-1, 31,0);
    tracep->declBus(c+192,"b", false,-1, 31,0);
    tracep->declBus(c+193,"z", false,-1, 31,0);
    tracep->declBus(c+194,"a_m", false,-1, 23,0);
    tracep->declBus(c+195,"b_m", false,-1, 23,0);
    tracep->declBus(c+196,"z_m", false,-1, 23,0);
    tracep->declBus(c+197,"a_e", false,-1, 9,0);
    tracep->declBus(c+198,"b_e", false,-1, 9,0);
    tracep->declBus(c+199,"z_e", false,-1, 9,0);
    tracep->declBit(c+200,"a_s", false,-1);
    tracep->declBit(c+201,"b_s", false,-1);
    tracep->declBit(c+202,"z_s", false,-1);
    tracep->declBit(c+203,"guard", false,-1);
    tracep->declBit(c+204,"round_bit", false,-1);
    tracep->declBit(c+205,"sticky", false,-1);
    tracep->declQuad(c+206,"product", false,-1, 47,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declBus(c+339,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+18,"from_AGEX_latch", false,-1, 142,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+338,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+338,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+340,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+23,"MEM_latch", false,-1, 140,0);
    tracep->declBit(c+208,"valid_MEM", false,-1);
    tracep->declArray(c+209,"MEM_latch_contents", false,-1, 140,0);
    tracep->declBus(c+214,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+215,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+216,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+217,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+218,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+219,"aluout_MEM", false,-1, 31,0);
    tracep->declBit(c+220,"wr_mem_MEM", false,-1);
    tracep->declBit(c+221,"rd_mem_MEM", false,-1);
    tracep->declBus(c+222,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+223,"wr_reg_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declArray(c+23,"from_MEM_latch", false,-1, 140,0);
    tracep->declBus(c+338,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+33,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+340,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+338,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+224,"valid_WB", false,-1);
    tracep->declBus(c+225,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+226,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+227,"op_I_WB", false,-1, 5,0);
    tracep->declBit(c+228,"wr_reg_WB", false,-1);
    tracep->declBus(c+229,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+230,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+231,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+232,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+298,"[0]", false,-1, 31,0);
    tracep->declBus(c+299,"[1]", false,-1, 31,0);
    tracep->declBus(c+300,"[2]", false,-1, 31,0);
    tracep->declBus(c+301,"[3]", false,-1, 31,0);
    tracep->declBus(c+302,"[4]", false,-1, 31,0);
    tracep->declBus(c+303,"[5]", false,-1, 31,0);
    tracep->declBus(c+304,"[6]", false,-1, 31,0);
    tracep->declBus(c+305,"[7]", false,-1, 31,0);
    tracep->declBus(c+306,"[8]", false,-1, 31,0);
    tracep->declBus(c+307,"[9]", false,-1, 31,0);
    tracep->declBus(c+308,"[10]", false,-1, 31,0);
    tracep->declBus(c+309,"[11]", false,-1, 31,0);
    tracep->declBus(c+310,"[12]", false,-1, 31,0);
    tracep->declBus(c+311,"[13]", false,-1, 31,0);
    tracep->declBus(c+312,"[14]", false,-1, 31,0);
    tracep->declBus(c+313,"[15]", false,-1, 31,0);
    tracep->declBus(c+314,"[16]", false,-1, 31,0);
    tracep->declBus(c+315,"[17]", false,-1, 31,0);
    tracep->declBus(c+316,"[18]", false,-1, 31,0);
    tracep->declBus(c+317,"[19]", false,-1, 31,0);
    tracep->declBus(c+318,"[20]", false,-1, 31,0);
    tracep->declBus(c+319,"[21]", false,-1, 31,0);
    tracep->declBus(c+320,"[22]", false,-1, 31,0);
    tracep->declBus(c+321,"[23]", false,-1, 31,0);
    tracep->declBus(c+322,"[24]", false,-1, 31,0);
    tracep->declBus(c+323,"[25]", false,-1, 31,0);
    tracep->declBus(c+324,"[26]", false,-1, 31,0);
    tracep->declBus(c+325,"[27]", false,-1, 31,0);
    tracep->declBus(c+326,"[28]", false,-1, 31,0);
    tracep->declBus(c+327,"[29]", false,-1, 31,0);
    tracep->declBus(c+328,"[30]", false,-1, 31,0);
    tracep->declBus(c+329,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+330,"[0]", false,-1, 31,0);
    tracep->declBus(c+331,"[1]", false,-1, 31,0);
    tracep->declBus(c+332,"[2]", false,-1, 31,0);
    tracep->declBus(c+333,"[3]", false,-1, 31,0);
    tracep->declBus(c+334,"[4]", false,-1, 31,0);
    tracep->declBus(c+335,"[5]", false,-1, 31,0);
    tracep->declBus(c+336,"[6]", false,-1, 31,0);
    tracep->declBus(c+337,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_top\n"); );
    // Body
    Vpipeline___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("pipeline ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_WB_stage ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipeline___024root__trace_register(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpipeline___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpipeline___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpipeline___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_ha364d04a__0;
    VlWide<5>/*159:0*/ __Vtemp_h880d0ce5__0;
    VlWide<5>/*159:0*/ __Vtemp_h858fe03f__0;
    VlWide<5>/*159:0*/ __Vtemp_h83e5661c__0;
    VlWide<3>/*95:0*/ __Vtemp_h545fa048__0;
    VlWide<4>/*127:0*/ __Vtemp_he15e2562__0;
    VlWide<8>/*255:0*/ __Vtemp_hf77c8eb3__0;
    VlWide<3>/*95:0*/ __Vtemp_h83f4de53__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+5,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),137);
    bufp->fullWData(oldp+10,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),249);
    bufp->fullWData(oldp+18,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),143);
    bufp->fullWData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),141);
    bufp->fullBit(oldp+28,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    __Vtemp_ha364d04a__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                         << 0x29U) 
                                        | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                  << 8U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                    >> 0x18U))))))));
    __Vtemp_ha364d04a__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                 << 0xaU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                                       << 0x29U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                                >> 0x18U))))))) 
                                                     >> 0x20U)));
    __Vtemp_ha364d04a__0[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                 << 0xaU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                             >> 0x16U));
    bufp->fullWData(oldp+29,(__Vtemp_ha364d04a__0),75);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+33,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    __Vtemp_h880d0ce5__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 8U)));
    __Vtemp_h880d0ce5__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h880d0ce5__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 0x16U) | (0x3fc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xaU))) 
                                | ((0x3f00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0xaU)) 
                                   | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                               >> 0x20U)) 
                                      >> 0x18U)));
    __Vtemp_h880d0ce5__0[3U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0xaU)) 
                                | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                    << 0x16U) | (0x3fc000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    >> 0xaU))));
    __Vtemp_h880d0ce5__0[4U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xaU)) 
                                | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 0xaU)));
    bufp->fullWData(oldp+35,(__Vtemp_h880d0ce5__0),143);
    bufp->fullBit(oldp+40,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  >> 0x18U))));
    bufp->fullIData(oldp+41,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+42,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+44,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x18U))),32);
    bufp->fullCData(oldp+45,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U))),6);
    bufp->fullBit(oldp+46,(((0x1cU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x12U)))
                             ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x12U)) 
                                == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x12U)))
                             : ((0x1dU == (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))
                                 ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x12U)) 
                                    != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         >> 0x12U)))
                                 : ((0x1eU == (0x3fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x12U)))
                                     ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0)
                                     : ((0x1fU == (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x12U)))
                                         ? VL_GTES_III(32, 
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         << 0xeU) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           >> 0x12U)), 
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         << 0xeU) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                           >> 0x12U)))
                                         : ((0x20U 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0x12U)))
                                             ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h048118d3__0)
                                             : (IData)(
                                                       ((0x840000U 
                                                         == 
                                                         (0xfc0000U 
                                                          & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                        & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                             << 0xeU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                               >> 0x12U)) 
                                                           >= 
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                             << 0xeU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                               >> 0x12U))))))))))));
    bufp->fullBit(oldp+47,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+48,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+49,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0xfU))));
    bufp->fullBit(oldp+50,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0xeU))));
    bufp->fullBit(oldp+51,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0xdU))));
    bufp->fullCData(oldp+52,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 8U))),5);
    bufp->fullIData(oldp+53,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+54,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+55,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
    bufp->fullBit(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
    bufp->fullCData(oldp+61,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),8);
    bufp->fullBit(oldp+62,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  >> 8U))));
    bufp->fullIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+64,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+65,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+66,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+67,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),8);
    bufp->fullCData(oldp+68,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x14U))),3);
    bufp->fullCData(oldp+69,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 1U))),7);
    bufp->fullCData(oldp+70,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 8U))),7);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+74,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? (((- (IData)((1U & 
                                               (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 7U)))) 
                                   << 0xbU) | (0x7ffU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x1cU))))
                               : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? (((- (IData)((1U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 7U)))) 
                                       << 0xbU) | (
                                                   (0x7e0U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0xfU))))
                                   : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 7U)))) 
                                           << 0xcU) 
                                          | ((0x800U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 4U)) 
                                                | (0x1eU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0xfU)))))
                                       : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (0xfffff000U 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  << 0x18U) 
                                                 | (0xfff000U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 8U))))
                                           : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 7U)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 8U)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x11U)) 
                                                        | (0x7feU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 4U) 
                                                              | (0xeU 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x1cU)))))))
                                               : 0U)))))),32);
    bufp->fullBit(oldp+75,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+76,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U)))),5);
    bufp->fullIData(oldp+77,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullCData(oldp+78,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x17U))),5);
    bufp->fullCData(oldp+79,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 4U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x1cU)))),5);
    bufp->fullCData(oldp+80,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0xfU))),5);
    bufp->fullBit(oldp+81,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+82,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+83,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+84,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+89,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x17U)))) 
                            | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                  >> (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 4U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x1cU))))))));
    bufp->fullBit(oldp+90,((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)));
    bufp->fullIData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+93,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE),32);
    __Vtemp_h858fe03f__0[0U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE 
                                 << 8U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
    __Vtemp_h858fe03f__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE 
                                 >> 0x18U) | (((IData)(4U) 
                                               + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                              << 8U));
    __Vtemp_h858fe03f__0[2U] = ((((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                              << 8U));
    __Vtemp_h858fe03f__0[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h858fe03f__0[4U] = (((IData)((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    bufp->fullWData(oldp+95,(__Vtemp_h858fe03f__0),137);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[0]),26);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[1]),26);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[2]),26);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[3]),26);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[4]),26);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[5]),26);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[6]),26);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[7]),26);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[8]),26);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[9]),26);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[10]),26);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[11]),26);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[12]),26);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[13]),26);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[14]),26);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[15]),26);
    bufp->fullBit(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[0]));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[1]));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[2]));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[3]));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[4]));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[5]));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[6]));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[7]));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[8]));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[9]));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[10]));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[11]));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[12]));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[13]));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[14]));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[15]));
    bufp->fullIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[0]),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[1]),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[2]),32);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[3]),32);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[4]),32);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[5]),32);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[6]),32);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[7]),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[8]),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[9]),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[10]),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[11]),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[12]),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[13]),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[14]),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[15]),32);
    bufp->fullCData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE),8);
    bufp->fullBit(oldp+150,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                             [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE])));
    bufp->fullIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),26);
    bufp->fullBit(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID
                            [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                      >> 2U))]));
    bufp->fullIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred),32);
    bufp->fullIData(oldp+156,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp 
                               - vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred)),32);
    bufp->fullBit(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb));
    bufp->fullBit(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb));
    bufp->fullIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z),32);
    bufp->fullCData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state),4);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m),24);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m),24);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m),24);
    bufp->fullSData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e),10);
    bufp->fullSData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e),10);
    bufp->fullSData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e),10);
    bufp->fullBit(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky));
    bufp->fullQData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient),51);
    bufp->fullQData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor),51);
    bufp->fullQData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend),51);
    bufp->fullQData(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder),51);
    bufp->fullCData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__count),6);
    bufp->fullCData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state),4);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m),24);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m),24);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m),24);
    bufp->fullSData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e),10);
    bufp->fullSData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e),10);
    bufp->fullSData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e),10);
    bufp->fullBit(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s));
    bufp->fullBit(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s));
    bufp->fullBit(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s));
    bufp->fullBit(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard));
    bufp->fullBit(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit));
    bufp->fullBit(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky));
    bufp->fullQData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product),48);
    bufp->fullBit(oldp+208,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   >> 0xeU))));
    __Vtemp_h83e5661c__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 << 6U) | (0x3fU & 
                                           vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
    __Vtemp_h83e5661c__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                             >> 0xaU))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h83e5661c__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 2U))) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                  >> 0xaU))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU));
    __Vtemp_h83e5661c__0[3U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 2U))));
    __Vtemp_h83e5661c__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 2U)) | 
                                (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                            >> 2U)));
    bufp->fullWData(oldp+209,(__Vtemp_h83e5661c__0),141);
    bufp->fullCData(oldp+214,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+215,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+216,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+217,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullIData(oldp+219,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullBit(oldp+220,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+221,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullCData(oldp+222,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+223,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+224,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+225,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+226,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 0xcU))),32);
    bufp->fullCData(oldp+227,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                        >> 6U))),6);
    bufp->fullBit(oldp+228,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+229,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+231,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+232,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    bufp->fullQData(oldp+233,((((QData)((IData)(((1U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                                  ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                                  : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z))) 
                                << 3U) | (QData)((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                                             ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb)
                                                             : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb)) 
                                                           << 2U) 
                                                          | ((((1U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                                                ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack)
                                                                : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack)) 
                                                              << 1U) 
                                                             | ((1U 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack)
                                                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack)))))))),35);
    __Vtemp_h545fa048__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? (((- (IData)((1U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 7U)))) 
                                     << 0xbU) | (0x7ffU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1cU))))
                                 : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 7U)))) 
                                         << 0xbU) | 
                                        ((0x7e0U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 4U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0xfU))))
                                     : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 7U)))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 4U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0xfU)))))
                                         : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (0xfffff000U 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x18U) 
                                                   | (0xfff000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 8U))))
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 7U)))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 8U)) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x11U)) 
                                                       | (0x7feU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 4U) 
                                                             | (0xeU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU)))))))
                                                 : 0U)))));
    __Vtemp_he15e2562__0[0U] = ((__Vtemp_h545fa048__0[0U] 
                                 << 0x12U) | ((((0x1cU 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                | ((0x1dU 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1eU 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((0x1fU 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x20U 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | (0x21U 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                               << 0x11U) 
                                              | ((((0x19U 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1aU 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | (0x1bU 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x10U) 
                                                 | (((0x17U 
                                                      == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     << 0xfU) 
                                                    | (((0x18U 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                           << 0xdU) 
                                                          | ((0x1f00U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 7U)) 
                                                             | (0xffU 
                                                                & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))))))));
    __Vtemp_hf77c8eb3__0[0U] = __Vtemp_he15e2562__0[0U];
    __Vtemp_hf77c8eb3__0[1U] = ((__Vtemp_h545fa048__0[0U] 
                                 >> 0xeU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                       [
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x17U))])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                        [
                                                                        (0x1fU 
                                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 4U) 
                                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x1cU)))])))) 
                                             << 0x12U));
    __Vtemp_hf77c8eb3__0[2U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                           [
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x17U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                            [
                                                            (0x1fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 4U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU)))])))) 
                                 >> 0xeU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x17U))])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                         [
                                                                         (0x1fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 4U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                      >> 0x20U)) 
                                             << 0x12U));
    __Vtemp_hf77c8eb3__0[3U] = ((0xff000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x12U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                            [
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                             [
                                                                             (0x1fU 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                          >> 0x20U)) 
                                                 >> 0xeU)));
    __Vtemp_hf77c8eb3__0[4U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                    >> 0x10U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                     << 0x10U)));
    __Vtemp_hf77c8eb3__0[5U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    >> 0x10U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                     << 0x10U)));
    __Vtemp_hf77c8eb3__0[6U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_hf77c8eb3__0[7U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x10U)) | (0x1000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x10U)));
    bufp->fullWData(oldp+235,(__Vtemp_hf77c8eb3__0),249);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x17U))]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                              [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 4U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1cU)))]),32);
    bufp->fullIData(oldp+245,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z)),32);
    bufp->fullCData(oldp+246,(((((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                  ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb)
                                  : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb)) 
                                << 2U) | ((((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                             ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack)
                                             : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack)) 
                                           << 1U) | 
                                          ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                            ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack)
                                            : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack))))),3);
    bufp->fullBit(oldp+247,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                              ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack)
                              : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack))));
    bufp->fullBit(oldp+248,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                              ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack)
                              : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack))));
    bufp->fullBit(oldp+249,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                              ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb)
                              : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb))));
    __Vtemp_h83f4de53__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_reg)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_reg)))) 
                                 << 7U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg)));
    __Vtemp_h83f4de53__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_reg)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_reg)))) 
                                 >> 0x19U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_reg)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_reg))) 
                                                       >> 0x20U)) 
                                              << 7U));
    __Vtemp_h83f4de53__0[2U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_reg)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_reg))) 
                                         >> 0x20U)) 
                                >> 0x19U);
    bufp->fullWData(oldp+250,(__Vtemp_h83f4de53__0),71);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+275,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+277,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+278,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+279,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+280,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+281,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+282,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_reg),32);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_reg),32);
    bufp->fullCData(oldp+287,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg),4);
    bufp->fullCData(oldp+288,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg),3);
    bufp->fullCData(oldp+289,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__alu_state_reg),3);
    bufp->fullBit(oldp+290,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg))));
    bufp->fullBit(oldp+291,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg))));
    bufp->fullBit(oldp+292,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                >> 1U))));
    bufp->fullBit(oldp+293,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                >> 2U))));
    bufp->fullBit(oldp+294,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                >> 1U))));
    bufp->fullBit(oldp+295,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                >> 2U))));
    bufp->fullBit(oldp+296,(vlSelf->clk));
    bufp->fullBit(oldp+297,(vlSelf->reset));
    bufp->fullIData(oldp+298,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+300,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+318,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+320,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+322,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+326,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+327,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+332,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+333,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+334,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+335,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+336,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+337,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+338,(0U));
    bufp->fullBit(oldp+339,(0U));
    bufp->fullCData(oldp+340,(0U),4);
    bufp->fullCData(oldp+341,(0U),3);
    bufp->fullCData(oldp+342,(1U),3);
    bufp->fullCData(oldp+343,(2U),3);
    bufp->fullCData(oldp+344,(3U),3);
    bufp->fullCData(oldp+345,(4U),3);
    bufp->fullCData(oldp+346,(1U),4);
    bufp->fullCData(oldp+347,(2U),4);
    bufp->fullCData(oldp+348,(3U),4);
    bufp->fullCData(oldp+349,(4U),4);
    bufp->fullCData(oldp+350,(5U),4);
    bufp->fullCData(oldp+351,(6U),4);
    bufp->fullCData(oldp+352,(7U),4);
    bufp->fullCData(oldp+353,(8U),4);
    bufp->fullCData(oldp+354,(9U),4);
    bufp->fullCData(oldp+355,(0xaU),4);
    bufp->fullCData(oldp+356,(0xbU),4);
    bufp->fullCData(oldp+357,(0xcU),4);
    bufp->fullCData(oldp+358,(0xdU),4);
    bufp->fullCData(oldp+359,(0xeU),4);
}
