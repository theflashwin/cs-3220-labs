// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_comb__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_comb__TOP__pipeline__0\n"); );
    // Body
    if ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__aluop_reg))) {
        vlSelf->__PVT__my_DE_stage__DOT__op3_fu = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z;
        vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid 
            = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb;
    } else {
        vlSelf->__PVT__my_DE_stage__DOT__op3_fu = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z;
        vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid 
            = vlSelf->__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb;
    }
}
