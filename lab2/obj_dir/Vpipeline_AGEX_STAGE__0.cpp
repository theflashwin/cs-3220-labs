// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

void Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__0(Vpipeline_AGEX_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__num_correctly_predicted_branches;
    __Vdly__num_correctly_predicted_branches = 0;
    IData/*31:0*/ __Vdly__num_branch_instructions;
    __Vdly__num_branch_instructions = 0;
    // Body
    __Vdly__num_branch_instructions = vlSelfRef.num_branch_instructions;
    __Vdly__num_correctly_predicted_branches = vlSelfRef.num_correctly_predicted_branches;
    if (vlSymsp->TOP.reset) {
        __Vdly__num_branch_instructions = 0U;
        __Vdly__num_correctly_predicted_branches = 0U;
    } else if ((0x01000000U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U])) {
        if ((IData)((0U != (0x00000300U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])))) {
            __Vdly__num_branch_instructions = ((IData)(1U) 
                                               + vlSelfRef.num_branch_instructions);
            if ((1U & (~ (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))) {
                __Vdly__num_correctly_predicted_branches 
                    = ((IData)(1U) + vlSelfRef.num_correctly_predicted_branches);
            }
        }
    }
    vlSelfRef.num_branch_instructions = __Vdly__num_branch_instructions;
    vlSelfRef.num_correctly_predicted_branches = __Vdly__num_correctly_predicted_branches;
}

void Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__1(Vpipeline_AGEX_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__1\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__AGEX_latch[0U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[1U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[2U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[3U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[4U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[5U] = 0U;
    } else {
        vlSelfRef.__PVT__AGEX_latch[0U] = (((IData)(
                                                    (((QData)((IData)(vlSelfRef.__PVT__memaddr_AGEX)) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.__PVT__aluout_AGEX)))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]));
        vlSelfRef.__PVT__AGEX_latch[1U] = (((IData)(
                                                    (((QData)((IData)(vlSelfRef.__PVT__memaddr_AGEX)) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.__PVT__aluout_AGEX)))) 
                                            >> 0x00000018U) 
                                           | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.__PVT__memaddr_AGEX)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__aluout_AGEX))) 
                                                       >> 0x00000020U)) 
                                              << 8U));
        vlSelfRef.__PVT__AGEX_latch[2U] = (((IData)(
                                                    (0x0000003fffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                         << 0x0000000eU) 
                                                        | ((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                           >> 0x00000012U)))) 
                                            << 8U) 
                                           | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.__PVT__memaddr_AGEX)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__aluout_AGEX))) 
                                                       >> 0x00000020U)) 
                                              >> 0x00000018U));
        vlSelfRef.__PVT__AGEX_latch[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                             << 0x00000016U) 
                                            | (0x003fc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0x0000000aU))) 
                                           | (((IData)(
                                                       (0x0000003fffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                            << 0x0000000eU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                              >> 0x00000012U)))) 
                                               >> 0x00000018U) 
                                              | ((IData)(
                                                         ((0x0000003fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0x0000000eU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 >> 0x00000012U))) 
                                                          >> 0x00000020U)) 
                                                 << 8U)));
        vlSelfRef.__PVT__AGEX_latch[4U] = ((0x00003fffU 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0x0000000aU)) 
                                           | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                               << 0x00000016U) 
                                              | (0x003fc000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0x0000000aU))));
        vlSelfRef.__PVT__AGEX_latch[5U] = ((0x00003fffU 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                               >> 0x0000000aU)) 
                                           | (0x00004000U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 >> 0x0000000aU)));
    }
}

void Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__2(Vpipeline_AGEX_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__2\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgExtracted_hbcc182c0__0 = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0x00000018U)) 
                                              + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 0x0000000aU)));
    vlSelfRef.__VdfgExtracted_h32f0a660__0 = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 0x00000016U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x0000000aU)) 
                                              + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 0x0000000aU)));
    vlSelfRef.__VdfgExtracted_h690ea6c9__0 = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 0x00000016U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x0000000aU)) 
                                              < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 0x0000000aU)));
    vlSelfRef.__VdfgExtracted_h6ac6cdbe__0 = VL_LTS_III(32, 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          << 0x00000016U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            >> 0x0000000aU)), 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          << 0x00000016U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                            >> 0x0000000aU)));
    if ((1U & (~ ((((((((1U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x00000012U))) 
                        | (2U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x00000012U)))) 
                       | (3U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x00000012U)))) 
                      | (4U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x00000012U)))) 
                     | (5U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x00000012U)))) 
                    | (6U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000012U)))) 
                   | (7U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x00000012U)))) 
                  | (8U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x00000012U))))))) {
        if ((1U & (~ ((((((((9U == (0x0000003fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x00000012U))) 
                            | (0x0aU == (0x0000003fU 
                                         & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x00000012U)))) 
                           | (0x0bU == (0x0000003fU 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x00000012U)))) 
                          | (0x0cU == (0x0000003fU 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x00000012U)))) 
                         | (0x0dU == (0x0000003fU & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x00000012U)))) 
                        | (0x0eU == (0x0000003fU & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x00000012U)))) 
                       | (0x0fU == (0x0000003fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x00000012U)))) 
                      | (0x10U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x00000012U))))))) {
            if (((((((((0x11U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x00000012U))) 
                       | (0x12U == (0x0000003fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x00000012U)))) 
                      | (0x13U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x00000012U)))) 
                     | (0x14U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x00000012U)))) 
                    | (0x15U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x00000012U)))) 
                   | (0x16U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x00000012U)))) 
                  | ((0x19U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x00000012U))) 
                     || (0x1bU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x00000012U))))) 
                 | (0x17U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000012U))))) {
                if ((0x11U != (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x00000012U)))) {
                    if ((0x12U != (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x00000012U)))) {
                        if ((0x13U != (0x0000003fU 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x00000012U)))) {
                            if ((0x14U != (0x0000003fU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x00000012U)))) {
                                if ((0x15U != (0x0000003fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x00000012U)))) {
                                    if ((0x16U != (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x00000012U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x00000012U))) 
                                                    || (0x1bU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                            >> 0x00000012U))))))) {
                                            vlSelfRef.__PVT__memaddr_AGEX 
                                                = vlSelfRef.__VdfgExtracted_h32f0a660__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__memaddr_AGEX = ((0x18U 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x00000012U)))
                                                  ? vlSelfRef.__VdfgExtracted_h32f0a660__0
                                                  : 0U);
            }
        }
    }
    if (((((((((1U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x00000012U))) 
               | (2U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x00000012U)))) 
              | (3U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x00000012U)))) 
             | (4U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x00000012U)))) 
            | (5U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     >> 0x00000012U)))) 
           | (6U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    >> 0x00000012U)))) 
          | (7U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0x00000012U)))) 
         | (8U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  >> 0x00000012U))))) {
        vlSelfRef.__PVT__aluout_AGEX = ((1U == (0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x00000012U)))
                                         ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x00000016U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x0000000aU)) 
                                            + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 0x00000016U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x0000000aU)))
                                         : ((2U == 
                                             (0x0000003fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x00000012U)))
                                             ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x0000000aU)) 
                                                - (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x00000016U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0x0000000aU)))
                                             : ((3U 
                                                 == 
                                                 (0x0000003fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x00000012U)))
                                                 ? 
                                                (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0x00000016U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x0000000aU)) 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x0000000aU)))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x00000012U)))
                                                  ? 
                                                 (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x00000016U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x0000000aU)) 
                                                  | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0x00000016U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 0x0000000aU)))
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0x00000012U)))
                                                   ? 
                                                  (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x0000000aU)) 
                                                   ^ 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x0000000aU)))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0x00000012U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgExtracted_h6ac6cdbe__0)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x00000012U)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgExtracted_h690ea6c9__0)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    VL_SHIFTRS_III(32,32,5, 
                                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                     << 0x00000016U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                       >> 0x0000000aU)), 
                                                                   (0x0000001fU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                       >> 0x0000000aU))))))))));
    } else if (((((((((9U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000012U))) 
                      | (0x0aU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x00000012U)))) 
                     | (0x0bU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x00000012U)))) 
                    | (0x0cU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x00000012U)))) 
                   | (0x0dU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x00000012U)))) 
                  | (0x0eU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x00000012U)))) 
                 | (0x0fU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000012U)))) 
                | (0x10U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x00000012U))))) {
        vlSelfRef.__PVT__aluout_AGEX = ((9U == (0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x00000012U)))
                                         ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x00000016U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x0000000aU)) 
                                            >> (0x0000001fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x0000000aU)))
                                         : ((0x0aU 
                                             == (0x0000003fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x00000012U)))
                                             ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x0000000aU)) 
                                                << 
                                                (0x0000001fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 0x0000000aU)))
                                             : ((0x0bU 
                                                 == 
                                                 (0x0000003fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x00000012U)))
                                                 ? 
                                                VL_MULS_III(32, 
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              << 0x00000016U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                >> 0x0000000aU)), 
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              << 0x00000016U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                >> 0x0000000aU)))
                                                 : 
                                                ((0x0cU 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x00000012U)))
                                                  ? vlSelfRef.__VdfgExtracted_h32f0a660__0
                                                  : 
                                                 ((0x0dU 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0x00000012U)))
                                                   ? 
                                                  (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x0000000aU)) 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       << 0x00000016U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                         >> 0x0000000aU)))
                                                   : 
                                                  ((0x0eU 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0x00000012U)))
                                                    ? 
                                                   (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 0x00000016U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 0x0000000aU)) 
                                                    | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        << 0x00000016U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                          >> 0x0000000aU)))
                                                    : 
                                                   ((0x0fU 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x00000012U)))
                                                     ? 
                                                    (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0x00000016U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0x0000000aU)) 
                                                     ^ 
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       << 0x00000016U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                         >> 0x0000000aU)))
                                                     : 
                                                    (VL_LTS_III(32, 
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                  << 0x00000016U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                    >> 0x0000000aU)), 
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                  << 0x00000016U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                    >> 0x0000000aU)))
                                                      ? 1U
                                                      : 0U))))))));
    } else if (((((((((0x11U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x00000012U))) 
                      | (0x12U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x00000012U)))) 
                     | (0x13U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x00000012U)))) 
                    | (0x14U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x00000012U)))) 
                   | (0x15U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x00000012U)))) 
                  | (0x16U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x00000012U)))) 
                 | ((0x19U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x00000012U))) 
                    || (0x1bU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x00000012U))))) 
                | (0x17U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x00000012U))))) {
        if ((0x11U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x00000012U)))) {
            vlSelfRef.__PVT__aluout_AGEX = ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0x00000016U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x0000000aU)) 
                                             < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 0x00000016U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x0000000aU)))
                                             ? 1U : 0U);
        } else if ((0x12U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__aluout_AGEX = VL_SHIFTRS_III(32,32,5, 
                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            << 0x00000016U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              >> 0x0000000aU)), 
                                                          (0x0000001fU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                              >> 0x0000000aU)));
        } else if ((0x13U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__aluout_AGEX = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x00000016U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x0000000aU)) 
                                            >> (0x0000001fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x0000000aU)));
        } else if ((0x14U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__aluout_AGEX = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x00000016U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x0000000aU)) 
                                            << (0x0000001fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x0000000aU)));
        } else if ((0x15U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__aluout_AGEX = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             << 0x00000016U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 0x0000000aU));
        } else if ((0x16U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__aluout_AGEX = vlSelfRef.__VdfgExtracted_hbcc182c0__0;
        } else if (((0x19U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x00000012U))) 
                    || (0x1bU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x00000012U))))) {
            vlSelfRef.__PVT__aluout_AGEX = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x00000018U));
        }
    } else {
        vlSelfRef.__PVT__aluout_AGEX = ((0x18U == (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x00000012U)))
                                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 0x00000016U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x0000000aU))
                                         : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f620fe0_0_0 = (((0x1cU 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x00000012U)))
                                                  ? 
                                                 (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x00000016U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x0000000aU)) 
                                                  == 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x00000016U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0x0000000aU)))
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0x00000012U)))
                                                   ? 
                                                  (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x0000000aU)) 
                                                   != 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x0000000aU)))
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0x00000012U)))
                                                    ? (IData)(vlSelfRef.__VdfgExtracted_h6ac6cdbe__0)
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x00000012U)))
                                                     ? 
                                                    VL_GTES_III(32, 
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                  << 0x00000016U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                    >> 0x0000000aU)), 
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                  << 0x00000016U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                    >> 0x0000000aU)))
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                          >> 0x00000012U)))
                                                      ? (IData)(vlSelfRef.__VdfgExtracted_h690ea6c9__0)
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
                                                                        >> 0x0000000aU)))))))))) 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 9U));
}
