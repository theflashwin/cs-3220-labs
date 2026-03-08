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
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"reset", false,-1);
    tracep->declBus(c+4,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+5,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+10,"DE_latch_out", false,-1, 248,0);
    tracep->declArray(c+18,"AGEX_latch_out", false,-1, 142,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+290,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+28,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+338,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+339,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+31,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+338,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+32,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+340,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+340,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+339,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+244,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+296,"from_FU_to_DE", false,-1, 34,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"reset", false,-1);
    tracep->declBus(c+340,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+340,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+10,"from_DE_latch", false,-1, 248,0);
    tracep->declArray(c+18,"AGEX_latch_out", false,-1, 142,0);
    tracep->declArray(c+28,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+31,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+18,"AGEX_latch", false,-1, 142,0);
    tracep->declArray(c+34,"AGEX_latch_contents", false,-1, 142,0);
    tracep->declBit(c+39,"valid_AGEX", false,-1);
    tracep->declBus(c+40,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+41,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+42,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+43,"pcnext_AGEX", false,-1, 31,0);
    tracep->declBus(c+44,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+45,"br_cond_AGEX", false,-1);
    tracep->declBit(c+46,"is_br_AGEX", false,-1);
    tracep->declBit(c+47,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+48,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+49,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+50,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+51,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+52,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+53,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+54,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+55,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+56,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+57,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+31,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+58,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+59,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+60,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"reset", false,-1);
    tracep->declArray(c+5,"from_FE_latch", false,-1, 136,0);
    tracep->declBus(c+31,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+338,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+32,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+290,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+296,"from_FU_to_DE", false,-1, 34,0);
    tracep->declArray(c+244,"from_DE_to_FU", false,-1, 70,0);
    tracep->declArray(c+10,"DE_latch_out", false,-1, 248,0);
    tracep->declBus(c+341,"ALU_IDLE", false,-1, 2,0);
    tracep->declBus(c+342,"ALU_ALUOP", false,-1, 2,0);
    tracep->declBus(c+343,"ALU_OP1", false,-1, 2,0);
    tracep->declBus(c+344,"ALU_OP2", false,-1, 2,0);
    tracep->declBus(c+345,"ALU_WAIT", false,-1, 2,0);
    tracep->declArray(c+10,"DE_latch", false,-1, 248,0);
    tracep->declBit(c+61,"valid_DE", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+247+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+62,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+63,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+64,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+65,"pcnext_DE", false,-1, 31,0);
    tracep->declBus(c+66,"pc_xor_bhr_DE", false,-1, 7,0);
    tracep->declArray(c+232,"DE_latch_contents", false,-1, 248,0);
    tracep->declBus(c+67,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+68,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+69,"op_DE", false,-1, 6,0);
    tracep->declBus(c+70,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+71,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+72,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+73,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+74,"wr_reg_WB", false,-1);
    tracep->declBus(c+75,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+76,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+290,"pipeline_stall_DE", false,-1);
    tracep->declBus(c+77,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+78,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+79,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+240,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+241,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+80,"is_br_DE", false,-1);
    tracep->declBit(c+81,"is_jmp_DE", false,-1);
    tracep->declBit(c+82,"rd_mem_DE", false,-1);
    tracep->declBit(c+83,"wr_mem_DE", false,-1);
    tracep->declBit(c+84,"wr_reg_DE", false,-1);
    tracep->declBit(c+85,"use_rs1_DE", false,-1);
    tracep->declBit(c+86,"use_rs2_DE", false,-1);
    tracep->declBus(c+87,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+88,"has_data_hazards", false,-1);
    tracep->declBit(c+31,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+242,"op3_fu", false,-1, 31,0);
    tracep->declBus(c+291,"csr_fu", false,-1, 2,0);
    tracep->declBus(c+279,"op1_reg", false,-1, 31,0);
    tracep->declBus(c+280,"op2_reg", false,-1, 31,0);
    tracep->declBus(c+281,"aluop_reg", false,-1, 3,0);
    tracep->declBus(c+282,"csr_alu_reg", false,-1, 2,0);
    tracep->declBus(c+283,"alu_state_reg", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"reset", false,-1);
    tracep->declBus(c+290,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+28,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+338,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+339,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+5,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+5,"FE_latch", false,-1, 136,0);
    tracep->declBit(c+89,"valid_FE", false,-1);
    tracep->declBus(c+90,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+91,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+92,"pcplus_FE", false,-1, 31,0);
    tracep->declBus(c+93,"pcnext_FE", false,-1, 31,0);
    tracep->declBit(c+290,"stall_pipe_FE", false,-1);
    tracep->declArray(c+94,"FE_latch_contents", false,-1, 136,0);
    tracep->declBit(c+31,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+57,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+58,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+59,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+60,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->declBus(c+41,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+99,"BHR", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+100+i*1,"BTB_TAG", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+116+i*1,"BTB_VALID", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+132+i*1,"BTB_TARGET", true,(i+0), 31,0);
    }
    tracep->declBus(c+148,"pc_xor_bhr_FE", false,-1, 7,0);
    tracep->declBit(c+149,"pht_pred", false,-1);
    tracep->declBus(c+150,"btb_tag_fetched", false,-1, 25,0);
    tracep->declBit(c+151,"btb_valid_fetched", false,-1);
    tracep->declBus(c+152,"btb_target_fetched", false,-1, 31,0);
    tracep->declBus(c+153,"num_brjmp", false,-1, 31,0);
    tracep->declBus(c+154,"mis_pred", false,-1, 31,0);
    tracep->declBus(c+155,"correct_pred", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FU_stage ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"reset", false,-1);
    tracep->declArray(c+244,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+296,"from_FU_to_DE", false,-1, 34,0);
    tracep->declBus(c+279,"OP1", false,-1, 31,0);
    tracep->declBus(c+280,"OP2", false,-1, 31,0);
    tracep->declBus(c+281,"ALUOP", false,-1, 3,0);
    tracep->declBus(c+282,"CSR_IN", false,-1, 2,0);
    tracep->declBus(c+242,"OP3", false,-1, 31,0);
    tracep->declBus(c+291,"CSR_OUT", false,-1, 2,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+279,"OP1", false,-1, 31,0);
    tracep->declBus(c+280,"OP2", false,-1, 31,0);
    tracep->declBus(c+242,"OP3", false,-1, 31,0);
    tracep->declBus(c+281,"ALUOP", false,-1, 3,0);
    tracep->declBus(c+291,"CSR_ALU_OUT", false,-1, 2,0);
    tracep->declBus(c+282,"CSR_ALU_IN", false,-1, 2,0);
    tracep->declBit(c+156,"div_input_a_ack", false,-1);
    tracep->declBit(c+157,"div_input_b_ack", false,-1);
    tracep->declBit(c+158,"mult_input_a_ack", false,-1);
    tracep->declBit(c+159,"mult_input_b_ack", false,-1);
    tracep->declBit(c+284,"div_output_z_ack", false,-1);
    tracep->declBit(c+285,"mult_output_z_ack", false,-1);
    tracep->declBit(c+286,"div_input_a_stb", false,-1);
    tracep->declBit(c+287,"div_input_b_stb", false,-1);
    tracep->declBit(c+288,"mult_input_a_stb", false,-1);
    tracep->declBit(c+289,"mult_input_b_stb", false,-1);
    tracep->declBit(c+160,"div_output_z_stb", false,-1);
    tracep->declBit(c+161,"mult_output_z_stb", false,-1);
    tracep->declBit(c+292,"ALU_ready_1", false,-1);
    tracep->declBit(c+293,"ALU_ready_2", false,-1);
    tracep->declBit(c+243,"ALU_resutls_valid", false,-1);
    tracep->declBus(c+162,"div_output_z", false,-1, 31,0);
    tracep->declBus(c+163,"mult_output_z", false,-1, 31,0);
    tracep->pushNamePrefix("div0 ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+279,"input_a", false,-1, 31,0);
    tracep->declBit(c+286,"input_a_stb", false,-1);
    tracep->declBit(c+156,"input_a_ack", false,-1);
    tracep->declBus(c+280,"input_b", false,-1, 31,0);
    tracep->declBit(c+287,"input_b_stb", false,-1);
    tracep->declBit(c+157,"input_b_ack", false,-1);
    tracep->declBus(c+162,"output_z", false,-1, 31,0);
    tracep->declBit(c+160,"output_z_stb", false,-1);
    tracep->declBit(c+284,"output_z_ack", false,-1);
    tracep->declBit(c+160,"s_output_z_stb", false,-1);
    tracep->declBus(c+162,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+156,"s_input_a_ack", false,-1);
    tracep->declBit(c+157,"s_input_b_ack", false,-1);
    tracep->declBus(c+164,"state", false,-1, 3,0);
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
    tracep->declBus(c+165,"a", false,-1, 31,0);
    tracep->declBus(c+166,"b", false,-1, 31,0);
    tracep->declBus(c+167,"z", false,-1, 31,0);
    tracep->declBus(c+168,"a_m", false,-1, 23,0);
    tracep->declBus(c+169,"b_m", false,-1, 23,0);
    tracep->declBus(c+170,"z_m", false,-1, 23,0);
    tracep->declBus(c+171,"a_e", false,-1, 9,0);
    tracep->declBus(c+172,"b_e", false,-1, 9,0);
    tracep->declBus(c+173,"z_e", false,-1, 9,0);
    tracep->declBit(c+174,"a_s", false,-1);
    tracep->declBit(c+175,"b_s", false,-1);
    tracep->declBit(c+176,"z_s", false,-1);
    tracep->declBit(c+177,"guard", false,-1);
    tracep->declBit(c+178,"round_bit", false,-1);
    tracep->declBit(c+179,"sticky", false,-1);
    tracep->declQuad(c+180,"quotient", false,-1, 50,0);
    tracep->declQuad(c+182,"divisor", false,-1, 50,0);
    tracep->declQuad(c+184,"dividend", false,-1, 50,0);
    tracep->declQuad(c+186,"remainder", false,-1, 50,0);
    tracep->declBus(c+188,"count", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mult0 ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"rst", false,-1);
    tracep->declBus(c+279,"input_a", false,-1, 31,0);
    tracep->declBit(c+288,"input_a_stb", false,-1);
    tracep->declBit(c+158,"input_a_ack", false,-1);
    tracep->declBus(c+280,"input_b", false,-1, 31,0);
    tracep->declBit(c+289,"input_b_stb", false,-1);
    tracep->declBit(c+159,"input_b_ack", false,-1);
    tracep->declBus(c+163,"output_z", false,-1, 31,0);
    tracep->declBit(c+161,"output_z_stb", false,-1);
    tracep->declBit(c+285,"output_z_ack", false,-1);
    tracep->declBit(c+161,"s_output_z_stb", false,-1);
    tracep->declBus(c+163,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+158,"s_input_a_ack", false,-1);
    tracep->declBit(c+159,"s_input_b_ack", false,-1);
    tracep->declBus(c+189,"state", false,-1, 3,0);
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
    tracep->declBus(c+190,"a", false,-1, 31,0);
    tracep->declBus(c+191,"b", false,-1, 31,0);
    tracep->declBus(c+192,"z", false,-1, 31,0);
    tracep->declBus(c+193,"a_m", false,-1, 23,0);
    tracep->declBus(c+194,"b_m", false,-1, 23,0);
    tracep->declBus(c+195,"z_m", false,-1, 23,0);
    tracep->declBus(c+196,"a_e", false,-1, 9,0);
    tracep->declBus(c+197,"b_e", false,-1, 9,0);
    tracep->declBus(c+198,"z_e", false,-1, 9,0);
    tracep->declBit(c+199,"a_s", false,-1);
    tracep->declBit(c+200,"b_s", false,-1);
    tracep->declBit(c+201,"z_s", false,-1);
    tracep->declBit(c+202,"guard", false,-1);
    tracep->declBit(c+203,"round_bit", false,-1);
    tracep->declBit(c+204,"sticky", false,-1);
    tracep->declQuad(c+205,"product", false,-1, 47,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"reset", false,-1);
    tracep->declBus(c+339,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+18,"from_AGEX_latch", false,-1, 142,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+338,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+338,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+340,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+23,"MEM_latch", false,-1, 140,0);
    tracep->declBit(c+207,"valid_MEM", false,-1);
    tracep->declArray(c+208,"MEM_latch_contents", false,-1, 140,0);
    tracep->declBus(c+213,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+214,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+215,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+216,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+217,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+218,"aluout_MEM", false,-1, 31,0);
    tracep->declBit(c+219,"wr_mem_MEM", false,-1);
    tracep->declBit(c+220,"rd_mem_MEM", false,-1);
    tracep->declBus(c+221,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+222,"wr_reg_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+294,"clk", false,-1);
    tracep->declBit(c+295,"reset", false,-1);
    tracep->declArray(c+23,"from_MEM_latch", false,-1, 140,0);
    tracep->declBus(c+338,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+32,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+340,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+338,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+223,"valid_WB", false,-1);
    tracep->declBus(c+224,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+225,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+226,"op_I_WB", false,-1, 5,0);
    tracep->declBit(c+227,"wr_reg_WB", false,-1);
    tracep->declBus(c+228,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+229,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+230,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+231,"rd_val_WB", false,-1, 31,0);
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
    bufp->fullWData(oldp+28,(__Vtemp_ha364d04a__0),75);
    bufp->fullBit(oldp+31,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+32,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
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
    bufp->fullWData(oldp+34,(__Vtemp_h880d0ce5__0),143);
    bufp->fullBit(oldp+39,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  >> 0x18U))));
    bufp->fullIData(oldp+40,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+41,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+42,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x18U))),32);
    bufp->fullCData(oldp+44,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U))),6);
    bufp->fullBit(oldp+45,(((0x1cU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
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
    bufp->fullBit(oldp+46,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+47,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+48,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0xfU))));
    bufp->fullBit(oldp+49,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0xeU))));
    bufp->fullBit(oldp+50,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0xdU))));
    bufp->fullCData(oldp+51,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 8U))),5);
    bufp->fullIData(oldp+52,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+53,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+54,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x12U))),32);
    bufp->fullIData(oldp+55,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullIData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
    bufp->fullBit(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
    bufp->fullCData(oldp+60,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),8);
    bufp->fullBit(oldp+61,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  >> 8U))));
    bufp->fullIData(oldp+62,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+64,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+65,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+66,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),8);
    bufp->fullCData(oldp+67,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x14U))),3);
    bufp->fullCData(oldp+68,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 1U))),7);
    bufp->fullCData(oldp+69,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 8U))),7);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+73,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
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
    bufp->fullBit(oldp+74,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+75,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U)))),5);
    bufp->fullIData(oldp+76,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullCData(oldp+77,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x17U))),5);
    bufp->fullCData(oldp+78,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 4U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x1cU)))),5);
    bufp->fullCData(oldp+79,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0xfU))),5);
    bufp->fullBit(oldp+80,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+81,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+82,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+83,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+88,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x17U)))) 
                            | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                  >> (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 4U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x1cU))))))));
    bufp->fullBit(oldp+89,((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)));
    bufp->fullIData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+92,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE),32);
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
    bufp->fullWData(oldp+94,(__Vtemp_h858fe03f__0),137);
    bufp->fullCData(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[0]),26);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[1]),26);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[2]),26);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[3]),26);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[4]),26);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[5]),26);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[6]),26);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[7]),26);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[8]),26);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[9]),26);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[10]),26);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[11]),26);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[12]),26);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[13]),26);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[14]),26);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[15]),26);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[0]));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[1]));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[2]));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[3]));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[4]));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[5]));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[6]));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[7]));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[8]));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[9]));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[10]));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[11]));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[12]));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[13]));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[14]));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[15]));
    bufp->fullIData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[0]),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[1]),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[2]),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[3]),32);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[4]),32);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[5]),32);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[6]),32);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[7]),32);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[8]),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[9]),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[10]),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[11]),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[12]),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[13]),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[14]),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[15]),32);
    bufp->fullCData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE),8);
    bufp->fullBit(oldp+149,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                             [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE])));
    bufp->fullIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),26);
    bufp->fullBit(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID
                            [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                      >> 2U))]));
    bufp->fullIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred),32);
    bufp->fullIData(oldp+155,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp 
                               - vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred)),32);
    bufp->fullBit(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb));
    bufp->fullIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z),32);
    bufp->fullCData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state),4);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m),24);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m),24);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m),24);
    bufp->fullSData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e),10);
    bufp->fullSData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e),10);
    bufp->fullSData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e),10);
    bufp->fullBit(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky));
    bufp->fullQData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient),51);
    bufp->fullQData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor),51);
    bufp->fullQData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend),51);
    bufp->fullQData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder),51);
    bufp->fullCData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__count),6);
    bufp->fullCData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state),4);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m),24);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m),24);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m),24);
    bufp->fullSData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e),10);
    bufp->fullSData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e),10);
    bufp->fullSData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e),10);
    bufp->fullBit(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s));
    bufp->fullBit(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s));
    bufp->fullBit(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s));
    bufp->fullBit(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard));
    bufp->fullBit(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit));
    bufp->fullBit(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky));
    bufp->fullQData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product),48);
    bufp->fullBit(oldp+207,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
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
    bufp->fullWData(oldp+208,(__Vtemp_h83e5661c__0),141);
    bufp->fullCData(oldp+213,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+214,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+215,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+216,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullIData(oldp+218,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullBit(oldp+219,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+220,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullCData(oldp+221,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+222,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+223,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+224,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+225,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 0xcU))),32);
    bufp->fullCData(oldp+226,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                        >> 6U))),6);
    bufp->fullBit(oldp+227,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+228,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+230,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+231,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
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
    bufp->fullWData(oldp+232,(__Vtemp_hf77c8eb3__0),249);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x17U))]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                              [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 4U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1cU)))]),32);
    bufp->fullIData(oldp+242,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z)),32);
    bufp->fullBit(oldp+243,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
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
    bufp->fullWData(oldp+244,(__Vtemp_h83f4de53__0),71);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+275,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+277,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+278,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+279,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_reg),32);
    bufp->fullIData(oldp+280,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_reg),32);
    bufp->fullCData(oldp+281,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg),4);
    bufp->fullCData(oldp+282,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg),3);
    bufp->fullCData(oldp+283,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__alu_state_reg),3);
    bufp->fullBit(oldp+284,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg))));
    bufp->fullBit(oldp+285,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg))));
    bufp->fullBit(oldp+286,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                >> 1U))));
    bufp->fullBit(oldp+287,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                >> 2U))));
    bufp->fullBit(oldp+288,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                >> 1U))));
    bufp->fullBit(oldp+289,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                             & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                >> 2U))));
    bufp->fullBit(oldp+290,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    bufp->fullCData(oldp+291,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_fu),3);
    bufp->fullBit(oldp+292,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_1));
    bufp->fullBit(oldp+293,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_2));
    bufp->fullBit(oldp+294,(vlSelf->clk));
    bufp->fullBit(oldp+295,(vlSelf->reset));
    bufp->fullQData(oldp+296,((((QData)((IData)(((1U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                                  ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                                  : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z))) 
                                << 3U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_fu)))),35);
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
