// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0\n"); );
    // Body
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vpipeline___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0_sub_0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<9>/*287:0*/ __Vtemp_27;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),169);
        bufp->chgWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),281);
        bufp->chgWData(oldp+16,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch),175);
        bufp->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        __Vtemp_2[0U] = (IData)((((QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_prev_br_taken) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x0000000aU))))) 
                                  << 0x00000021U) | 
                                 (((QData)((IData)(
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                       >> 0x00000018U)))) 
                                   << 1U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__was_branch_inst)))));
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)))) 
                          << 0x0000000aU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_prev_br_taken) 
                                                                         << 8U) 
                                                                        | (0x000000ffU 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                              >> 0x0000000aU))))) 
                                                       << 0x00000021U) 
                                                      | (((QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                            << 8U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                              >> 0x00000018U)))) 
                                                          << 1U) 
                                                         | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__was_branch_inst)))) 
                                                     >> 0x00000020U)));
        __Vtemp_2[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)))) 
                          >> 0x00000016U) | ((IData)(
                                                     ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX))) 
                                                      >> 0x00000020U)) 
                                             << 0x0000000aU));
        __Vtemp_2[3U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                          << 0x0000000aU) | ((IData)(
                                                     ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX))) 
                                                      >> 0x00000020U)) 
                                             >> 0x00000016U));
        bufp->chgWData(oldp+29,(__Vtemp_2),107);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+34,((((QData)((IData)((0x0000003fU 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                                  << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB)))),38);
        bufp->chgBit(oldp+36,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     >> 8U))));
        bufp->chgIData(oldp+37,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+38,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+39,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+40,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  >> 8U))),32);
        bufp->chgCData(oldp+41,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x00000014U))),3);
        bufp->chgCData(oldp+42,((0x0000007fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                >> 1U))),7);
        bufp->chgCData(oldp+43,((0x0000007fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 8U))),7);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+45,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+46,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+47,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                  ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                  : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                      ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                      : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                             >> 7U)))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                    << 4U)) 
                                                | (0x0000001fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x0000000fU))))
                                          : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                 >> 7U)))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000800U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 4U)) 
                                                    | ((0x000007e0U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                           << 4U)) 
                                                       | (0x0000001eU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x0000000fU)))))
                                              : ((3U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (0xfffff000U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 0x00000018U) 
                                                     | (0x00fff000U 
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
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x00000013U)) 
                                                        | (1U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 0x0000001cU))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                             << 4U) 
                                                            | (0x0000000eU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 0x0000001cU))))))
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+48,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x00000017U))),5);
        bufp->chgCData(oldp+49,((0x0000001fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x0000001cU)))),5);
        bufp->chgCData(oldp+50,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x0000000fU))),5);
        bufp->chgBit(oldp+51,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+52,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+53,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+54,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+56,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 5U))));
        bufp->chgCData(oldp+57,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB),32);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+62,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x0000001fU 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x00000017U)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x0000001fU 
                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x0000001cU))))))));
        bufp->chgCData(oldp+63,((0x000000ffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])),8);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
        bufp->chgBit(oldp+65,((1U & (~ ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                        | (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE))))));
        bufp->chgIData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                [(0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))]),32);
        bufp->chgIData(oldp+69,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index)) 
                                  << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_pc))));
        __Vtemp_5[1U] = (((IData)((((QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)))) 
                          << 8U) | (IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_pc))) 
                                            >> 0x00000020U)));
        __Vtemp_5[2U] = (((IData)((((QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)))) 
                          >> 0x00000018U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(4U) 
                                                                         + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                                                      >> 0x00000020U)) 
                                             << 8U));
        __Vtemp_5[3U] = (((IData)((((QData)((IData)(
                                                    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                    [
                                                    (0x00003fffU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                        >> 2U))])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                          << 8U) | ((IData)(((((QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                                             >> 0x00000020U)) 
                                    >> 0x00000018U));
        __Vtemp_5[4U] = (((IData)((((QData)((IData)(
                                                    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                    [
                                                    (0x00003fffU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                        >> 2U))])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                          >> 0x00000018U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                        [
                                                                        (0x00003fffU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                            >> 2U))])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                      >> 0x00000020U)) 
                                             << 8U));
        __Vtemp_5[5U] = (((IData)(((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                         >> 2U))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                   >> 0x00000020U)) 
                          >> 0x00000018U) | (0x00000100U 
                                             & ((~ 
                                                 ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                                  | (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE))) 
                                                << 8U)));
        bufp->chgWData(oldp+70,(__Vtemp_5),169);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index),8);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_pc),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_prev_br_taken));
        bufp->chgCData(oldp+80,((0x000000ffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x0000000aU))),8);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__was_branch_inst));
        bufp->chgIData(oldp+82,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0x00000018U))),32);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__bhr),8);
        bufp->chgQData(oldp+84,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[0]),59);
        bufp->chgQData(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[1]),59);
        bufp->chgQData(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[2]),59);
        bufp->chgQData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[3]),59);
        bufp->chgQData(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[4]),59);
        bufp->chgQData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[5]),59);
        bufp->chgQData(oldp+96,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[6]),59);
        bufp->chgQData(oldp+98,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[7]),59);
        bufp->chgQData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[8]),59);
        bufp->chgQData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[9]),59);
        bufp->chgQData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[10]),59);
        bufp->chgQData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[11]),59);
        bufp->chgQData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[12]),59);
        bufp->chgQData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[13]),59);
        bufp->chgQData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[14]),59);
        bufp->chgQData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[15]),59);
        bufp->chgBit(oldp+116,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht
                                [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index])));
        bufp->chgCData(oldp+117,((0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))),4);
        bufp->chgQData(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line),59);
        bufp->chgBit(oldp+120,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                              >> 0x0000003aU)))));
        bufp->chgIData(oldp+121,((0x03ffffffU & (IData)(
                                                        (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                                         >> 0x00000020U)))),26);
        bufp->chgIData(oldp+122,((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line)),32);
        bufp->chgBit(oldp+123,(((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                         >> 0x0000003aU)) 
                                & ((0x03ffffffU & (IData)(
                                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                                           >> 0x00000020U))) 
                                   == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                       >> 6U)))));
        bufp->chgBit(oldp+124,((((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                          >> 0x0000003aU)) 
                                 & ((0x03ffffffU & (IData)(
                                                           (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                                            >> 0x00000020U))) 
                                    == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 6U))) & 
                                (1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht
                                 [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index]))));
        bufp->chgCData(oldp+125,((0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 >> 0x0000001aU))),4);
        bufp->chgIData(oldp+126,((0x03ffffffU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    >> 0x0000001eU)))),26);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                      >> 0x0000000eU))));
        __Vtemp_10[0U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                         >> 0x0000000aU))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                        << 0x00000018U) 
                                                       | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                           << 6U) | (0x0000003fU & 
                                     vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U]));
        __Vtemp_10[1U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                         >> 0x0000000aU))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                        << 0x00000018U) 
                                                       | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                           >> 0x0000001aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x00003fffU 
                                                                          & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                             >> 0x0000000aU))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                            << 0x00000018U) 
                                                                           | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x00000020U)) 
                                              << 6U));
        __Vtemp_10[2U] = (((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                  >> 2U))) 
                          | ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x00003fffU 
                                                         & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                            >> 0x0000000aU))])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                           << 0x00000018U) 
                                                          | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001aU));
        __Vtemp_10[3U] = ((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                          >> 2U)) | 
                          ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                  >> 2U))));
        __Vtemp_10[4U] = ((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                          >> 2U)) | 
                          ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                  >> 2U))));
        __Vtemp_10[5U] = ((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                          >> 2U)) | 
                          (0x00001fc0U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                          >> 2U)));
        bufp->chgWData(oldp+130,(__Vtemp_10),173);
        bufp->chgCData(oldp+136,((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                 >> 8U))),6);
        bufp->chgIData(oldp+137,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+138,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                     >> 0x0000000eU))),32);
        bufp->chgIData(oldp+139,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                     >> 0x0000000eU))),32);
        bufp->chgBit(oldp+140,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+141,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                     >> 8U))),32);
        bufp->chgCData(oldp+142,((0x0000001fU & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+143,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+144,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x00003fffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                  >> 0x0000000aU))]),32);
        bufp->chgBit(oldp+146,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0x0000000cU))));
        bufp->chgCData(oldp+148,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                 >> 6U))),6);
        bufp->chgIData(oldp+149,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                     >> 0x0000000cU))),32);
        bufp->chgIData(oldp+150,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                     >> 0x0000000cU))),32);
        bufp->chgIData(oldp+151,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                     >> 6U))),32);
        bufp->chgIData(oldp+152,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 6U))),32);
        bufp->chgIData(oldp+153,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                     >> 6U))),32);
        __Vtemp_16[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                           << 8U) | (0x000000ffU & 
                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]));
        __Vtemp_16[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                           >> 0x00000018U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                       >> 0x00000020U)) 
                                              << 8U));
        __Vtemp_16[2U] = (((IData)((0x0000003fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                        << 0x0000000eU) 
                                       | ((QData)((IData)(
                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                          >> 0x00000012U)))) 
                           << 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                              >> 0x00000020U)) 
                                     >> 0x00000018U));
        __Vtemp_16[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                            << 0x00000016U) | (0x003fc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0x0000000aU))) 
                          | (((IData)((0x0000003fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                           << 0x0000000eU) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                             >> 0x00000012U)))) 
                              >> 0x00000018U) | ((IData)(
                                                         ((0x0000003fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0x0000000eU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 >> 0x00000012U))) 
                                                          >> 0x00000020U)) 
                                                 << 8U)));
        __Vtemp_16[4U] = ((0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 0x0000000aU)) 
                          | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                              << 0x00000016U) | (0x003fc000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0x0000000aU))));
        __Vtemp_16[5U] = ((0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                          >> 0x0000000aU)) 
                          | (0x00004000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                            >> 0x0000000aU)));
        bufp->chgWData(oldp+154,(__Vtemp_16),175);
        bufp->chgBit(oldp+160,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                      >> 0x00000018U))));
        bufp->chgIData(oldp+161,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                   << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                             >> 0x00000018U))),32);
        bufp->chgIData(oldp+162,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 0x0000000eU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     >> 0x00000012U))),32);
        bufp->chgIData(oldp+163,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                   << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000018U))),32);
        bufp->chgCData(oldp+164,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x00000012U))),6);
        bufp->chgBit(oldp+165,(((0x1cU == (0x0000003fU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x00000012U)))
                                 ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0x00000016U) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x0000000aU)) 
                                    == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x00000016U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x0000000aU)))
                                 : ((0x1dU == (0x0000003fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x00000012U)))
                                     ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 0x00000016U) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x0000000aU)) 
                                        != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 0x00000016U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x0000000aU)))
                                     : ((0x1eU == (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x00000012U)))
                                         ? (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_h6ac6cdbe__0)
                                         : ((0x1fU 
                                             == (0x0000003fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x00000012U)))
                                             ? VL_GTES_III(32, 
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                             << 0x00000016U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                               >> 0x0000000aU)), 
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                             << 0x00000016U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                               >> 0x0000000aU)))
                                             : ((0x20U 
                                                 == 
                                                 (0x0000003fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x00000012U)))
                                                 ? (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_h690ea6c9__0)
                                                 : (IData)(
                                                           ((0x00840000U 
                                                             == 
                                                             (0x00fc0000U 
                                                              & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                            & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                 << 0x00000016U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                   >> 0x0000000aU)) 
                                                               >= 
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                 << 0x00000016U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   >> 0x0000000aU))))))))))));
        bufp->chgBit(oldp+166,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+167,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+168,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+170,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+171,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),5);
        bufp->chgIData(oldp+172,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x00000016U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     >> 0x0000000aU))),32);
        bufp->chgIData(oldp+173,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0x00000016U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x0000000aU))),32);
        bufp->chgIData(oldp+174,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x00000016U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x0000000aU))),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX),32);
        bufp->chgIData(oldp+177,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   << 0x00000016U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x0000000aU))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        __Vtemp_24[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                           ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                           : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                               : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? (((- (IData)((1U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      >> 7U)))) 
                                       << 0x0000000bU) 
                                      | ((0x000007e0U 
                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 4U)) 
                                         | (0x0000001fU 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x0000000fU))))
                                   : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          >> 7U)))) 
                                           << 0x0000000cU) 
                                          | ((0x00000800U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 4U)) 
                                             | ((0x000007e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                    << 4U)) 
                                                | (0x0000001eU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x0000000fU)))))
                                       : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (0xfffff000U 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                  << 0x00000018U) 
                                                 | (0x00fff000U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 8U))))
                                           : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  >> 7U)))) 
                                                   << 0x00000014U) 
                                                  | ((((0x000001feU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x00000013U)) 
                                                       | (1U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x0000001cU))) 
                                                      << 0x0000000bU) 
                                                     | (0x000007feU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                            << 4U) 
                                                           | (0x0000000eU 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 0x0000001cU))))))
                                               : 0U))))));
        __Vtemp_25[0U] = ((__Vtemp_24[0U] << 0x0000000aU) 
                          | (((((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                   | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                      | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         | ((0x20U 
                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                            | (0x21U 
                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                               << 9U) | ((((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | ((0x1aU 
                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              | (0x1bU 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                          << 8U) | 
                                         ((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                          << 7U))) 
                             | (((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                 << 6U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                            << 5U) 
                                           | (0x0000001fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 0x0000000fU))))));
        __Vtemp_27[0U] = __Vtemp_25[0U];
        __Vtemp_27[1U] = ((__Vtemp_24[0U] >> 0x00000016U) 
                          | ((IData)((((QData)((IData)(
                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                       [
                                                       (0x0000001fU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x00000017U))])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                        [
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                             << 4U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               >> 0x0000001cU)))])))) 
                             << 0x0000000aU));
        __Vtemp_27[2U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                     [
                                                     (0x0000001fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x00000017U))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                      [
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                           << 4U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x0000001cU)))])))) 
                           >> 0x00000016U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x0000001fU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x00000017U))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x0000001fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                               << 4U) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x0000001cU)))]))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000aU));
        __Vtemp_27[3U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                           << 0x0000000aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x0000001fU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x00000017U))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x0000001fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                               << 4U) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x0000001cU)))]))) 
                                                       >> 0x00000020U)) 
                                              >> 0x00000016U));
        __Vtemp_27[4U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                           >> 0x00000016U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                              << 0x0000000aU));
        __Vtemp_27[5U] = (((((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                              << 0x0000001eU) | (0x3fffffc0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                    >> 2U))) 
                            | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                           << 0x00000012U) | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 0x00000016U) 
                                              | (0x0003fc00U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                    << 0x0000000aU))));
        __Vtemp_27[6U] = (((((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                              << 0x0000001eU) | (0x3fffffc0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                    >> 2U))) 
                            | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                           >> 0x0000000eU) | (((0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 2U)) 
                                               | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0x0000001eU) 
                                                  | (0x3fffffc0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 2U)))) 
                                              << 0x00000012U));
        __Vtemp_27[7U] = ((((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 2U)) 
                            | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0x0000001eU) | (0x3fffffc0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 2U)))) 
                           >> 0x0000000eU) | (((0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 2U)) 
                                               | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 0x0000001eU) 
                                                  | (0x3fffffc0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 2U)))) 
                                              << 0x00000012U));
        __Vtemp_27[8U] = ((((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 2U)) 
                            | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                << 0x0000001eU) | (0x3fffffc0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 2U)))) 
                           >> 0x0000000eU) | (((0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   >> 2U)) 
                                               | (0x00000040U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     >> 2U))) 
                                              << 0x00000012U));
        bufp->chgWData(oldp+178,(__Vtemp_27),281);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x00000017U))]),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x0000001fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x0000001cU)))]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+222,(vlSelfRef.clk));
    bufp->chgBit(oldp+223,(vlSelfRef.reset));
    bufp->chgIData(oldp+224,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+225,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+226,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000aU]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000bU]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000cU]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000dU]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000eU]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000fU]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000010U]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000011U]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000012U]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000013U]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000014U]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000015U]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000016U]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000017U]),32);
    bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000018U]),32);
    bufp->chgIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000019U]),32);
    bufp->chgIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001aU]),32);
    bufp->chgIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001bU]),32);
    bufp->chgIData(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001cU]),32);
    bufp->chgIData(oldp+253,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001dU]),32);
    bufp->chgIData(oldp+254,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001eU]),32);
    bufp->chgIData(oldp+255,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001fU]),32);
    bufp->chgIData(oldp+256,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+257,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+258,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+259,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+260,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+261,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+262,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+263,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->chgIData(oldp+264,(vlSymsp->TOP__pipeline__my_AGEX_stage.num_correctly_predicted_branches),32);
    bufp->chgIData(oldp+265,(vlSymsp->TOP__pipeline__my_AGEX_stage.num_branch_instructions),32);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Body
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
