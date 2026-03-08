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
    VlWide<3>/*95:0*/ __Vtemp_ha364d04a__0;
    VlWide<5>/*159:0*/ __Vtemp_h880d0ce5__0;
    VlWide<5>/*159:0*/ __Vtemp_h858fe03f__0;
    VlWide<5>/*159:0*/ __Vtemp_h83e5661c__0;
    VlWide<3>/*95:0*/ __Vtemp_h545fa048__0;
    VlWide<4>/*127:0*/ __Vtemp_he15e2562__0;
    VlWide<8>/*255:0*/ __Vtemp_hf77c8eb3__0;
    VlWide<3>/*95:0*/ __Vtemp_h83f4de53__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+4,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),137);
        bufp->chgWData(oldp+9,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),249);
        bufp->chgWData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),143);
        bufp->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),141);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
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
        bufp->chgWData(oldp+28,(__Vtemp_ha364d04a__0),75);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+32,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
        __Vtemp_h880d0ce5__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                     << 8U) | (0xffU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
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
                                    | ((0x3f00U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0xaU)) 
                                       | ((IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                   >> 0x20U)) 
                                          >> 0x18U)));
        __Vtemp_h880d0ce5__0[3U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                >> 0xaU)) 
                                    | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                        << 0x16U) | 
                                       (0x3fc000U & 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0xaU))));
        __Vtemp_h880d0ce5__0[4U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                >> 0xaU)) 
                                    | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xaU)));
        bufp->chgWData(oldp+34,(__Vtemp_h880d0ce5__0),143);
        bufp->chgBit(oldp+39,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                     >> 0x18U))));
        bufp->chgIData(oldp+40,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0x18U))),32);
        bufp->chgIData(oldp+41,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x18U))),32);
        bufp->chgIData(oldp+42,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x18U))),32);
        bufp->chgIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x18U))),32);
        bufp->chgCData(oldp+44,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U))),6);
        bufp->chgBit(oldp+45,(((0x1cU == (0x3fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x12U)))
                                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x12U)) 
                                   == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x12U)))
                                : ((0x1dU == (0x3fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x12U)))
                                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x12U)) 
                                       != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x12U)))
                                    : ((0x1eU == (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x12U)))
                                        ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0)
                                        : ((0x1fU == 
                                            (0x3fU 
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
                                                == 
                                                (0x3fU 
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
        bufp->chgBit(oldp+46,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+47,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+48,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0xeU))));
        bufp->chgBit(oldp+50,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0xdU))));
        bufp->chgCData(oldp+51,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 8U))),5);
        bufp->chgIData(oldp+52,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+53,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+54,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x12U))),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
        bufp->chgBit(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
        bufp->chgCData(oldp+60,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),8);
        bufp->chgBit(oldp+61,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     >> 8U))));
        bufp->chgIData(oldp+62,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+64,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+65,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                               >> 8U))),32);
        bufp->chgCData(oldp+66,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),8);
        bufp->chgCData(oldp+67,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x14U))),3);
        bufp->chgCData(oldp+68,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 1U))),7);
        bufp->chgCData(oldp+69,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 8U))),7);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+73,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
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
                                          << 0xbU) 
                                         | ((0x7e0U 
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
                                                  : 0U)))))),32);
        bufp->chgBit(oldp+74,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+75,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x20U)))),5);
        bufp->chgIData(oldp+76,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgCData(oldp+77,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x17U))),5);
        bufp->chgCData(oldp+78,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x1cU)))),5);
        bufp->chgCData(oldp+79,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0xfU))),5);
        bufp->chgBit(oldp+80,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+81,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+82,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+83,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+88,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x17U)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x1cU))))))));
        bufp->chgBit(oldp+89,((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)));
        bufp->chgIData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
        bufp->chgIData(oldp+92,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE),32);
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
        bufp->chgWData(oldp+94,(__Vtemp_h858fe03f__0),137);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[0]),26);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[1]),26);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[2]),26);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[3]),26);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[4]),26);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[5]),26);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[6]),26);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[7]),26);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[8]),26);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[9]),26);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[10]),26);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[11]),26);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[12]),26);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[13]),26);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[14]),26);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[15]),26);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[0]));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[1]));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[2]));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[3]));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[4]));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[5]));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[6]));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[7]));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[8]));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[9]));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[10]));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[11]));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[12]));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[13]));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[14]));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[15]));
        bufp->chgIData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[0]),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[1]),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[2]),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[3]),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[4]),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[5]),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[6]),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[7]),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[8]),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[9]),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[10]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[11]),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[12]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[13]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[14]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[15]),32);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE),8);
        bufp->chgBit(oldp+149,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE])));
        bufp->chgIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG
                                 [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),26);
        bufp->chgBit(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID
                               [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                         >> 2U))]));
        bufp->chgIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET
                                 [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred),32);
        bufp->chgIData(oldp+155,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp 
                                  - vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred)),32);
        bufp->chgBit(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb));
        bufp->chgIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z),32);
        bufp->chgCData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state),4);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m),24);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m),24);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m),24);
        bufp->chgSData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e),10);
        bufp->chgSData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e),10);
        bufp->chgSData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e),10);
        bufp->chgBit(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky));
        bufp->chgQData(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient),51);
        bufp->chgQData(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor),51);
        bufp->chgQData(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend),51);
        bufp->chgQData(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder),51);
        bufp->chgCData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__count),6);
        bufp->chgCData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state),4);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m),24);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m),24);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m),24);
        bufp->chgSData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e),10);
        bufp->chgSData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e),10);
        bufp->chgSData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e),10);
        bufp->chgBit(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky));
        bufp->chgQData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product),48);
        bufp->chgBit(oldp+207,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
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
                                     << 6U) | (0x3fU 
                                               & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
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
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                           >> 2U))));
        __Vtemp_h83e5661c__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                              >> 2U)) 
                                    | (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                  >> 2U)));
        bufp->chgWData(oldp+208,(__Vtemp_h83e5661c__0),141);
        bufp->chgCData(oldp+213,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                           >> 8U))),6);
        bufp->chgIData(oldp+214,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+215,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+216,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              >> 0xaU))]),32);
        bufp->chgIData(oldp+218,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgBit(oldp+219,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+220,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgCData(oldp+221,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+222,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+223,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+224,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+225,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 0xcU))),32);
        bufp->chgCData(oldp+226,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                           >> 6U))),6);
        bufp->chgBit(oldp+227,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+228,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+230,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+231,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+232,((((QData)((IData)(
                                                   ((1U 
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
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 7U)))) 
                                         << 0xbU) | 
                                        (0x7ffU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x1cU))))
                                     : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 7U)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
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
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x18U) 
                                                    | (0xfff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 8U))))
                                                 : 
                                                ((2U 
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
                                     << 0x12U) | ((
                                                   ((0x1cU 
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
        __Vtemp_hf77c8eb3__0[3U] = ((0xff000000U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                      << 0x10U)) | 
                                    (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
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
        __Vtemp_hf77c8eb3__0[4U] = (((0xff0000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                   << 0x10U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                        >> 0x10U)) 
                                    | (0xff000000U 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                          << 0x10U)));
        __Vtemp_hf77c8eb3__0[5U] = (((0xff0000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                   << 0x10U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        >> 0x10U)) 
                                    | (0xff000000U 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                          << 0x10U)));
        __Vtemp_hf77c8eb3__0[6U] = (((0xff0000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   << 0x10U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        >> 0x10U)) 
                                    | (0xff000000U 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          << 0x10U)));
        __Vtemp_hf77c8eb3__0[7U] = (((0xff0000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0x10U)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x10U)) 
                                    | (0x1000000U & 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x10U)));
        bufp->chgWData(oldp+234,(__Vtemp_hf77c8eb3__0),249);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                 [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x17U))]),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                 [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x1cU)))]),32);
        bufp->chgIData(oldp+244,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                   ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                   : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z)),32);
        bufp->chgCData(oldp+245,(((((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                     ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb)
                                     : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb)) 
                                   << 2U) | ((((1U 
                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                                ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack)
                                                : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack)) 
                                              << 1U) 
                                             | ((1U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack)
                                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack))))),3);
        bufp->chgBit(oldp+246,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack)
                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack))));
        bufp->chgBit(oldp+247,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack)
                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack))));
        bufp->chgBit(oldp+248,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg))
                                 ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb)
                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
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
        bufp->chgWData(oldp+249,(__Vtemp_h83f4de53__0),71);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+264,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+265,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+267,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+268,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+269,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+277,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+278,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+279,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+280,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+281,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+282,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+283,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op1_reg),32);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op2_reg),32);
        bufp->chgCData(oldp+286,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg),4);
        bufp->chgCData(oldp+287,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg),3);
        bufp->chgCData(oldp+288,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__alu_state_reg),3);
        bufp->chgBit(oldp+289,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                                & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg))));
        bufp->chgBit(oldp+290,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                                & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg))));
        bufp->chgBit(oldp+291,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                                & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                   >> 1U))));
        bufp->chgBit(oldp+292,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                                & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                   >> 2U))));
        bufp->chgBit(oldp+293,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                                & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                   >> 1U))));
        bufp->chgBit(oldp+294,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__aluop_reg)) 
                                & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_alu_reg) 
                                   >> 2U))));
    }
    bufp->chgBit(oldp+295,(vlSelf->clk));
    bufp->chgBit(oldp+296,(vlSelf->reset));
    bufp->chgIData(oldp+297,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+298,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+299,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+300,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+301,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+302,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+303,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+304,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+305,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+306,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+307,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+308,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+309,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+310,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+311,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+312,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+313,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+314,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+315,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+316,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+317,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+318,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+319,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+320,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+321,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+322,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+323,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+324,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+325,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+326,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+327,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+328,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+329,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+330,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+331,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+332,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+333,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+334,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+335,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+336,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
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
