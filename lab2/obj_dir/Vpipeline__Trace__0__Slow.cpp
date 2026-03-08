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
    tracep->declBit(c+233,"clk", false,-1);
    tracep->declBit(c+234,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+233,"clk", false,-1);
    tracep->declBit(c+234,"reset", false,-1);
    tracep->declBus(c+1,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+2,"FE_latch_out", false,-1, 168,0);
    tracep->declArray(c+8,"DE_latch_out", false,-1, 280,0);
    tracep->declArray(c+17,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+29,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+30,"from_AGEX_to_FE", false,-1, 106,0);
    tracep->declBus(c+277,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+278,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+34,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+277,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+35,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+277,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+278,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+278,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+233,"clk", false,-1);
    tracep->declBit(c+234,"reset", false,-1);
    tracep->declArray(c+2,"from_FE_latch", false,-1, 168,0);
    tracep->declBus(c+34,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+277,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+35,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+29,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+8,"DE_latch_out", false,-1, 280,0);
    tracep->declArray(c+8,"DE_latch", false,-1, 280,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+200+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+37,"valid_DE", false,-1);
    tracep->declBus(c+38,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+39,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+40,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+41,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+189,"DE_latch_contents", false,-1, 280,0);
    tracep->declBus(c+42,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+43,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+44,"op_DE", false,-1, 6,0);
    tracep->declBus(c+45,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+46,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+47,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+48,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBus(c+49,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+50,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+51,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+198,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+199,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+52,"is_br_DE", false,-1);
    tracep->declBit(c+53,"is_jmp_DE", false,-1);
    tracep->declBit(c+54,"rd_mem_DE", false,-1);
    tracep->declBit(c+55,"wr_mem_DE", false,-1);
    tracep->declBit(c+56,"wr_reg_DE", false,-1);
    tracep->declBit(c+57,"wr_reg_WB", false,-1);
    tracep->declBus(c+58,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+59,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+29,"pipeline_stall_DE", false,-1);
    tracep->declBit(c+60,"use_rs1_DE", false,-1);
    tracep->declBit(c+61,"use_rs2_DE", false,-1);
    tracep->declBus(c+62,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+63,"has_data_hazards", false,-1);
    tracep->declBit(c+34,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+64,"pht_index", false,-1, 7,0);
    tracep->declBus(c+65,"predicted_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+233,"clk", false,-1);
    tracep->declBit(c+234,"reset", false,-1);
    tracep->declBus(c+29,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+30,"from_AGEX_to_FE", false,-1, 106,0);
    tracep->declBus(c+277,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+278,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+2,"FE_latch_out", false,-1, 168,0);
    tracep->declArray(c+2,"FE_latch", false,-1, 168,0);
    tracep->declBit(c+66,"valid_FE", false,-1);
    tracep->declBus(c+67,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+68,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+279,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+69,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+70,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+29,"stall_pipe_FE", false,-1);
    tracep->declArray(c+71,"FE_latch_contents", false,-1, 168,0);
    tracep->declBus(c+77,"pht_index", false,-1, 7,0);
    tracep->declBus(c+78,"predicted_pc", false,-1, 31,0);
    tracep->declBit(c+79,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+80,"br_target_AGEX", false,-1, 31,0);
    tracep->declBus(c+81,"new_btb_target", false,-1, 31,0);
    tracep->declBit(c+82,"is_prev_br_taken", false,-1);
    tracep->declBus(c+83,"prev_pht_index", false,-1, 7,0);
    tracep->declBit(c+84,"was_branch_inst", false,-1);
    tracep->declBus(c+85,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+86,"bhr", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+87+i*2,"btb", true,(i+0), 58,0);
    }
    tracep->declBit(c+119,"pht_result", false,-1);
    tracep->declBus(c+120,"btb_index", false,-1, 3,0);
    tracep->declQuad(c+121,"btb_line", false,-1, 58,0);
    tracep->declBit(c+123,"btb_valid", false,-1);
    tracep->declBus(c+124,"btb_tag", false,-1, 25,0);
    tracep->declBus(c+125,"btb_addr", false,-1, 31,0);
    tracep->declBit(c+126,"btb_hit", false,-1);
    tracep->declBit(c+127,"take_branch", false,-1);
    tracep->declBus(c+128,"prev_btb_index", false,-1, 3,0);
    tracep->declBus(c+129,"prev_btb_tag", false,-1, 25,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+130,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+131,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+233,"clk", false,-1);
    tracep->declBit(c+234,"reset", false,-1);
    tracep->declBus(c+278,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+17,"from_AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+23,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+277,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+277,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+277,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+23,"MEM_latch", false,-1, 172,0);
    tracep->declBit(c+132,"valid_MEM", false,-1);
    tracep->declArray(c+133,"MEM_latch_contents", false,-1, 172,0);
    tracep->declBus(c+139,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+140,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+141,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+142,"PC_MEM", false,-1, 31,0);
    tracep->declBit(c+143,"rd_mem_MEM", false,-1);
    tracep->declBus(c+144,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+145,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+146,"wr_reg_MEM", false,-1);
    tracep->declBus(c+147,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+148,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+144,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+149,"wr_mem_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+233,"clk", false,-1);
    tracep->declBit(c+234,"reset", false,-1);
    tracep->declArray(c+23,"from_MEM_latch", false,-1, 172,0);
    tracep->declBus(c+277,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+35,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+277,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+277,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+150,"valid_WB", false,-1);
    tracep->declBus(c+151,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+152,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+153,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+154,"inst_count_WB", false,-1, 31,0);
    tracep->declBit(c+155,"wr_reg_WB", false,-1);
    tracep->declBus(c+156,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+157,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+158,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+159,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+235,"[0]", false,-1, 31,0);
    tracep->declBus(c+236,"[1]", false,-1, 31,0);
    tracep->declBus(c+237,"[2]", false,-1, 31,0);
    tracep->declBus(c+238,"[3]", false,-1, 31,0);
    tracep->declBus(c+239,"[4]", false,-1, 31,0);
    tracep->declBus(c+240,"[5]", false,-1, 31,0);
    tracep->declBus(c+241,"[6]", false,-1, 31,0);
    tracep->declBus(c+242,"[7]", false,-1, 31,0);
    tracep->declBus(c+243,"[8]", false,-1, 31,0);
    tracep->declBus(c+244,"[9]", false,-1, 31,0);
    tracep->declBus(c+245,"[10]", false,-1, 31,0);
    tracep->declBus(c+246,"[11]", false,-1, 31,0);
    tracep->declBus(c+247,"[12]", false,-1, 31,0);
    tracep->declBus(c+248,"[13]", false,-1, 31,0);
    tracep->declBus(c+249,"[14]", false,-1, 31,0);
    tracep->declBus(c+250,"[15]", false,-1, 31,0);
    tracep->declBus(c+251,"[16]", false,-1, 31,0);
    tracep->declBus(c+252,"[17]", false,-1, 31,0);
    tracep->declBus(c+253,"[18]", false,-1, 31,0);
    tracep->declBus(c+254,"[19]", false,-1, 31,0);
    tracep->declBus(c+255,"[20]", false,-1, 31,0);
    tracep->declBus(c+256,"[21]", false,-1, 31,0);
    tracep->declBus(c+257,"[22]", false,-1, 31,0);
    tracep->declBus(c+258,"[23]", false,-1, 31,0);
    tracep->declBus(c+259,"[24]", false,-1, 31,0);
    tracep->declBus(c+260,"[25]", false,-1, 31,0);
    tracep->declBus(c+261,"[26]", false,-1, 31,0);
    tracep->declBus(c+262,"[27]", false,-1, 31,0);
    tracep->declBus(c+263,"[28]", false,-1, 31,0);
    tracep->declBus(c+264,"[29]", false,-1, 31,0);
    tracep->declBus(c+265,"[30]", false,-1, 31,0);
    tracep->declBus(c+266,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+267,"[0]", false,-1, 31,0);
    tracep->declBus(c+268,"[1]", false,-1, 31,0);
    tracep->declBus(c+269,"[2]", false,-1, 31,0);
    tracep->declBus(c+270,"[3]", false,-1, 31,0);
    tracep->declBus(c+271,"[4]", false,-1, 31,0);
    tracep->declBus(c+272,"[5]", false,-1, 31,0);
    tracep->declBus(c+273,"[6]", false,-1, 31,0);
    tracep->declBus(c+274,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+232,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_AGEX_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_AGEX_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+233,"clk", false,-1);
    tracep->declBit(c+234,"reset", false,-1);
    tracep->declBus(c+277,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+278,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+8,"from_DE_latch", false,-1, 280,0);
    tracep->declArray(c+17,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+30,"from_AGEX_to_FE", false,-1, 106,0);
    tracep->declBus(c+34,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+17,"AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+160,"AGEX_latch_contents", false,-1, 174,0);
    tracep->declBit(c+166,"valid_AGEX", false,-1);
    tracep->declBus(c+167,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+168,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+169,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+170,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+171,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+172,"br_cond_AGEX", false,-1);
    tracep->declBit(c+173,"is_br_AGEX", false,-1);
    tracep->declBit(c+174,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+175,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+176,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+177,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+178,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+179,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+180,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+181,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+182,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+183,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+184,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+34,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+185,"pht_index", false,-1, 7,0);
    tracep->declBus(c+186,"predicted_pc", false,-1, 31,0);
    tracep->declBus(c+275,"num_correctly_predicted_branches", false,-1, 31,0);
    tracep->declBus(c+276,"num_branch_instructions", false,-1, 31,0);
    tracep->declBus(c+184,"new_btb_target", false,-1, 31,0);
    tracep->declBit(c+187,"br_taken", false,-1);
    tracep->declBit(c+188,"was_branch_inst", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_top\n"); );
    // Body
    Vpipeline___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("pipeline ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_AGEX_stage ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_AGEX_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
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
    VlWide<6>/*191:0*/ __Vtemp_h4a05fa40__0;
    VlWide<6>/*191:0*/ __Vtemp_hb7a14088__0;
    VlWide<6>/*191:0*/ __Vtemp_hce908504__0;
    VlWide<3>/*95:0*/ __Vtemp_hb48167e7__0;
    VlWide<4>/*127:0*/ __Vtemp_hc2195a56__0;
    VlWide<9>/*287:0*/ __Vtemp_h104d629c__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),169);
    bufp->fullWData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),281);
    bufp->fullWData(oldp+17,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch),175);
    bufp->fullWData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    bufp->fullWData(oldp+30,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE),107);
    bufp->fullBit(oldp+34,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+35,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    bufp->fullBit(oldp+37,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  >> 8U))));
    bufp->fullIData(oldp+38,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+39,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+40,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+41,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+42,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    >> 0x14U))),3);
    bufp->fullCData(oldp+43,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                       >> 1U))),7);
    bufp->fullCData(oldp+44,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 8U))),7);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+46,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+47,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+48,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                               : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                   : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          >> 7U)))) 
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 4U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0xfU))))
                                       : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                              >> 7U)))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                        << 4U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0xfU)))))
                                           : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? (0xfffff000U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 0x18U) 
                                                     | (0xfff000U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 8U))))
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                   >> 7U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 8U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x11U)) 
                                                         | (0x7feU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                << 4U) 
                                                               | (0xeU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 0x1cU)))))))
                                                   : 0U))))))),32);
    bufp->fullCData(oldp+49,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x17U))),5);
    bufp->fullCData(oldp+50,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                        << 4U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x1cU)))),5);
    bufp->fullCData(oldp+51,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0xfU))),5);
    bufp->fullBit(oldp+52,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+53,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+54,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+55,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+57,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+58,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U)))),5);
    bufp->fullIData(oldp+59,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullBit(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+62,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+63,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x17U)))) 
                            | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                  >> (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                << 4U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x1cU))))))));
    bufp->fullCData(oldp+64,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])),8);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
    bufp->fullBit(oldp+66,((1U & ((~ (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)) 
                                  & (~ (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                        >> 0xaU))))));
    bufp->fullIData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                             [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 2U))]),32);
    bufp->fullIData(oldp+70,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    __Vtemp_h4a05fa40__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_pc))));
    __Vtemp_h4a05fa40__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 << 8U) | (IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_pc))) 
                                                   >> 0x20U)));
    __Vtemp_h4a05fa40__0[2U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0x18U) | (((IData)(4U) 
                                               + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                              << 8U));
    __Vtemp_h4a05fa40__0[3U] = ((((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                        [
                                                                        (0x3fffU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                            >> 2U))])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                              << 8U));
    __Vtemp_h4a05fa40__0[4U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                             >> 2U))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h4a05fa40__0[5U] = ((0x100U & (((~ (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)) 
                                            & (~ (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                                  >> 0xaU))) 
                                           << 8U)) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                  >> 2U))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                            >> 0x20U)) 
                                   >> 0x18U));
    bufp->fullWData(oldp+71,(__Vtemp_h4a05fa40__0),169);
    bufp->fullCData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index),8);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_pc),32);
    bufp->fullBit(oldp+79,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                  >> 0xaU))));
    bufp->fullIData(oldp+80,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                            >> 0xaU))),32);
    bufp->fullIData(oldp+81,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                            >> 0xaU))),32);
    bufp->fullBit(oldp+82,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                  >> 9U))));
    bufp->fullCData(oldp+83,((0xffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                       >> 1U))),8);
    bufp->fullBit(oldp+84,((1U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U])));
    bufp->fullIData(oldp+85,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                               << 0x1fU) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                            >> 1U))),32);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__bhr),8);
    bufp->fullQData(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[0]),59);
    bufp->fullQData(oldp+89,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[1]),59);
    bufp->fullQData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[2]),59);
    bufp->fullQData(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[3]),59);
    bufp->fullQData(oldp+95,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[4]),59);
    bufp->fullQData(oldp+97,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[5]),59);
    bufp->fullQData(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[6]),59);
    bufp->fullQData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[7]),59);
    bufp->fullQData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[8]),59);
    bufp->fullQData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[9]),59);
    bufp->fullQData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[10]),59);
    bufp->fullQData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[11]),59);
    bufp->fullQData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[12]),59);
    bufp->fullQData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[13]),59);
    bufp->fullQData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[14]),59);
    bufp->fullQData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[15]),59);
    bufp->fullBit(oldp+119,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht
                             [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index])));
    bufp->fullCData(oldp+120,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                       >> 2U))),4);
    bufp->fullQData(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line),59);
    bufp->fullBit(oldp+123,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                           >> 0x3aU)))));
    bufp->fullIData(oldp+124,((0x3ffffffU & (IData)(
                                                    (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                                     >> 0x20U)))),26);
    bufp->fullIData(oldp+125,((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line)),32);
    bufp->fullBit(oldp+126,(((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                      >> 0x3aU)) & 
                             ((0x3ffffffU & (IData)(
                                                    (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                                     >> 0x20U))) 
                              == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                  >> 6U)))));
    bufp->fullBit(oldp+127,((((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                       >> 0x3aU)) & 
                              ((0x3ffffffU & (IData)(
                                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                                      >> 0x20U))) 
                               == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                   >> 6U))) & (1U < 
                                               vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht
                                               [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index]))));
    bufp->fullCData(oldp+128,((0xfU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                       >> 3U))),4);
    bufp->fullIData(oldp+129,((0x3ffffffU & ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                              << 0x19U) 
                                             | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                                >> 7U)))),26);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+132,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                   >> 0xeU))));
    __Vtemp_hb7a14088__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 << 6U) | (0x3fU & 
                                           vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U]));
    __Vtemp_hb7a14088__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                             >> 0xaU))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hb7a14088__0[2U] = (((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                  >> 2U))) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                  >> 0xaU))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU));
    __Vtemp_hb7a14088__0[3U] = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                  >> 2U))));
    __Vtemp_hb7a14088__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                  >> 2U))));
    __Vtemp_hb7a14088__0[5U] = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                          >> 2U)) | 
                                (0x1fc0U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                            >> 2U)));
    bufp->fullWData(oldp+133,(__Vtemp_hb7a14088__0),173);
    bufp->fullCData(oldp+139,((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+140,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+141,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+142,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullBit(oldp+143,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullIData(oldp+144,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+145,((0x1fU & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+146,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullIData(oldp+147,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullBit(oldp+149,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+150,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+151,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+152,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+153,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+154,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+155,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+156,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+158,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+159,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    __Vtemp_hce908504__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]));
    __Vtemp_hce908504__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_hce908504__0[2U] = (((IData)((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                >> 0x12U)))) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    __Vtemp_hce908504__0[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x16U) | (0x3fc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0xaU))) 
                                | (((IData)((0x3fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                   >> 0x12U)))) 
                                    >> 0x18U) | ((IData)(
                                                         ((0x3fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0xeU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 >> 0x12U))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp_hce908504__0[4U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xaU)) 
                                | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                    << 0x16U) | (0x3fc000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xaU))));
    __Vtemp_hce908504__0[5U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                            >> 0xaU)) 
                                | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                              >> 0xaU)));
    bufp->fullWData(oldp+160,(__Vtemp_hce908504__0),175);
    bufp->fullBit(oldp+166,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                   >> 0x18U))));
    bufp->fullIData(oldp+167,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+168,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          >> 0x18U))),32);
    bufp->fullIData(oldp+169,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+170,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x18U))),32);
    bufp->fullCData(oldp+171,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x12U))),6);
    bufp->fullBit(oldp+172,(((0x1cU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x12U)))
                              ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0xaU)) 
                                 == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0xaU)))
                              : ((0x1dU == (0x3fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x12U)))
                                  ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       << 0x16U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0xaU)) != 
                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0x16U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0xaU))) : 
                                 ((0x1eU == (0x3fU 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x12U)))
                                   ? (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_h047d73e2__0)
                                   : ((0x1fU == (0x3fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x12U)))
                                       ? VL_GTES_III(32, 
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0x16U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0xaU)), 
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 0x16U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 0xaU)))
                                       : ((0x20U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x12U)))
                                           ? (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_h048118d3__0)
                                           : (IData)(
                                                     ((0x840000U 
                                                       == 
                                                       (0xfc0000U 
                                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                      & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           << 0x16U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                             >> 0xaU)) 
                                                         >= 
                                                         ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           << 0x16U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                             >> 0xaU))))))))))));
    bufp->fullBit(oldp+173,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+174,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+175,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+176,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+177,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+178,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),5);
    bufp->fullIData(oldp+179,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+180,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+181,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX),32);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__br_target_AGEX),32);
    bufp->fullCData(oldp+185,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xaU))),8);
    bufp->fullIData(oldp+186,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0xaU))),32);
    bufp->fullBit(oldp+187,((1U & ((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgTmp_hb628d134__0) 
                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 8U)))));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__was_branch_inst));
    __Vtemp_hb48167e7__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                 : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                     : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                            >> 7U)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 4U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0xfU))))
                                         : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                >> 7U)))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          << 4U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0xfU)))))
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     << 0x18U) 
                                                    | (0xfff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 8U))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  >> 7U)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 8U)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x11U)) 
                                                        | (0x7feU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                               << 4U) 
                                                              | (0xeU 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 0x1cU)))))))
                                                  : 0U))))));
    __Vtemp_hc2195a56__0[0U] = ((__Vtemp_hb48167e7__0[0U] 
                                 << 0xaU) | ((((0x1cU 
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
                                              << 9U) 
                                             | ((((0x19U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((0x1aU 
                                                      == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | (0x1bU 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                 << 8U) 
                                                | (((0x17U 
                                                     == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    << 7U) 
                                                   | (((0x18U 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       << 6U) 
                                                      | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                          << 5U) 
                                                         | (0x1fU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0xfU))))))));
    __Vtemp_h104d629c__0[0U] = __Vtemp_hc2195a56__0[0U];
    __Vtemp_h104d629c__0[1U] = ((__Vtemp_hb48167e7__0[0U] 
                                 >> 0x16U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x17U))])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                              << 4U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1cU)))])))) 
                                              << 0xaU));
    __Vtemp_h104d629c__0[2U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                           [
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0x17U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                 << 4U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 0x1cU)))])))) 
                                 >> 0x16U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x17U))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x1fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                               << 4U) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1cU)))]))) 
                                                       >> 0x20U)) 
                                              << 0xaU));
    __Vtemp_h104d629c__0[3U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                 << 0xaU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x17U))])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                              << 4U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1cU)))]))) 
                                                      >> 0x20U)) 
                                             >> 0x16U));
    __Vtemp_h104d629c__0[4U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                 >> 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                              << 0xaU));
    __Vtemp_h104d629c__0[5U] = ((0xff000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x12U) | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                  >> 0x16U) 
                                                 | (0x3fc00U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                       << 0xaU)))));
    __Vtemp_h104d629c__0[6U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_h104d629c__0[7U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x10U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x10U)));
    __Vtemp_h104d629c__0[8U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    >> 0x10U)) | (0x1000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     << 0x10U)));
    bufp->fullWData(oldp+189,(__Vtemp_h104d629c__0),281);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 0x17U))]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          << 4U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x1cU)))]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+233,(vlSelf->clk));
    bufp->fullBit(oldp+234,(vlSelf->reset));
    bufp->fullIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->fullIData(oldp+275,(vlSymsp->TOP__pipeline__my_AGEX_stage.num_correctly_predicted_branches),32);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__pipeline__my_AGEX_stage.num_branch_instructions),32);
    bufp->fullBit(oldp+277,(0U));
    bufp->fullBit(oldp+278,(0U));
    bufp->fullIData(oldp+279,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
}
