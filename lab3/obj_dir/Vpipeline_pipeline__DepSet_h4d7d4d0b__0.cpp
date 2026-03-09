// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__reg_file__v0;
    __Vdlyvdim0__my_DE_stage__DOT__reg_file__v0 = 0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__reg_file__v0;
    __Vdlyvval__my_DE_stage__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__reg_file__v0;
    __Vdlyvset__my_DE_stage__DOT__reg_file__v0 = 0;
    CData/*2:0*/ __Vdly__my_DE_stage__DOT__alu_state_reg;
    __Vdly__my_DE_stage__DOT__alu_state_reg = 0;
    IData/*31:0*/ __Vdly__my_DE_stage__DOT__op1_reg;
    __Vdly__my_DE_stage__DOT__op1_reg = 0;
    IData/*31:0*/ __Vdly__my_DE_stage__DOT__op2_reg;
    __Vdly__my_DE_stage__DOT__op2_reg = 0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__reg_file__v1;
    __Vdlyvval__my_DE_stage__DOT__reg_file__v1 = 0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__reg_file__v1;
    __Vdlyvset__my_DE_stage__DOT__reg_file__v1 = 0;
    // Body
    __Vdlyvset__my_DE_stage__DOT__reg_file__v0 = 0U;
    __Vdly__my_DE_stage__DOT__op2_reg = vlSelf->__PVT__my_DE_stage__DOT__op2_reg;
    __Vdly__my_DE_stage__DOT__op1_reg = vlSelf->__PVT__my_DE_stage__DOT__op1_reg;
    __Vdlyvset__my_DE_stage__DOT__reg_file__v1 = 0U;
    __Vdly__my_DE_stage__DOT__alu_state_reg = vlSelf->__PVT__my_DE_stage__DOT__alu_state_reg;
    if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                       >> 0x25U)))) {
        __Vdlyvval__my_DE_stage__DOT__reg_file__v0 
            = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
        __Vdlyvset__my_DE_stage__DOT__reg_file__v0 = 1U;
        __Vdlyvdim0__my_DE_stage__DOT__reg_file__v0 
            = (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                >> 0x20U)));
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__my_DE_stage__DOT__alu_state_reg = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg = 1U;
        vlSelf->__PVT__my_DE_stage__DOT__aluop_reg = 0U;
        __Vdly__my_DE_stage__DOT__op1_reg = 0U;
        __Vdly__my_DE_stage__DOT__op2_reg = 0U;
    } else if ((4U & (IData)(vlSelf->__PVT__my_DE_stage__DOT__alu_state_reg))) {
        if ((2U & (IData)(vlSelf->__PVT__my_DE_stage__DOT__alu_state_reg))) {
            __Vdly__my_DE_stage__DOT__alu_state_reg = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__my_DE_stage__DOT__alu_state_reg))) {
            __Vdly__my_DE_stage__DOT__alu_state_reg = 0U;
        } else if ((4U & (IData)(vlSelf->__PVT__my_DE_stage__DOT__csr_fu))) {
            __Vdlyvval__my_DE_stage__DOT__reg_file__v1 
                = vlSelf->__PVT__my_DE_stage__DOT__op3_fu;
            __Vdlyvset__my_DE_stage__DOT__reg_file__v1 = 1U;
            vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg = 1U;
            __Vdly__my_DE_stage__DOT__alu_state_reg = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__my_DE_stage__DOT__alu_state_reg))) {
        if ((1U & (IData)(vlSelf->__PVT__my_DE_stage__DOT__alu_state_reg))) {
            vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg = 0U;
            __Vdly__my_DE_stage__DOT__alu_state_reg = 4U;
        } else {
            if ((((IData)((0x3f00000000ULL == (0x3f00000000ULL 
                                               & vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))) 
                  | (0U != vlSelf->__PVT__my_DE_stage__DOT__op2_reg)) 
                 & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__csr_fu) 
                    >> 1U))) {
                vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg = 4U;
                __Vdly__my_DE_stage__DOT__alu_state_reg = 3U;
            }
            if ((IData)((0x3f00000000ULL == (0x3f00000000ULL 
                                             & vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)))) {
                __Vdly__my_DE_stage__DOT__op2_reg = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__my_DE_stage__DOT__alu_state_reg))) {
        if ((((IData)((0x3e00000000ULL == (0x3f00000000ULL 
                                           & vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))) 
              | (0U != vlSelf->__PVT__my_DE_stage__DOT__op1_reg)) 
             & (IData)(vlSelf->__PVT__my_DE_stage__DOT__csr_fu))) {
            vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg = 3U;
            __Vdly__my_DE_stage__DOT__alu_state_reg = 2U;
        }
        if ((IData)((0x3e00000000ULL == (0x3f00000000ULL 
                                         & vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)))) {
            __Vdly__my_DE_stage__DOT__op1_reg = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
        }
    } else {
        vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg = 1U;
        __Vdly__my_DE_stage__DOT__op1_reg = 0U;
        __Vdly__my_DE_stage__DOT__op2_reg = 0U;
        if (((IData)((0x3d00000000ULL == (0x3f00000000ULL 
                                          & vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))) 
             & (0U != (0xfU & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))))) {
            vlSelf->__PVT__my_DE_stage__DOT__aluop_reg 
                = (0xfU & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE));
            __Vdly__my_DE_stage__DOT__alu_state_reg = 1U;
        }
    }
    vlSelf->__PVT__my_DE_stage__DOT__op2_reg = __Vdly__my_DE_stage__DOT__op2_reg;
    vlSelf->__PVT__my_DE_stage__DOT__op1_reg = __Vdly__my_DE_stage__DOT__op1_reg;
    if (__Vdlyvset__my_DE_stage__DOT__reg_file__v0) {
        vlSelf->__PVT__my_DE_stage__DOT__reg_file[__Vdlyvdim0__my_DE_stage__DOT__reg_file__v0] 
            = __Vdlyvval__my_DE_stage__DOT__reg_file__v0;
    }
    if (__Vdlyvset__my_DE_stage__DOT__reg_file__v1) {
        vlSelf->__PVT__my_DE_stage__DOT__reg_file[0x1bU] 
            = __Vdlyvval__my_DE_stage__DOT__reg_file__v1;
    }
    vlSelf->__PVT__my_DE_stage__DOT__alu_state_reg 
        = __Vdly__my_DE_stage__DOT__alu_state_reg;
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__num_brjmp;
    __Vdly__my_FE_stage__DOT__num_brjmp = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__BTB_TARGET__v0;
    __Vdlyvdim0__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    IData/*31:0*/ __Vdlyvval__my_FE_stage__DOT__BTB_TARGET__v0;
    __Vdlyvval__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0;
    __Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__BTB_TAG__v0;
    __Vdlyvdim0__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    IData/*25:0*/ __Vdlyvval__my_FE_stage__DOT__BTB_TAG__v0;
    __Vdlyvval__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0;
    __Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__my_FE_stage__DOT__BTB_VALID__v0;
    __Vdlyvdim0__my_FE_stage__DOT__BTB_VALID__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0;
    __Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__my_FE_stage__DOT__PHT__v0;
    __Vdlyvdim0__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__PHT__v0;
    __Vdlyvval__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__PHT__v0;
    __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__mis_pred;
    __Vdly__my_FE_stage__DOT__mis_pred = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a = 0;
    CData/*3:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e = 0;
    QData/*50:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient = 0;
    QData/*50:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder = 0;
    CData/*5:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__count;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__count = 0;
    QData/*50:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend = 0;
    QData/*50:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__guard;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__guard = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a = 0;
    CData/*3:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e = 0;
    QData/*47:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__product;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__product = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb = 0;
    // Body
    __Vdly__my_FE_stage__DOT__mis_pred = vlSelf->__PVT__my_FE_stage__DOT__mis_pred;
    __Vdly__my_FE_stage__DOT__num_brjmp = vlSelf->__PVT__my_FE_stage__DOT__num_brjmp;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__product 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack;
    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__guard 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__count 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__count;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack;
    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack 
        = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack;
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX) {
            vlSelf->__PVT__my_FE_stage__DOT__BHR = 
                ((0xfeU & (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)) 
                 | (IData)(vlSelf->__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
            __Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__BTB_VALID__v0 
                = (0xfU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                           >> 0x1aU));
            __Vdlyvval__my_FE_stage__DOT__BTB_TAG__v0 
                = (0x3ffffffU & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 2U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x1eU)));
            __Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__BTB_TAG__v0 
                = (0xfU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                           >> 0x1aU));
            __Vdlyvval__my_FE_stage__DOT__PHT__v0 = 
                ((IData)(vlSelf->__PVT__my_FE_stage__DOT__do_brjmp_AGEX)
                  ? ((2U & vlSelf->__PVT__my_FE_stage__DOT__PHT
                      [(0xffU & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])])
                      ? 3U : ((1U & vlSelf->__PVT__my_FE_stage__DOT__PHT
                               [(0xffU & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])])
                               ? 2U : 1U)) : ((2U & 
                                               vlSelf->__PVT__my_FE_stage__DOT__PHT
                                               [(0xffU 
                                                 & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])])
                                               ? ((1U 
                                                   & vlSelf->__PVT__my_FE_stage__DOT__PHT
                                                   [
                                                   (0xffU 
                                                    & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])])
                                                   ? 2U
                                                   : 1U)
                                               : 0U));
            __Vdlyvset__my_FE_stage__DOT__PHT__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__PHT__v0 
                = (0xffU & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]);
            __Vdlyvval__my_FE_stage__DOT__BTB_TARGET__v0 
                = vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX;
            __Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__BTB_TARGET__v0 
                = (0xfU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                           >> 0x1aU));
        }
    }
    if ((0x40U & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])) {
        vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 
            = ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                << 0x18U) | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                             >> 8U));
        vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 
            = (0x3fffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                          >> 0xaU));
    }
    if (((((((((0U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack = 1U;
            if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack) 
                 & ((2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__aluop_reg)) 
                    & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg) 
                       >> 1U)))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a 
                    = vlSelf->__PVT__my_DE_stage__DOT__op1_reg;
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack = 0U;
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack) 
                 & ((2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__aluop_reg)) 
                    & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg) 
                       >> 2U)))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b 
                    = vlSelf->__PVT__my_DE_stage__DOT__op2_reg;
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack = 0U;
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m 
                = (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a);
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m 
                = (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b);
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 3U;
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e 
                = (0x3ffU & ((0xffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a 
                                       >> 0x17U)) - (IData)(0x7fU)));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e 
                = (0x3ffU & ((0xffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b 
                                       >> 0x17U)) - (IData)(0x7fU)));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s 
                = (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a 
                   >> 0x1fU);
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s 
                = (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b 
                   >> 0x1fU);
        } else if ((3U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
            if ((((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e)) 
                  & (0U != vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m)) 
                 | ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e)) 
                    & (0U != vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m)))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z = 0xffc00000U;
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0xcU;
            } else if ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s) 
                                       ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s)) 
                                      << 0x1fU));
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0xcU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e))) 
                     & (0U == vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m))) {
                    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z = 0xffc00000U;
                }
            } else if ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s) 
                                       ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s)) 
                                      << 0x1fU));
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0xcU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e))) 
                     & (0U == vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m))) {
                    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z = 0xffc00000U;
                }
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e))) 
                        & (0U == vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
                    = (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s) 
                        ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s)) 
                       << 0x1fU);
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0xcU;
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e))) 
                        & (0U == vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
                    = (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s) 
                        ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s)) 
                       << 0x1fU);
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0xcU;
            } else {
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e)))) {
                    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e = 0x382U;
                } else {
                    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m 
                        = (0x800000U | __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m);
                }
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e)))) {
                    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e = 0x382U;
                } else {
                    __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m 
                        = (0x800000U | __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m);
                }
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
            if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m)) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 5U;
            } else {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m 
                    = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m 
                                    << 1U));
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e 
                    = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e) 
                                 - (IData)(1U)));
            }
        } else if ((5U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
            if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m)) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 6U;
            } else {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m 
                    = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m 
                                    << 1U));
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e 
                    = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e) 
                                 - (IData)(1U)));
            }
        } else if ((6U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s 
                = ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s) 
                   ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e 
                = (0x3ffU & ((IData)(1U) + ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e) 
                                            + (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e))));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__product 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m)) 
                                        * (QData)((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m))));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 7U;
        } else {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
                = (0xffffffU & (IData)((vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product 
                                        >> 0x18U)));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 8U;
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard 
                = (1U & (IData)((vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product 
                                 >> 0x17U)));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit 
                = (1U & (IData)((vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product 
                                 >> 0x16U)));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky 
                = (0U != (0x3fffffU & (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product)));
        }
    } else if ((8U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
        if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m)) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 9U;
        } else {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e 
                = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e) 
                             - (IData)(1U)));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
                = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
                                << 1U));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
                = ((0xfffffeU & __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m) 
                   | (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard 
                = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit;
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit = 0U;
        }
    } else if ((9U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
        if (VL_GTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e)))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e)));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
                = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
                                >> 1U));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky 
                = ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky) 
                   | (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit));
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit 
                = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard;
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard 
                = (1U & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m);
        } else {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0xaU;
        }
    } else if ((0xaU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
        if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard) 
             & (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit) 
                 | (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky)) 
                | vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
                = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m));
            if ((0xffffffU == vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m)) {
                __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e)));
            }
        }
        __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0xbU;
    } else if ((0xbU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
            = ((0xff800000U & __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z) 
               | (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m));
        __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0xcU;
        __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
            = ((0x7fffffU & __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z) 
               | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s) 
                   << 0x1fU) | (0x7f800000U & (((IData)(0x7fU) 
                                                + (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e)) 
                                               << 0x17U))));
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e))) 
             & (~ (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
                   >> 0x17U)))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
                = (0x807fffffU & __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z);
        }
        if (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e)))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
                = (0x7f800000U | ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s) 
                                  << 0x1fU));
        }
    } else if ((0xcU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb = 1U;
        vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z 
            = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z;
        if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb) 
             & ((2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__aluop_reg)) 
                & (IData)(vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg)))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb = 0U;
            __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0U;
        }
    }
    if (((((((((0U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack = 1U;
            if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack) 
                 & ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__aluop_reg)) 
                    & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg) 
                       >> 1U)))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a 
                    = vlSelf->__PVT__my_DE_stage__DOT__op1_reg;
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack = 0U;
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack) 
                 & ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__aluop_reg)) 
                    & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg) 
                       >> 2U)))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b 
                    = vlSelf->__PVT__my_DE_stage__DOT__op2_reg;
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack = 0U;
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m 
                = (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a);
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m 
                = (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b);
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 3U;
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e 
                = (0x3ffU & ((0xffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a 
                                       >> 0x17U)) - (IData)(0x7fU)));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e 
                = (0x3ffU & ((0xffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b 
                                       >> 0x17U)) - (IData)(0x7fU)));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s 
                = (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a 
                   >> 0x1fU);
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s 
                = (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b 
                   >> 0x1fU);
        } else if ((3U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
            if ((((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e)) 
                  & (0U != vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m)) 
                 | ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e)) 
                    & (0U != vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m)))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z = 0xffc00000U;
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xeU;
            } else if (((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e)) 
                        & (0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e)))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z = 0xffc00000U;
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xeU;
            } else if ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s) 
                                       ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s)) 
                                      << 0x1fU));
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xeU;
            } else if ((0x80U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
                    = (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s) 
                        ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s)) 
                       << 0x1fU);
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xeU;
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e))) 
                        & (0U == vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
                    = (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s) 
                        ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s)) 
                       << 0x1fU);
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xeU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e))) 
                     & (0U == vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m))) {
                    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z = 0xffc00000U;
                    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xeU;
                }
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e))) 
                        & (0U == vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m))) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s) 
                                       ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s)) 
                                      << 0x1fU));
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xeU;
            } else {
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e)))) {
                    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e = 0x382U;
                } else {
                    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m 
                        = (0x800000U | __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m);
                }
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e)))) {
                    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e = 0x382U;
                } else {
                    __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m 
                        = (0x800000U | __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m);
                }
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
            if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m)) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 5U;
            } else {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m 
                    = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m 
                                    << 1U));
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e 
                    = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e) 
                                 - (IData)(1U)));
            }
        } else if ((5U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
            if ((0x800000U & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m)) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 6U;
            } else {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m 
                    = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m 
                                    << 1U));
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e 
                    = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e) 
                                 - (IData)(1U)));
            }
        } else if ((6U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s 
                = ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s) 
                   ^ (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e 
                = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e) 
                             - (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e)));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient = 0ULL;
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder = 0ULL;
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__count = 0U;
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend 
                = (0x7ffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m)) 
                                         << 0x1bU));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor 
                = (QData)((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 7U;
        } else {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient 
                = (0x7ffffffffffffULL & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient 
                                         << 1U));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder 
                = (0x7ffffffffffffULL & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder 
                                         << 1U));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 8U;
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder 
                = ((0x7fffffffffffeULL & __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder) 
                   | (IData)((IData)((1U & (IData)(
                                                   (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend 
                                                    >> 0x32U))))));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend 
                = (0x7ffffffffffffULL & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend 
                                         << 1U));
        }
    } else if ((8U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
        if ((vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder 
             >= vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor)) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder 
                = (0x7ffffffffffffULL & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder 
                                         - vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient 
                = (1ULL | __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient);
        }
        if ((0x31U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__count))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 9U;
        } else {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__count)));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 7U;
        }
    } else if ((9U == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
            = (0xffffffU & (IData)((vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient 
                                    >> 3U)));
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xaU;
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__guard 
            = (1U & (IData)((vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient 
                             >> 2U)));
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit 
            = (1U & (IData)((vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient 
                             >> 1U)));
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky 
            = (1U & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient) 
                     | (0ULL != vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder)));
    } else if ((0xaU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
        if (((~ (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
                 >> 0x17U)) & VL_LTS_III(32, 0xffffff82U, 
                                         VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e))))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e 
                = (0x3ffU & ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e) 
                             - (IData)(1U)));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
                = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
                                << 1U));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
                = ((0xfffffeU & __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m) 
                   | (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__guard 
                = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit;
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit = 0U;
        } else {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xbU;
        }
    } else if ((0xbU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
        if (VL_GTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e)))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e)));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
                = (0xffffffU & (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
                                >> 1U));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky 
                = ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky) 
                   | (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit));
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit 
                = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard;
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__guard 
                = (1U & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m);
        } else {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xcU;
        }
    } else if ((0xcU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
        if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard) 
             & (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit) 
                 | (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky)) 
                | vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
                = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m));
            if ((0xffffffU == vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m)) {
                __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e)));
            }
        }
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xdU;
    } else if ((0xdU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
            = ((0xff800000U & __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z) 
               | (0x7fffffU & vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m));
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0xeU;
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
            = ((0x7fffffU & __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z) 
               | (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s) 
                   << 0x1fU) | (0x7f800000U & (((IData)(0x7fU) 
                                                + (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e)) 
                                               << 0x17U))));
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e))) 
             & (~ (vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
                   >> 0x17U)))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
                = (0x807fffffU & __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z);
        }
        if (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,10, (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e)))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
                = (0x7f800000U | ((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s) 
                                  << 0x1fU));
        }
    } else if ((0xeU == (IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb = 1U;
        vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z 
            = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z;
        if (((IData)(vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb) 
             & ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__aluop_reg)) 
                & (IData)(vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg)))) {
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb = 0U;
            __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__mis_pred = 0U;
        __Vdly__my_FE_stage__DOT__num_brjmp = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = 0U;
        __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack = 0U;
        __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack = 0U;
        __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb = 0U;
        __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = 0U;
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack = 0U;
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack = 0U;
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb = 0U;
        __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state = 0U;
        vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = 0x200U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if (vlSelf->__PVT__from_AGEX_to_DE) {
            __Vdly__my_FE_stage__DOT__mis_pred = ((IData)(1U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__mis_pred);
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
            vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                = vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX;
        } else {
            if (vlSelf->__PVT__from_DE_to_FE) {
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
            } else {
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE 
                        << 8U) | (IData)(vlSelf->__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE 
                        >> 0x18U) | (((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                     << 8U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = ((((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                        >> 0x18U) | ((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                     << 8U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = (((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                        >> 0x18U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                              >> 0x20U)) 
                                     << 8U));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = (((IData)((0U != vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                        << 8U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                           >> 0x20U)) 
                                  >> 0x18U));
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__from_DE_to_FE)))) {
                vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                    = vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE;
            }
        }
        if (vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX) {
            __Vdly__my_FE_stage__DOT__num_brjmp = ((IData)(1U) 
                                                   + vlSelf->__PVT__my_FE_stage__DOT__num_brjmp);
        }
        if (((~ (IData)(vlSelf->__PVT__from_DE_to_FE)) 
             & (IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xfU)))));
        }
        if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0x25U)))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x1fU & (IData)(
                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 0x20U))))) 
                   & vlSelf->__PVT__my_DE_stage__DOT__in_use_regs);
        }
    }
    vlSelf->__PVT__my_FE_stage__DOT__mis_pred = __Vdly__my_FE_stage__DOT__mis_pred;
    vlSelf->__PVT__my_FE_stage__DOT__num_brjmp = __Vdly__my_FE_stage__DOT__num_brjmp;
    if (__Vdlyvset__my_FE_stage__DOT__BTB_VALID__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_VALID[__Vdlyvdim0__my_FE_stage__DOT__BTB_VALID__v0] = 1U;
    }
    if (__Vdlyvset__my_FE_stage__DOT__BTB_TAG__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TAG[__Vdlyvdim0__my_FE_stage__DOT__BTB_TAG__v0] 
            = __Vdlyvval__my_FE_stage__DOT__BTB_TAG__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__PHT__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__PHT[__Vdlyvdim0__my_FE_stage__DOT__PHT__v0] 
            = __Vdlyvval__my_FE_stage__DOT__PHT__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__BTB_TARGET__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TARGET[__Vdlyvdim0__my_FE_stage__DOT__BTB_TARGET__v0] 
            = __Vdlyvval__my_FE_stage__DOT__BTB_TARGET__v0;
    }
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__state;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__product;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack 
        = __Vdly__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__state;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__count 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__count;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__guard;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack;
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack 
        = __Vdly__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack;
    vlSelf->__PVT__my_FE_stage__DOT__inst_FE = vlSelf->__PVT__my_FE_stage__DOT__imem
        [(0x3fffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U))];
    vlSelf->__PVT__my_FE_stage__DOT__pc_xor_bhr_FE 
        = (0xffU & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U) ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__BHR)));
    vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE = ((
                                                   (1U 
                                                    < 
                                                    vlSelf->__PVT__my_FE_stage__DOT__PHT
                                                    [vlSelf->__PVT__my_FE_stage__DOT__pc_xor_bhr_FE]) 
                                                   & ((vlSelf->__PVT__my_FE_stage__DOT__BTB_TAG
                                                       [
                                                       (0xfU 
                                                        & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                           >> 2U))] 
                                                       == 
                                                       (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                        >> 6U)) 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__BTB_VALID
                                                      [
                                                      (0xfU 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                          >> 2U))]))
                                                   ? 
                                                  vlSelf->__PVT__my_FE_stage__DOT__BTB_TARGET
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))]
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch));
}

extern const VlWide<8>/*255:0*/ Vpipeline__ConstPool__CONST_hea9cc873_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vpipeline__ConstPool__TABLE_hcaa37eff_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vpipeline__ConstPool__TABLE_h51279bb7_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h9a816032_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h085e32d7_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h11b543fd__0;
    my_DE_stage__DOT____VdfgTmp_h11b543fd__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hda32fb29__0;
    my_DE_stage__DOT____VdfgTmp_hda32fb29__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h830f44de__0;
    my_DE_stage__DOT____VdfgTmp_h830f44de__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h09876d83__0;
    my_DE_stage__DOT____VdfgTmp_h09876d83__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0;
    my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0;
    my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgTmp_hbc7d3c3c__0;
    my_AGEX_stage__DOT____VdfgTmp_hbc7d3c3c__0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hf1088b28__0;
    VlWide<4>/*127:0*/ __Vtemp_h0d41f8bf__0;
    VlWide<8>/*255:0*/ __Vtemp_h1eff691c__0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                << 6U) | (0x3fU & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x3fffU 
                                                         & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                            >> 0xaU))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                        >> 8U))))) 
                                      >> 0x20U)) << 6U));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = (((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                 << 0x1eU) | (0x3fffffc0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 2U))) 
               | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                             [(0x3fffU 
                                               & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0xaU))])) 
                             << 0x20U) | (QData)((IData)(
                                                         ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                           << 0x18U) 
                                                          | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                           >> 0x20U)) >> 0x1aU));
    }
    if (vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
    __Vtemp_hf1088b28__0[0U] = ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? (((- (IData)((1U 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 7U)))) 
                                     << 0xbU) | (0x7ffU 
                                                 & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1cU))))
                                 : ((4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 7U)))) 
                                         << 0xbU) | 
                                        ((0x7e0U & 
                                          (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 4U)) 
                                         | (0x1fU & 
                                            (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0xfU))))
                                     : ((5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 7U)))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 4U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0xfU)))))
                                         : ((3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (0xfffff000U 
                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x18U) 
                                                   | (0xfff000U 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 8U))))
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 7U)))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 8U)) 
                                                    | ((0x800U 
                                                        & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x11U)) 
                                                       | (0x7feU 
                                                          & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 4U) 
                                                             | (0xeU 
                                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU)))))))
                                                 : 0U)))));
    __Vtemp_h0d41f8bf__0[0U] = ((__Vtemp_hf1088b28__0[0U] 
                                 << 0x12U) | ((((0x1cU 
                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                | ((0x1dU 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1eU 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((0x1fU 
                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x20U 
                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | (0x21U 
                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                               << 0x11U) 
                                              | ((((0x19U 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1aU 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | (0x1bU 
                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x10U) 
                                                 | (((0x17U 
                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     << 0xfU) 
                                                    | (((0x18U 
                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                           << 0xdU) 
                                                          | ((0x1f00U 
                                                              & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 7U)) 
                                                             | (0xffU 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U]))))))));
    __Vtemp_h1eff691c__0[2U] = ((IData)(vlSelf->__PVT__from_DE_to_FE)
                                 ? Vpipeline__ConstPool__CONST_hea9cc873_0[2U]
                                 : (((IData)((((QData)((IData)(
                                                               vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                               [
                                                               (0x1fU 
                                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x17U))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                [
                                                                (0x1fU 
                                                                 & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 4U) 
                                                                    | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x1cU)))])))) 
                                     >> 0xeU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                            [
                                                                            (0x1fU 
                                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                             [
                                                                             (0x1fU 
                                                                              & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                          >> 0x20U)) 
                                                 << 0x12U)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[7U];
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                         >> 2U)) | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                     >> 2U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                         >> 2U)) | (0x1fc0U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                               >> 2U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                << 8U) | (0xffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 8U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                >> 0x18U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                      >> 0x20U)) << 8U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                 << 0x16U) | (0x3fc000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0xaU))) 
               | ((0x3f00U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                              >> 0xaU)) | ((IData)(
                                                   ((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                    >> 0x20U)) 
                                           >> 0x18U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = ((0x3fffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                           >> 0xaU)) | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         << 0x16U) 
                                        | (0x3fc000U 
                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                              >> 0xaU))));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((0x3fffU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                           >> 0xaU)) | (0x4000U & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0xaU)));
        if (vlSelf->__PVT__from_DE_to_FE) {
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[0U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[1U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = __Vtemp_h1eff691c__0[2U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[3U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[4U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[5U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[6U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[7U];
        } else {
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = __Vtemp_h0d41f8bf__0[0U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = ((__Vtemp_hf1088b28__0[0U] >> 0xeU) 
                   | ((IData)((((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                [(0x1fU 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x17U))])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                            [
                                                            (0x1fU 
                                                             & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 4U) 
                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU)))])))) 
                      << 0x12U));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = __Vtemp_h1eff691c__0[2U];
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = ((0xff000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                   << 0x10U)) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                                                  << 0x12U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                               [
                                                                               (0x1fU 
                                                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__my_DE_stage__DOT__reg_file
                                                                                [
                                                                                (0x1fU 
                                                                                & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU)))]))) 
                                                             >> 0x20U)) 
                                                    >> 0xeU)));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = (((0xff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                >> 0x10U)) 
                   | (0xff000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                     << 0x10U)));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = (((0xff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                >> 0x10U)) 
                   | (0xff000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                     << 0x10U)));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = (((0xff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                >> 0x10U)) 
                   | (0xff000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     << 0x10U)));
            vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = (((0xff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x10U)) 
                   | (0x1000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    << 0x10U)));
        }
    }
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX 
        = (IData)((0U != (0x30000U & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U])));
    my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
             << 8U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                       >> 0x18U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x12U)));
    my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         >> 0x12U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 0x12U)));
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0 
        = VL_LTS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                           << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x12U)), 
                     ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x12U)));
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h048118d3__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         >> 0x12U)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x12U)));
    my_DE_stage__DOT____VdfgTmp_h11b543fd__0 = (IData)(
                                                       (0x3300U 
                                                        == 
                                                        (0x707f00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgTmp_hda32fb29__0 = (IData)(
                                                       (0x503300U 
                                                        == 
                                                        (0x707f00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgTmp_h830f44de__0 = (IData)(
                                                       ((0x100000U 
                                                         == 
                                                         (0x700000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                        & (0U 
                                                           == 
                                                           (0xfeU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))));
    my_DE_stage__DOT____VdfgTmp_h09876d83__0 = (IData)(
                                                       (0x501300U 
                                                        == 
                                                        (0x707f00U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    if ((1U & (~ ((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U))) 
                        | (2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))) 
                       | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))) 
                      | (4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U)))) 
                     | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))) 
                    | (6U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) 
                   | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U)))) 
                  | (8U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x12U))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U))) 
                            | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x12U)))) 
                           | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x12U)))) 
                          | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x12U)))) 
                         | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x12U)))) 
                        | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))) 
                       | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) 
                      | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U))))))) {
            if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U))) 
                       | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))) 
                      | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) 
                     | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))) 
                    | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))) 
                   | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U)))) 
                  | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U))) 
                     | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U))))) 
                 | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U))))) {
                if ((0x11U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))) {
                    if ((0x12U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) {
                        if ((0x13U != (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x12U)))) {
                            if ((0x14U != (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) {
                                if ((0x15U != (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x12U)))) {
                                    if ((0x16U != (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x12U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         >> 0x12U))) 
                                                    | (0x1bU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           >> 0x12U))))))) {
                                            vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                                                = my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                    = ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0
                        : 0U);
            }
        }
    }
    if (((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x12U))) | (2U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x12U)))) 
              | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 >> 0x12U)))) | (4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x12U)))) 
            | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x12U)))) | (6U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x12U)))) 
          | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             >> 0x12U)))) | (8U == 
                                             (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x12U))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x12U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 0xeU) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x12U)) 
                                               + ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0xeU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x12U)))
                : ((2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    >> 0x12U))) ? (
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x12U)) 
                                                   - 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x12U)))
                    : ((3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))
                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x12U)) 
                           & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x12U)))
                        : ((4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0x12U)) 
                               | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x12U)))
                            : ((5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x12U)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x12U)) 
                                   ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0xeU) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x12U)))
                                : ((6U == (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))
                                    ? ((IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0)
                                        ? 1U : 0U) : 
                                   ((7U == (0x3fU & 
                                            (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))
                                     ? ((IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h048118d3__0)
                                         ? 1U : 0U)
                                     : VL_SHIFTRS_III(32,32,5, 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0xeU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x12U)), 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x12U))))))))));
    } else if (((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U))) 
                      | (0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))) 
                     | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))) 
                    | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U)))) 
                   | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))) 
                  | (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) 
                 | (0xfU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U)))) 
                | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U))))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x12U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 0xeU) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x12U)) 
                                               >> (0x1fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0x12U)))
                : ((0xaU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U))) ? 
                   (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x12U)) << (0x1fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 0x12U)))
                    : ((0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))
                        ? VL_MULS_III(32, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0xeU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x12U)), 
                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x12U)))
                        : ((0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x12U)))
                            ? my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0
                            : ((0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x12U)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x12U)) 
                                   & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0xeU) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x12U)))
                                : ((0xeU == (0x3fU 
                                             & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x12U)))
                                    ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0xeU) | 
                                        (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x12U)) 
                                       | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 0xeU) 
                                          | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0x12U)))
                                    : ((0xfU == (0x3fU 
                                                 & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0x12U)))
                                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0xeU) 
                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x12U)) 
                                           ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               << 0xeU) 
                                              | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x12U)))
                                        : (VL_LTS_III(32, 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0xeU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x12U)), 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        << 0xeU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                          >> 0x12U)))
                                            ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U))) 
                      | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) 
                     | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))) 
                    | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))) 
                   | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U)))) 
                  | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))) 
                 | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U))))) 
                | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U))))) {
        if ((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x12U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x12U)) < ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 0xeU) 
                                                | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x12U)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0xeU) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x12U)), 
                                 (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x12U)));
        } else if ((0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 >> 0x12U)) >> (0x1fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x12U)));
        } else if ((0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 >> 0x12U)) << (0x1fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x12U)));
        } else if ((0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                    << 0xeU) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                >> 0x12U));
        } else if ((0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0;
        } else if (((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U))) 
                    | (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U))))) {
            vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                    << 8U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x18U));
        }
    } else {
        vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x12U))) ? ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0xeU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x12U))
                : 0U);
    }
    my_AGEX_stage__DOT____VdfgTmp_hbc7d3c3c__0 = ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x11U) 
                                                  & ((0x1cU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x12U)))
                                                      ? 
                                                     (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0xeU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x12U)) 
                                                      == 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 0xeU) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x12U)))
                                                      : 
                                                     ((0x1dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           >> 0x12U)))
                                                       ? 
                                                      (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         << 0xeU) 
                                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           >> 0x12U)) 
                                                       != 
                                                       ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         << 0xeU) 
                                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                           >> 0x12U)))
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            >> 0x12U)))
                                                        ? (IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0)
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                             >> 0x12U)))
                                                         ? 
                                                        VL_GTES_III(32, 
                                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      << 0xeU) 
                                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                        >> 0x12U)), 
                                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      << 0xeU) 
                                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                        >> 0x12U)))
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              >> 0x12U)))
                                                          ? (IData)(vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h048118d3__0)
                                                          : (IData)(
                                                                    ((0x840000U 
                                                                      == 
                                                                      (0xfc0000U 
                                                                       & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                                     & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                            >> 0x12U)) 
                                                                        >= 
                                                                        ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                          << 0xeU) 
                                                                         | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                            >> 0x12U)))))))))));
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_h11b543fd__0) 
                                                 & (0U 
                                                    == 
                                                    (0xfeU 
                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h11b543fd__0) 
                                                  & (0x40U 
                                                     == 
                                                     (0xfeU 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          ((0x703300U 
                                                            == 
                                                            (0x707f00U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                           & (0U 
                                                              == 
                                                              (0xfeU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           ((0x603300U 
                                                             == 
                                                             (0x707f00U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                            & (0U 
                                                               == 
                                                               (0xfeU 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            ((0x403300U 
                                                              == 
                                                              (0x707f00U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0xfeU 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             ((0x203300U 
                                                               == 
                                                               (0x707f00U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0xfeU 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              ((0x303300U 
                                                                == 
                                                                (0x707f00U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0xfeU 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_hda32fb29__0) 
                                                        & (0x40U 
                                                           == 
                                                           (0xfeU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_hda32fb29__0) 
                                                         & (0U 
                                                            == 
                                                            (0xfeU 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 ((0x3300U 
                                                                   == 
                                                                   (0x7f00U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                  & (IData)(my_DE_stage__DOT____VdfgTmp_h830f44de__0)))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_h11b543fd__0) 
                                                           & (2U 
                                                              == 
                                                              (0xfeU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x1300U 
                                                                    == 
                                                                    (0x707f00U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0x701300U 
                                                                     == 
                                                                     (0x707f00U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0x601300U 
                                                                      == 
                                                                      (0x707f00U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x401300U 
                                                                       == 
                                                                       (0x707f00U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x201300U 
                                                                        == 
                                                                        (0x707f00U 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x301300U 
                                                                         == 
                                                                         (0x707f00U 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h09876d83__0) 
                                                                  & (0x40U 
                                                                     == 
                                                                     (0xfeU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_h09876d83__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (0xfeU 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           ((0x1300U 
                                                                             == 
                                                                             (0x7f00U 
                                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                            & (IData)(my_DE_stage__DOT____VdfgTmp_h830f44de__0)))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 8U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 8U)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x200300U 
                                                                               == 
                                                                               (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x202300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 8U)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x6700U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0x6300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x106300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x406300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x506300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x606300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0x706300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x207300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x107300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__my_FE_stage__DOT__do_brjmp_AGEX 
        = (1U & ((IData)(my_AGEX_stage__DOT____VdfgTmp_hbc7d3c3c__0) 
                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                    >> 0x10U)));
    vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x12U))) ? my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0
            : ((0x1aU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x12U))) ? ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xeU) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x12U))
                : ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U))) ? 
                   (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_h4e54d416__0)
                    : ((IData)(my_AGEX_stage__DOT____VdfgTmp_hbc7d3c3c__0)
                        ? my_AGEX_stage__DOT____VdfgExtracted_h7fcc4370__0
                        : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                            << 8U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x18U))))));
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
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0xfU))));
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = Vpipeline__ConstPool__TABLE_hcaa37eff_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vpipeline__ConstPool__TABLE_h51279bb7_0[__Vtableidx1];
    vlSelf->__PVT__from_AGEX_to_DE = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX) 
                                      & (vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX 
                                         != ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              << 8U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x18U))));
    __Vtableidx2 = vlSelf->__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vpipeline__ConstPool__TABLE_h9a816032_0
        [__Vtableidx2];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vpipeline__ConstPool__TABLE_h085e32d7_0
        [__Vtableidx2];
}
