// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY___024ROOT_H_
#define VERILATED_VSYSTOLIC_ARRAY___024ROOT_H_  // guard

#include "verilated.h"


class Vsystolic_array__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_array___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_in,0,0);
        VL_IN8(rst_accumulator_rdy_in,0,0);
        VL_IN8(stream_out_rdy_in_in,0,0);
        CData/*0:0*/ systolic_array__DOT__rst;
        CData/*0:0*/ systolic_array__DOT__rst_accumulator_rdy;
        CData/*0:0*/ systolic_array__DOT__stream_out_rdy;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out;
    };
    struct {
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out;
        CData/*0:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out;
        CData/*7:0*/ systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out;
        CData/*3:0*/ systolic_array__DOT__u_ctrl__DOT__rst_col_skew;
        CData/*0:0*/ systolic_array__DOT__u_ctrl__DOT____Vlvbound_h00c09bf4__1;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT____Vlvbound_h922f73f9__1;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT____Vlvbound_h922f73f9__1;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
    };
    struct {
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT____Vlvbound_h922f73f9__1;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT____Vlvbound_h922f73f9__1;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__adder_b_in;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(row_data_in_in,31,0);
        VL_IN(col_data_in_in,31,0);
        VL_OUT(row_data_out,31,0);
        IData/*31:0*/ systolic_array__DOT__row_data_in;
        IData/*31:0*/ systolic_array__DOT__col_data_in;
        IData/*31:0*/ systolic_array__DOT__u_ctrl__DOT__cs;
        IData/*31:0*/ systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__s;
        IData/*31:0*/ systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__r;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
    };
    struct {
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 4> systolic_array__DOT__w_row_data;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 5> systolic_array__DOT__w_col_data;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5> systolic_array__DOT__w_rst_acc;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 5> systolic_array__DOT__w_stream;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 4> systolic_array__DOT__w_psum;
        VlUnpacked<CData/*0:0*/, 9> systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain;
        VlUnpacked<CData/*7:0*/, 3> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 1> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 3> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 1> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 3> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 1> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 3> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 1> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 4> systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsystolic_array__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_array___024root(Vsystolic_array__Syms* symsp, const char* v__name);
    ~Vsystolic_array___024root();
    VL_UNCOPYABLE(Vsystolic_array___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
