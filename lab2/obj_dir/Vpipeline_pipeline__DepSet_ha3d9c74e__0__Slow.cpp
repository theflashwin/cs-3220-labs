// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

extern const VlWide<19>/*607:0*/ Vpipeline__ConstPool__CONST_heb7c2074_0;

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    // Body
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(19, Vpipeline__ConstPool__CONST_heb7c2074_0)
                 ,  &(vlSelf->__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    vlSelf->my_DE_stage__DOT____Vxrand_h9c26cae2__0 
        = (7U & VL_RAND_RESET_I(3));
    vlSelf->my_DE_stage__DOT____Vxrand_h9c270190__0 
        = (0xfU & VL_RAND_RESET_I(4));
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(19, Vpipeline__ConstPool__CONST_heb7c2074_0)
                 ,  &(vlSelf->__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h9a816032_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h085e32d7_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h82e6dbef__0;
    my_DE_stage__DOT____VdfgTmp_h82e6dbef__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h4f5521eb__0;
    my_DE_stage__DOT____VdfgTmp_h4f5521eb__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h7d7d0b97__0;
    my_DE_stage__DOT____VdfgTmp_h7d7d0b97__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h3a046a9d__0;
    my_DE_stage__DOT____VdfgTmp_h3a046a9d__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0 
        = (((- (IData)((1U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                              >> 7U)))) << 0xbU) | 
           (0x7ffU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                       << 4U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 >> 0x1cU))));
    vlSelf->__PVT__my_FE_stage__DOT__pht_index = (0xffU 
                                                  & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U) 
                                                     ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__bhr)));
    vlSelf->__PVT__my_FE_stage__DOT__btb_line = vlSelf->__PVT__my_FE_stage__DOT__btb
        [(0xfU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                  >> 2U))];
    my_DE_stage__DOT____VdfgTmp_h82e6dbef__0 = (IData)(
                                                       (0x3300U 
                                                        == 
                                                        (0x707f00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h4f5521eb__0 = (IData)(
                                                       (0x503300U 
                                                        == 
                                                        (0x707f00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h7d7d0b97__0 = (IData)(
                                                       ((0x100000U 
                                                         == 
                                                         (0x700000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                        & (0U 
                                                           == 
                                                           (0xfeU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))));
    my_DE_stage__DOT____VdfgTmp_h3a046a9d__0 = (IData)(
                                                       (0x501300U 
                                                        == 
                                                        (0x707f00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    vlSelf->__PVT__my_FE_stage__DOT__predicted_pc = 
        ((((IData)((vlSelf->__PVT__my_FE_stage__DOT__btb_line 
                    >> 0x3aU)) & ((0x3ffffffU & (IData)(
                                                        (vlSelf->__PVT__my_FE_stage__DOT__btb_line 
                                                         >> 0x20U))) 
                                  == (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                      >> 6U))) & (1U 
                                                  < 
                                                  vlSelf->__PVT__my_FE_stage__DOT__pht
                                                  [vlSelf->__PVT__my_FE_stage__DOT__pht_index]))
          ? (IData)(vlSelf->__PVT__my_FE_stage__DOT__btb_line)
          : ((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch));
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_h82e6dbef__0) 
                                                 & (0U 
                                                    == 
                                                    (0xfeU 
                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h82e6dbef__0) 
                                                  & (0x40U 
                                                     == 
                                                     (0xfeU 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          ((0x703300U 
                                                            == 
                                                            (0x707f00U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                           & (0U 
                                                              == 
                                                              (0xfeU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           ((0x603300U 
                                                             == 
                                                             (0x707f00U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                            & (0U 
                                                               == 
                                                               (0xfeU 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            ((0x403300U 
                                                              == 
                                                              (0x707f00U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0xfeU 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             ((0x203300U 
                                                               == 
                                                               (0x707f00U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0xfeU 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              ((0x303300U 
                                                                == 
                                                                (0x707f00U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0xfeU 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_h4f5521eb__0) 
                                                        & (0x40U 
                                                           == 
                                                           (0xfeU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_h4f5521eb__0) 
                                                         & (0U 
                                                            == 
                                                            (0xfeU 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 ((0x3300U 
                                                                   == 
                                                                   (0x7f00U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                  & (IData)(my_DE_stage__DOT____VdfgTmp_h7d7d0b97__0)))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_h82e6dbef__0) 
                                                           & (2U 
                                                              == 
                                                              (0xfeU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x1300U 
                                                                    == 
                                                                    (0x707f00U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0x701300U 
                                                                     == 
                                                                     (0x707f00U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0x601300U 
                                                                      == 
                                                                      (0x707f00U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x401300U 
                                                                       == 
                                                                       (0x707f00U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x201300U 
                                                                        == 
                                                                        (0x707f00U 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x301300U 
                                                                         == 
                                                                         (0x707f00U 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h3a046a9d__0) 
                                                                  & (0x40U 
                                                                     == 
                                                                     (0xfeU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_h3a046a9d__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (0xfeU 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           ((0x1300U 
                                                                             == 
                                                                             (0x7f00U 
                                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                            & (IData)(my_DE_stage__DOT____VdfgTmp_h7d7d0b97__0)))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 8U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 8U)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x200300U 
                                                                               == 
                                                                               (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x202300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 8U)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x6700U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0x6300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x106300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x406300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x506300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x606300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0x706300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x207300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x107300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = vlSelf->my_DE_stage__DOT____Vxrand_h9c26cae2__0;
    if ((1U & (~ (((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) {
        if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 3U;
        } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 4U;
        } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 2U;
        } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 5U;
        }
    }
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = ((
                                                   (0x22U 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((3U 
                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | ((4U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                               | ((5U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                  | ((6U 
                                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                     | ((7U 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                        | ((8U 
                                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                           | ((9U 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                              | ((0xaU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xbU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xcU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xeU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xfU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x12U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x14U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x15U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x16U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x17U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x19U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))) 
                                                  & (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0xfU))));
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = vlSelf->my_DE_stage__DOT____Vxrand_h9c270190__0;
    if ((((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                  | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
            | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
          | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
         | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 1U;
    } else if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                 | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 4U;
    } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    }
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vpipeline__ConstPool__TABLE_h9a816032_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vpipeline__ConstPool__TABLE_h085e32d7_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__from_DE_to_FE = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(169, vlSelf->__PVT__my_FE_stage__DOT__FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__pht_index = VL_RAND_RESET_I(8);
    vlSelf->__PVT__my_FE_stage__DOT__predicted_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__bhr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__btb[__Vi0] = VL_RAND_RESET_Q(59);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__pht[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__my_FE_stage__DOT__btb_line = VL_RAND_RESET_Q(59);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->my_DE_stage__DOT____Vxrand_h9c26cae2__0 = VL_RAND_RESET_I(3);
    vlSelf->my_DE_stage__DOT____Vxrand_h9c270190__0 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(281, vlSelf->__PVT__my_DE_stage__DOT__DE_latch);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_RAND_RESET_I(32);
    vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(173, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch);
    VL_RAND_RESET_W(169, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0;
}
