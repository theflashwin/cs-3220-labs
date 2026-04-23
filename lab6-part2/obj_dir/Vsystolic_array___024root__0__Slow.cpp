// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "Vsystolic_array__pch.h"

VL_ATTR_COLD void Vsystolic_array___024root___eval_static(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_static\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_initial__TOP(Vsystolic_array___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array___024root___eval_initial(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_initial\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_array___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_initial__TOP(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_initial__TOP\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.row_data_in_rdy = 1U;
    vlSelfRef.col_data_in_rdy = 1U;
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_final(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_final\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsystolic_array___024root___eval_phase__stl(Vsystolic_array___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array___024root___eval_settle(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_settle\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsystolic_array___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("systolic_array.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vsystolic_array___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_triggers__stl(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_triggers__stl\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystolic_array___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vsystolic_array___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsystolic_array___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsystolic_array___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vsystolic_array___024root___stl_sequent__TOP__0(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___stl_sequent__TOP__0\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_en 
        = (0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
           & vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__row_data_out_tmp 
        = ((0xffff0000U & vlSelfRef.systolic_array__DOT__row_data_out_tmp) 
           | ((vlSelfRef.systolic_array__DOT__deskew
               [1U][1U] << 8U) | vlSelfRef.systolic_array__DOT__deskew
              [0U][2U]));
    vlSelfRef.systolic_array__DOT__row_data_out_tmp 
        = ((0xff00ffffU & vlSelfRef.systolic_array__DOT__row_data_out_tmp) 
           | (vlSelfRef.systolic_array__DOT__deskew
              [2U][0U] << 0x00000010U));
    vlSelfRef.systolic_array__DOT__mac_col_data_in[0U][0U] 
        = (0x000000ffU & (IData)(vlSelfRef.systolic_array__DOT__col_data_in_r));
    vlSelfRef.systolic_array__DOT__mac_row_data_in[0U][0U] 
        = (0x000000ffU & vlSelfRef.systolic_array__DOT__row_data_in_r);
    vlSelfRef.systolic_array__DOT__mac_col_data_in[0U][1U] 
        = (0x000000ffU & (IData)((vlSelfRef.systolic_array__DOT__col_data_in_r 
                                  >> 8U)));
    vlSelfRef.systolic_array__DOT__mac_col_data_in[0U][2U] 
        = (0x000000ffU & (IData)((vlSelfRef.systolic_array__DOT__col_data_in_r 
                                  >> 0x10U)));
    vlSelfRef.systolic_array__DOT__mac_col_data_in[0U][3U] 
        = (0x000000ffU & (IData)((vlSelfRef.systolic_array__DOT__col_data_in_r 
                                  >> 0x18U)));
    vlSelfRef.systolic_array__DOT__mac_col_data_in[0U][4U] 
        = (0x000000ffU & (IData)((vlSelfRef.systolic_array__DOT__col_data_in_r 
                                  >> 0x20U)));
    vlSelfRef.systolic_array__DOT__mac_row_data_in[0U][1U] 
        = (0x000000ffU & (vlSelfRef.systolic_array__DOT__row_data_in_r 
                          >> 8U));
    vlSelfRef.systolic_array__DOT__mac_row_data_in[0U][2U] 
        = (0x000000ffU & (vlSelfRef.systolic_array__DOT__row_data_in_r 
                          >> 0x10U));
    vlSelfRef.systolic_array__DOT__mac_row_data_in[0U][3U] 
        = (vlSelfRef.systolic_array__DOT__row_data_in_r 
           >> 0x18U);
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[0U][0U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[0U][1U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[0U][2U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[0U][3U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[0U][4U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[1U][0U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[1U][1U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[1U][2U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[1U][3U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[1U][4U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[2U][0U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[2U][1U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[2U][2U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[2U][3U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[2U][4U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[3U][0U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[3U][1U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[3U][2U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[3U][3U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_psum_out_vld[3U][4U] 
        = vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[0U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[0U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[0U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[0U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[0U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[1U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[1U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[1U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[1U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[1U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[2U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[2U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[2U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[2U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[2U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[3U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[3U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[3U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[3U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_col_data_out[3U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[0U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[1U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[2U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[3U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[4U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[0U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[1U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[2U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[3U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[4U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[0U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[1U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[2U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[3U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[4U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[0U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[1U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[2U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[3U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__mac_row_data_out[4U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[0U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[0U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[0U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[0U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[0U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[1U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[1U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[1U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[1U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[1U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[2U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[2U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[2U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[2U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[2U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[3U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[3U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[3U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[3U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__bypass_data_out[3U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out;
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty 
        = ((0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr)) 
           == (0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int 
        = ((1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                  >> 6U)) == (1U & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr) 
                                    >> 6U)));
    vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy 
        = (((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_1_to_rest) 
            << 1U) | (1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_0) 
                            >> 3U)));
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[0U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[0U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[0U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[0U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[0U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[1U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[1U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[1U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[1U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[1U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[2U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[2U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[2U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[2U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[2U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[3U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[3U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[3U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[3U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__rst_accumulator_out[3U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[0U][0U] 
        = (1U & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg));
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[0U][1U] 
        = (1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 1U));
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[0U][2U] 
        = (1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 2U));
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[0U][3U] 
        = (1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 3U));
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[0U][4U] 
        = (1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                 >> 4U));
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[0U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[0U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[0U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[0U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[0U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[1U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[1U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[1U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[1U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[1U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[2U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[2U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[2U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[2U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[2U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[3U][0U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[3U][1U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[3U][2U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[3U][3U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.systolic_array__DOT__stream_out_rdy_out[3U][4U] 
        = vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out;
    vlSelfRef.row_data_out_vld = vlSelfRef.systolic_array__DOT__mac_psum_out_vld
        [3U][0U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[1U][0U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [0U][0U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[1U][1U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [0U][1U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[1U][2U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [0U][2U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[1U][3U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [0U][3U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[1U][4U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [0U][4U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[2U][0U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [1U][0U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[2U][1U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [1U][1U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[2U][2U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [1U][2U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[2U][3U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [1U][3U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[2U][4U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [1U][4U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[3U][0U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [2U][0U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[3U][1U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [2U][1U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[3U][2U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [2U][2U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[3U][3U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [2U][3U];
    vlSelfRef.systolic_array__DOT__mac_col_data_in[3U][4U] 
        = vlSelfRef.systolic_array__DOT__mac_col_data_out
        [2U][4U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[1U][0U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [0U][0U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[2U][0U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [1U][0U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[3U][0U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [2U][0U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[4U][0U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [3U][0U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[1U][1U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [0U][1U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[2U][1U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [1U][1U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[3U][1U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [2U][1U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[4U][1U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [3U][1U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[1U][2U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [0U][2U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[2U][2U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [1U][2U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[3U][2U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [2U][2U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[4U][2U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [3U][2U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[1U][3U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [0U][3U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[2U][3U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [1U][3U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[3U][3U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [2U][3U];
    vlSelfRef.systolic_array__DOT__mac_row_data_in[4U][3U] 
        = vlSelfRef.systolic_array__DOT__mac_row_data_out
        [3U][3U];
    vlSelfRef.systolic_array__DOT__row_data_out_tmp 
        = ((0x00ffffffU & vlSelfRef.systolic_array__DOT__row_data_out_tmp) 
           | (vlSelfRef.systolic_array__DOT__bypass_data_out
              [3U][0U] << 0x00000018U));
    vlSelfRef.systolic_array__DOT__bypass_data_in[0U][0U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [0U][1U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[0U][1U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [0U][2U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[0U][2U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [0U][3U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[0U][3U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [0U][4U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[0U][4U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [0U][5U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[1U][0U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [1U][1U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[1U][1U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [1U][2U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[1U][2U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [1U][3U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[1U][3U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [1U][4U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[1U][4U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [1U][5U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[2U][0U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [2U][1U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[2U][1U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [2U][2U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[2U][2U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [2U][3U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[2U][3U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [2U][4U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[2U][4U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [2U][5U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[3U][0U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [3U][1U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[3U][1U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [3U][2U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[3U][2U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [3U][3U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[3U][3U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [3U][4U];
    vlSelfRef.systolic_array__DOT__bypass_data_in[3U][4U] 
        = vlSelfRef.systolic_array__DOT__bypass_data_out
        [3U][5U];
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int)) 
           & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[0U][0U] 
        = (1U & (IData)(vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy));
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[0U][1U] 
        = (1U & ((IData)(vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 1U));
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[0U][2U] 
        = (1U & ((IData)(vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 2U));
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[0U][3U] 
        = (1U & ((IData)(vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 3U));
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[0U][4U] 
        = (1U & ((IData)(vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy) 
                 >> 4U));
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[1U][0U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [0U][0U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[1U][1U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [0U][1U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[1U][2U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [0U][2U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[1U][3U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [0U][3U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[1U][4U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [0U][4U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[2U][0U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [1U][0U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[2U][1U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [1U][1U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[2U][2U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [1U][2U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[2U][3U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [1U][3U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[2U][4U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [1U][4U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[3U][0U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [2U][0U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[3U][1U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [2U][1U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[3U][2U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [2U][2U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[3U][3U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [2U][3U];
    vlSelfRef.systolic_array__DOT__rst_accumulator_in[3U][4U] 
        = vlSelfRef.systolic_array__DOT__rst_accumulator_out
        [2U][4U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[1U][0U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [0U][0U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[1U][1U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [0U][1U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[1U][2U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [0U][2U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[1U][3U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [0U][3U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[1U][4U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [0U][4U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[2U][0U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [1U][0U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[2U][1U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [1U][1U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[2U][2U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [1U][2U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[2U][3U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [1U][3U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[2U][4U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [1U][4U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[3U][0U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [2U][0U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[3U][1U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [2U][1U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[3U][2U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [2U][2U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[3U][3U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [2U][3U];
    vlSelfRef.systolic_array__DOT__stream_out_rdy_in[3U][4U] 
        = vlSelfRef.systolic_array__DOT__stream_out_rdy_out
        [2U][4U];
    vlSelfRef.row_data_out = vlSelfRef.systolic_array__DOT__row_data_out_tmp;
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [0U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [0U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [0U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [0U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [0U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [1U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [1U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [1U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [1U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [1U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [2U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [2U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [2U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [2U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [2U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [3U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [3U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [3U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [3U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__adder_in_B 
        = (vlSelfRef.systolic_array__DOT__rst_accumulator_in
           [3U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__mac_full_flag[0U][0U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [0U][0U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[0U][1U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [0U][1U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[0U][2U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [0U][2U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[0U][3U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [0U][3U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[0U][4U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [0U][4U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[1U][0U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [1U][0U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[1U][1U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [1U][1U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[1U][2U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [1U][2U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[1U][3U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [1U][3U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[1U][4U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [1U][4U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[2U][0U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [2U][0U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[2U][1U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [2U][1U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[2U][2U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [2U][2U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[2U][3U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [2U][3U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[2U][4U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [2U][4U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[3U][0U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [3U][0U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[3U][1U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [3U][1U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[3U][2U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [3U][2U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[3U][3U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [3U][3U]);
    vlSelfRef.systolic_array__DOT__mac_full_flag[3U][4U] 
        = ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
           & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
           [3U][4U]);
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x000ffffcU & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [0U][1U] << 1U) | vlSelfRef.systolic_array__DOT__mac_full_flag
              [0U][0U]));
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x000ffff3U & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [0U][3U] << 3U) | (vlSelfRef.systolic_array__DOT__mac_full_flag
                                  [0U][2U] << 2U)));
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x000fffcfU & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [1U][0U] << 5U) | (vlSelfRef.systolic_array__DOT__mac_full_flag
                                  [0U][4U] << 4U)));
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x000fff3fU & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [1U][2U] << 7U) | (vlSelfRef.systolic_array__DOT__mac_full_flag
                                  [1U][1U] << 6U)));
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x000ffcffU & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [1U][4U] << 9U) | (vlSelfRef.systolic_array__DOT__mac_full_flag
                                  [1U][3U] << 8U)));
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x000ff3ffU & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [2U][1U] << 0x0000000bU) | (vlSelfRef.systolic_array__DOT__mac_full_flag
                                           [2U][0U] 
                                           << 0x0000000aU)));
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x000fcfffU & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [2U][3U] << 0x0000000dU) | (vlSelfRef.systolic_array__DOT__mac_full_flag
                                           [2U][2U] 
                                           << 0x0000000cU)));
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x000f3fffU & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [3U][0U] << 0x0000000fU) | (vlSelfRef.systolic_array__DOT__mac_full_flag
                                           [2U][4U] 
                                           << 0x0000000eU)));
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x000cffffU & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [3U][2U] << 0x00000011U) | (vlSelfRef.systolic_array__DOT__mac_full_flag
                                           [3U][1U] 
                                           << 0x00000010U)));
    vlSelfRef.systolic_array__DOT__flat_full_flags 
        = ((0x0003ffffU & vlSelfRef.systolic_array__DOT__flat_full_flags) 
           | ((vlSelfRef.systolic_array__DOT__mac_full_flag
               [3U][4U] << 0x00000013U) | (vlSelfRef.systolic_array__DOT__mac_full_flag
                                           [3U][3U] 
                                           << 0x00000012U)));
}

VL_ATTR_COLD void Vsystolic_array___024root____Vm_traceActivitySetAll(Vsystolic_array___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array___024root___eval_stl(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_stl\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsystolic_array___024root___stl_sequent__TOP__0(vlSelf);
        Vsystolic_array___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vsystolic_array___024root___eval_phase__stl(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_phase__stl\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsystolic_array___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vsystolic_array___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsystolic_array___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsystolic_array___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsystolic_array___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array___024root____Vm_traceActivitySetAll(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root____Vm_traceActivitySetAll\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vsystolic_array___024root___ctor_var_reset(Vsystolic_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___ctor_var_reset\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361382489806169962ull);
    vlSelf->rst_accumulator_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16434682102360270443ull);
    vlSelf->stream_out_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8417059189803971148ull);
    vlSelf->row_data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4055044569599735874ull);
    vlSelf->row_data_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4177234195548444898ull);
    vlSelf->row_data_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8618803994238299620ull);
    vlSelf->col_data_in = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17939377936413135740ull);
    vlSelf->col_data_in_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8310640781438236398ull);
    vlSelf->col_data_in_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9221109265380107550ull);
    vlSelf->row_data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5978481990098287222ull);
    vlSelf->row_data_out_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1884941482550937928ull);
    vlSelf->row_data_out_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14818786928829915495ull);
    vlSelf->systolic_array__DOT__rst_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7760732734489137006ull);
    vlSelf->systolic_array__DOT__rst_accumulator_rdy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9620473419707923766ull);
    vlSelf->systolic_array__DOT__stream_out_rdy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13293625562365867096ull);
    vlSelf->systolic_array__DOT__row_data_in_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12497740285109283188ull);
    vlSelf->systolic_array__DOT__col_data_in_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10045367068736256558ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__rst_accumulator_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18053892026589327804ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__rst_accumulator_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9720576353223789484ull);
        }
    }
    vlSelf->systolic_array__DOT__control_rst_accumulator_rdy = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8372824709064569338ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__stream_out_rdy_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2158573150370654092ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__stream_out_rdy_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3448384251326222644ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->systolic_array__DOT__mac_row_data_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 101999775475141389ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->systolic_array__DOT__mac_row_data_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8705242536345073552ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__mac_col_data_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2094005108149029874ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__mac_col_data_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 433816864277123433ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__bypass_data_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12102191841907419084ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__bypass_data_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11260627342804022086ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__mac_full_flag[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7575673493643460969ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 6; ++__Vi1) {
            vlSelf->systolic_array__DOT__mac_psum_out_vld[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4493142266630572055ull);
        }
    }
    vlSelf->systolic_array__DOT__flat_full_flags = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13985114459227614668ull);
    vlSelf->systolic_array__DOT__row_data_out_tmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13140044244260385212ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_array__DOT__deskew[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7525958633410839527ull);
        }
    }
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out = 0;
    vlSelf->systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out = 0;
    vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14772398613415827021ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_1_to_rest = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11008547799509504253ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11743562873165242923ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14313114515695704128ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3042928978584680777ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7833786088345810746ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5734245983348648935ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17454447729527777019ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11234918384086629778ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10811037812685614296ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12139185525601002607ull);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5886414332982332325ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5353732025371343079ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11111541933811314089ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17586409490397344570ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7222092566901316608ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4895097055022728350ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6483316625625130790ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14933958334442962026ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8084370472868460986ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13344604103837913849ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5514373829966745979ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15072418233421490532ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1830323290152320523ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12152777770457212626ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2295707966650322354ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 486195998473809990ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1160396024780952004ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6103389218943639960ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7828517916414703285ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4802816807976150011ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8424506620979392028ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14954786644212619239ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2777743822059577431ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8489194871112703325ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15471607118924840918ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15135642224310658597ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13533439366518323141ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4870444616308145433ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7423798299612551545ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14874137435136371343ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16684478764030549639ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12181323490690287220ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16790499606369633721ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14882445420701456937ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7069465978072767242ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2110913028029447999ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 30957661044256070ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10357158147153660069ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8698242790946978483ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12124902653871015419ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1112129255525992924ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13154924928356849762ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4581163715528218733ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9141294569166331917ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4042138233654934493ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16333576895532086966ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14394461402379963616ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6703335557038976838ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1955301813277533529ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7501755098645052321ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6809543926456634623ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2385716395218916946ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5089889346753493427ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12147718558149992639ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1037183187902898262ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5050986420533972321ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15155566028282201012ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7049684299020910393ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5626578831208735049ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10168253657047748274ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15492638811556822031ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1594216748451282848ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12999087436861163910ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17750031445108091309ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4376191617460816310ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5955316971602310824ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5362907775978334619ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11957592615572660478ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16976718080161054384ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7727305485355242445ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1367868884820463541ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15051744735102009443ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8586903312447546711ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15042681616675773253ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16371020575016558041ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2522183276333190946ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16815250189443967536ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14152035823960605727ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17415300452671956611ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8518399668475122226ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3925043307624464989ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7214580261426457313ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16061303075792481380ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13561877109160607380ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10819318239851539665ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4178832006572442590ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540074013735688997ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16965838033943728679ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7122635716315537964ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5619467577116514934ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7909593119291802552ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7326129881279288296ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10829920716777828777ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11481905624234204652ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11723710985064898713ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4873115806020448262ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7956117994991433911ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3239080107392727140ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6635846791327001400ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5139093205037003940ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17281471817702072818ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9590003454705929183ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13406748671629194887ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11229044922574361587ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9729227753460133394ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15725005047641295840ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9200620009526876814ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867471314510329905ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 743773991824721386ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9262900610305571571ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4150765297562242395ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1654215095686601713ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9522010609116129629ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9383986489484821137ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9606868888134193410ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17741460789013825322ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1640503273902899580ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11479205123139300834ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11355257295887747499ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9059637437075812773ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15977184785157366687ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7973839700621925440ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10647179483899192909ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12810599112947966120ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13765385014873010092ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5338564085045027205ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10432587291616345795ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14270397740424982420ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13389744887346655828ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6005815615623411023ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17609233405351607744ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15721726143312189227ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10168778484468710411ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 937181097888295028ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16115462147688430968ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12593814535474086197ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10537675536018896756ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10790338122764786305ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8896350668447391634ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5342201005991710579ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17208885177365542807ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12252410333490644970ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17563189678728870546ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4196641064377161112ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17264305704534380053ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18140557616390796692ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1027898592397311948ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5708255150644695183ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4533092328781871068ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1425514530449135905ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10460669718799371226ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17886666882519851158ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4624013869859524898ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13967663525705099917ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4791894437161933492ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2233728561407630404ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6036802525632907794ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7237756421492602071ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5913958422148293135ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5456719120310810710ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9712012537702821748ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6435398204440468059ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6686679548748330447ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5931125283169762054ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9944815211835780725ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6657246124284837531ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5433299041696312528ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10456018409718069647ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9277085413515534829ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14448471549987167349ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1119752541799848650ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15973343585037796960ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1681834601078359838ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13962727936187607231ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13092912705776921546ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2290398999898371079ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10813965035696596186ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9435917000372998706ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3606552170682818916ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9789917472511797174ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9894348386425621856ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5079817613282967480ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1570166749018034926ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9005641859908411506ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1932653211562357031ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7459874924892105539ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14093144296620528990ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11015727046216140186ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17842417667485124880ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2953915610194372892ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16522633861871384500ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17217141428939296779ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5640108618020773972ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6079400708248673231ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10307772405834301248ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18018254528643741702ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2979073134289545782ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12694926403326758920ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14134087550865287223ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7610080311607449272ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14602658505024773839ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7907164509427116752ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14883725698052620793ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6346737761313437917ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11581355133972384249ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13450692286158321439ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17707193924600457052ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105696924258839342ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1206510899217608136ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 650924253757900338ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1150799857036321997ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4004627246381252791ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11763635306751427566ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1317149214045579457ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3931028033173611441ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5464505845356372190ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9137786165135423409ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3565206771076962869ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1991313809141334355ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13778166825504847851ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18044685438597182996ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9605453433436619492ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11571131114462125364ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5840950328998972694ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4269692461223775546ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4142279795422280362ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14602406562167564907ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4287798452012375399ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3255774151546246939ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7943878740597050591ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12564184224000751439ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10232777480081525567ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13605778783347235251ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13734866626484137386ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6159049071085972883ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12539339092282919922ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7312914990913059840ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4210485823965772729ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11070661730693630692ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13402934006014267664ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12326493729522279063ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5120182372839003703ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7143890639455912083ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7833019966773062946ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10486089095057901192ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12350593282944496976ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15071231318679434544ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17224911724225101396ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13590773547632828614ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5711626007149048264ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11103680647087965040ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13523052579279447575ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2094578076413270274ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18384743501975891544ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16666550909770530103ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 139647055184093128ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10409650067999325590ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17946085052797402179ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10080267760619837311ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2996337201295030097ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12532405691200261285ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4307826949146052338ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 102302660207262230ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5849806520064499185ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13506320054744650601ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3831501059301637835ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15789675440896230078ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15719913993780437307ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14255543417086151411ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5264236301260074035ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 195313746318200557ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8340241624150647771ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5441631705755784754ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2432145875471093090ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3407520708902361359ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15178016437302272893ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16967594486161942722ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17655264424461175819ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11362831526806376978ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5390950061976918885ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1419166753669176791ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3659162777156601874ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7813906384155048208ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12645522781648614122ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17458933390168790235ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5591422647148622296ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18089406796699185944ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9760378250673352918ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12612002482100239032ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16172246067927523451ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11790006795886127211ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 711116414142449642ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 181008008123934414ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5330545352151424516ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14544961066973928849ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16899242783488437213ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15586074347896631341ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13364188839112192951ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11889021826334443164ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1317679477625072882ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9296447980754378738ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16578987982299387234ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15833863180736177402ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487925127672200587ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 793539807728920009ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12933617900836077887ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17179831213670191507ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9802254630648287101ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10897452271965362903ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11258554673527593095ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11721666081013811850ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10907581732609536008ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12940103004789630055ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3844937049072346390ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8159782143521819673ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866008950703688695ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7847360730019870076ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5157077543858152985ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9461190835979012014ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16059654278188083757ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14376356658201257264ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11838338606506326267ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15460272258625857112ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9161460732617131485ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3620122642751130917ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4117196281855249741ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14362012673867196963ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4606712764411265919ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2006493183176243938ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17488522828674551857ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3150584084870465870ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8287477156330216179ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16643402480478762693ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5894169252239986749ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14996107081507398069ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9778381139608278229ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8466909967070598917ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1467384833032231734ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11534216145034940470ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2529905979841987808ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1387703216863371631ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16590764153815450437ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4068372152295332013ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4212833550370347842ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14453463981396822046ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13918374848231444519ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11898079741909429103ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2859101692117348047ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3416503036913361ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7215338394483114178ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5681232675580275454ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1310952363285634585ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13393951105249382638ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12360009400966892918ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10951105396524121502ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9296456434422001905ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7934146737496022278ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13109712338631478811ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6057750552441547659ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9129006802009871030ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16946898255429200845ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9122658864635119628ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3073389798274739476ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7698740506005754671ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3619466455377431569ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10220036211597620384ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17157472327386581293ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1701117055642896322ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7211280160818839304ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16759139529201115215ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17254812211138508803ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15350483163309773773ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12578455818930548534ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6124247909192885386ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10463240809722328390ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 957696736094159356ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3885910446082474190ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4936315724125483616ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4982760290125516154ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8893785458367988749ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13338314210174979041ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 345532804201118671ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2569524937742380375ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14164151476003625645ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__adder_in_B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6380500845965158889ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13160070985230011002ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17918370894951835117ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7130041397604704999ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7130865279645959774ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2576978601823657561ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7345949251464920769ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15418952672502064107ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4119725059876322867ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4943095228324876059ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9297940816798163603ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11961154359044318346ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6419739943764197165ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15849334307938127188ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3677169383151566628ull);
    }
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4257346886318018674ull);
    vlSelf->systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17980918228709543628ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
