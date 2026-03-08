// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpipeline___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<6>/*191:0*/ __Vtemp_h4a05fa40__0;
    VlWide<6>/*191:0*/ __Vtemp_hb7a14088__0;
    VlWide<6>/*191:0*/ __Vtemp_hce908504__0;
    VlWide<3>/*95:0*/ __Vtemp_hb48167e7__0;
    VlWide<4>/*127:0*/ __Vtemp_hc2195a56__0;
    VlWide<9>/*287:0*/ __Vtemp_h104d629c__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),169);
        bufp->chgWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),281);
        bufp->chgWData(oldp+16,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch),175);
        bufp->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        bufp->chgWData(oldp+29,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE),107);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+34,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
        bufp->chgBit(oldp+36,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     >> 8U))));
        bufp->chgIData(oldp+37,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+38,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+39,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+40,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 8U))),32);
        bufp->chgCData(oldp+41,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x14U))),3);
        bufp->chgCData(oldp+42,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          >> 1U))),7);
        bufp->chgCData(oldp+43,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 8U))),7);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+45,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+46,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+47,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
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
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+48,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x17U))),5);
        bufp->chgCData(oldp+49,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 0x1cU)))),5);
        bufp->chgCData(oldp+50,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0xfU))),5);
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
        bufp->chgBit(oldp+56,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+57,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x20U)))),5);
        bufp->chgIData(oldp+58,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+62,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x17U)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x1cU))))))));
        bufp->chgCData(oldp+63,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])),8);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
        bufp->chgBit(oldp+65,((1U & ((~ (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)) 
                                     & (~ (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                           >> 0xaU))))));
        bufp->chgIData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                             >> 2U))]),32);
        bufp->chgIData(oldp+69,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        __Vtemp_h4a05fa40__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_pc))));
        __Vtemp_h4a05fa40__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                     << 8U) | (IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index)) 
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
                                                & (~ 
                                                   (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
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
        bufp->chgWData(oldp+70,(__Vtemp_h4a05fa40__0),169);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index),8);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__predicted_pc),32);
        bufp->chgBit(oldp+78,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                     >> 0xaU))));
        bufp->chgIData(oldp+79,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                  << 0x16U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                               >> 0xaU))),32);
        bufp->chgIData(oldp+80,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                  << 0x16U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                               >> 0xaU))),32);
        bufp->chgBit(oldp+81,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                     >> 9U))));
        bufp->chgCData(oldp+82,((0xffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                          >> 1U))),8);
        bufp->chgBit(oldp+83,((1U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U])));
        bufp->chgIData(oldp+84,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                  << 0x1fU) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                               >> 1U))),32);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__bhr),8);
        bufp->chgQData(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[0]),59);
        bufp->chgQData(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[1]),59);
        bufp->chgQData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[2]),59);
        bufp->chgQData(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[3]),59);
        bufp->chgQData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[4]),59);
        bufp->chgQData(oldp+96,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[5]),59);
        bufp->chgQData(oldp+98,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[6]),59);
        bufp->chgQData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[7]),59);
        bufp->chgQData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[8]),59);
        bufp->chgQData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[9]),59);
        bufp->chgQData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[10]),59);
        bufp->chgQData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[11]),59);
        bufp->chgQData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[12]),59);
        bufp->chgQData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[13]),59);
        bufp->chgQData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[14]),59);
        bufp->chgQData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb[15]),59);
        bufp->chgBit(oldp+118,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht
                                [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index])));
        bufp->chgCData(oldp+119,((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 2U))),4);
        bufp->chgQData(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line),59);
        bufp->chgBit(oldp+122,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                              >> 0x3aU)))));
        bufp->chgIData(oldp+123,((0x3ffffffU & (IData)(
                                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                                        >> 0x20U)))),26);
        bufp->chgIData(oldp+124,((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line)),32);
        bufp->chgBit(oldp+125,(((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                         >> 0x3aU)) 
                                & ((0x3ffffffU & (IData)(
                                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                                          >> 0x20U))) 
                                   == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                       >> 6U)))));
        bufp->chgBit(oldp+126,((((IData)((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                          >> 0x3aU)) 
                                 & ((0x3ffffffU & (IData)(
                                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__btb_line 
                                                           >> 0x20U))) 
                                    == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 6U))) & 
                                (1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht
                                 [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index]))));
        bufp->chgCData(oldp+127,((0xfU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                          >> 3U))),4);
        bufp->chgIData(oldp+128,((0x3ffffffU & ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                                 << 0x19U) 
                                                | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                                   >> 7U)))),26);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+131,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
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
                                     << 6U) | (0x3fU 
                                               & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U]));
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
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                           >> 2U))));
        __Vtemp_hb7a14088__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                           >> 2U))));
        __Vtemp_hb7a14088__0[5U] = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                              >> 2U)) 
                                    | (0x1fc0U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                                  >> 2U)));
        bufp->chgWData(oldp+132,(__Vtemp_hb7a14088__0),173);
        bufp->chgCData(oldp+138,((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                           >> 8U))),6);
        bufp->chgIData(oldp+139,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+140,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+141,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                >> 0xeU))),32);
        bufp->chgBit(oldp+142,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+143,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+144,((0x1fU & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+145,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+146,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                              >> 0xaU))]),32);
        bufp->chgBit(oldp+148,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+149,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+150,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+151,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+152,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+153,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+154,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+155,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+157,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+158,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
        __Vtemp_hce908504__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                     << 8U) | (0xffU 
                                               & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]));
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
                                        >> 0x18U) | 
                                       ((IData)(((0x3fffffffffULL 
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
                                        << 0x16U) | 
                                       (0x3fc000U & 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0xaU))));
        __Vtemp_hce908504__0[5U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                >> 0xaU)) 
                                    | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  >> 0xaU)));
        bufp->chgWData(oldp+159,(__Vtemp_hce908504__0),175);
        bufp->chgBit(oldp+165,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+166,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                   << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                             >> 0x18U))),32);
        bufp->chgIData(oldp+167,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                   << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 0x18U))),32);
        bufp->chgIData(oldp+168,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+169,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                   << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x18U))),32);
        bufp->chgCData(oldp+170,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x12U))),6);
        bufp->chgBit(oldp+171,(((0x1cU == (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x12U)))
                                 ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0xaU)) 
                                    == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0xaU)))
                                 : ((0x1dU == (0x3fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x12U)))
                                     ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 0x16U) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0xaU)) 
                                        != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0xaU)))
                                     : ((0x1eU == (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x12U)))
                                         ? (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_h047d73e2__0)
                                         : ((0x1fU 
                                             == (0x3fU 
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
                                             : ((0x20U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
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
        bufp->chgBit(oldp+172,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+173,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+174,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+175,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+176,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+177,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),5);
        bufp->chgIData(oldp+178,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0xaU))),32);
        bufp->chgIData(oldp+179,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 0xaU))),32);
        bufp->chgIData(oldp+180,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0xaU))),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX),32);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__br_target_AGEX),32);
        bufp->chgCData(oldp+184,((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xaU))),8);
        bufp->chgIData(oldp+185,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0xaU))),32);
        bufp->chgBit(oldp+186,((1U & ((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgTmp_hb628d134__0) 
                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 8U)))));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__was_branch_inst));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
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
                                                 : 
                                                ((3U 
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
                                     << 0xaU) | (((
                                                   (0x1cU 
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
        __Vtemp_h104d629c__0[5U] = ((0xff000000U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      << 0x10U)) | 
                                    (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                      << 0x12U) | (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                    >> 0x16U) 
                                                   | (0x3fc00U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                         << 0xaU)))));
        __Vtemp_h104d629c__0[6U] = (((0xff0000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   << 0x10U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        >> 0x10U)) 
                                    | (0xff000000U 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          << 0x10U)));
        __Vtemp_h104d629c__0[7U] = (((0xff0000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0x10U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x10U)) 
                                    | (0xff000000U 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 0x10U)));
        __Vtemp_h104d629c__0[8U] = (((0xff0000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 0x10U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        >> 0x10U)) 
                                    | (0x1000000U & 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                        << 0x10U)));
        bufp->chgWData(oldp+188,(__Vtemp_h104d629c__0),281);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0x17U))]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x1cU)))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+225,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+232,(vlSelf->clk));
    bufp->chgBit(oldp+233,(vlSelf->reset));
    bufp->chgIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+253,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+254,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+255,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+256,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+257,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+258,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+259,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+260,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+261,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+262,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+263,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+264,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+265,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+266,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+267,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+268,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+269,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+270,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+271,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+272,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+273,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->chgIData(oldp+274,(vlSymsp->TOP__pipeline__my_AGEX_stage.num_correctly_predicted_branches),32);
    bufp->chgIData(oldp+275,(vlSymsp->TOP__pipeline__my_AGEX_stage.num_branch_instructions),32);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
