// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+607,"rst_in", false,-1);
    tracep->declBit(c+608,"rst_accumulator_rdy_in", false,-1);
    tracep->declBit(c+609,"stream_out_rdy_in_in", false,-1);
    tracep->declBus(c+610,"row_data_in_in", false,-1, 31,0);
    tracep->declBus(c+611,"col_data_in_in", false,-1, 31,0);
    tracep->declBus(c+612,"row_data_out", false,-1, 31,0);
    tracep->pushNamePrefix("systolic_array ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ACC_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+607,"rst_in", false,-1);
    tracep->declBit(c+608,"rst_accumulator_rdy_in", false,-1);
    tracep->declBit(c+609,"stream_out_rdy_in_in", false,-1);
    tracep->declBus(c+610,"row_data_in_in", false,-1, 31,0);
    tracep->declBus(c+611,"col_data_in_in", false,-1, 31,0);
    tracep->declBus(c+612,"row_data_out", false,-1, 31,0);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"rst_accumulator_rdy", false,-1);
    tracep->declBit(c+3,"stream_out_rdy", false,-1);
    tracep->declBus(c+4,"row_data_in", false,-1, 31,0);
    tracep->declBus(c+5,"col_data_in", false,-1, 31,0);
    tracep->declBus(c+6,"col_rst_accumulator", false,-1, 3,0);
    tracep->declBus(c+7,"col_stream_out_rdy", false,-1, 3,0);
    tracep->pushNamePrefix("w_row_data");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+8,"[0]", false,-1, 7,0);
    tracep->declBus(c+9,"[1]", false,-1, 7,0);
    tracep->declBus(c+10,"[2]", false,-1, 7,0);
    tracep->declBus(c+11,"[3]", false,-1, 7,0);
    tracep->declBus(c+12,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+13,"[0]", false,-1, 7,0);
    tracep->declBus(c+14,"[1]", false,-1, 7,0);
    tracep->declBus(c+15,"[2]", false,-1, 7,0);
    tracep->declBus(c+16,"[3]", false,-1, 7,0);
    tracep->declBus(c+17,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+18,"[0]", false,-1, 7,0);
    tracep->declBus(c+19,"[1]", false,-1, 7,0);
    tracep->declBus(c+20,"[2]", false,-1, 7,0);
    tracep->declBus(c+21,"[3]", false,-1, 7,0);
    tracep->declBus(c+22,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+23,"[0]", false,-1, 7,0);
    tracep->declBus(c+24,"[1]", false,-1, 7,0);
    tracep->declBus(c+25,"[2]", false,-1, 7,0);
    tracep->declBus(c+26,"[3]", false,-1, 7,0);
    tracep->declBus(c+27,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("w_col_data");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+28,"[0]", false,-1, 7,0);
    tracep->declBus(c+29,"[1]", false,-1, 7,0);
    tracep->declBus(c+30,"[2]", false,-1, 7,0);
    tracep->declBus(c+31,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+32,"[0]", false,-1, 7,0);
    tracep->declBus(c+33,"[1]", false,-1, 7,0);
    tracep->declBus(c+34,"[2]", false,-1, 7,0);
    tracep->declBus(c+35,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+36,"[0]", false,-1, 7,0);
    tracep->declBus(c+37,"[1]", false,-1, 7,0);
    tracep->declBus(c+38,"[2]", false,-1, 7,0);
    tracep->declBus(c+39,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+40,"[0]", false,-1, 7,0);
    tracep->declBus(c+41,"[1]", false,-1, 7,0);
    tracep->declBus(c+42,"[2]", false,-1, 7,0);
    tracep->declBus(c+43,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declBus(c+44,"[0]", false,-1, 7,0);
    tracep->declBus(c+45,"[1]", false,-1, 7,0);
    tracep->declBus(c+46,"[2]", false,-1, 7,0);
    tracep->declBus(c+47,"[3]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("w_rst_acc");
    tracep->pushNamePrefix("[0]");
    tracep->declBit(c+48,"[0]", false,-1);
    tracep->declBit(c+49,"[1]", false,-1);
    tracep->declBit(c+50,"[2]", false,-1);
    tracep->declBit(c+51,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBit(c+52,"[0]", false,-1);
    tracep->declBit(c+53,"[1]", false,-1);
    tracep->declBit(c+54,"[2]", false,-1);
    tracep->declBit(c+55,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBit(c+56,"[0]", false,-1);
    tracep->declBit(c+57,"[1]", false,-1);
    tracep->declBit(c+58,"[2]", false,-1);
    tracep->declBit(c+59,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBit(c+60,"[0]", false,-1);
    tracep->declBit(c+61,"[1]", false,-1);
    tracep->declBit(c+62,"[2]", false,-1);
    tracep->declBit(c+63,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declBit(c+64,"[0]", false,-1);
    tracep->declBit(c+65,"[1]", false,-1);
    tracep->declBit(c+66,"[2]", false,-1);
    tracep->declBit(c+67,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("w_stream");
    tracep->pushNamePrefix("[0]");
    tracep->declBit(c+68,"[0]", false,-1);
    tracep->declBit(c+69,"[1]", false,-1);
    tracep->declBit(c+70,"[2]", false,-1);
    tracep->declBit(c+71,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBit(c+72,"[0]", false,-1);
    tracep->declBit(c+73,"[1]", false,-1);
    tracep->declBit(c+74,"[2]", false,-1);
    tracep->declBit(c+75,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBit(c+76,"[0]", false,-1);
    tracep->declBit(c+77,"[1]", false,-1);
    tracep->declBit(c+78,"[2]", false,-1);
    tracep->declBit(c+79,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBit(c+80,"[0]", false,-1);
    tracep->declBit(c+81,"[1]", false,-1);
    tracep->declBit(c+82,"[2]", false,-1);
    tracep->declBit(c+83,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declBit(c+84,"[0]", false,-1);
    tracep->declBit(c+85,"[1]", false,-1);
    tracep->declBit(c+86,"[2]", false,-1);
    tracep->declBit(c+87,"[3]", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("w_psum");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+88,"[0]", false,-1, 7,0);
    tracep->declBus(c+89,"[1]", false,-1, 7,0);
    tracep->declBus(c+90,"[2]", false,-1, 7,0);
    tracep->declBus(c+91,"[3]", false,-1, 7,0);
    tracep->declBus(c+92,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+93,"[0]", false,-1, 7,0);
    tracep->declBus(c+94,"[1]", false,-1, 7,0);
    tracep->declBus(c+95,"[2]", false,-1, 7,0);
    tracep->declBus(c+96,"[3]", false,-1, 7,0);
    tracep->declBus(c+97,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+98,"[0]", false,-1, 7,0);
    tracep->declBus(c+99,"[1]", false,-1, 7,0);
    tracep->declBus(c+100,"[2]", false,-1, 7,0);
    tracep->declBus(c+101,"[3]", false,-1, 7,0);
    tracep->declBus(c+102,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+103,"[0]", false,-1, 7,0);
    tracep->declBus(c+104,"[1]", false,-1, 7,0);
    tracep->declBus(c+105,"[2]", false,-1, 7,0);
    tracep->declBus(c+106,"[3]", false,-1, 7,0);
    tracep->declBus(c+107,"[4]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_mac_row[0] ");
    tracep->pushNamePrefix("gen_mac_col[0] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+614,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+614,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+108,"rst_accumulator_in", false,-1);
    tracep->declBit(c+109,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+110,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+111,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+112,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+113,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+114,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+115,"rst_accumulator_out", false,-1);
    tracep->declBit(c+116,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+117,"psum_out", false,-1, 7,0);
    tracep->declBus(c+118,"mult_out", false,-1, 7,0);
    tracep->declBit(c+119,"mult_done", false,-1);
    tracep->declBus(c+120,"add_out", false,-1, 7,0);
    tracep->declBit(c+121,"add_done", false,-1);
    tracep->declBus(c+122,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+618,"DELAY", false,-1, 31,0);
    tracep->declBus(c+123,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+112,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+124,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+125+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+128,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+119,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+118,"a_in", false,-1, 7,0);
    tracep->declBus(c+122,"b_in", false,-1, 7,0);
    tracep->declBus(c+120,"out", false,-1, 7,0);
    tracep->declBit(c+121,"done", false,-1);
    tracep->declBus(c+120,"add", false,-1, 7,0);
    tracep->declBit(c+129,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+110,"a_in", false,-1, 7,0);
    tracep->declBus(c+111,"b_in", false,-1, 7,0);
    tracep->declBus(c+118,"out", false,-1, 7,0);
    tracep->declBit(c+119,"done", false,-1);
    tracep->declBus(c+130,"mult", false,-1, 7,0);
    tracep->declBit(c+131,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+132+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+136+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[1] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+616,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+614,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+140,"rst_accumulator_in", false,-1);
    tracep->declBit(c+141,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+142,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+143,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+144,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+145,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+146,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+147,"rst_accumulator_out", false,-1);
    tracep->declBit(c+148,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+149,"psum_out", false,-1, 7,0);
    tracep->declBus(c+150,"mult_out", false,-1, 7,0);
    tracep->declBit(c+151,"mult_done", false,-1);
    tracep->declBus(c+152,"add_out", false,-1, 7,0);
    tracep->declBit(c+153,"add_done", false,-1);
    tracep->declBus(c+154,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+621,"DELAY", false,-1, 31,0);
    tracep->declBus(c+155,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+144,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+156,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+157+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+159,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+151,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+150,"a_in", false,-1, 7,0);
    tracep->declBus(c+154,"b_in", false,-1, 7,0);
    tracep->declBus(c+152,"out", false,-1, 7,0);
    tracep->declBit(c+153,"done", false,-1);
    tracep->declBus(c+152,"add", false,-1, 7,0);
    tracep->declBit(c+160,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+142,"a_in", false,-1, 7,0);
    tracep->declBus(c+143,"b_in", false,-1, 7,0);
    tracep->declBus(c+150,"out", false,-1, 7,0);
    tracep->declBit(c+151,"done", false,-1);
    tracep->declBus(c+161,"mult", false,-1, 7,0);
    tracep->declBit(c+162,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+163+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+167+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[2] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+622,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+614,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+171,"rst_accumulator_in", false,-1);
    tracep->declBit(c+172,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+173,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+174,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+175,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+176,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+177,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+178,"rst_accumulator_out", false,-1);
    tracep->declBit(c+179,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+180,"psum_out", false,-1, 7,0);
    tracep->declBus(c+181,"mult_out", false,-1, 7,0);
    tracep->declBit(c+182,"mult_done", false,-1);
    tracep->declBus(c+183,"add_out", false,-1, 7,0);
    tracep->declBit(c+184,"add_done", false,-1);
    tracep->declBus(c+185,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+623,"DELAY", false,-1, 31,0);
    tracep->declBus(c+186,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+175,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+187,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+188+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+189,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+182,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+181,"a_in", false,-1, 7,0);
    tracep->declBus(c+185,"b_in", false,-1, 7,0);
    tracep->declBus(c+183,"out", false,-1, 7,0);
    tracep->declBit(c+184,"done", false,-1);
    tracep->declBus(c+183,"add", false,-1, 7,0);
    tracep->declBit(c+190,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+173,"a_in", false,-1, 7,0);
    tracep->declBus(c+174,"b_in", false,-1, 7,0);
    tracep->declBus(c+181,"out", false,-1, 7,0);
    tracep->declBit(c+182,"done", false,-1);
    tracep->declBus(c+191,"mult", false,-1, 7,0);
    tracep->declBit(c+192,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+193+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+197+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[3] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+624,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+614,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+201,"rst_accumulator_in", false,-1);
    tracep->declBit(c+202,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+203,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+204,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+205,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+206,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+207,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+208,"rst_accumulator_out", false,-1);
    tracep->declBit(c+209,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+210,"psum_out", false,-1, 7,0);
    tracep->declBus(c+211,"mult_out", false,-1, 7,0);
    tracep->declBit(c+212,"mult_done", false,-1);
    tracep->declBus(c+213,"add_out", false,-1, 7,0);
    tracep->declBit(c+214,"add_done", false,-1);
    tracep->declBus(c+215,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+625,"DELAY", false,-1, 31,0);
    tracep->declBus(c+213,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+205,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+216,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+212,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+211,"a_in", false,-1, 7,0);
    tracep->declBus(c+215,"b_in", false,-1, 7,0);
    tracep->declBus(c+213,"out", false,-1, 7,0);
    tracep->declBit(c+214,"done", false,-1);
    tracep->declBus(c+213,"add", false,-1, 7,0);
    tracep->declBit(c+217,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+203,"a_in", false,-1, 7,0);
    tracep->declBus(c+204,"b_in", false,-1, 7,0);
    tracep->declBus(c+211,"out", false,-1, 7,0);
    tracep->declBit(c+212,"done", false,-1);
    tracep->declBus(c+218,"mult", false,-1, 7,0);
    tracep->declBit(c+219,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+220+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+224+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("gen_mac_row[1] ");
    tracep->pushNamePrefix("gen_mac_col[0] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+614,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+616,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+228,"rst_accumulator_in", false,-1);
    tracep->declBit(c+229,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+230,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+231,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+232,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+233,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+234,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+235,"rst_accumulator_out", false,-1);
    tracep->declBit(c+236,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+237,"psum_out", false,-1, 7,0);
    tracep->declBus(c+238,"mult_out", false,-1, 7,0);
    tracep->declBit(c+239,"mult_done", false,-1);
    tracep->declBus(c+240,"add_out", false,-1, 7,0);
    tracep->declBit(c+241,"add_done", false,-1);
    tracep->declBus(c+242,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+618,"DELAY", false,-1, 31,0);
    tracep->declBus(c+243,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+232,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+244,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+245+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+248,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+239,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+238,"a_in", false,-1, 7,0);
    tracep->declBus(c+242,"b_in", false,-1, 7,0);
    tracep->declBus(c+240,"out", false,-1, 7,0);
    tracep->declBit(c+241,"done", false,-1);
    tracep->declBus(c+240,"add", false,-1, 7,0);
    tracep->declBit(c+249,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+230,"a_in", false,-1, 7,0);
    tracep->declBus(c+231,"b_in", false,-1, 7,0);
    tracep->declBus(c+238,"out", false,-1, 7,0);
    tracep->declBit(c+239,"done", false,-1);
    tracep->declBus(c+250,"mult", false,-1, 7,0);
    tracep->declBit(c+251,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+252+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+256+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[1] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+616,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+616,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+260,"rst_accumulator_in", false,-1);
    tracep->declBit(c+261,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+262,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+263,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+264,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+265,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+266,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+267,"rst_accumulator_out", false,-1);
    tracep->declBit(c+268,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+269,"psum_out", false,-1, 7,0);
    tracep->declBus(c+270,"mult_out", false,-1, 7,0);
    tracep->declBit(c+271,"mult_done", false,-1);
    tracep->declBus(c+272,"add_out", false,-1, 7,0);
    tracep->declBit(c+273,"add_done", false,-1);
    tracep->declBus(c+274,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+621,"DELAY", false,-1, 31,0);
    tracep->declBus(c+275,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+264,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+276,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+277+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+279,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+271,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+270,"a_in", false,-1, 7,0);
    tracep->declBus(c+274,"b_in", false,-1, 7,0);
    tracep->declBus(c+272,"out", false,-1, 7,0);
    tracep->declBit(c+273,"done", false,-1);
    tracep->declBus(c+272,"add", false,-1, 7,0);
    tracep->declBit(c+280,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+262,"a_in", false,-1, 7,0);
    tracep->declBus(c+263,"b_in", false,-1, 7,0);
    tracep->declBus(c+270,"out", false,-1, 7,0);
    tracep->declBit(c+271,"done", false,-1);
    tracep->declBus(c+281,"mult", false,-1, 7,0);
    tracep->declBit(c+282,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+283+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+287+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[2] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+622,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+616,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+291,"rst_accumulator_in", false,-1);
    tracep->declBit(c+292,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+293,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+294,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+295,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+296,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+297,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+298,"rst_accumulator_out", false,-1);
    tracep->declBit(c+299,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+300,"psum_out", false,-1, 7,0);
    tracep->declBus(c+301,"mult_out", false,-1, 7,0);
    tracep->declBit(c+302,"mult_done", false,-1);
    tracep->declBus(c+303,"add_out", false,-1, 7,0);
    tracep->declBit(c+304,"add_done", false,-1);
    tracep->declBus(c+305,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+623,"DELAY", false,-1, 31,0);
    tracep->declBus(c+306,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+295,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+307,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+308+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+309,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+302,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+301,"a_in", false,-1, 7,0);
    tracep->declBus(c+305,"b_in", false,-1, 7,0);
    tracep->declBus(c+303,"out", false,-1, 7,0);
    tracep->declBit(c+304,"done", false,-1);
    tracep->declBus(c+303,"add", false,-1, 7,0);
    tracep->declBit(c+310,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+293,"a_in", false,-1, 7,0);
    tracep->declBus(c+294,"b_in", false,-1, 7,0);
    tracep->declBus(c+301,"out", false,-1, 7,0);
    tracep->declBit(c+302,"done", false,-1);
    tracep->declBus(c+311,"mult", false,-1, 7,0);
    tracep->declBit(c+312,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+313+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+317+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[3] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+624,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+616,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+321,"rst_accumulator_in", false,-1);
    tracep->declBit(c+322,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+323,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+324,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+325,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+326,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+327,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+328,"rst_accumulator_out", false,-1);
    tracep->declBit(c+329,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+330,"psum_out", false,-1, 7,0);
    tracep->declBus(c+331,"mult_out", false,-1, 7,0);
    tracep->declBit(c+332,"mult_done", false,-1);
    tracep->declBus(c+333,"add_out", false,-1, 7,0);
    tracep->declBit(c+334,"add_done", false,-1);
    tracep->declBus(c+335,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+625,"DELAY", false,-1, 31,0);
    tracep->declBus(c+333,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+325,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+336,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+332,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+331,"a_in", false,-1, 7,0);
    tracep->declBus(c+335,"b_in", false,-1, 7,0);
    tracep->declBus(c+333,"out", false,-1, 7,0);
    tracep->declBit(c+334,"done", false,-1);
    tracep->declBus(c+333,"add", false,-1, 7,0);
    tracep->declBit(c+337,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+323,"a_in", false,-1, 7,0);
    tracep->declBus(c+324,"b_in", false,-1, 7,0);
    tracep->declBus(c+331,"out", false,-1, 7,0);
    tracep->declBit(c+332,"done", false,-1);
    tracep->declBus(c+338,"mult", false,-1, 7,0);
    tracep->declBit(c+339,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+340+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+344+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("gen_mac_row[2] ");
    tracep->pushNamePrefix("gen_mac_col[0] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+614,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+622,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+348,"rst_accumulator_in", false,-1);
    tracep->declBit(c+349,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+350,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+351,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+352,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+353,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+354,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+355,"rst_accumulator_out", false,-1);
    tracep->declBit(c+356,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+357,"psum_out", false,-1, 7,0);
    tracep->declBus(c+358,"mult_out", false,-1, 7,0);
    tracep->declBit(c+359,"mult_done", false,-1);
    tracep->declBus(c+360,"add_out", false,-1, 7,0);
    tracep->declBit(c+361,"add_done", false,-1);
    tracep->declBus(c+362,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+618,"DELAY", false,-1, 31,0);
    tracep->declBus(c+363,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+352,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+364,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+365+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+368,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+359,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+358,"a_in", false,-1, 7,0);
    tracep->declBus(c+362,"b_in", false,-1, 7,0);
    tracep->declBus(c+360,"out", false,-1, 7,0);
    tracep->declBit(c+361,"done", false,-1);
    tracep->declBus(c+360,"add", false,-1, 7,0);
    tracep->declBit(c+369,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+350,"a_in", false,-1, 7,0);
    tracep->declBus(c+351,"b_in", false,-1, 7,0);
    tracep->declBus(c+358,"out", false,-1, 7,0);
    tracep->declBit(c+359,"done", false,-1);
    tracep->declBus(c+370,"mult", false,-1, 7,0);
    tracep->declBit(c+371,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+372+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+376+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[1] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+616,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+622,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+380,"rst_accumulator_in", false,-1);
    tracep->declBit(c+381,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+382,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+383,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+384,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+385,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+386,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+387,"rst_accumulator_out", false,-1);
    tracep->declBit(c+388,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+389,"psum_out", false,-1, 7,0);
    tracep->declBus(c+390,"mult_out", false,-1, 7,0);
    tracep->declBit(c+391,"mult_done", false,-1);
    tracep->declBus(c+392,"add_out", false,-1, 7,0);
    tracep->declBit(c+393,"add_done", false,-1);
    tracep->declBus(c+394,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+621,"DELAY", false,-1, 31,0);
    tracep->declBus(c+395,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+384,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+396,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+397+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+399,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+391,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+390,"a_in", false,-1, 7,0);
    tracep->declBus(c+394,"b_in", false,-1, 7,0);
    tracep->declBus(c+392,"out", false,-1, 7,0);
    tracep->declBit(c+393,"done", false,-1);
    tracep->declBus(c+392,"add", false,-1, 7,0);
    tracep->declBit(c+400,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+382,"a_in", false,-1, 7,0);
    tracep->declBus(c+383,"b_in", false,-1, 7,0);
    tracep->declBus(c+390,"out", false,-1, 7,0);
    tracep->declBit(c+391,"done", false,-1);
    tracep->declBus(c+401,"mult", false,-1, 7,0);
    tracep->declBit(c+402,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+403+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+407+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[2] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+622,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+622,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+411,"rst_accumulator_in", false,-1);
    tracep->declBit(c+412,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+413,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+414,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+415,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+416,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+417,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+418,"rst_accumulator_out", false,-1);
    tracep->declBit(c+419,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+420,"psum_out", false,-1, 7,0);
    tracep->declBus(c+421,"mult_out", false,-1, 7,0);
    tracep->declBit(c+422,"mult_done", false,-1);
    tracep->declBus(c+423,"add_out", false,-1, 7,0);
    tracep->declBit(c+424,"add_done", false,-1);
    tracep->declBus(c+425,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+623,"DELAY", false,-1, 31,0);
    tracep->declBus(c+426,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+415,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+427,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+428+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+429,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+422,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+421,"a_in", false,-1, 7,0);
    tracep->declBus(c+425,"b_in", false,-1, 7,0);
    tracep->declBus(c+423,"out", false,-1, 7,0);
    tracep->declBit(c+424,"done", false,-1);
    tracep->declBus(c+423,"add", false,-1, 7,0);
    tracep->declBit(c+430,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+413,"a_in", false,-1, 7,0);
    tracep->declBus(c+414,"b_in", false,-1, 7,0);
    tracep->declBus(c+421,"out", false,-1, 7,0);
    tracep->declBit(c+422,"done", false,-1);
    tracep->declBus(c+431,"mult", false,-1, 7,0);
    tracep->declBit(c+432,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+433+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+437+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[3] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+624,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+622,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+441,"rst_accumulator_in", false,-1);
    tracep->declBit(c+442,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+443,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+444,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+445,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+446,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+447,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+448,"rst_accumulator_out", false,-1);
    tracep->declBit(c+449,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+450,"psum_out", false,-1, 7,0);
    tracep->declBus(c+451,"mult_out", false,-1, 7,0);
    tracep->declBit(c+452,"mult_done", false,-1);
    tracep->declBus(c+453,"add_out", false,-1, 7,0);
    tracep->declBit(c+454,"add_done", false,-1);
    tracep->declBus(c+455,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+625,"DELAY", false,-1, 31,0);
    tracep->declBus(c+453,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+445,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+456,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+452,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+451,"a_in", false,-1, 7,0);
    tracep->declBus(c+455,"b_in", false,-1, 7,0);
    tracep->declBus(c+453,"out", false,-1, 7,0);
    tracep->declBit(c+454,"done", false,-1);
    tracep->declBus(c+453,"add", false,-1, 7,0);
    tracep->declBit(c+457,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+443,"a_in", false,-1, 7,0);
    tracep->declBus(c+444,"b_in", false,-1, 7,0);
    tracep->declBus(c+451,"out", false,-1, 7,0);
    tracep->declBit(c+452,"done", false,-1);
    tracep->declBus(c+458,"mult", false,-1, 7,0);
    tracep->declBit(c+459,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+460+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+464+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("gen_mac_row[3] ");
    tracep->pushNamePrefix("gen_mac_col[0] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+614,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+624,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+468,"rst_accumulator_in", false,-1);
    tracep->declBit(c+469,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+470,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+471,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+472,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+473,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+474,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+475,"rst_accumulator_out", false,-1);
    tracep->declBit(c+476,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+477,"psum_out", false,-1, 7,0);
    tracep->declBus(c+478,"mult_out", false,-1, 7,0);
    tracep->declBit(c+479,"mult_done", false,-1);
    tracep->declBus(c+480,"add_out", false,-1, 7,0);
    tracep->declBit(c+481,"add_done", false,-1);
    tracep->declBus(c+482,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+618,"DELAY", false,-1, 31,0);
    tracep->declBus(c+483,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+472,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+484,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+485+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+488,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+479,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+478,"a_in", false,-1, 7,0);
    tracep->declBus(c+482,"b_in", false,-1, 7,0);
    tracep->declBus(c+480,"out", false,-1, 7,0);
    tracep->declBit(c+481,"done", false,-1);
    tracep->declBus(c+480,"add", false,-1, 7,0);
    tracep->declBit(c+489,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+470,"a_in", false,-1, 7,0);
    tracep->declBus(c+471,"b_in", false,-1, 7,0);
    tracep->declBus(c+478,"out", false,-1, 7,0);
    tracep->declBit(c+479,"done", false,-1);
    tracep->declBus(c+490,"mult", false,-1, 7,0);
    tracep->declBit(c+491,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+492+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+496+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[1] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+616,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+624,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+500,"rst_accumulator_in", false,-1);
    tracep->declBit(c+501,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+502,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+503,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+504,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+505,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+506,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+507,"rst_accumulator_out", false,-1);
    tracep->declBit(c+508,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+509,"psum_out", false,-1, 7,0);
    tracep->declBus(c+510,"mult_out", false,-1, 7,0);
    tracep->declBit(c+511,"mult_done", false,-1);
    tracep->declBus(c+512,"add_out", false,-1, 7,0);
    tracep->declBit(c+513,"add_done", false,-1);
    tracep->declBus(c+514,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+621,"DELAY", false,-1, 31,0);
    tracep->declBus(c+515,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+504,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+516,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+517+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+519,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+511,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+510,"a_in", false,-1, 7,0);
    tracep->declBus(c+514,"b_in", false,-1, 7,0);
    tracep->declBus(c+512,"out", false,-1, 7,0);
    tracep->declBit(c+513,"done", false,-1);
    tracep->declBus(c+512,"add", false,-1, 7,0);
    tracep->declBit(c+520,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+502,"a_in", false,-1, 7,0);
    tracep->declBus(c+503,"b_in", false,-1, 7,0);
    tracep->declBus(c+510,"out", false,-1, 7,0);
    tracep->declBit(c+511,"done", false,-1);
    tracep->declBus(c+521,"mult", false,-1, 7,0);
    tracep->declBit(c+522,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+523+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+527+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[2] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+622,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+624,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+531,"rst_accumulator_in", false,-1);
    tracep->declBit(c+532,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+533,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+534,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+535,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+536,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+537,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+538,"rst_accumulator_out", false,-1);
    tracep->declBit(c+539,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+540,"psum_out", false,-1, 7,0);
    tracep->declBus(c+541,"mult_out", false,-1, 7,0);
    tracep->declBit(c+542,"mult_done", false,-1);
    tracep->declBus(c+543,"add_out", false,-1, 7,0);
    tracep->declBit(c+544,"add_done", false,-1);
    tracep->declBus(c+545,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+623,"DELAY", false,-1, 31,0);
    tracep->declBus(c+546,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+535,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+547,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("gen_delay ");
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+548+i*1,"delay_chain", true,(i+0), 7,0);
    }
    tracep->declBus(c+549,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+542,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+541,"a_in", false,-1, 7,0);
    tracep->declBus(c+545,"b_in", false,-1, 7,0);
    tracep->declBus(c+543,"out", false,-1, 7,0);
    tracep->declBit(c+544,"done", false,-1);
    tracep->declBus(c+543,"add", false,-1, 7,0);
    tracep->declBit(c+550,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+533,"a_in", false,-1, 7,0);
    tracep->declBus(c+534,"b_in", false,-1, 7,0);
    tracep->declBus(c+541,"out", false,-1, 7,0);
    tracep->declBit(c+542,"done", false,-1);
    tracep->declBus(c+551,"mult", false,-1, 7,0);
    tracep->declBit(c+552,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+553+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+557+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("gen_mac_col[3] ");
    tracep->pushNamePrefix("u_mac ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+617,"K", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+624,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+624,"ROWS_IDX", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+561,"rst_accumulator_in", false,-1);
    tracep->declBit(c+562,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+563,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+564,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+565,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+566,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+567,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+568,"rst_accumulator_out", false,-1);
    tracep->declBit(c+569,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+570,"psum_out", false,-1, 7,0);
    tracep->declBus(c+571,"mult_out", false,-1, 7,0);
    tracep->declBit(c+572,"mult_done", false,-1);
    tracep->declBus(c+573,"add_out", false,-1, 7,0);
    tracep->declBit(c+574,"add_done", false,-1);
    tracep->declBus(c+575,"adder_b_in", false,-1, 7,0);
    tracep->declBus(c+625,"DELAY", false,-1, 31,0);
    tracep->declBus(c+573,"delayed_acc", false,-1, 7,0);
    tracep->declBus(c+565,"bypass_extended", false,-1, 7,0);
    tracep->declBus(c+576,"mux_out", false,-1, 7,0);
    tracep->pushNamePrefix("u_add ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+616,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+572,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+571,"a_in", false,-1, 7,0);
    tracep->declBus(c+575,"b_in", false,-1, 7,0);
    tracep->declBus(c+573,"out", false,-1, 7,0);
    tracep->declBit(c+574,"done", false,-1);
    tracep->declBus(c+573,"add", false,-1, 7,0);
    tracep->declBit(c+577,"en_reg", false,-1);
    tracep->declBus(c+613,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+613,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mult ");
    tracep->declBus(c+613,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+614,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+613,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+615,"DELAY", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+620,"en", false,-1);
    tracep->declBit(c+619,"stall", false,-1);
    tracep->declBus(c+563,"a_in", false,-1, 7,0);
    tracep->declBus(c+564,"b_in", false,-1, 7,0);
    tracep->declBus(c+571,"out", false,-1, 7,0);
    tracep->declBit(c+572,"done", false,-1);
    tracep->declBus(c+578,"mult", false,-1, 7,0);
    tracep->declBit(c+579,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+580+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+584+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("u_ctrl ");
    tracep->declBus(c+613,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+617,"ROWS", false,-1, 31,0);
    tracep->declBus(c+617,"COLS", false,-1, 31,0);
    tracep->declBus(c+615,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+616,"ACC_LAT", false,-1, 31,0);
    tracep->declBit(c+606,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"input_rst_accumulator", false,-1);
    tracep->declBit(c+3,"input_stream_out_rdy", false,-1);
    tracep->declBus(c+6,"rst_accumulator", false,-1, 3,0);
    tracep->declBus(c+7,"stream_out_rdy", false,-1, 3,0);
    tracep->declBus(c+626,"STREAM_DELAY", false,-1, 31,0);
    tracep->declBus(c+627,"RST_DELAY", false,-1, 31,0);
    tracep->declBit(c+588,"stream_aligned", false,-1);
    tracep->declBit(c+589,"rst_aligned", false,-1);
    tracep->declBus(c+6,"rst_col_skew", false,-1, 3,0);
    tracep->declBus(c+590,"cs", false,-1, 31,0);
    tracep->pushNamePrefix("gen_rst_delay ");
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+591+i*1,"rst_chain", true,(i+0));
    }
    tracep->declBus(c+595,"r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_stream_delay ");
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+596+i*1,"stream_chain", true,(i+0));
    }
    tracep->declBus(c+605,"s", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_top(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_top\n"); );
    // Body
    Vsystolic_array___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsystolic_array___024root__trace_register(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsystolic_array___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsystolic_array___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsystolic_array___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_full_top_0\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsystolic_array___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->systolic_array__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->systolic_array__DOT__rst_accumulator_rdy));
    bufp->fullBit(oldp+3,(vlSelf->systolic_array__DOT__stream_out_rdy));
    bufp->fullIData(oldp+4,(vlSelf->systolic_array__DOT__row_data_in),32);
    bufp->fullIData(oldp+5,(vlSelf->systolic_array__DOT__col_data_in),32);
    bufp->fullCData(oldp+6,(vlSelf->systolic_array__DOT__u_ctrl__DOT__rst_col_skew),4);
    bufp->fullCData(oldp+7,((0xfU & (- (IData)(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain
                                               [8U])))),4);
    bufp->fullCData(oldp+8,(vlSelf->systolic_array__DOT__w_row_data
                            [0U][0U]),8);
    bufp->fullCData(oldp+9,(vlSelf->systolic_array__DOT__w_row_data
                            [0U][1U]),8);
    bufp->fullCData(oldp+10,(vlSelf->systolic_array__DOT__w_row_data
                             [0U][2U]),8);
    bufp->fullCData(oldp+11,(vlSelf->systolic_array__DOT__w_row_data
                             [0U][3U]),8);
    bufp->fullCData(oldp+12,(vlSelf->systolic_array__DOT__w_row_data
                             [0U][4U]),8);
    bufp->fullCData(oldp+13,(vlSelf->systolic_array__DOT__w_row_data
                             [1U][0U]),8);
    bufp->fullCData(oldp+14,(vlSelf->systolic_array__DOT__w_row_data
                             [1U][1U]),8);
    bufp->fullCData(oldp+15,(vlSelf->systolic_array__DOT__w_row_data
                             [1U][2U]),8);
    bufp->fullCData(oldp+16,(vlSelf->systolic_array__DOT__w_row_data
                             [1U][3U]),8);
    bufp->fullCData(oldp+17,(vlSelf->systolic_array__DOT__w_row_data
                             [1U][4U]),8);
    bufp->fullCData(oldp+18,(vlSelf->systolic_array__DOT__w_row_data
                             [2U][0U]),8);
    bufp->fullCData(oldp+19,(vlSelf->systolic_array__DOT__w_row_data
                             [2U][1U]),8);
    bufp->fullCData(oldp+20,(vlSelf->systolic_array__DOT__w_row_data
                             [2U][2U]),8);
    bufp->fullCData(oldp+21,(vlSelf->systolic_array__DOT__w_row_data
                             [2U][3U]),8);
    bufp->fullCData(oldp+22,(vlSelf->systolic_array__DOT__w_row_data
                             [2U][4U]),8);
    bufp->fullCData(oldp+23,(vlSelf->systolic_array__DOT__w_row_data
                             [3U][0U]),8);
    bufp->fullCData(oldp+24,(vlSelf->systolic_array__DOT__w_row_data
                             [3U][1U]),8);
    bufp->fullCData(oldp+25,(vlSelf->systolic_array__DOT__w_row_data
                             [3U][2U]),8);
    bufp->fullCData(oldp+26,(vlSelf->systolic_array__DOT__w_row_data
                             [3U][3U]),8);
    bufp->fullCData(oldp+27,(vlSelf->systolic_array__DOT__w_row_data
                             [3U][4U]),8);
    bufp->fullCData(oldp+28,(vlSelf->systolic_array__DOT__w_col_data
                             [0U][0U]),8);
    bufp->fullCData(oldp+29,(vlSelf->systolic_array__DOT__w_col_data
                             [0U][1U]),8);
    bufp->fullCData(oldp+30,(vlSelf->systolic_array__DOT__w_col_data
                             [0U][2U]),8);
    bufp->fullCData(oldp+31,(vlSelf->systolic_array__DOT__w_col_data
                             [0U][3U]),8);
    bufp->fullCData(oldp+32,(vlSelf->systolic_array__DOT__w_col_data
                             [1U][0U]),8);
    bufp->fullCData(oldp+33,(vlSelf->systolic_array__DOT__w_col_data
                             [1U][1U]),8);
    bufp->fullCData(oldp+34,(vlSelf->systolic_array__DOT__w_col_data
                             [1U][2U]),8);
    bufp->fullCData(oldp+35,(vlSelf->systolic_array__DOT__w_col_data
                             [1U][3U]),8);
    bufp->fullCData(oldp+36,(vlSelf->systolic_array__DOT__w_col_data
                             [2U][0U]),8);
    bufp->fullCData(oldp+37,(vlSelf->systolic_array__DOT__w_col_data
                             [2U][1U]),8);
    bufp->fullCData(oldp+38,(vlSelf->systolic_array__DOT__w_col_data
                             [2U][2U]),8);
    bufp->fullCData(oldp+39,(vlSelf->systolic_array__DOT__w_col_data
                             [2U][3U]),8);
    bufp->fullCData(oldp+40,(vlSelf->systolic_array__DOT__w_col_data
                             [3U][0U]),8);
    bufp->fullCData(oldp+41,(vlSelf->systolic_array__DOT__w_col_data
                             [3U][1U]),8);
    bufp->fullCData(oldp+42,(vlSelf->systolic_array__DOT__w_col_data
                             [3U][2U]),8);
    bufp->fullCData(oldp+43,(vlSelf->systolic_array__DOT__w_col_data
                             [3U][3U]),8);
    bufp->fullCData(oldp+44,(vlSelf->systolic_array__DOT__w_col_data
                             [4U][0U]),8);
    bufp->fullCData(oldp+45,(vlSelf->systolic_array__DOT__w_col_data
                             [4U][1U]),8);
    bufp->fullCData(oldp+46,(vlSelf->systolic_array__DOT__w_col_data
                             [4U][2U]),8);
    bufp->fullCData(oldp+47,(vlSelf->systolic_array__DOT__w_col_data
                             [4U][3U]),8);
    bufp->fullBit(oldp+48,(vlSelf->systolic_array__DOT__w_rst_acc
                           [0U][0U]));
    bufp->fullBit(oldp+49,(vlSelf->systolic_array__DOT__w_rst_acc
                           [0U][1U]));
    bufp->fullBit(oldp+50,(vlSelf->systolic_array__DOT__w_rst_acc
                           [0U][2U]));
    bufp->fullBit(oldp+51,(vlSelf->systolic_array__DOT__w_rst_acc
                           [0U][3U]));
    bufp->fullBit(oldp+52,(vlSelf->systolic_array__DOT__w_rst_acc
                           [1U][0U]));
    bufp->fullBit(oldp+53,(vlSelf->systolic_array__DOT__w_rst_acc
                           [1U][1U]));
    bufp->fullBit(oldp+54,(vlSelf->systolic_array__DOT__w_rst_acc
                           [1U][2U]));
    bufp->fullBit(oldp+55,(vlSelf->systolic_array__DOT__w_rst_acc
                           [1U][3U]));
    bufp->fullBit(oldp+56,(vlSelf->systolic_array__DOT__w_rst_acc
                           [2U][0U]));
    bufp->fullBit(oldp+57,(vlSelf->systolic_array__DOT__w_rst_acc
                           [2U][1U]));
    bufp->fullBit(oldp+58,(vlSelf->systolic_array__DOT__w_rst_acc
                           [2U][2U]));
    bufp->fullBit(oldp+59,(vlSelf->systolic_array__DOT__w_rst_acc
                           [2U][3U]));
    bufp->fullBit(oldp+60,(vlSelf->systolic_array__DOT__w_rst_acc
                           [3U][0U]));
    bufp->fullBit(oldp+61,(vlSelf->systolic_array__DOT__w_rst_acc
                           [3U][1U]));
    bufp->fullBit(oldp+62,(vlSelf->systolic_array__DOT__w_rst_acc
                           [3U][2U]));
    bufp->fullBit(oldp+63,(vlSelf->systolic_array__DOT__w_rst_acc
                           [3U][3U]));
    bufp->fullBit(oldp+64,(vlSelf->systolic_array__DOT__w_rst_acc
                           [4U][0U]));
    bufp->fullBit(oldp+65,(vlSelf->systolic_array__DOT__w_rst_acc
                           [4U][1U]));
    bufp->fullBit(oldp+66,(vlSelf->systolic_array__DOT__w_rst_acc
                           [4U][2U]));
    bufp->fullBit(oldp+67,(vlSelf->systolic_array__DOT__w_rst_acc
                           [4U][3U]));
    bufp->fullBit(oldp+68,(vlSelf->systolic_array__DOT__w_stream
                           [0U][0U]));
    bufp->fullBit(oldp+69,(vlSelf->systolic_array__DOT__w_stream
                           [0U][1U]));
    bufp->fullBit(oldp+70,(vlSelf->systolic_array__DOT__w_stream
                           [0U][2U]));
    bufp->fullBit(oldp+71,(vlSelf->systolic_array__DOT__w_stream
                           [0U][3U]));
    bufp->fullBit(oldp+72,(vlSelf->systolic_array__DOT__w_stream
                           [1U][0U]));
    bufp->fullBit(oldp+73,(vlSelf->systolic_array__DOT__w_stream
                           [1U][1U]));
    bufp->fullBit(oldp+74,(vlSelf->systolic_array__DOT__w_stream
                           [1U][2U]));
    bufp->fullBit(oldp+75,(vlSelf->systolic_array__DOT__w_stream
                           [1U][3U]));
    bufp->fullBit(oldp+76,(vlSelf->systolic_array__DOT__w_stream
                           [2U][0U]));
    bufp->fullBit(oldp+77,(vlSelf->systolic_array__DOT__w_stream
                           [2U][1U]));
    bufp->fullBit(oldp+78,(vlSelf->systolic_array__DOT__w_stream
                           [2U][2U]));
    bufp->fullBit(oldp+79,(vlSelf->systolic_array__DOT__w_stream
                           [2U][3U]));
    bufp->fullBit(oldp+80,(vlSelf->systolic_array__DOT__w_stream
                           [3U][0U]));
    bufp->fullBit(oldp+81,(vlSelf->systolic_array__DOT__w_stream
                           [3U][1U]));
    bufp->fullBit(oldp+82,(vlSelf->systolic_array__DOT__w_stream
                           [3U][2U]));
    bufp->fullBit(oldp+83,(vlSelf->systolic_array__DOT__w_stream
                           [3U][3U]));
    bufp->fullBit(oldp+84,(vlSelf->systolic_array__DOT__w_stream
                           [4U][0U]));
    bufp->fullBit(oldp+85,(vlSelf->systolic_array__DOT__w_stream
                           [4U][1U]));
    bufp->fullBit(oldp+86,(vlSelf->systolic_array__DOT__w_stream
                           [4U][2U]));
    bufp->fullBit(oldp+87,(vlSelf->systolic_array__DOT__w_stream
                           [4U][3U]));
    bufp->fullCData(oldp+88,(vlSelf->systolic_array__DOT__w_psum
                             [0U][0U]),8);
    bufp->fullCData(oldp+89,(vlSelf->systolic_array__DOT__w_psum
                             [0U][1U]),8);
    bufp->fullCData(oldp+90,(vlSelf->systolic_array__DOT__w_psum
                             [0U][2U]),8);
    bufp->fullCData(oldp+91,(vlSelf->systolic_array__DOT__w_psum
                             [0U][3U]),8);
    bufp->fullCData(oldp+92,(vlSelf->systolic_array__DOT__w_psum
                             [0U][4U]),8);
    bufp->fullCData(oldp+93,(vlSelf->systolic_array__DOT__w_psum
                             [1U][0U]),8);
    bufp->fullCData(oldp+94,(vlSelf->systolic_array__DOT__w_psum
                             [1U][1U]),8);
    bufp->fullCData(oldp+95,(vlSelf->systolic_array__DOT__w_psum
                             [1U][2U]),8);
    bufp->fullCData(oldp+96,(vlSelf->systolic_array__DOT__w_psum
                             [1U][3U]),8);
    bufp->fullCData(oldp+97,(vlSelf->systolic_array__DOT__w_psum
                             [1U][4U]),8);
    bufp->fullCData(oldp+98,(vlSelf->systolic_array__DOT__w_psum
                             [2U][0U]),8);
    bufp->fullCData(oldp+99,(vlSelf->systolic_array__DOT__w_psum
                             [2U][1U]),8);
    bufp->fullCData(oldp+100,(vlSelf->systolic_array__DOT__w_psum
                              [2U][2U]),8);
    bufp->fullCData(oldp+101,(vlSelf->systolic_array__DOT__w_psum
                              [2U][3U]),8);
    bufp->fullCData(oldp+102,(vlSelf->systolic_array__DOT__w_psum
                              [2U][4U]),8);
    bufp->fullCData(oldp+103,(vlSelf->systolic_array__DOT__w_psum
                              [3U][0U]),8);
    bufp->fullCData(oldp+104,(vlSelf->systolic_array__DOT__w_psum
                              [3U][1U]),8);
    bufp->fullCData(oldp+105,(vlSelf->systolic_array__DOT__w_psum
                              [3U][2U]),8);
    bufp->fullCData(oldp+106,(vlSelf->systolic_array__DOT__w_psum
                              [3U][3U]),8);
    bufp->fullCData(oldp+107,(vlSelf->systolic_array__DOT__w_psum
                              [3U][4U]),8);
    bufp->fullBit(oldp+108,(vlSelf->systolic_array__DOT__w_rst_acc
                            [0U][0U]));
    bufp->fullBit(oldp+109,(vlSelf->systolic_array__DOT__w_stream
                            [0U][0U]));
    bufp->fullCData(oldp+110,(vlSelf->systolic_array__DOT__w_row_data
                              [0U][0U]),8);
    bufp->fullCData(oldp+111,(vlSelf->systolic_array__DOT__w_col_data
                              [0U][0U]),8);
    bufp->fullCData(oldp+112,(vlSelf->systolic_array__DOT__w_psum
                              [0U][1U]),8);
    bufp->fullCData(oldp+113,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+114,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+115,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+116,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+117,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+118,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+119,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+120,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+121,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+122,((vlSelf->systolic_array__DOT__w_rst_acc
                               [0U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+123,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [2U]),8);
    bufp->fullCData(oldp+124,((vlSelf->systolic_array__DOT__w_stream
                               [0U][0U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [2U] : vlSelf->systolic_array__DOT__w_psum
                               [0U][1U])),8);
    bufp->fullCData(oldp+125,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullCData(oldp+126,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
    bufp->fullCData(oldp+127,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[2]),8);
    bufp->fullIData(oldp+128,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+129,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+130,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+131,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+132,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+133,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+134,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+135,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+136,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+137,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+138,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+139,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+140,(vlSelf->systolic_array__DOT__w_rst_acc
                            [0U][1U]));
    bufp->fullBit(oldp+141,(vlSelf->systolic_array__DOT__w_stream
                            [0U][1U]));
    bufp->fullCData(oldp+142,(vlSelf->systolic_array__DOT__w_row_data
                              [0U][1U]),8);
    bufp->fullCData(oldp+143,(vlSelf->systolic_array__DOT__w_col_data
                              [0U][1U]),8);
    bufp->fullCData(oldp+144,(vlSelf->systolic_array__DOT__w_psum
                              [0U][2U]),8);
    bufp->fullCData(oldp+145,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+146,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+147,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+148,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+149,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+150,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+151,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+152,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+153,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+154,((vlSelf->systolic_array__DOT__w_rst_acc
                               [0U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+155,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [1U]),8);
    bufp->fullCData(oldp+156,((vlSelf->systolic_array__DOT__w_stream
                               [0U][1U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [1U] : vlSelf->systolic_array__DOT__w_psum
                               [0U][2U])),8);
    bufp->fullCData(oldp+157,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullCData(oldp+158,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
    bufp->fullIData(oldp+159,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+160,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+161,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+162,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+163,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+164,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+165,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+166,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+167,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+168,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+169,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+170,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+171,(vlSelf->systolic_array__DOT__w_rst_acc
                            [0U][2U]));
    bufp->fullBit(oldp+172,(vlSelf->systolic_array__DOT__w_stream
                            [0U][2U]));
    bufp->fullCData(oldp+173,(vlSelf->systolic_array__DOT__w_row_data
                              [0U][2U]),8);
    bufp->fullCData(oldp+174,(vlSelf->systolic_array__DOT__w_col_data
                              [0U][2U]),8);
    bufp->fullCData(oldp+175,(vlSelf->systolic_array__DOT__w_psum
                              [0U][3U]),8);
    bufp->fullCData(oldp+176,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+177,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+178,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+179,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+180,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+181,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+182,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+183,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+184,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+185,((vlSelf->systolic_array__DOT__w_rst_acc
                               [0U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+186,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [0U]),8);
    bufp->fullCData(oldp+187,((vlSelf->systolic_array__DOT__w_stream
                               [0U][2U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [0U] : vlSelf->systolic_array__DOT__w_psum
                               [0U][3U])),8);
    bufp->fullCData(oldp+188,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullIData(oldp+189,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+190,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+191,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+192,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+193,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+194,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+195,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+196,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+197,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+198,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+199,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+200,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+201,(vlSelf->systolic_array__DOT__w_rst_acc
                            [0U][3U]));
    bufp->fullBit(oldp+202,(vlSelf->systolic_array__DOT__w_stream
                            [0U][3U]));
    bufp->fullCData(oldp+203,(vlSelf->systolic_array__DOT__w_row_data
                              [0U][3U]),8);
    bufp->fullCData(oldp+204,(vlSelf->systolic_array__DOT__w_col_data
                              [0U][3U]),8);
    bufp->fullCData(oldp+205,(vlSelf->systolic_array__DOT__w_psum
                              [0U][4U]),8);
    bufp->fullCData(oldp+206,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+207,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+208,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+209,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+210,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+211,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+212,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+213,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+214,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+215,((vlSelf->systolic_array__DOT__w_rst_acc
                               [0U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+216,((vlSelf->systolic_array__DOT__w_stream
                               [0U][3U] ? (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add)
                                : vlSelf->systolic_array__DOT__w_psum
                               [0U][4U])),8);
    bufp->fullBit(oldp+217,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+218,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+219,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+220,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+221,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+222,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+223,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+224,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+225,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+226,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+227,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+228,(vlSelf->systolic_array__DOT__w_rst_acc
                            [1U][0U]));
    bufp->fullBit(oldp+229,(vlSelf->systolic_array__DOT__w_stream
                            [1U][0U]));
    bufp->fullCData(oldp+230,(vlSelf->systolic_array__DOT__w_row_data
                              [1U][0U]),8);
    bufp->fullCData(oldp+231,(vlSelf->systolic_array__DOT__w_col_data
                              [1U][0U]),8);
    bufp->fullCData(oldp+232,(vlSelf->systolic_array__DOT__w_psum
                              [1U][1U]),8);
    bufp->fullCData(oldp+233,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+234,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+235,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+236,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+237,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+238,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+239,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+240,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+241,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+242,((vlSelf->systolic_array__DOT__w_rst_acc
                               [1U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+243,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [2U]),8);
    bufp->fullCData(oldp+244,((vlSelf->systolic_array__DOT__w_stream
                               [1U][0U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [2U] : vlSelf->systolic_array__DOT__w_psum
                               [1U][1U])),8);
    bufp->fullCData(oldp+245,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullCData(oldp+246,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
    bufp->fullCData(oldp+247,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[2]),8);
    bufp->fullIData(oldp+248,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+249,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+250,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+251,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+252,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+253,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+254,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+255,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+256,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+257,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+258,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+259,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+260,(vlSelf->systolic_array__DOT__w_rst_acc
                            [1U][1U]));
    bufp->fullBit(oldp+261,(vlSelf->systolic_array__DOT__w_stream
                            [1U][1U]));
    bufp->fullCData(oldp+262,(vlSelf->systolic_array__DOT__w_row_data
                              [1U][1U]),8);
    bufp->fullCData(oldp+263,(vlSelf->systolic_array__DOT__w_col_data
                              [1U][1U]),8);
    bufp->fullCData(oldp+264,(vlSelf->systolic_array__DOT__w_psum
                              [1U][2U]),8);
    bufp->fullCData(oldp+265,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+266,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+267,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+268,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+269,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+270,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+271,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+272,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+273,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+274,((vlSelf->systolic_array__DOT__w_rst_acc
                               [1U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+275,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [1U]),8);
    bufp->fullCData(oldp+276,((vlSelf->systolic_array__DOT__w_stream
                               [1U][1U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [1U] : vlSelf->systolic_array__DOT__w_psum
                               [1U][2U])),8);
    bufp->fullCData(oldp+277,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullCData(oldp+278,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
    bufp->fullIData(oldp+279,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+280,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+281,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+282,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+283,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+284,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+285,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+286,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+287,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+288,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+289,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+290,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+291,(vlSelf->systolic_array__DOT__w_rst_acc
                            [1U][2U]));
    bufp->fullBit(oldp+292,(vlSelf->systolic_array__DOT__w_stream
                            [1U][2U]));
    bufp->fullCData(oldp+293,(vlSelf->systolic_array__DOT__w_row_data
                              [1U][2U]),8);
    bufp->fullCData(oldp+294,(vlSelf->systolic_array__DOT__w_col_data
                              [1U][2U]),8);
    bufp->fullCData(oldp+295,(vlSelf->systolic_array__DOT__w_psum
                              [1U][3U]),8);
    bufp->fullCData(oldp+296,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+297,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+298,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+299,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+300,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+301,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+302,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+303,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+304,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+305,((vlSelf->systolic_array__DOT__w_rst_acc
                               [1U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+306,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [0U]),8);
    bufp->fullCData(oldp+307,((vlSelf->systolic_array__DOT__w_stream
                               [1U][2U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [0U] : vlSelf->systolic_array__DOT__w_psum
                               [1U][3U])),8);
    bufp->fullCData(oldp+308,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullIData(oldp+309,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+310,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+311,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+312,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+313,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+314,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+315,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+316,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+317,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+318,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+319,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+320,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+321,(vlSelf->systolic_array__DOT__w_rst_acc
                            [1U][3U]));
    bufp->fullBit(oldp+322,(vlSelf->systolic_array__DOT__w_stream
                            [1U][3U]));
    bufp->fullCData(oldp+323,(vlSelf->systolic_array__DOT__w_row_data
                              [1U][3U]),8);
    bufp->fullCData(oldp+324,(vlSelf->systolic_array__DOT__w_col_data
                              [1U][3U]),8);
    bufp->fullCData(oldp+325,(vlSelf->systolic_array__DOT__w_psum
                              [1U][4U]),8);
    bufp->fullCData(oldp+326,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+327,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+328,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+329,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+330,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+331,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+332,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+333,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+334,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+335,((vlSelf->systolic_array__DOT__w_rst_acc
                               [1U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+336,((vlSelf->systolic_array__DOT__w_stream
                               [1U][3U] ? (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add)
                                : vlSelf->systolic_array__DOT__w_psum
                               [1U][4U])),8);
    bufp->fullBit(oldp+337,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+338,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+339,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+340,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+341,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+342,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+343,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+344,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+345,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+346,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+347,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+348,(vlSelf->systolic_array__DOT__w_rst_acc
                            [2U][0U]));
    bufp->fullBit(oldp+349,(vlSelf->systolic_array__DOT__w_stream
                            [2U][0U]));
    bufp->fullCData(oldp+350,(vlSelf->systolic_array__DOT__w_row_data
                              [2U][0U]),8);
    bufp->fullCData(oldp+351,(vlSelf->systolic_array__DOT__w_col_data
                              [2U][0U]),8);
    bufp->fullCData(oldp+352,(vlSelf->systolic_array__DOT__w_psum
                              [2U][1U]),8);
    bufp->fullCData(oldp+353,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+354,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+355,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+356,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+357,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+358,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+359,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+360,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+361,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+362,((vlSelf->systolic_array__DOT__w_rst_acc
                               [2U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+363,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [2U]),8);
    bufp->fullCData(oldp+364,((vlSelf->systolic_array__DOT__w_stream
                               [2U][0U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [2U] : vlSelf->systolic_array__DOT__w_psum
                               [2U][1U])),8);
    bufp->fullCData(oldp+365,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullCData(oldp+366,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
    bufp->fullCData(oldp+367,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[2]),8);
    bufp->fullIData(oldp+368,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+369,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+370,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+371,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+372,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+373,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+374,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+375,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+376,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+377,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+378,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+379,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+380,(vlSelf->systolic_array__DOT__w_rst_acc
                            [2U][1U]));
    bufp->fullBit(oldp+381,(vlSelf->systolic_array__DOT__w_stream
                            [2U][1U]));
    bufp->fullCData(oldp+382,(vlSelf->systolic_array__DOT__w_row_data
                              [2U][1U]),8);
    bufp->fullCData(oldp+383,(vlSelf->systolic_array__DOT__w_col_data
                              [2U][1U]),8);
    bufp->fullCData(oldp+384,(vlSelf->systolic_array__DOT__w_psum
                              [2U][2U]),8);
    bufp->fullCData(oldp+385,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+386,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+387,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+388,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+389,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+390,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+391,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+392,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+393,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+394,((vlSelf->systolic_array__DOT__w_rst_acc
                               [2U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+395,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [1U]),8);
    bufp->fullCData(oldp+396,((vlSelf->systolic_array__DOT__w_stream
                               [2U][1U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [1U] : vlSelf->systolic_array__DOT__w_psum
                               [2U][2U])),8);
    bufp->fullCData(oldp+397,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullCData(oldp+398,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
    bufp->fullIData(oldp+399,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+400,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+401,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+402,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+403,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+404,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+405,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+406,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+407,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+408,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+409,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+410,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+411,(vlSelf->systolic_array__DOT__w_rst_acc
                            [2U][2U]));
    bufp->fullBit(oldp+412,(vlSelf->systolic_array__DOT__w_stream
                            [2U][2U]));
    bufp->fullCData(oldp+413,(vlSelf->systolic_array__DOT__w_row_data
                              [2U][2U]),8);
    bufp->fullCData(oldp+414,(vlSelf->systolic_array__DOT__w_col_data
                              [2U][2U]),8);
    bufp->fullCData(oldp+415,(vlSelf->systolic_array__DOT__w_psum
                              [2U][3U]),8);
    bufp->fullCData(oldp+416,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+417,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+418,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+419,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+420,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+421,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+422,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+423,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+424,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+425,((vlSelf->systolic_array__DOT__w_rst_acc
                               [2U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+426,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [0U]),8);
    bufp->fullCData(oldp+427,((vlSelf->systolic_array__DOT__w_stream
                               [2U][2U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [0U] : vlSelf->systolic_array__DOT__w_psum
                               [2U][3U])),8);
    bufp->fullCData(oldp+428,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullIData(oldp+429,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+430,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+431,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+432,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+433,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+434,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+435,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+436,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+437,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+438,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+439,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+440,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+441,(vlSelf->systolic_array__DOT__w_rst_acc
                            [2U][3U]));
    bufp->fullBit(oldp+442,(vlSelf->systolic_array__DOT__w_stream
                            [2U][3U]));
    bufp->fullCData(oldp+443,(vlSelf->systolic_array__DOT__w_row_data
                              [2U][3U]),8);
    bufp->fullCData(oldp+444,(vlSelf->systolic_array__DOT__w_col_data
                              [2U][3U]),8);
    bufp->fullCData(oldp+445,(vlSelf->systolic_array__DOT__w_psum
                              [2U][4U]),8);
    bufp->fullCData(oldp+446,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+447,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+448,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+449,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+450,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+451,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+452,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+453,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+454,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+455,((vlSelf->systolic_array__DOT__w_rst_acc
                               [2U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+456,((vlSelf->systolic_array__DOT__w_stream
                               [2U][3U] ? (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add)
                                : vlSelf->systolic_array__DOT__w_psum
                               [2U][4U])),8);
    bufp->fullBit(oldp+457,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+458,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+459,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+460,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+461,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+462,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+463,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+464,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+465,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+466,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+467,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+468,(vlSelf->systolic_array__DOT__w_rst_acc
                            [3U][0U]));
    bufp->fullBit(oldp+469,(vlSelf->systolic_array__DOT__w_stream
                            [3U][0U]));
    bufp->fullCData(oldp+470,(vlSelf->systolic_array__DOT__w_row_data
                              [3U][0U]),8);
    bufp->fullCData(oldp+471,(vlSelf->systolic_array__DOT__w_col_data
                              [3U][0U]),8);
    bufp->fullCData(oldp+472,(vlSelf->systolic_array__DOT__w_psum
                              [3U][1U]),8);
    bufp->fullCData(oldp+473,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+474,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+475,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+476,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+477,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+478,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+479,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+480,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+481,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+482,((vlSelf->systolic_array__DOT__w_rst_acc
                               [3U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+483,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [2U]),8);
    bufp->fullCData(oldp+484,((vlSelf->systolic_array__DOT__w_stream
                               [3U][0U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [2U] : vlSelf->systolic_array__DOT__w_psum
                               [3U][1U])),8);
    bufp->fullCData(oldp+485,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullCData(oldp+486,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
    bufp->fullCData(oldp+487,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[2]),8);
    bufp->fullIData(oldp+488,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+489,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+490,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+491,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+492,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+493,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+494,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+495,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+496,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+497,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+498,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+499,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+500,(vlSelf->systolic_array__DOT__w_rst_acc
                            [3U][1U]));
    bufp->fullBit(oldp+501,(vlSelf->systolic_array__DOT__w_stream
                            [3U][1U]));
    bufp->fullCData(oldp+502,(vlSelf->systolic_array__DOT__w_row_data
                              [3U][1U]),8);
    bufp->fullCData(oldp+503,(vlSelf->systolic_array__DOT__w_col_data
                              [3U][1U]),8);
    bufp->fullCData(oldp+504,(vlSelf->systolic_array__DOT__w_psum
                              [3U][2U]),8);
    bufp->fullCData(oldp+505,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+506,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+507,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+508,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+509,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+510,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+511,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+512,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+513,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+514,((vlSelf->systolic_array__DOT__w_rst_acc
                               [3U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+515,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [1U]),8);
    bufp->fullCData(oldp+516,((vlSelf->systolic_array__DOT__w_stream
                               [3U][1U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [1U] : vlSelf->systolic_array__DOT__w_psum
                               [3U][2U])),8);
    bufp->fullCData(oldp+517,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullCData(oldp+518,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
    bufp->fullIData(oldp+519,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+520,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+521,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+522,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+523,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+524,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+525,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+526,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+527,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+528,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+529,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+530,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+531,(vlSelf->systolic_array__DOT__w_rst_acc
                            [3U][2U]));
    bufp->fullBit(oldp+532,(vlSelf->systolic_array__DOT__w_stream
                            [3U][2U]));
    bufp->fullCData(oldp+533,(vlSelf->systolic_array__DOT__w_row_data
                              [3U][2U]),8);
    bufp->fullCData(oldp+534,(vlSelf->systolic_array__DOT__w_col_data
                              [3U][2U]),8);
    bufp->fullCData(oldp+535,(vlSelf->systolic_array__DOT__w_psum
                              [3U][3U]),8);
    bufp->fullCData(oldp+536,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+537,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+538,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+539,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+540,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+541,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+542,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+543,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+544,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+545,((vlSelf->systolic_array__DOT__w_rst_acc
                               [3U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+546,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                              [0U]),8);
    bufp->fullCData(oldp+547,((vlSelf->systolic_array__DOT__w_stream
                               [3U][2U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                               [0U] : vlSelf->systolic_array__DOT__w_psum
                               [3U][3U])),8);
    bufp->fullCData(oldp+548,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
    bufp->fullIData(oldp+549,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
    bufp->fullBit(oldp+550,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+551,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+552,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+553,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+554,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+555,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+556,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+557,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+558,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+559,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+560,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+561,(vlSelf->systolic_array__DOT__w_rst_acc
                            [3U][3U]));
    bufp->fullBit(oldp+562,(vlSelf->systolic_array__DOT__w_stream
                            [3U][3U]));
    bufp->fullCData(oldp+563,(vlSelf->systolic_array__DOT__w_row_data
                              [3U][3U]),8);
    bufp->fullCData(oldp+564,(vlSelf->systolic_array__DOT__w_col_data
                              [3U][3U]),8);
    bufp->fullCData(oldp+565,(vlSelf->systolic_array__DOT__w_psum
                              [3U][4U]),8);
    bufp->fullCData(oldp+566,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out),8);
    bufp->fullCData(oldp+567,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out),8);
    bufp->fullBit(oldp+568,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out));
    bufp->fullBit(oldp+569,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out));
    bufp->fullCData(oldp+570,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out),8);
    bufp->fullCData(oldp+571,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                              [3U]),8);
    bufp->fullBit(oldp+572,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                             [3U])));
    bufp->fullCData(oldp+573,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
    bufp->fullBit(oldp+574,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
    bufp->fullCData(oldp+575,((vlSelf->systolic_array__DOT__w_rst_acc
                               [3U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
    bufp->fullCData(oldp+576,((vlSelf->systolic_array__DOT__w_stream
                               [3U][3U] ? (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add)
                                : vlSelf->systolic_array__DOT__w_psum
                               [3U][4U])),8);
    bufp->fullBit(oldp+577,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
    bufp->fullCData(oldp+578,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
    bufp->fullBit(oldp+579,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
    bufp->fullCData(oldp+580,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+581,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullCData(oldp+582,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
    bufp->fullCData(oldp+583,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
    bufp->fullBit(oldp+584,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+585,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+586,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
    bufp->fullBit(oldp+587,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
    bufp->fullBit(oldp+588,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain
                            [8U]));
    bufp->fullBit(oldp+589,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain
                            [3U]));
    bufp->fullIData(oldp+590,(vlSelf->systolic_array__DOT__u_ctrl__DOT__cs),32);
    bufp->fullBit(oldp+591,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain[0]));
    bufp->fullBit(oldp+592,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain[1]));
    bufp->fullBit(oldp+593,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain[2]));
    bufp->fullBit(oldp+594,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain[3]));
    bufp->fullIData(oldp+595,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__r),32);
    bufp->fullBit(oldp+596,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[0]));
    bufp->fullBit(oldp+597,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[1]));
    bufp->fullBit(oldp+598,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[2]));
    bufp->fullBit(oldp+599,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[3]));
    bufp->fullBit(oldp+600,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[4]));
    bufp->fullBit(oldp+601,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[5]));
    bufp->fullBit(oldp+602,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[6]));
    bufp->fullBit(oldp+603,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[7]));
    bufp->fullBit(oldp+604,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[8]));
    bufp->fullIData(oldp+605,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__s),32);
    bufp->fullBit(oldp+606,(vlSelf->clk));
    bufp->fullBit(oldp+607,(vlSelf->rst_in));
    bufp->fullBit(oldp+608,(vlSelf->rst_accumulator_rdy_in));
    bufp->fullBit(oldp+609,(vlSelf->stream_out_rdy_in_in));
    bufp->fullIData(oldp+610,(vlSelf->row_data_in_in),32);
    bufp->fullIData(oldp+611,(vlSelf->col_data_in_in),32);
    bufp->fullIData(oldp+612,(vlSelf->row_data_out),32);
    bufp->fullIData(oldp+613,(8U),32);
    bufp->fullIData(oldp+614,(0U),32);
    bufp->fullIData(oldp+615,(5U),32);
    bufp->fullIData(oldp+616,(1U),32);
    bufp->fullIData(oldp+617,(4U),32);
    bufp->fullIData(oldp+618,(3U),32);
    bufp->fullBit(oldp+619,(0U));
    bufp->fullBit(oldp+620,(1U));
    bufp->fullIData(oldp+621,(2U),32);
    bufp->fullIData(oldp+622,(2U),32);
    bufp->fullIData(oldp+623,(1U),32);
    bufp->fullIData(oldp+624,(3U),32);
    bufp->fullIData(oldp+625,(0U),32);
    bufp->fullIData(oldp+626,(9U),32);
    bufp->fullIData(oldp+627,(4U),32);
}
