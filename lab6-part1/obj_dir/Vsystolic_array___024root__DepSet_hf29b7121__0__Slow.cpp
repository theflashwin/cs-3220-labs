// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "verilated.h"

#include "Vsystolic_array__Syms.h"
#include "Vsystolic_array___024root.h"

VL_ATTR_COLD void Vsystolic_array___024root___eval_static(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_initial__TOP(Vsystolic_array___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array___024root___eval_initial(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_initial\n"); );
    // Body
    Vsystolic_array___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_initial__TOP(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->systolic_array__DOT__w_psum[0U][4U] = 0U;
    vlSelf->systolic_array__DOT__w_psum[1U][4U] = 0U;
    vlSelf->systolic_array__DOT__w_psum[2U][4U] = 0U;
    vlSelf->systolic_array__DOT__w_psum[3U][4U] = 0U;
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_final(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_triggers__stl(Vsystolic_array___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__stl(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___eval_stl(Vsystolic_array___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array___024root___eval_settle(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vsystolic_array___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vsystolic_array___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("systolic_array.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vsystolic_array___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__stl(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array___024root___stl_sequent__TOP__0(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->systolic_array__DOT__w_row_data[0U][0U] 
        = (0xffU & vlSelf->systolic_array__DOT__row_data_in);
    vlSelf->systolic_array__DOT__w_row_data[1U][0U] 
        = (0xffU & (vlSelf->systolic_array__DOT__row_data_in 
                    >> 8U));
    vlSelf->systolic_array__DOT__w_row_data[2U][0U] 
        = (0xffU & (vlSelf->systolic_array__DOT__row_data_in 
                    >> 0x10U));
    vlSelf->systolic_array__DOT__w_row_data[3U][0U] 
        = (vlSelf->systolic_array__DOT__row_data_in 
           >> 0x18U);
    vlSelf->systolic_array__DOT__w_col_data[0U][0U] 
        = (0xffU & vlSelf->systolic_array__DOT__col_data_in);
    vlSelf->systolic_array__DOT__w_stream[0U][0U] = 
        vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain
        [8U];
    vlSelf->systolic_array__DOT__w_col_data[0U][1U] 
        = (0xffU & (vlSelf->systolic_array__DOT__col_data_in 
                    >> 8U));
    vlSelf->systolic_array__DOT__w_stream[0U][1U] = 
        vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain
        [8U];
    vlSelf->systolic_array__DOT__w_col_data[0U][2U] 
        = (0xffU & (vlSelf->systolic_array__DOT__col_data_in 
                    >> 0x10U));
    vlSelf->systolic_array__DOT__w_stream[0U][2U] = 
        vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain
        [8U];
    vlSelf->systolic_array__DOT__w_col_data[0U][3U] 
        = (vlSelf->systolic_array__DOT__col_data_in 
           >> 0x18U);
    vlSelf->systolic_array__DOT__w_stream[0U][3U] = 
        vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain
        [8U];
    vlSelf->systolic_array__DOT__w_stream[1U][0U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[1U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[0U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[1U][1U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[1U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[0U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[1U][2U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[1U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[0U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[1U][3U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[1U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[0U][4U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[2U][0U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[2U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[1U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[2U][1U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[2U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[1U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[2U][2U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[2U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[1U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[2U][3U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[2U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[1U][4U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[3U][0U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[3U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[2U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[3U][1U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[3U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[2U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[3U][2U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[3U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[2U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[3U][3U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[3U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[2U][4U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[4U][0U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[4U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[3U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[4U][1U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[4U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[3U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[4U][2U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[4U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[3U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_stream[4U][3U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out;
    vlSelf->systolic_array__DOT__w_col_data[4U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out;
    vlSelf->systolic_array__DOT__w_row_data[3U][4U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out;
    vlSelf->systolic_array__DOT__w_psum[0U][0U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[0U][1U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[0U][2U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[0U][3U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[1U][0U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[1U][1U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[1U][2U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[1U][3U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[2U][0U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[2U][1U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[2U][2U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[2U][3U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[3U][0U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[3U][1U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[3U][2U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_psum[3U][3U] = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out;
    vlSelf->systolic_array__DOT__w_rst_acc[0U][0U] 
        = (1U & (IData)(vlSelf->systolic_array__DOT__u_ctrl__DOT__rst_col_skew));
    vlSelf->systolic_array__DOT__w_rst_acc[0U][1U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__u_ctrl__DOT__rst_col_skew) 
                 >> 1U));
    vlSelf->systolic_array__DOT__w_rst_acc[0U][2U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__u_ctrl__DOT__rst_col_skew) 
                 >> 2U));
    vlSelf->systolic_array__DOT__w_rst_acc[0U][3U] 
        = (1U & ((IData)(vlSelf->systolic_array__DOT__u_ctrl__DOT__rst_col_skew) 
                 >> 3U));
    vlSelf->systolic_array__DOT__w_rst_acc[1U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[1U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[1U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[1U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[2U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[2U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[2U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[2U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[3U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[3U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[3U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[3U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[4U][0U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[4U][1U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[4U][2U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->systolic_array__DOT__w_rst_acc[4U][3U] 
        = vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out;
    vlSelf->row_data_out = ((0xffff0000U & vlSelf->row_data_out) 
                            | ((vlSelf->systolic_array__DOT__w_psum
                                [1U][0U] << 8U) | vlSelf->systolic_array__DOT__w_psum
                               [0U][0U]));
    vlSelf->row_data_out = ((0xffffU & vlSelf->row_data_out) 
                            | ((vlSelf->systolic_array__DOT__w_psum
                                [3U][0U] << 0x18U) 
                               | (vlSelf->systolic_array__DOT__w_psum
                                  [2U][0U] << 0x10U)));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[0U]
           [0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[0U]
           [1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[0U]
           [2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[0U]
           [3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[1U]
           [0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[1U]
           [1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[1U]
           [2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[1U]
           [3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[2U]
           [0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[2U]
           [1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[2U]
           [2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[2U]
           [3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[3U]
           [0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[3U]
           [1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[3U]
           [2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add));
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in 
        = (vlSelf->systolic_array__DOT__w_rst_acc[3U]
           [3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add));
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_stl(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsystolic_array___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__act(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__nba(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array___024root___ctor_var_reset(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_in = VL_RAND_RESET_I(1);
    vlSelf->rst_accumulator_rdy_in = VL_RAND_RESET_I(1);
    vlSelf->stream_out_rdy_in_in = VL_RAND_RESET_I(1);
    vlSelf->row_data_in_in = VL_RAND_RESET_I(32);
    vlSelf->col_data_in_in = VL_RAND_RESET_I(32);
    vlSelf->row_data_out = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__rst_accumulator_rdy = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__stream_out_rdy = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__row_data_in = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__col_data_in = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->systolic_array__DOT__w_row_data[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array__DOT__w_col_data[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array__DOT__w_rst_acc[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->systolic_array__DOT__w_stream[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->systolic_array__DOT__w_psum[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__u_ctrl__DOT__rst_col_skew = VL_RAND_RESET_I(4);
    vlSelf->systolic_array__DOT__u_ctrl__DOT__cs = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__s = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__u_ctrl__DOT____Vlvbound_h00c09bf4__1 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT____Vlvbound_h922f73f9__1 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT____Vlvbound_h922f73f9__1 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT____Vlvbound_h922f73f9__1 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT____Vlvbound_h922f73f9__1 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
