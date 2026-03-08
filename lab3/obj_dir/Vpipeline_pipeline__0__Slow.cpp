// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 16384, 0, "/home/yz87/CS3220_TA/Fall_2023/cs3220-labs/lab5/test/part5/alutest0.mem"s
                 ,  &(vlSelfRef.__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    vlSelfRef.__PVT__my_FE_stage__DOT__BHR = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[1U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[1U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[1U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[2U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[2U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[2U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[3U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[3U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[3U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[4U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[4U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[4U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[5U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[5U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[5U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[6U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[6U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[6U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[7U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[7U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[7U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[8U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[8U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[8U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[9U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[9U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[9U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0aU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0aU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0aU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0bU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0bU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0bU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0cU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0cU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0cU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0dU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0dU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0dU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0eU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0eU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0eU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0fU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0fU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0fU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i = 0x00000010U;
    vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.__PVT__my_FE_stage__DOT__PHT[(0x000000ffU 
                                                & vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i)] = 3U;
        vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[1U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[2U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[3U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[4U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[5U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[6U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[7U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[8U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[9U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0aU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0bU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0cU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0dU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0eU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0fU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x10U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x11U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x12U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x13U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x14U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x15U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x16U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x17U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x18U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x19U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1aU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1bU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1cU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1dU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1eU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1fU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i = 0x00000020U;
    VL_READMEM_N(true, 32, 16384, 0, "/home/yz87/CS3220_TA/Fall_2023/cs3220-labs/lab5/test/part5/alutest0.mem"s
                 ,  &(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*3:0*/, 64> Vpipeline__ConstPool__TABLE_h486bc076_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vpipeline__ConstPool__TABLE_hcec10f5e_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h29143c0b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h5064a2f5_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0;
    my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0;
    my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0;
    my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB = 
        ((0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   >> 6U))) ? ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                << 0x0000001aU) 
                                               | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                  >> 6U))
          : ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
              << 0x0000001aU) | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                 >> 6U)));
    vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE = vlSelfRef.__PVT__my_FE_stage__DOT__imem
        [(0x00003fffU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                         >> 2U))];
    if ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__aluop_reg))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__op3_fu = vlSelfRef.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z;
        vlSelfRef.__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb;
    } else {
        vlSelfRef.__PVT__my_DE_stage__DOT__op3_fu = vlSelfRef.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z;
        vlSelfRef.__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb;
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE 
        = (0x000000ffU & ((vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                           >> 2U) ^ (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR)));
    vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX 
        = (IData)((0U != (0x00030000U & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])));
    my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
             << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                       >> 0x00000018U)) + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x00000012U)));
    my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                >> 0x00000012U)) + 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                >> 0x00000012U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                >> 0x00000012U)) < 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                >> 0x00000012U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0 
        = VL_LTS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                           << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x00000012U)), 
                     ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4 
        = (IData)((0x00003300U == (0x00707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13 
        = (IData)((0x00503300U == (0x00707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20 
        = (IData)(((0x00100000U == (0x00700000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                   & (0U == (0x00feU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16 
        = (IData)((0x00501300U == (0x00707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE = 
        (((1U < vlSelfRef.__PVT__my_FE_stage__DOT__PHT
           [vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE]) 
          & ((vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG
              [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                               >> 2U))] == (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                            >> 6U)) 
             & vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID
             [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                              >> 2U))])) ? vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET
         [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                          >> 2U))] : ((IData)(4U) + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch));
    if ((1U & (~ ((((((((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U))) 
                        | (2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                       | (3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                      | (4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                     | (5U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) 
                    | (6U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) 
                   | (7U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U)))) 
                  | (8U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x00000012U))))))) {
        if ((1U & (~ ((((((((9U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U))) 
                            | (0x0aU == (0x0000003fU 
                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U)))) 
                           | (0x0bU == (0x0000003fU 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x00000012U)))) 
                          | (0x0cU == (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))) 
                         | (0x0dU == (0x0000003fU & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x00000012U)))) 
                        | (0x0eU == (0x0000003fU & 
                                     (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))) 
                       | (0x0fU == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U)))) 
                      | (0x10U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U))))))) {
            if (((((((((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U))) 
                       | (0x12U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U)))) 
                      | (0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) 
                     | (0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                    | (0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                   | (0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                  | ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U))) 
                     || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U))))) 
                 | (0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U))))) {
                if ((0x11U != (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) {
                    if ((0x12U != (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) {
                        if ((0x13U != (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))) {
                            if ((0x14U != (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) {
                                if ((0x15U != (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) {
                                    if ((0x16U != (0x0000003fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x00000012U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         >> 0x00000012U))) 
                                                    || (0x1bU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            >> 0x00000012U))))))) {
                                            vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                                                = my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                    = ((0x18U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0
                        : 0U);
            }
        }
    }
    if (((((((((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U))) 
               | (2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x00000012U)))) 
              | (3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x00000012U)))) 
             | (4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))) 
            | (5U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x00000012U)))) 
           | (6U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    >> 0x00000012U)))) 
          | (7U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x00000012U)))) 
         | (8U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x00000012U))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))
                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                : ((2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))
                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x00000012U)) 
                       - ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                           << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x00000012U)))
                    : ((3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))
                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x00000012U)) 
                           & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x00000012U)))
                        : ((4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))
                            ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0x0000000eU) | 
                                (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 >> 0x00000012U)) | 
                               ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x0000000eU) | 
                                (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                 >> 0x00000012U))) : 
                           ((5U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U)))
                             ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x0000000eU) | 
                                 (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x00000012U)) 
                                ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                    << 0x0000000eU) 
                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x00000012U)))
                             : ((6U == (0x0000003fU 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x00000012U)))
                                 ? ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                                     ? 1U : 0U) : (
                                                   (7U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        >> 0x00000012U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, 
                                                                  ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                    << 0x0000000eU) 
                                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      >> 0x00000012U)), 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                      >> 0x00000012U))))))))));
    } else if (((((((((9U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U))) 
                      | (0x0aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) 
                     | (0x0bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                    | (0x0cU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                   | (0x0dU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                  | (0x0eU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) 
                 | (0x0fU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) 
                | (0x10U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))
                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   >> (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x00000012U)))
                : ((0x0aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x00000012U)) 
                       << (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                    : ((0x0bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                        ? VL_MULS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x00000012U)), 
                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x0000000eU) 
                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                        : ((0x0cU == (0x0000003fU & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x00000012U)))
                            ? my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0
                            : ((0x0dU == (0x0000003fU 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x0000000eU) 
                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x00000012U)) 
                                   & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0x0000000eU) 
                                      | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 0x00000012U)))
                                : ((0x0eU == (0x0000003fU 
                                              & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x00000012U)) 
                                       | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 0x0000000eU) 
                                          | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0x00000012U)))
                                    : ((0x0fU == (0x0000003fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x00000012U)))
                                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x00000012U)) 
                                           ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               << 0x0000000eU) 
                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x00000012U)))
                                        : (VL_LTS_III(32, 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0x0000000eU) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x00000012U)), 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        << 0x0000000eU) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                          >> 0x00000012U)))
                                            ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U))) 
                      | (0x12U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) 
                     | (0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                    | (0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                   | (0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                  | (0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) 
                 | ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U))) 
                    || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U))))) 
                | (0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U))))) {
        if ((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x00000012U)) 
                    < ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                        << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x00000012U)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x00000012U)), 
                                 (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x00000012U)));
        } else if ((0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   >> (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0x00000012U)));
        } else if ((0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   << (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0x00000012U)));
        } else if ((0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                    << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0x00000012U));
        } else if ((0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0;
        } else if (((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U))) 
                    || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U))))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                    << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x00000018U));
        }
    } else {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x00000012U)))
                ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x00000012U))
                : 0U);
    }
    my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0 
        = (((0x1cU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))
             ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                  << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     >> 0x00000012U)) 
                == ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x00000012U)))
             : ((0x1dU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))
                 ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x00000012U)) 
                    != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x00000012U)))
                 : ((0x1eU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))
                     ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                     : ((0x1fU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))
                         ? VL_GTES_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x00000012U)), 
                                       ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x00000012U)))
                         : ((0x20U == (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))
                             ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0)
                             : (IData)(((0x00840000U 
                                         == (0x00fc0000U 
                                             & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                        & (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x00000012U)) 
                                           >= ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 0x0000000eU) 
                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x00000012U)))))))))) 
           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
              >> 0x00000011U));
    vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4) 
                                                   & (0U 
                                                      == 
                                                      (0x00feU 
                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                   ? 1U
                                                   : 
                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4) 
                                                    & (0x0040U 
                                                       == 
                                                       (0x00feU 
                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            ((0x00703300U 
                                                              == 
                                                              (0x00707f00U 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0x00feU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                     ? 3U
                                                     : 
                                                    ((IData)(
                                                             ((0x00603300U 
                                                               == 
                                                               (0x00707f00U 
                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x00feU 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              ((0x00403300U 
                                                                == 
                                                                (0x00707f00U 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x00feU 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                       ? 5U
                                                       : 
                                                      ((IData)(
                                                               ((0x00203300U 
                                                                 == 
                                                                 (0x00707f00U 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                & (0U 
                                                                   == 
                                                                   (0x00feU 
                                                                    & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                        ? 6U
                                                        : 
                                                       ((IData)(
                                                                ((0x00303300U 
                                                                  == 
                                                                  (0x00707f00U 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x00feU 
                                                                     & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                         ? 7U
                                                         : 
                                                        (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13) 
                                                          & (0x0040U 
                                                             == 
                                                             (0x00feU 
                                                              & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                          ? 8U
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13) 
                                                           & (0U 
                                                              == 
                                                              (0x00feU 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                           ? 9U
                                                           : 
                                                          ((IData)(
                                                                   ((0x00003300U 
                                                                     == 
                                                                     (0x00007f00U 
                                                                      & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                    & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20)))
                                                            ? 0x0aU
                                                            : 
                                                           (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4) 
                                                             & (2U 
                                                                == 
                                                                (0x00feU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0x0bU
                                                             : 
                                                            ((IData)(
                                                                     (0x00001300U 
                                                                      == 
                                                                      (0x00707f00U 
                                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0x0cU
                                                              : 
                                                             ((IData)(
                                                                      (0x00701300U 
                                                                       == 
                                                                       (0x00707f00U 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0x0dU
                                                               : 
                                                              ((IData)(
                                                                       (0x00601300U 
                                                                        == 
                                                                        (0x00707f00U 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0x0eU
                                                                : 
                                                               ((IData)(
                                                                        (0x00401300U 
                                                                         == 
                                                                         (0x00707f00U 
                                                                          & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0x0fU
                                                                 : 
                                                                ((IData)(
                                                                         (0x00201300U 
                                                                          == 
                                                                          (0x00707f00U 
                                                                           & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(
                                                                          (0x00301300U 
                                                                           == 
                                                                           (0x00707f00U 
                                                                            & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                   ? 0x11U
                                                                   : 
                                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16) 
                                                                    & (0x0040U 
                                                                       == 
                                                                       (0x00feU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                    ? 0x12U
                                                                    : 
                                                                   (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16) 
                                                                     & (0U 
                                                                        == 
                                                                        (0x00feU 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((IData)(
                                                                             ((0x00001300U 
                                                                               == 
                                                                               (0x00007f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                              & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20)))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x37U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U)))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x17U 
                                                                        == 
                                                                        (0x0000007fU 
                                                                         & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 8U)))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(
                                                                                (0x00200300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x00202300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x6fU 
                                                                           == 
                                                                           (0x0000007fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 8U)))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(
                                                                                (0x00006700U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x00006300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x00106300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x00406300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x1eU
                                                                               : 
                                                                              ((IData)(
                                                                                (0x00506300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(
                                                                                (0x00606300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00706300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00207300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00107300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__my_FE_stage__DOT__do_brjmp_AGEX 
        = (1U & ((IData)(my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0) 
                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                    >> 0x00000010U)));
    vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x00000012U)))
            ? my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0
            : ((0x1aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x00000012U)))
                ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                    << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x00000012U))
                : ((0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                    ? (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0)
                    : ((IData)(my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0)
                        ? my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0
                        : ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                            << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x00000018U))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE = 
        ((0U != (0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                >> 0x0000000fU))) & 
         ((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
          | ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
             | ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | ((3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                   | ((4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | ((5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | ((6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | ((0x0cU 
                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              | ((0x0dU 
                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                 | ((0x0eU 
                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    | ((0x0fU 
                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       | ((0x10U 
                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x11U 
                                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x12U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x13U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x14U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | ((0x15U 
                                                                          == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | ((0x16U 
                                                                             == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x17U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x19U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))));
    __Vtableidx1 = vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 
        Vpipeline__ConstPool__TABLE_h486bc076_0[__Vtableidx1];
    vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vpipeline__ConstPool__TABLE_hcec10f5e_0[__Vtableidx1];
    vlSelfRef.__PVT__from_AGEX_to_DE = ((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX) 
                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                           != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000018U))));
    __Vtableidx2 = vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE = 
        Vpipeline__ConstPool__TABLE_h29143c0b_0[__Vtableidx2];
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE = 
        Vpipeline__ConstPool__TABLE_h5064a2f5_0[__Vtableidx2];
    vlSelfRef.__PVT__from_DE_to_FE = ((((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x0000001fU 
                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x00000017U)))) 
                                       | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                             >> (0x0000001fU 
                                                 & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x0000001cU)))))) 
                                      | (IData)(vlSelfRef.__PVT__from_AGEX_to_DE));
}

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 812857792956672393ull);
    vlSelf->__PVT__from_DE_to_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414734384858919506ull);
    vlSelf->__PVT__from_AGEX_to_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2519706715303777601ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2590999655931444546ull);
    }
    VL_SCOPED_RAND_RESET_W(137, vlSelf->__PVT__my_FE_stage__DOT__FE_latch, __VscopeHash, 16724734215674187246ull);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14704622217992474899ull);
    vlSelf->__PVT__my_FE_stage__DOT__inst_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2614456735871709498ull);
    vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6758766444726075816ull);
    vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10962988922985332400ull);
    vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5495475968793447921ull);
    vlSelf->__PVT__my_FE_stage__DOT__do_brjmp_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16524130899998657795ull);
    vlSelf->__PVT__my_FE_stage__DOT__BHR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7762396466406797407ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__PHT[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15617420004451046826ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TAG[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 13482899700475034357ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_VALID[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7936968116275050157ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TARGET[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17246044309538133980ull);
    }
    vlSelf->__PVT__my_FE_stage__DOT__pc_xor_bhr_FE = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9287237368450356633ull);
    vlSelf->__PVT__my_FE_stage__DOT__num_brjmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14213793009368410016ull);
    vlSelf->__PVT__my_FE_stage__DOT__mis_pred = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1401459799338684293ull);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5776656098319616114ull);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6185495815363716569ull);
    VL_SCOPED_RAND_RESET_W(249, vlSelf->__PVT__my_DE_stage__DOT__DE_latch, __VscopeHash, 12720121764206633172ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6527157088466704871ull);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18007936897921350699ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11218727599284980111ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 783089451810364172ull);
    vlSelf->__PVT__my_DE_stage__DOT__regval_WB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5070650556380662180ull);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1249650228049212677ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3587661886766856571ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12338438627132944225ull);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14209109425183318264ull);
    vlSelf->__PVT__my_DE_stage__DOT__op3_fu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6208948520186991413ull);
    vlSelf->__PVT__my_DE_stage__DOT__op1_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7902342530580434223ull);
    vlSelf->__PVT__my_DE_stage__DOT__op2_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10290950268992744749ull);
    vlSelf->__PVT__my_DE_stage__DOT__aluop_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2842454272446643174ull);
    vlSelf->__PVT__my_DE_stage__DOT__csr_alu_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14288007179387819284ull);
    vlSelf->__PVT__my_DE_stage__DOT__alu_state_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 660645645437089652ull);
    vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3831243570589901782ull);
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch, __VscopeHash, 18426125699513857839ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10689303648146888781ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4634093393574144463ull);
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0 = 0;
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5716915382548216729ull);
    }
    VL_SCOPED_RAND_RESET_W(141, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch, __VscopeHash, 13271297185850210100ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3120219640403398145ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11907944760763968094ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7896821328185936897ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 745973153823118205ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15463103392937957015ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7347303952948426604ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3018808693731588540ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11552864503406937618ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13614827764848774196ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11668190910681379564ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16656963564465010090ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12537651522825622863ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17026476125920951928ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10048525467042694996ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17823674209629525630ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3888879374705874998ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10314442406914434941ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3507015382481694885ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3386552741391267474ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10285928906020334379ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8041417188600267509ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 293488595274669160ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 110153470566310106ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 7859130280401191529ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 17132425740521928014ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__count = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8286599095944309851ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 177813093956515291ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12480499926587855849ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14316738008631564288ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1331671890065820909ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17138749179499567174ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6796697520382102449ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18266917703281454780ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3697452564925992337ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 53855553058445012ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1315277691799820540ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8342907129260888008ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9322656861029100085ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8471445960690945045ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7415474157946033439ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15929627007242057250ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11837895448521272876ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16686487822054226981ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11706660007030324636ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6642740285742065167ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3211534613167723070ull);
    vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 16709185230543699704ull);
    VL_ZERO_RESET_W(137, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__VdlyVal__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__VdlyDim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__VdlySet__my_MEM_stage__DOT__dmem__v0 = 0;
}
