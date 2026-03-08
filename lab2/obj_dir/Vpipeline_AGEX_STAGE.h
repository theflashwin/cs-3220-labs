// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE_AGEX_STAGE_H_
#define VERILATED_VPIPELINE_AGEX_STAGE_H_  // guard

#include "verilated.h"


class Vpipeline__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpipeline_AGEX_STAGE final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__from_MEM_to_AGEX,0,0);
    VL_IN8(__PVT__from_WB_to_AGEX,0,0);
    VL_OUT8(__PVT__from_AGEX_to_DE,0,0);
    CData/*0:0*/ __PVT__was_branch_inst;
    CData/*0:0*/ __VdfgExtracted_h047d73e2__0;
    CData/*0:0*/ __VdfgExtracted_h048118d3__0;
    CData/*0:0*/ __VdfgTmp_hb628d134__0;
    VL_INW(__PVT__from_DE_latch,280,0,9);
    VL_OUTW(__PVT__AGEX_latch_out,174,0,6);
    VL_OUTW(__PVT__from_AGEX_to_FE,106,0,4);
    VlWide<6>/*174:0*/ __PVT__AGEX_latch;
    IData/*31:0*/ __PVT__aluout_AGEX;
    IData/*31:0*/ __PVT__memaddr_AGEX;
    IData/*31:0*/ __PVT__br_target_AGEX;
    IData/*31:0*/ num_correctly_predicted_branches;
    IData/*31:0*/ num_branch_instructions;

    // INTERNAL VARIABLES
    Vpipeline__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpipeline_AGEX_STAGE(Vpipeline__Syms* symsp, const char* v__name);
    ~Vpipeline_AGEX_STAGE();
    VL_UNCOPYABLE(Vpipeline_AGEX_STAGE);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
