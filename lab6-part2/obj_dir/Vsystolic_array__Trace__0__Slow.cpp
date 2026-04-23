// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__0\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1349,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1350,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1351,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1352,0,"rst_accumulator_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1353,0,"stream_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1354,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1355,0,"row_data_in_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1356,0,"row_data_in_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1357,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1359,0,"col_data_in_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1360,0,"col_data_in_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1362,0,"row_data_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1363,0,"row_data_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("systolic_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ACC_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1369,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1349,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1350,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1351,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1352,0,"rst_accumulator_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1353,0,"stream_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1354,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1355,0,"row_data_in_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1356,0,"row_data_in_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1357,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1359,0,"col_data_in_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1360,0,"col_data_in_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1362,0,"row_data_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1363,0,"row_data_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_accumulator_rdy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"stream_out_rdy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"row_data_in_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+5,0,"col_data_in_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("rst_accumulator_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+7,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+13,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+19,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+25,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+31,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rst_accumulator_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+37,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+43,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+49,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+55,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+61,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+67,0,"control_rst_accumulator_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("stream_out_rdy_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+68,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+74,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+80,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+86,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+92,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stream_out_rdy_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+98,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+104,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+110,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+116,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+122,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+128,0,"control_stream_out_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("mac_row_data_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+129,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+130,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+134,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+135,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+137,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+139,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+144,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+149,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+152,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+154,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+157,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mac_row_data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+159,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+162,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+163,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+164,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+165,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+169,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+174,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+179,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+184,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+188,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mac_col_data_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+189,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+190,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+191,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+192,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+193,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+194,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+195,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+196,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+197,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+199,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+200,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+201,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+203,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+204,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+205,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+206,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+207,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+208,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+209,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+210,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+211,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+212,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+213,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mac_col_data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+219,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+224,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+225,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+226,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+227,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+231,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+234,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+237,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+241,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+242,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+243,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+244,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+245,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bypass_data_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+249,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+250,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+251,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+254,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+255,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+256,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+257,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+259,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+260,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+261,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+262,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+263,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+264,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+265,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+266,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+267,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+268,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+269,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+271,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+273,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+274,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+275,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+276,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+277,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+278,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bypass_data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+279,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+280,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+281,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+282,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+283,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+284,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+285,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+286,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+287,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+288,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+289,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+290,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+291,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+292,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+293,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+294,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+295,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+296,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+297,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+298,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+299,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+300,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+301,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+302,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+303,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+304,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+305,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+306,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+307,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+308,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mac_full_flag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+309,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+315,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+321,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+327,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+333,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mac_psum_out_vld", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+339,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+345,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+351,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+357,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+363,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+369,0,"flat_full_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+371,0,"row_data_out_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("deskew", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+372,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+373,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+374,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+375,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+376,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+378,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+379,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+380,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+381,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+382,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+383,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ctrl_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ACC_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"input_rst_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"input_stream_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"rst_accumulator",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+128,0,"stream_out_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1368,0,"MULTIPLIER_DELAY_SLOTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"comparator_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"rst_accumulator_reg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+385,0,"rst_accumulator_reg_1_to_rest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+386,0,"stream_out_rdy_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+128,0,"stream_out_rdy_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_rows[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("instantiate_mac_cols[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+390,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+391,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+395,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+396,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+399+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+407,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+408,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+409,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+407,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+410,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+411,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+412,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+415,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+416,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+389,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+390,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+393,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+407,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+410,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+411,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+412,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+411,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+419,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+390,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+408,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+409,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+421,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+422,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+423+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+425+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+429,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+415,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+413,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+432,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+433,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+435,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+439,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+440,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+444,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+445,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+447,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+448+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+456,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+457,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+458,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+459,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+460,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+461,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+465,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+466,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+438,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+439,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+442,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+459,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+460,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+461,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+460,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+468,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+439,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+457,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+458,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+470,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+471+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+473+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+477,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+464,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+462,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+479,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+480,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+481,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+483,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+486,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+487,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+488,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+492,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+493,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+495,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+496+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+504,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+505,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+506,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+507,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+508,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+509,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+513,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+514,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+486,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+487,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+490,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+507,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+508,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+509,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+508,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+516,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+486,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+487,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+505,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+506,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+517,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+518,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+519+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+521+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+525,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+512,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+510,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+527,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+528,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+529,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+531,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+534,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+535,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+536,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+539,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+540,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+541,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+544+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+552,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+553,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+554,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+555,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+556,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+557,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+560,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+561,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+562,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+534,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+535,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+538,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+555,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+556,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+557,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+556,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+564,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+534,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+535,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+553,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+554,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+566,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+567+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+569+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+573,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+560,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+558,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+575,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+576,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+577,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+579,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+582,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+583,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+584,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+587,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+588,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+589,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+591,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+592+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+600,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+601,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+602,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+600,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+603,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+604,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+605,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+608,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+609,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+610,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+582,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+583,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+586,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+600,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+603,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+604,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+605,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+604,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+612,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+582,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+583,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+601,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+602,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+614,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+615+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+617+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+621,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+608,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+606,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+623,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+624,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+625,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+627,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_rows[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("instantiate_mac_cols[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+630,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+631,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+632,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+635,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+636,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+637,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+639,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+640+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+648,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+649,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+650,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+651,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+652,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+653,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+657,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+658,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+630,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+631,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+634,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+651,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+652,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+653,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+660,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+630,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+631,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+649,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+650,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+661,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+662,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+663+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+665+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+667,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+669,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+656,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+654,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+670,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+672,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+673,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+675,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+676,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+677,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+678,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+679,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+680,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+683,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+684,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+685,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+687,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+688+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+696,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+697,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+698,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+696,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+699,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+700,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+701,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+702,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+704,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+705,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+706,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+678,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+679,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+682,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+696,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+699,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+700,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+701,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+700,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+708,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+678,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+679,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+697,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+698,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+709,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+710,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+711+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+713+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+717,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+704,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+702,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+719,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+720,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+721,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+723,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+726,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+727,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+728,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+729,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+731,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+732,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+733,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+736+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+744,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+745,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+746,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+744,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+747,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+748,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+749,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+752,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+753,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+754,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+726,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+727,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+730,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+744,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+747,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+748,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+749,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+756,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+726,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+727,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+745,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+746,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+758,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+759+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+761+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+752,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+750,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+767,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+768,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+769,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+771,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+774,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+775,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+776,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+778,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+779,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+780,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+781,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+783,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+784+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+792,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+793,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+794,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+795,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+796,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+797,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+798,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+800,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+801,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+802,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+774,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+775,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+778,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+803,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+795,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+796,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+797,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+796,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+804,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+774,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+775,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+793,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+794,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+805,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+806,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+807+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+809+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+813,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+800,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+798,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+814,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+815,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+816,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+817,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+819,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+821,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+822,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+823,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+824,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+826,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+827,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+828,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+829,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+830,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+831,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+832+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+840,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+841,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+842,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+843,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+844,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+845,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+848,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+849,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+850,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+822,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+823,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+826,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+843,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+844,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+845,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+844,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+852,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+822,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+823,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+841,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+842,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+853,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+854,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+855+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+857+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+860,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+861,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+848,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+846,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+863,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+864,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+865,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+867,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_rows[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("instantiate_mac_cols[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+870,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+871,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+872,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+876,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+877,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+878,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+879,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+880+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+888,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+889,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+890,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+888,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+891,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+892,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+893,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+897,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+898,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+870,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+871,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+874,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+888,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+891,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+892,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+893,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+892,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+900,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+870,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+871,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+889,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+890,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+901,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+902,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+903+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+905+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+909,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+896,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+894,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+911,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+912,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+913,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+915,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+918,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+919,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+920,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+923,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+924,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+925,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+927,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+928+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+936,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+937,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+938,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+936,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+939,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+940,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+941,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+942,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+943,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+944,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+945,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+946,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+918,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+919,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+922,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+947,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+936,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+939,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+940,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+941,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+940,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+948,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+918,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+919,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+937,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+938,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+949,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+950,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+951+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+953+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+957,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+944,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+942,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+943,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+959,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+960,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+961,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+963,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+964,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+965,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+966,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+967,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+968,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+969,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+971,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+972,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+973,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+975,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+976+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+984,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+985,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+986,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+984,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+987,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+988,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+989,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+993,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+994,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+966,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+967,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+970,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+995,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+984,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+987,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+988,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+989,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+988,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+996,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+966,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+967,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+985,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+986,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+997,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+998,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+999+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1001+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1005,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+992,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+990,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1008,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1009,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1010,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1011,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1012,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1014,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1015,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1016,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1017,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1019,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1020,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1021,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1022,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1023,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1024+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1032,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1033,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1034,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1032,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1035,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1036,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1037,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1038,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1039,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1040,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1041,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1042,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1014,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1015,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1018,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1043,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1032,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1035,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1036,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1037,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1036,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1044,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1014,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1015,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1033,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1034,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1045,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1046,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1047+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1049+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1051,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1052,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1053,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1040,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1038,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1054,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1039,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1055,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1056,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1057,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1058,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1059,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1060,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1061,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1062,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1063,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1064,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1065,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1066,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1067,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1068,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1069,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1070,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1071,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1072+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1080,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1081,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1082,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1080,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1083,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1085,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1086,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1087,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1088,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1089,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1090,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1062,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1063,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1066,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1091,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1080,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1083,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1085,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1084,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1092,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1062,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1063,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1081,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1082,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1094,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1095+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1097+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1100,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1101,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1088,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1086,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1102,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1087,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1103,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1104,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1105,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1106,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1107,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_rows[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("instantiate_mac_cols[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1108,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1109,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1110,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1111,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1112,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1113,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1114,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1115,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1116,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1117,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1118,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1119,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1120+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1128,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1129,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1130,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1128,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1131,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1132,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1133,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1134,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1137,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1138,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1110,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1111,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1114,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1139,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1128,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1131,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1132,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1133,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1132,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1140,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1110,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1111,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1129,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1130,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1141,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1142,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1143+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1145+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1147,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1148,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1149,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1136,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1134,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1151,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1152,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1153,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1155,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1158,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1159,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1160,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1163,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1164,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1165,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1166,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1167,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1168+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1176,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1177,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1178,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1176,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1179,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1180,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1181,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1182,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1183,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1184,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1185,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1186,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1158,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1159,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1162,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1187,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1176,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1179,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1180,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1181,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1180,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1188,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1158,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1159,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1177,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1178,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1189,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1190,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1191+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1193+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1195,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1196,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1197,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1184,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1182,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1183,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1199,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1200,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1201,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1202,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1203,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1204,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1206,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1207,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1208,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1209,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1211,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1212,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1213,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1214,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1215,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1216+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1224,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1225,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1226,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1224,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1227,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1228,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1229,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1230,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1231,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1232,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1233,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1234,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1206,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1207,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1210,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1224,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1227,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1228,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1229,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1228,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1236,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1206,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1207,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1225,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1226,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1237,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1238,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1239+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1241+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1243,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1244,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1245,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1232,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1230,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1246,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1231,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1247,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1248,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1249,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1250,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1251,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1252,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1254,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1255,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1256,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1257,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1258,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1259,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1260,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1261,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1262,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1263,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1264+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1272,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1273,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1274,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1272,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1275,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1276,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1277,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1278,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1279,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1280,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1281,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1282,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1254,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1255,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1258,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1283,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1272,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1275,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1276,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1277,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1276,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1284,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1254,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1255,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1273,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1274,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1285,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1286,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1287+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1289+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1291,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1292,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1293,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1280,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1278,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1294,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1279,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1295,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1296,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1297,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1298,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1299,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1300,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1301,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1302,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1303,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1304,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1305,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1306,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1307,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1308,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1309,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1311,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1312+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1320,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1321,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1322,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1320,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1323,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1324,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1325,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1328,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1329,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1330,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1302,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1303,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1306,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1331,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1320,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1323,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1324,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1325,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1324,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1332,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1364,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1302,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1303,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1321,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1322,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1333,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1334,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1335+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1337+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1348,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1339,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1340,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1341,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1328,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1326,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1342,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1343,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1344,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1345,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1346,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1347,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_top(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_top\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_array___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsystolic_array___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsystolic_array___024root__trace_register(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_register\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsystolic_array___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsystolic_array___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsystolic_array___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsystolic_array___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_const_0_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystolic_array___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_const_0\n"); );
    // Body
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsystolic_array___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_const_0_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_const_0_sub_0\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1364,(8U),32);
    bufp->fullIData(oldp+1365,(0U),32);
    bufp->fullIData(oldp+1366,(3U),32);
    bufp->fullIData(oldp+1367,(1U),32);
    bufp->fullIData(oldp+1368,(4U),32);
    bufp->fullIData(oldp+1369,(0x00000014U),32);
    bufp->fullIData(oldp+1370,(5U),32);
    bufp->fullIData(oldp+1371,(0x00000040U),32);
    bufp->fullCData(oldp+1372,(4U),3);
    bufp->fullIData(oldp+1373,(0x00000020U),32);
    bufp->fullCData(oldp+1374,(0x20U),6);
    bufp->fullIData(oldp+1375,(2U),32);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_0_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_full_0\n"); );
    // Body
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsystolic_array___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_0_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_full_0_sub_0\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.systolic_array__DOT__rst_r));
    bufp->fullBit(oldp+2,(vlSelfRef.systolic_array__DOT__rst_accumulator_rdy_r));
    bufp->fullBit(oldp+3,(vlSelfRef.systolic_array__DOT__stream_out_rdy_r));
    bufp->fullIData(oldp+4,(vlSelfRef.systolic_array__DOT__row_data_in_r),32);
    bufp->fullQData(oldp+5,(vlSelfRef.systolic_array__DOT__col_data_in_r),40);
    bufp->fullBit(oldp+7,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                          [0U][0U]));
    bufp->fullBit(oldp+8,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                          [0U][1U]));
    bufp->fullBit(oldp+9,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                          [0U][2U]));
    bufp->fullBit(oldp+10,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [0U][3U]));
    bufp->fullBit(oldp+11,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [0U][4U]));
    bufp->fullBit(oldp+12,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [0U][5U]));
    bufp->fullBit(oldp+13,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [1U][0U]));
    bufp->fullBit(oldp+14,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [1U][1U]));
    bufp->fullBit(oldp+15,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [1U][2U]));
    bufp->fullBit(oldp+16,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [1U][3U]));
    bufp->fullBit(oldp+17,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [1U][4U]));
    bufp->fullBit(oldp+18,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [1U][5U]));
    bufp->fullBit(oldp+19,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [2U][0U]));
    bufp->fullBit(oldp+20,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [2U][1U]));
    bufp->fullBit(oldp+21,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [2U][2U]));
    bufp->fullBit(oldp+22,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [2U][3U]));
    bufp->fullBit(oldp+23,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [2U][4U]));
    bufp->fullBit(oldp+24,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [2U][5U]));
    bufp->fullBit(oldp+25,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [3U][0U]));
    bufp->fullBit(oldp+26,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [3U][1U]));
    bufp->fullBit(oldp+27,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [3U][2U]));
    bufp->fullBit(oldp+28,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [3U][3U]));
    bufp->fullBit(oldp+29,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [3U][4U]));
    bufp->fullBit(oldp+30,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [3U][5U]));
    bufp->fullBit(oldp+31,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [4U][0U]));
    bufp->fullBit(oldp+32,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [4U][1U]));
    bufp->fullBit(oldp+33,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [4U][2U]));
    bufp->fullBit(oldp+34,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [4U][3U]));
    bufp->fullBit(oldp+35,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [4U][4U]));
    bufp->fullBit(oldp+36,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                           [4U][5U]));
    bufp->fullBit(oldp+37,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [0U][0U]));
    bufp->fullBit(oldp+38,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [0U][1U]));
    bufp->fullBit(oldp+39,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [0U][2U]));
    bufp->fullBit(oldp+40,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [0U][3U]));
    bufp->fullBit(oldp+41,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [0U][4U]));
    bufp->fullBit(oldp+42,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [0U][5U]));
    bufp->fullBit(oldp+43,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [1U][0U]));
    bufp->fullBit(oldp+44,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [1U][1U]));
    bufp->fullBit(oldp+45,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [1U][2U]));
    bufp->fullBit(oldp+46,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [1U][3U]));
    bufp->fullBit(oldp+47,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [1U][4U]));
    bufp->fullBit(oldp+48,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [1U][5U]));
    bufp->fullBit(oldp+49,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [2U][0U]));
    bufp->fullBit(oldp+50,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [2U][1U]));
    bufp->fullBit(oldp+51,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [2U][2U]));
    bufp->fullBit(oldp+52,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [2U][3U]));
    bufp->fullBit(oldp+53,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [2U][4U]));
    bufp->fullBit(oldp+54,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [2U][5U]));
    bufp->fullBit(oldp+55,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [3U][0U]));
    bufp->fullBit(oldp+56,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [3U][1U]));
    bufp->fullBit(oldp+57,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [3U][2U]));
    bufp->fullBit(oldp+58,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [3U][3U]));
    bufp->fullBit(oldp+59,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [3U][4U]));
    bufp->fullBit(oldp+60,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [3U][5U]));
    bufp->fullBit(oldp+61,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [4U][0U]));
    bufp->fullBit(oldp+62,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [4U][1U]));
    bufp->fullBit(oldp+63,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [4U][2U]));
    bufp->fullBit(oldp+64,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [4U][3U]));
    bufp->fullBit(oldp+65,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [4U][4U]));
    bufp->fullBit(oldp+66,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                           [4U][5U]));
    bufp->fullCData(oldp+67,(vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy),5);
    bufp->fullBit(oldp+68,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [0U][0U]));
    bufp->fullBit(oldp+69,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [0U][1U]));
    bufp->fullBit(oldp+70,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [0U][2U]));
    bufp->fullBit(oldp+71,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [0U][3U]));
    bufp->fullBit(oldp+72,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [0U][4U]));
    bufp->fullBit(oldp+73,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [0U][5U]));
    bufp->fullBit(oldp+74,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [1U][0U]));
    bufp->fullBit(oldp+75,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [1U][1U]));
    bufp->fullBit(oldp+76,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [1U][2U]));
    bufp->fullBit(oldp+77,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [1U][3U]));
    bufp->fullBit(oldp+78,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [1U][4U]));
    bufp->fullBit(oldp+79,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [1U][5U]));
    bufp->fullBit(oldp+80,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [2U][0U]));
    bufp->fullBit(oldp+81,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [2U][1U]));
    bufp->fullBit(oldp+82,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [2U][2U]));
    bufp->fullBit(oldp+83,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [2U][3U]));
    bufp->fullBit(oldp+84,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [2U][4U]));
    bufp->fullBit(oldp+85,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [2U][5U]));
    bufp->fullBit(oldp+86,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [3U][0U]));
    bufp->fullBit(oldp+87,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [3U][1U]));
    bufp->fullBit(oldp+88,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [3U][2U]));
    bufp->fullBit(oldp+89,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [3U][3U]));
    bufp->fullBit(oldp+90,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [3U][4U]));
    bufp->fullBit(oldp+91,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [3U][5U]));
    bufp->fullBit(oldp+92,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [4U][0U]));
    bufp->fullBit(oldp+93,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [4U][1U]));
    bufp->fullBit(oldp+94,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [4U][2U]));
    bufp->fullBit(oldp+95,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [4U][3U]));
    bufp->fullBit(oldp+96,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [4U][4U]));
    bufp->fullBit(oldp+97,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                           [4U][5U]));
    bufp->fullBit(oldp+98,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                           [0U][0U]));
    bufp->fullBit(oldp+99,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                           [0U][1U]));
    bufp->fullBit(oldp+100,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [0U][2U]));
    bufp->fullBit(oldp+101,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [0U][3U]));
    bufp->fullBit(oldp+102,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [0U][4U]));
    bufp->fullBit(oldp+103,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [0U][5U]));
    bufp->fullBit(oldp+104,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [1U][0U]));
    bufp->fullBit(oldp+105,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [1U][1U]));
    bufp->fullBit(oldp+106,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [1U][2U]));
    bufp->fullBit(oldp+107,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [1U][3U]));
    bufp->fullBit(oldp+108,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [1U][4U]));
    bufp->fullBit(oldp+109,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [1U][5U]));
    bufp->fullBit(oldp+110,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [2U][0U]));
    bufp->fullBit(oldp+111,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [2U][1U]));
    bufp->fullBit(oldp+112,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [2U][2U]));
    bufp->fullBit(oldp+113,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [2U][3U]));
    bufp->fullBit(oldp+114,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [2U][4U]));
    bufp->fullBit(oldp+115,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [2U][5U]));
    bufp->fullBit(oldp+116,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [3U][0U]));
    bufp->fullBit(oldp+117,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [3U][1U]));
    bufp->fullBit(oldp+118,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [3U][2U]));
    bufp->fullBit(oldp+119,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [3U][3U]));
    bufp->fullBit(oldp+120,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [3U][4U]));
    bufp->fullBit(oldp+121,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [3U][5U]));
    bufp->fullBit(oldp+122,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [4U][0U]));
    bufp->fullBit(oldp+123,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [4U][1U]));
    bufp->fullBit(oldp+124,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [4U][2U]));
    bufp->fullBit(oldp+125,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [4U][3U]));
    bufp->fullBit(oldp+126,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [4U][4U]));
    bufp->fullBit(oldp+127,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                            [4U][5U]));
    bufp->fullCData(oldp+128,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg),5);
    bufp->fullCData(oldp+129,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][0U]),8);
    bufp->fullCData(oldp+130,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][1U]),8);
    bufp->fullCData(oldp+131,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][2U]),8);
    bufp->fullCData(oldp+132,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][3U]),8);
    bufp->fullCData(oldp+133,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][4U]),8);
    bufp->fullCData(oldp+134,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][0U]),8);
    bufp->fullCData(oldp+135,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][1U]),8);
    bufp->fullCData(oldp+136,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][2U]),8);
    bufp->fullCData(oldp+137,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][3U]),8);
    bufp->fullCData(oldp+138,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][4U]),8);
    bufp->fullCData(oldp+139,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][0U]),8);
    bufp->fullCData(oldp+140,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][1U]),8);
    bufp->fullCData(oldp+141,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][2U]),8);
    bufp->fullCData(oldp+142,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][3U]),8);
    bufp->fullCData(oldp+143,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][4U]),8);
    bufp->fullCData(oldp+144,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [3U][0U]),8);
    bufp->fullCData(oldp+145,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [3U][1U]),8);
    bufp->fullCData(oldp+146,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [3U][2U]),8);
    bufp->fullCData(oldp+147,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [3U][3U]),8);
    bufp->fullCData(oldp+148,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [3U][4U]),8);
    bufp->fullCData(oldp+149,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [4U][0U]),8);
    bufp->fullCData(oldp+150,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [4U][1U]),8);
    bufp->fullCData(oldp+151,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [4U][2U]),8);
    bufp->fullCData(oldp+152,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [4U][3U]),8);
    bufp->fullCData(oldp+153,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [4U][4U]),8);
    bufp->fullCData(oldp+154,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [5U][0U]),8);
    bufp->fullCData(oldp+155,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [5U][1U]),8);
    bufp->fullCData(oldp+156,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [5U][2U]),8);
    bufp->fullCData(oldp+157,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [5U][3U]),8);
    bufp->fullCData(oldp+158,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [5U][4U]),8);
    bufp->fullCData(oldp+159,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [0U][0U]),8);
    bufp->fullCData(oldp+160,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [0U][1U]),8);
    bufp->fullCData(oldp+161,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [0U][2U]),8);
    bufp->fullCData(oldp+162,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [0U][3U]),8);
    bufp->fullCData(oldp+163,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [0U][4U]),8);
    bufp->fullCData(oldp+164,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [1U][0U]),8);
    bufp->fullCData(oldp+165,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [1U][1U]),8);
    bufp->fullCData(oldp+166,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [1U][2U]),8);
    bufp->fullCData(oldp+167,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [1U][3U]),8);
    bufp->fullCData(oldp+168,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [1U][4U]),8);
    bufp->fullCData(oldp+169,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [2U][0U]),8);
    bufp->fullCData(oldp+170,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [2U][1U]),8);
    bufp->fullCData(oldp+171,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [2U][2U]),8);
    bufp->fullCData(oldp+172,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [2U][3U]),8);
    bufp->fullCData(oldp+173,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [2U][4U]),8);
    bufp->fullCData(oldp+174,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [3U][0U]),8);
    bufp->fullCData(oldp+175,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [3U][1U]),8);
    bufp->fullCData(oldp+176,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [3U][2U]),8);
    bufp->fullCData(oldp+177,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [3U][3U]),8);
    bufp->fullCData(oldp+178,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [3U][4U]),8);
    bufp->fullCData(oldp+179,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [4U][0U]),8);
    bufp->fullCData(oldp+180,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [4U][1U]),8);
    bufp->fullCData(oldp+181,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [4U][2U]),8);
    bufp->fullCData(oldp+182,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [4U][3U]),8);
    bufp->fullCData(oldp+183,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [4U][4U]),8);
    bufp->fullCData(oldp+184,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [5U][0U]),8);
    bufp->fullCData(oldp+185,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [5U][1U]),8);
    bufp->fullCData(oldp+186,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [5U][2U]),8);
    bufp->fullCData(oldp+187,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [5U][3U]),8);
    bufp->fullCData(oldp+188,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                              [5U][4U]),8);
    bufp->fullCData(oldp+189,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][0U]),8);
    bufp->fullCData(oldp+190,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][1U]),8);
    bufp->fullCData(oldp+191,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][2U]),8);
    bufp->fullCData(oldp+192,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][3U]),8);
    bufp->fullCData(oldp+193,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][4U]),8);
    bufp->fullCData(oldp+194,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][5U]),8);
    bufp->fullCData(oldp+195,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][0U]),8);
    bufp->fullCData(oldp+196,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][1U]),8);
    bufp->fullCData(oldp+197,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][2U]),8);
    bufp->fullCData(oldp+198,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][3U]),8);
    bufp->fullCData(oldp+199,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][4U]),8);
    bufp->fullCData(oldp+200,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][5U]),8);
    bufp->fullCData(oldp+201,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][0U]),8);
    bufp->fullCData(oldp+202,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][1U]),8);
    bufp->fullCData(oldp+203,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][2U]),8);
    bufp->fullCData(oldp+204,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][3U]),8);
    bufp->fullCData(oldp+205,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][4U]),8);
    bufp->fullCData(oldp+206,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][5U]),8);
    bufp->fullCData(oldp+207,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [3U][0U]),8);
    bufp->fullCData(oldp+208,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [3U][1U]),8);
    bufp->fullCData(oldp+209,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [3U][2U]),8);
    bufp->fullCData(oldp+210,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [3U][3U]),8);
    bufp->fullCData(oldp+211,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [3U][4U]),8);
    bufp->fullCData(oldp+212,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [3U][5U]),8);
    bufp->fullCData(oldp+213,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [4U][0U]),8);
    bufp->fullCData(oldp+214,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [4U][1U]),8);
    bufp->fullCData(oldp+215,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [4U][2U]),8);
    bufp->fullCData(oldp+216,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [4U][3U]),8);
    bufp->fullCData(oldp+217,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [4U][4U]),8);
    bufp->fullCData(oldp+218,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [4U][5U]),8);
    bufp->fullCData(oldp+219,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [0U][0U]),8);
    bufp->fullCData(oldp+220,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [0U][1U]),8);
    bufp->fullCData(oldp+221,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [0U][2U]),8);
    bufp->fullCData(oldp+222,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [0U][3U]),8);
    bufp->fullCData(oldp+223,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [0U][4U]),8);
    bufp->fullCData(oldp+224,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [0U][5U]),8);
    bufp->fullCData(oldp+225,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [1U][0U]),8);
    bufp->fullCData(oldp+226,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [1U][1U]),8);
    bufp->fullCData(oldp+227,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [1U][2U]),8);
    bufp->fullCData(oldp+228,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [1U][3U]),8);
    bufp->fullCData(oldp+229,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [1U][4U]),8);
    bufp->fullCData(oldp+230,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [1U][5U]),8);
    bufp->fullCData(oldp+231,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [2U][0U]),8);
    bufp->fullCData(oldp+232,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [2U][1U]),8);
    bufp->fullCData(oldp+233,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [2U][2U]),8);
    bufp->fullCData(oldp+234,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [2U][3U]),8);
    bufp->fullCData(oldp+235,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [2U][4U]),8);
    bufp->fullCData(oldp+236,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [2U][5U]),8);
    bufp->fullCData(oldp+237,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [3U][0U]),8);
    bufp->fullCData(oldp+238,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [3U][1U]),8);
    bufp->fullCData(oldp+239,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [3U][2U]),8);
    bufp->fullCData(oldp+240,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [3U][3U]),8);
    bufp->fullCData(oldp+241,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [3U][4U]),8);
    bufp->fullCData(oldp+242,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [3U][5U]),8);
    bufp->fullCData(oldp+243,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [4U][0U]),8);
    bufp->fullCData(oldp+244,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [4U][1U]),8);
    bufp->fullCData(oldp+245,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [4U][2U]),8);
    bufp->fullCData(oldp+246,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [4U][3U]),8);
    bufp->fullCData(oldp+247,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [4U][4U]),8);
    bufp->fullCData(oldp+248,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                              [4U][5U]),8);
    bufp->fullCData(oldp+249,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][0U]),8);
    bufp->fullCData(oldp+250,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][1U]),8);
    bufp->fullCData(oldp+251,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][2U]),8);
    bufp->fullCData(oldp+252,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][3U]),8);
    bufp->fullCData(oldp+253,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][4U]),8);
    bufp->fullCData(oldp+254,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][5U]),8);
    bufp->fullCData(oldp+255,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][0U]),8);
    bufp->fullCData(oldp+256,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][1U]),8);
    bufp->fullCData(oldp+257,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][2U]),8);
    bufp->fullCData(oldp+258,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][3U]),8);
    bufp->fullCData(oldp+259,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][4U]),8);
    bufp->fullCData(oldp+260,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][5U]),8);
    bufp->fullCData(oldp+261,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][0U]),8);
    bufp->fullCData(oldp+262,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][1U]),8);
    bufp->fullCData(oldp+263,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][2U]),8);
    bufp->fullCData(oldp+264,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][3U]),8);
    bufp->fullCData(oldp+265,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][4U]),8);
    bufp->fullCData(oldp+266,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][5U]),8);
    bufp->fullCData(oldp+267,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [3U][0U]),8);
    bufp->fullCData(oldp+268,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [3U][1U]),8);
    bufp->fullCData(oldp+269,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [3U][2U]),8);
    bufp->fullCData(oldp+270,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [3U][3U]),8);
    bufp->fullCData(oldp+271,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [3U][4U]),8);
    bufp->fullCData(oldp+272,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [3U][5U]),8);
    bufp->fullCData(oldp+273,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [4U][0U]),8);
    bufp->fullCData(oldp+274,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [4U][1U]),8);
    bufp->fullCData(oldp+275,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [4U][2U]),8);
    bufp->fullCData(oldp+276,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [4U][3U]),8);
    bufp->fullCData(oldp+277,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [4U][4U]),8);
    bufp->fullCData(oldp+278,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [4U][5U]),8);
    bufp->fullCData(oldp+279,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [0U][0U]),8);
    bufp->fullCData(oldp+280,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [0U][1U]),8);
    bufp->fullCData(oldp+281,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [0U][2U]),8);
    bufp->fullCData(oldp+282,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [0U][3U]),8);
    bufp->fullCData(oldp+283,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [0U][4U]),8);
    bufp->fullCData(oldp+284,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [0U][5U]),8);
    bufp->fullCData(oldp+285,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [1U][0U]),8);
    bufp->fullCData(oldp+286,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [1U][1U]),8);
    bufp->fullCData(oldp+287,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [1U][2U]),8);
    bufp->fullCData(oldp+288,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [1U][3U]),8);
    bufp->fullCData(oldp+289,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [1U][4U]),8);
    bufp->fullCData(oldp+290,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [1U][5U]),8);
    bufp->fullCData(oldp+291,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [2U][0U]),8);
    bufp->fullCData(oldp+292,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [2U][1U]),8);
    bufp->fullCData(oldp+293,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [2U][2U]),8);
    bufp->fullCData(oldp+294,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [2U][3U]),8);
    bufp->fullCData(oldp+295,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [2U][4U]),8);
    bufp->fullCData(oldp+296,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [2U][5U]),8);
    bufp->fullCData(oldp+297,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [3U][0U]),8);
    bufp->fullCData(oldp+298,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [3U][1U]),8);
    bufp->fullCData(oldp+299,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [3U][2U]),8);
    bufp->fullCData(oldp+300,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [3U][3U]),8);
    bufp->fullCData(oldp+301,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [3U][4U]),8);
    bufp->fullCData(oldp+302,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [3U][5U]),8);
    bufp->fullCData(oldp+303,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [4U][0U]),8);
    bufp->fullCData(oldp+304,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [4U][1U]),8);
    bufp->fullCData(oldp+305,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [4U][2U]),8);
    bufp->fullCData(oldp+306,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [4U][3U]),8);
    bufp->fullCData(oldp+307,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [4U][4U]),8);
    bufp->fullCData(oldp+308,(vlSelfRef.systolic_array__DOT__bypass_data_out
                              [4U][5U]),8);
    bufp->fullBit(oldp+309,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [0U][0U]));
    bufp->fullBit(oldp+310,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [0U][1U]));
    bufp->fullBit(oldp+311,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [0U][2U]));
    bufp->fullBit(oldp+312,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [0U][3U]));
    bufp->fullBit(oldp+313,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [0U][4U]));
    bufp->fullBit(oldp+314,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [0U][5U]));
    bufp->fullBit(oldp+315,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [1U][0U]));
    bufp->fullBit(oldp+316,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [1U][1U]));
    bufp->fullBit(oldp+317,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [1U][2U]));
    bufp->fullBit(oldp+318,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [1U][3U]));
    bufp->fullBit(oldp+319,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [1U][4U]));
    bufp->fullBit(oldp+320,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [1U][5U]));
    bufp->fullBit(oldp+321,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [2U][0U]));
    bufp->fullBit(oldp+322,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [2U][1U]));
    bufp->fullBit(oldp+323,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [2U][2U]));
    bufp->fullBit(oldp+324,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [2U][3U]));
    bufp->fullBit(oldp+325,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [2U][4U]));
    bufp->fullBit(oldp+326,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [2U][5U]));
    bufp->fullBit(oldp+327,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [3U][0U]));
    bufp->fullBit(oldp+328,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [3U][1U]));
    bufp->fullBit(oldp+329,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [3U][2U]));
    bufp->fullBit(oldp+330,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [3U][3U]));
    bufp->fullBit(oldp+331,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [3U][4U]));
    bufp->fullBit(oldp+332,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [3U][5U]));
    bufp->fullBit(oldp+333,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [4U][0U]));
    bufp->fullBit(oldp+334,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [4U][1U]));
    bufp->fullBit(oldp+335,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [4U][2U]));
    bufp->fullBit(oldp+336,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [4U][3U]));
    bufp->fullBit(oldp+337,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [4U][4U]));
    bufp->fullBit(oldp+338,(vlSelfRef.systolic_array__DOT__mac_full_flag
                            [4U][5U]));
    bufp->fullBit(oldp+339,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [0U][0U]));
    bufp->fullBit(oldp+340,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [0U][1U]));
    bufp->fullBit(oldp+341,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [0U][2U]));
    bufp->fullBit(oldp+342,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [0U][3U]));
    bufp->fullBit(oldp+343,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [0U][4U]));
    bufp->fullBit(oldp+344,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [0U][5U]));
    bufp->fullBit(oldp+345,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [1U][0U]));
    bufp->fullBit(oldp+346,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [1U][1U]));
    bufp->fullBit(oldp+347,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [1U][2U]));
    bufp->fullBit(oldp+348,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [1U][3U]));
    bufp->fullBit(oldp+349,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [1U][4U]));
    bufp->fullBit(oldp+350,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [1U][5U]));
    bufp->fullBit(oldp+351,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [2U][0U]));
    bufp->fullBit(oldp+352,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [2U][1U]));
    bufp->fullBit(oldp+353,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [2U][2U]));
    bufp->fullBit(oldp+354,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [2U][3U]));
    bufp->fullBit(oldp+355,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [2U][4U]));
    bufp->fullBit(oldp+356,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [2U][5U]));
    bufp->fullBit(oldp+357,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [3U][0U]));
    bufp->fullBit(oldp+358,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [3U][1U]));
    bufp->fullBit(oldp+359,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [3U][2U]));
    bufp->fullBit(oldp+360,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [3U][3U]));
    bufp->fullBit(oldp+361,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [3U][4U]));
    bufp->fullBit(oldp+362,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [3U][5U]));
    bufp->fullBit(oldp+363,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [4U][0U]));
    bufp->fullBit(oldp+364,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [4U][1U]));
    bufp->fullBit(oldp+365,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [4U][2U]));
    bufp->fullBit(oldp+366,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [4U][3U]));
    bufp->fullBit(oldp+367,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [4U][4U]));
    bufp->fullBit(oldp+368,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                            [4U][5U]));
    bufp->fullIData(oldp+369,(vlSelfRef.systolic_array__DOT__flat_full_flags),20);
    bufp->fullBit(oldp+370,((0U != vlSelfRef.systolic_array__DOT__flat_full_flags)));
    bufp->fullIData(oldp+371,(vlSelfRef.systolic_array__DOT__row_data_out_tmp),32);
    bufp->fullCData(oldp+372,(vlSelfRef.systolic_array__DOT__deskew
                              [0U][0U]),8);
    bufp->fullCData(oldp+373,(vlSelfRef.systolic_array__DOT__deskew
                              [0U][1U]),8);
    bufp->fullCData(oldp+374,(vlSelfRef.systolic_array__DOT__deskew
                              [0U][2U]),8);
    bufp->fullCData(oldp+375,(vlSelfRef.systolic_array__DOT__deskew
                              [1U][0U]),8);
    bufp->fullCData(oldp+376,(vlSelfRef.systolic_array__DOT__deskew
                              [1U][1U]),8);
    bufp->fullCData(oldp+377,(vlSelfRef.systolic_array__DOT__deskew
                              [1U][2U]),8);
    bufp->fullCData(oldp+378,(vlSelfRef.systolic_array__DOT__deskew
                              [2U][0U]),8);
    bufp->fullCData(oldp+379,(vlSelfRef.systolic_array__DOT__deskew
                              [2U][1U]),8);
    bufp->fullCData(oldp+380,(vlSelfRef.systolic_array__DOT__deskew
                              [2U][2U]),8);
    bufp->fullCData(oldp+381,(vlSelfRef.systolic_array__DOT__deskew
                              [3U][0U]),8);
    bufp->fullCData(oldp+382,(vlSelfRef.systolic_array__DOT__deskew
                              [3U][1U]),8);
    bufp->fullCData(oldp+383,(vlSelfRef.systolic_array__DOT__deskew
                              [3U][2U]),8);
    bufp->fullCData(oldp+384,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_0),4);
    bufp->fullCData(oldp+385,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_1_to_rest),4);
    bufp->fullSData(oldp+386,(((((((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__8__KET__) 
                                   << 4U) | (((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__7__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__6__KET__) 
                                                << 2U))) 
                                 | (((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__5__KET__) 
                                     << 1U) | (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__4__KET__))) 
                                << 4U) | ((((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__3__KET__) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__2__KET__) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__1__KET__) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__0__KET__))))),9);
    bufp->fullBit(oldp+387,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][0U]));
    bufp->fullBit(oldp+388,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][0U]));
    bufp->fullCData(oldp+389,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][0U]),8);
    bufp->fullCData(oldp+390,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][0U]),8);
    bufp->fullCData(oldp+391,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][0U]),8);
    bufp->fullBit(oldp+392,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][0U])));
    bufp->fullBit(oldp+393,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+394,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+395,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+396,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+397,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+398,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+399,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+400,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+401,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+402,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+403,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+404,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+405,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+406,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+407,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+408,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+409,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+410,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+411,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+412,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+413,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+414,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+415,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+416,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+417,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+418,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+419,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullBit(oldp+420,((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)))));
    bufp->fullCData(oldp+421,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+422,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+423,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+424,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+425,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+426,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+427,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][0U])));
    bufp->fullBit(oldp+428,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+429,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                              [4U]),8);
    bufp->fullBit(oldp+430,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+431,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+432,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+433,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+434,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+435,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+436,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][1U]));
    bufp->fullBit(oldp+437,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][1U]));
    bufp->fullCData(oldp+438,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][0U]),8);
    bufp->fullCData(oldp+439,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][1U]),8);
    bufp->fullCData(oldp+440,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][1U]),8);
    bufp->fullBit(oldp+441,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][1U])));
    bufp->fullBit(oldp+442,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+443,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+444,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+445,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+446,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+447,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+448,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+449,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+450,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+451,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+452,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+453,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+454,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+455,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+456,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+457,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+458,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+459,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+460,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+461,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+462,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+463,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+464,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+465,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+466,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+467,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+468,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+469,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+470,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+471,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+472,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+473,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+474,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+475,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][1U])));
    bufp->fullBit(oldp+476,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+477,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                              [3U]),8);
    bufp->fullBit(oldp+478,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+479,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+480,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+481,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+482,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+483,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+484,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][2U]));
    bufp->fullBit(oldp+485,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][2U]));
    bufp->fullCData(oldp+486,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][0U]),8);
    bufp->fullCData(oldp+487,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][2U]),8);
    bufp->fullCData(oldp+488,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][2U]),8);
    bufp->fullBit(oldp+489,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][2U])));
    bufp->fullBit(oldp+490,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+491,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+492,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+493,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+494,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+495,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+496,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+497,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+498,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+499,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+500,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+501,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+502,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+503,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+504,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+505,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+506,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+507,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+508,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+509,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+510,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+511,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+512,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+513,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+514,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+515,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+516,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+517,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+518,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+519,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+520,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+521,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+522,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+523,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][2U])));
    bufp->fullBit(oldp+524,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+525,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                              [2U]),8);
    bufp->fullBit(oldp+526,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+527,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+528,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+529,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+530,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+531,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+532,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][3U]));
    bufp->fullBit(oldp+533,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][3U]));
    bufp->fullCData(oldp+534,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [3U][0U]),8);
    bufp->fullCData(oldp+535,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][3U]),8);
    bufp->fullCData(oldp+536,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][3U]),8);
    bufp->fullBit(oldp+537,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][3U])));
    bufp->fullBit(oldp+538,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+539,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+540,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+541,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+542,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+543,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+544,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+545,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+546,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+547,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+548,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+549,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+550,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+551,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+552,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+553,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+554,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+555,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+556,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+557,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+558,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+559,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+560,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+561,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+562,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+563,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+564,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+565,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+566,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+567,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+568,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+569,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+570,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+571,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][3U])));
    bufp->fullBit(oldp+572,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+573,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                              [1U]),8);
    bufp->fullBit(oldp+574,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+575,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+576,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+577,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+578,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+579,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+580,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][4U]));
    bufp->fullBit(oldp+581,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][4U]));
    bufp->fullCData(oldp+582,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [4U][0U]),8);
    bufp->fullCData(oldp+583,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][4U]),8);
    bufp->fullCData(oldp+584,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][4U]),8);
    bufp->fullBit(oldp+585,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][4U])));
    bufp->fullBit(oldp+586,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+587,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+588,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+589,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+590,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+591,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+592,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+593,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+594,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+595,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+596,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+597,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+598,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+599,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+600,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+601,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+602,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+603,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+604,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+605,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+606,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+607,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+608,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+609,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+610,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+611,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+612,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+613,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+614,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+615,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+616,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+617,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+618,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+619,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][4U])));
    bufp->fullBit(oldp+620,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+621,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                              [0U]),8);
    bufp->fullBit(oldp+622,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+623,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+624,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+625,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+626,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+627,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+628,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][0U]));
    bufp->fullBit(oldp+629,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][0U]));
    bufp->fullCData(oldp+630,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][1U]),8);
    bufp->fullCData(oldp+631,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][0U]),8);
    bufp->fullCData(oldp+632,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][0U]),8);
    bufp->fullBit(oldp+633,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][0U])));
    bufp->fullBit(oldp+634,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+635,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+636,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+637,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+638,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+639,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+640,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+641,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+642,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+643,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+644,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+645,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+646,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+647,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+648,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+649,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+650,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+651,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+652,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+653,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+654,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+655,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+656,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+657,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+658,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+659,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+660,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+661,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+662,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+663,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+664,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+665,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+666,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+667,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][0U])));
    bufp->fullBit(oldp+668,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+669,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                              [4U]),8);
    bufp->fullBit(oldp+670,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+671,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+672,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+673,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+674,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+675,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+676,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][1U]));
    bufp->fullBit(oldp+677,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][1U]));
    bufp->fullCData(oldp+678,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][1U]),8);
    bufp->fullCData(oldp+679,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][1U]),8);
    bufp->fullCData(oldp+680,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][1U]),8);
    bufp->fullBit(oldp+681,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][1U])));
    bufp->fullBit(oldp+682,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+683,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+684,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+685,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+686,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+687,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+688,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+689,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+690,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+691,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+692,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+693,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+694,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+695,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+696,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+697,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+698,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+699,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+700,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+701,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+702,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+703,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+704,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+705,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+706,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+707,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+708,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+709,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+710,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+711,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+712,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+713,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+714,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+715,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][1U])));
    bufp->fullBit(oldp+716,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+717,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                              [3U]),8);
    bufp->fullBit(oldp+718,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+719,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+720,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+721,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+722,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+723,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+724,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][2U]));
    bufp->fullBit(oldp+725,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][2U]));
    bufp->fullCData(oldp+726,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][1U]),8);
    bufp->fullCData(oldp+727,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][2U]),8);
    bufp->fullCData(oldp+728,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][2U]),8);
    bufp->fullBit(oldp+729,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][2U])));
    bufp->fullBit(oldp+730,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+731,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+732,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+733,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+734,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+735,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+736,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+737,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+738,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+739,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+740,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+741,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+742,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+743,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+744,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+745,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+746,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+747,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+748,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+749,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+750,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+751,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+752,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+753,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+754,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+755,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+756,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+757,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+758,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+759,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+760,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+761,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+762,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+763,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][2U])));
    bufp->fullBit(oldp+764,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+765,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                              [2U]),8);
    bufp->fullBit(oldp+766,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+767,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+768,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+769,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+770,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+771,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+772,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][3U]));
    bufp->fullBit(oldp+773,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][3U]));
    bufp->fullCData(oldp+774,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [3U][1U]),8);
    bufp->fullCData(oldp+775,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][3U]),8);
    bufp->fullCData(oldp+776,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][3U]),8);
    bufp->fullBit(oldp+777,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][3U])));
    bufp->fullBit(oldp+778,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+779,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+780,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+781,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+782,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+783,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+784,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+785,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+786,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+787,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+788,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+789,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+790,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+791,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+792,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+793,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+794,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+795,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+796,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+797,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+798,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+799,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+800,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+801,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+802,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+803,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+804,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+805,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+806,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+807,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+808,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+809,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+810,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+811,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][3U])));
    bufp->fullBit(oldp+812,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+813,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                              [1U]),8);
    bufp->fullBit(oldp+814,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+815,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+816,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+817,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+818,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+819,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+820,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][4U]));
    bufp->fullBit(oldp+821,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][4U]));
    bufp->fullCData(oldp+822,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [4U][1U]),8);
    bufp->fullCData(oldp+823,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][4U]),8);
    bufp->fullCData(oldp+824,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][4U]),8);
    bufp->fullBit(oldp+825,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][4U])));
    bufp->fullBit(oldp+826,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+827,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+828,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+829,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+830,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+831,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+832,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+833,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+834,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+835,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+836,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+837,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+838,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+839,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+840,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+841,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+842,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+843,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+844,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+845,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+846,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+847,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+848,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+849,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+850,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+851,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+852,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+853,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+854,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+855,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+856,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+857,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+858,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+859,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][4U])));
    bufp->fullBit(oldp+860,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+861,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                              [0U]),8);
    bufp->fullBit(oldp+862,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+863,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+864,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+865,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+866,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+867,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+868,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [2U][0U]));
    bufp->fullBit(oldp+869,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [2U][0U]));
    bufp->fullCData(oldp+870,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][2U]),8);
    bufp->fullCData(oldp+871,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][0U]),8);
    bufp->fullCData(oldp+872,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][0U]),8);
    bufp->fullBit(oldp+873,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][0U])));
    bufp->fullBit(oldp+874,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+875,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+876,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+877,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+878,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+879,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+880,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+881,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+882,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+883,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+884,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+885,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+886,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+887,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+888,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+889,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+890,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+891,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+892,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+893,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+894,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+895,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+896,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+897,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+898,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+899,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+900,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+901,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+902,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+903,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+904,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+905,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+906,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+907,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][0U])));
    bufp->fullBit(oldp+908,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+909,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                              [4U]),8);
    bufp->fullBit(oldp+910,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+911,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+912,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+913,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+914,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+915,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+916,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [2U][1U]));
    bufp->fullBit(oldp+917,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [2U][1U]));
    bufp->fullCData(oldp+918,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][2U]),8);
    bufp->fullCData(oldp+919,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][1U]),8);
    bufp->fullCData(oldp+920,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][1U]),8);
    bufp->fullBit(oldp+921,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][1U])));
    bufp->fullBit(oldp+922,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+923,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+924,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+925,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+926,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+927,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+928,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+929,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+930,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+931,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+932,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+933,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+934,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+935,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+936,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+937,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+938,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+939,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+940,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+941,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+942,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+943,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+944,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+945,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+946,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+947,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+948,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+949,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+950,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+951,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+952,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+953,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+954,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+955,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][1U])));
    bufp->fullBit(oldp+956,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+957,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                              [3U]),8);
    bufp->fullBit(oldp+958,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+959,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+960,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+961,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+962,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+963,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+964,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [2U][2U]));
    bufp->fullBit(oldp+965,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [2U][2U]));
    bufp->fullCData(oldp+966,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][2U]),8);
    bufp->fullCData(oldp+967,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][2U]),8);
    bufp->fullCData(oldp+968,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][2U]),8);
    bufp->fullBit(oldp+969,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][2U])));
    bufp->fullBit(oldp+970,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+971,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+972,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+973,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+974,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+975,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+976,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+977,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+978,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+979,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+980,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+981,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+982,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+983,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+984,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+985,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+986,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+987,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+988,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+989,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+990,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+991,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+992,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+993,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+994,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+995,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+996,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+997,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+998,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+999,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1000,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1001,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1002,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1003,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][2U])));
    bufp->fullBit(oldp+1004,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1005,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                               [2U]),8);
    bufp->fullBit(oldp+1006,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1007,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1008,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1009,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1010,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1011,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1012,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [2U][3U]));
    bufp->fullBit(oldp+1013,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][3U]));
    bufp->fullCData(oldp+1014,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [3U][2U]),8);
    bufp->fullCData(oldp+1015,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [2U][3U]),8);
    bufp->fullCData(oldp+1016,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [2U][3U]),8);
    bufp->fullBit(oldp+1017,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][3U])));
    bufp->fullBit(oldp+1018,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1019,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1020,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1021,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1022,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1023,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1024,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1025,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1026,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1027,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1028,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1029,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1030,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1031,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1032,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1033,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1034,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1035,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [2U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1036,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1037,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1038,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1039,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1040,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1041,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1042,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1043,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1044,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1045,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1046,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1047,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1048,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1049,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1050,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1051,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][3U])));
    bufp->fullBit(oldp+1052,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1053,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                               [1U]),8);
    bufp->fullBit(oldp+1054,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1055,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1056,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1057,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1058,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1059,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1060,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [2U][4U]));
    bufp->fullBit(oldp+1061,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][4U]));
    bufp->fullCData(oldp+1062,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [4U][2U]),8);
    bufp->fullCData(oldp+1063,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [2U][4U]),8);
    bufp->fullCData(oldp+1064,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [2U][4U]),8);
    bufp->fullBit(oldp+1065,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][4U])));
    bufp->fullBit(oldp+1066,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1067,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1068,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1069,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1070,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1071,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1072,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1073,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1074,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1075,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1076,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1077,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1078,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1079,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1080,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1081,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1082,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1083,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [2U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1084,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1085,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1086,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1087,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1088,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1089,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1090,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1091,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1092,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1093,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1094,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1095,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1096,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1097,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1098,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1099,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][4U])));
    bufp->fullBit(oldp+1100,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1101,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                               [0U]),8);
    bufp->fullBit(oldp+1102,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1103,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1104,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1105,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1106,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1107,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1108,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][0U]));
    bufp->fullBit(oldp+1109,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][0U]));
    bufp->fullCData(oldp+1110,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [0U][3U]),8);
    bufp->fullCData(oldp+1111,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][0U]),8);
    bufp->fullCData(oldp+1112,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][0U]),8);
    bufp->fullBit(oldp+1113,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][0U])));
    bufp->fullBit(oldp+1114,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1115,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1116,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1117,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1118,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1119,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1120,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1121,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1122,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1123,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1124,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1125,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1126,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1127,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1128,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1129,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1130,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1131,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1132,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1133,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1134,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1135,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1136,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1137,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1138,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1139,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1140,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1141,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1142,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1143,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1144,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1145,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1146,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1147,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][0U])));
    bufp->fullBit(oldp+1148,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1149,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                               [4U]),8);
    bufp->fullBit(oldp+1150,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1151,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1152,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1153,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1154,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1155,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1156,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][1U]));
    bufp->fullBit(oldp+1157,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][1U]));
    bufp->fullCData(oldp+1158,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [1U][3U]),8);
    bufp->fullCData(oldp+1159,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][1U]),8);
    bufp->fullCData(oldp+1160,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][1U]),8);
    bufp->fullBit(oldp+1161,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][1U])));
    bufp->fullBit(oldp+1162,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1163,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1164,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1165,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1166,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1167,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1168,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1169,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1170,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1171,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1172,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1173,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1174,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1175,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1176,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1177,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1178,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1179,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1180,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1181,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1182,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1183,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1184,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1185,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1186,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1187,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1188,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1189,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1190,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1191,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1192,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1193,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1194,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1195,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][1U])));
    bufp->fullBit(oldp+1196,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1197,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                               [3U]),8);
    bufp->fullBit(oldp+1198,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1199,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1200,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1201,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1202,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1203,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1204,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][2U]));
    bufp->fullBit(oldp+1205,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][2U]));
    bufp->fullCData(oldp+1206,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [2U][3U]),8);
    bufp->fullCData(oldp+1207,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][2U]),8);
    bufp->fullCData(oldp+1208,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][2U]),8);
    bufp->fullBit(oldp+1209,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][2U])));
    bufp->fullBit(oldp+1210,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1211,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1212,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1213,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1214,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1215,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1216,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1217,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1218,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1219,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1220,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1221,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1222,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1223,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1224,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1225,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1226,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1227,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1228,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1229,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1230,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1231,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1232,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1233,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1234,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1235,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1236,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1237,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1238,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1239,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1240,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1241,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1242,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1243,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][2U])));
    bufp->fullBit(oldp+1244,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1245,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                               [2U]),8);
    bufp->fullBit(oldp+1246,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1247,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1248,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1249,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1250,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1251,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1252,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][3U]));
    bufp->fullBit(oldp+1253,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][3U]));
    bufp->fullCData(oldp+1254,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [3U][3U]),8);
    bufp->fullCData(oldp+1255,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][3U]),8);
    bufp->fullCData(oldp+1256,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][3U]),8);
    bufp->fullBit(oldp+1257,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][3U])));
    bufp->fullBit(oldp+1258,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1259,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1260,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1261,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1262,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1263,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1264,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1265,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1266,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1267,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1268,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1269,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1270,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1271,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1272,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1273,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1274,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1275,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1276,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1277,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1278,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1279,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1280,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1281,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1282,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1283,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1284,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1285,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1286,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1287,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1288,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1289,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1290,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1291,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][3U])));
    bufp->fullBit(oldp+1292,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1293,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                               [1U]),8);
    bufp->fullBit(oldp+1294,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1295,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1296,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1297,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1298,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1299,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1300,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][4U]));
    bufp->fullBit(oldp+1301,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][4U]));
    bufp->fullCData(oldp+1302,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [4U][3U]),8);
    bufp->fullCData(oldp+1303,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][4U]),8);
    bufp->fullCData(oldp+1304,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][4U]),8);
    bufp->fullBit(oldp+1305,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][4U])));
    bufp->fullBit(oldp+1306,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1307,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1308,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1309,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1310,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1311,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1312,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1313,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1314,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1315,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1316,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1317,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1318,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1319,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1320,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1321,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1322,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1323,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1324,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1325,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1326,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1327,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1328,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1329,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1330,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1331,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1332,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1333,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1334,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1335,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1336,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1337,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1338,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1339,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][4U])));
    bufp->fullBit(oldp+1340,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1341,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                               [0U]),8);
    bufp->fullBit(oldp+1342,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1343,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1344,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1345,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1346,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1347,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1348,(vlSelfRef.clk));
    bufp->fullBit(oldp+1349,(vlSelfRef.rst));
    bufp->fullBit(oldp+1350,(vlSelfRef.en));
    bufp->fullBit(oldp+1351,(vlSelfRef.flush));
    bufp->fullBit(oldp+1352,(vlSelfRef.rst_accumulator_rdy));
    bufp->fullBit(oldp+1353,(vlSelfRef.stream_out_rdy));
    bufp->fullIData(oldp+1354,(vlSelfRef.row_data_in),32);
    bufp->fullBit(oldp+1355,(vlSelfRef.row_data_in_vld));
    bufp->fullBit(oldp+1356,(vlSelfRef.row_data_in_rdy));
    bufp->fullQData(oldp+1357,(vlSelfRef.col_data_in),40);
    bufp->fullBit(oldp+1359,(vlSelfRef.col_data_in_vld));
    bufp->fullBit(oldp+1360,(vlSelfRef.col_data_in_rdy));
    bufp->fullIData(oldp+1361,(vlSelfRef.row_data_out),32);
    bufp->fullBit(oldp+1362,(vlSelfRef.row_data_out_vld));
    bufp->fullBit(oldp+1363,(vlSelfRef.row_data_out_rdy));
}
