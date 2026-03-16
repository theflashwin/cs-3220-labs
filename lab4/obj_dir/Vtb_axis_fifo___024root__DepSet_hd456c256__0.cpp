// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_axis_fifo__Syms.h"
#include "Vtb_axis_fifo___024root.h"

void Vtb_axis_fifo___024root___eval_act(Vtb_axis_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_act\n"); );
}

void Vtb_axis_fifo___024root___eval_triggers__ico(Vtb_axis_fifo___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axis_fifo___024root___dump_triggers__ico(Vtb_axis_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_axis_fifo___024root___eval_ico(Vtb_axis_fifo___024root* vlSelf);
void Vtb_axis_fifo___024root___eval_triggers__act(Vtb_axis_fifo___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axis_fifo___024root___dump_triggers__act(Vtb_axis_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axis_fifo___024root___dump_triggers__nba(Vtb_axis_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_axis_fifo___024root___eval_nba(Vtb_axis_fifo___024root* vlSelf);

void Vtb_axis_fifo___024root___eval(Vtb_axis_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtb_axis_fifo___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtb_axis_fifo___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("tb_axis_fifo.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtb_axis_fifo___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_axis_fifo___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_axis_fifo___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_axis_fifo.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_axis_fifo___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_axis_fifo___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_axis_fifo.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_axis_fifo___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtb_axis_fifo___024root___eval_debug_assertions(Vtb_axis_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
