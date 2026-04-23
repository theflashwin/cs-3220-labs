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
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1337,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1339,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1340,0,"rst_accumulator_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1341,0,"stream_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1342,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1343,0,"row_data_in_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1344,0,"row_data_in_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1345,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1347,0,"col_data_in_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"col_data_in_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1349,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1350,0,"row_data_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1351,0,"row_data_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("systolic_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ACC_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1357,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1337,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1339,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1340,0,"rst_accumulator_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1341,0,"stream_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1342,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1343,0,"row_data_in_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1344,0,"row_data_in_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1345,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1347,0,"col_data_in_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"col_data_in_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1349,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1350,0,"row_data_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1351,0,"row_data_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->pushPrefix("ctrl_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ACC_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"input_rst_accumulator",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"input_stream_out_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"rst_accumulator",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+128,0,"stream_out_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1356,0,"MULTIPLIER_DELAY_SLOTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"comparator_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"rst_accumulator_reg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+373,0,"rst_accumulator_reg_1_to_rest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+374,0,"stream_out_rdy_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+128,0,"stream_out_rdy_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_rows[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("instantiate_mac_cols[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+379,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+383,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+384,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+387+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+395,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+396,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+397,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+399,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+400,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+404,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+405,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+377,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+381,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+399,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+400,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+399,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+407,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+396,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+397,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+409,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+410,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+411+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+413+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+403,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+401,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+420,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+421,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+423,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+427,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+428,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+432,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+433,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+436+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+444,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+445,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+446,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+444,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+447,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+448,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+449,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+452,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+453,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+454,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+426,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+427,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+430,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+444,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+447,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+448,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+449,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+456,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+427,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+445,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+446,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+458,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+459+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+461+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+465,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+452,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+450,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+468,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+469,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+471,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+474,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+475,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+476,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+479,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+480,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+481,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+483,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+484+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+492,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+493,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+494,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+495,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+496,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+497,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+500,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+501,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+502,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+474,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+475,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+478,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+495,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+496,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+497,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+496,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+504,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+474,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+475,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+493,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+494,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+506,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+507+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+509+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+513,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+500,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+498,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+515,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+516,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+517,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+519,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+522,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+523,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+524,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+527,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+528,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+529,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+531,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+532+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+540,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+541,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+542,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+540,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+543,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+545,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+548,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+549,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+550,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+522,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+523,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+526,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+540,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+543,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+545,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+544,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+552,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+522,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+523,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+541,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+542,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+554,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+555+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+557+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+561,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+548,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+546,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+563,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+564,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+565,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+567,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+570,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+571,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+572,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+575,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+576,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+577,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+579,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+580+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+588,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+589,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+590,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+591,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+592,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+593,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+597,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+598,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+570,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+571,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+574,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+591,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+592,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+593,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+592,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+600,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+570,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+571,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+589,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+590,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+601,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+602,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+603+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+605+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+609,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+596,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+594,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+612,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+613,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+615,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_rows[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("instantiate_mac_cols[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+619,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+620,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+623,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+624,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+625,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+627,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+628+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+636,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+637,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+638,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+636,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+639,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+640,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+641,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+642,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+644,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+645,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+646,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+618,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+619,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+622,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+636,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+639,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+640,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+641,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+640,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+648,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+619,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+637,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+638,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+649,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+650,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+651+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+653+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+656,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+644,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+642,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+659,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+660,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+661,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+663,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+664,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+666,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+667,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+668,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+669,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+670,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+672,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+673,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+675,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+676+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+684,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+685,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+686,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+684,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+687,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+688,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+689,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+692,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+693,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+694,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+666,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+667,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+670,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+684,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+687,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+688,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+689,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+688,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+696,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+666,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+667,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+685,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+686,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+697,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+698,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+699+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+701+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+705,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+692,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+690,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+707,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+708,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+709,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+711,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+712,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+714,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+715,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+716,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+717,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+719,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+720,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+721,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+723,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+724+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+732,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+733,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+734,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+732,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+735,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+736,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+737,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+740,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+741,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+742,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+714,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+715,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+718,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+743,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+732,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+735,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+736,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+737,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+736,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+744,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+714,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+715,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+733,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+734,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+745,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+746,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+747+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+749+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+740,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+738,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+755,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+756,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+757,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+758,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+759,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+762,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+763,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+764,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+767,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+768,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+769,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+771,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+772+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+780,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+781,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+782,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+780,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+783,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+784,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+785,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+788,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+789,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+790,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+762,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+763,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+766,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+780,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+783,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+784,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+785,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+784,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+792,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+762,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+763,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+781,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+782,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+793,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+794,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+795+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+797+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+800,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+801,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+788,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+786,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+803,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+804,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+805,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+807,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+810,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+811,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+812,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+814,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+815,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+816,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+817,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+819,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+820+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+828,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+829,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+830,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+828,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+831,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+832,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+833,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+836,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+837,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+838,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+810,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+811,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+814,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+828,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+831,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+832,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+833,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+832,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+840,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+810,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+811,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+829,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+830,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+842,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+843+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+845+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+848,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+849,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+836,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+834,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+851,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+852,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+853,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+854,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+855,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_rows[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("instantiate_mac_cols[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+858,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+859,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+860,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+863,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+864,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+865,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+867,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+868+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+876,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+877,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+878,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+876,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+879,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+880,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+881,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+884,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+885,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+886,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+858,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+859,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+862,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+876,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+879,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+880,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+881,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+880,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+888,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+858,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+859,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+877,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+878,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+890,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+891+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+893+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+897,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+884,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+882,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+899,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+900,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+901,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+903,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+906,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+907,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+908,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+911,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+912,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+913,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+915,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+916+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+924,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+925,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+926,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+924,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+927,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+928,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+929,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+932,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+933,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+934,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+906,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+907,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+910,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+924,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+927,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+928,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+929,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+928,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+936,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+906,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+907,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+925,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+926,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+937,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+938,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+939+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+941+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+943,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+944,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+945,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+932,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+930,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+946,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+947,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+948,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+949,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+950,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+951,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+953,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+954,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+955,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+956,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+959,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+960,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+961,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+963,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+964+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+972,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+973,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+974,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+972,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+975,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+976,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+977,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+979,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+980,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+981,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+982,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+954,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+955,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+958,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+983,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+972,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+975,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+976,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+977,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+976,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+984,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+954,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+955,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+973,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+974,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+985,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+986,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+987+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+989+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+993,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+980,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+978,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+994,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+979,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+995,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+996,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+997,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+999,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1002,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1003,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1004,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1008,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1009,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1010,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1011,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1012+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1020,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1021,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1022,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1023,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1024,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1025,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1028,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1029,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1030,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1002,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1003,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1006,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1031,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1023,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1024,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1025,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1024,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1032,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1002,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1003,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1021,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1022,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1033,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1034,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1035+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1037+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1039,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1040,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1041,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1028,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1026,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1043,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1044,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1045,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1046,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1047,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1048,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1049,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1050,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1051,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1052,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1053,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1054,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1055,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1056,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1057,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1058,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1059,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1060+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1068,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1069,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1070,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1068,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1071,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1072,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1073,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1074,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1075,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1076,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1077,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1078,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1050,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1051,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1054,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1068,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1071,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1072,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1073,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1072,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1080,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1050,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1051,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1069,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1070,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1081,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1082,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1083+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1085+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1087,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1088,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1089,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1076,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1074,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1090,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1075,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1091,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1092,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1093,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1094,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1095,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_rows[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("instantiate_mac_cols[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1097,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1098,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1099,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1100,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1101,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1102,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1103,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1104,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1105,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1106,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1107,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1108+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1116,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1117,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1118,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1116,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1119,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1120,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1121,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1122,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1123,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1124,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1125,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1126,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1098,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1099,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1102,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1127,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1116,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1119,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1120,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1121,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1120,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1128,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1098,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1099,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1117,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1118,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1129,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1130,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1131+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1133+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1137,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1124,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1122,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1138,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1123,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1139,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1140,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1141,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1142,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1143,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1145,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1146,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1147,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1148,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1149,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1151,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1152,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1153,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1155,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1156+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1164,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1165,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1166,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1164,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1167,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1168,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1169,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1170,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1171,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1172,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1173,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1174,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1146,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1147,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1150,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1175,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1164,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1167,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1168,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1169,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1168,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1176,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1146,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1147,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1165,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1166,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1177,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1178,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1179+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1181+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1183,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1185,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1172,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1170,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1186,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1171,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1187,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1188,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1189,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1190,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1191,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1192,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1195,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1196,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1199,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1200,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1201,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1202,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1203,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1204+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1212,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1213,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1214,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1212,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1215,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1216,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1217,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1218,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1219,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1220,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1221,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1222,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1194,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1195,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1198,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1223,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1212,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1215,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1216,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1217,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1216,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1224,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1195,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1213,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1214,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1225,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1226,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1227+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1229+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1231,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1232,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1233,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1220,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1218,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1234,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1219,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1235,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1236,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1237,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1238,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1239,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1240,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1241,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1242,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1243,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1244,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1245,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1246,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1247,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1248,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1249,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1250,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1251,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1252+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1260,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1261,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1262,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1260,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1263,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1264,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1265,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1268,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1269,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1270,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1242,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1243,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1246,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1271,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1260,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1263,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1264,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1265,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1264,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1272,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1242,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1243,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1261,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1262,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1273,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1274,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1275+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1277+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1279,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1280,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1281,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1268,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1266,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1282,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1283,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1284,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1285,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1286,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1287,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instantiate_mac_cols[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mac_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"IN_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"MULT_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"ADD_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"COLS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"ROWS_IDX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1288,0,"rst_accumulator_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1289,0,"stream_out_rdy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1290,0,"row_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1291,0,"col_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1292,0,"bypass_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1293,0,"mac_full_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1294,0,"psum_out_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1295,0,"row_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1296,0,"col_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1297,0,"rst_accumulator_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1298,0,"stream_out_rdy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1299,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"COLS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("psum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1300+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1308,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1309,0,"multiplier_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1310,0,"multiplier_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1308,0,"adder_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1311,0,"adder_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1312,0,"adder_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1313,0,"adder_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1314,0,"fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1315,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1316,0,"fifo_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1317,0,"bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"bypass_counter_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1318,0,"bypass_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1290,0,"mul_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1291,0,"mul_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1294,0,"psum_out_vld_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1319,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1308,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1311,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1312,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1313,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1312,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1320,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"A_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"B_WIDTH_EXTENDED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1352,0,"INPUT_A_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"INPUT_B_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_A_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"INPUT_B_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"OUTPUT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"OUTPUT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1290,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1291,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1309,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1310,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1321,0,"mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1322,0,"en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mult_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1323+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("en_delayed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1325+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("output_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1359,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1336,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1328,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1329,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1316,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1314,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1330,0,"half_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1315,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1331,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1332,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1333,0,"empty_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1334,0,"full_or_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"half_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1335,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
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
    bufp->fullIData(oldp+1352,(8U),32);
    bufp->fullIData(oldp+1353,(0U),32);
    bufp->fullIData(oldp+1354,(3U),32);
    bufp->fullIData(oldp+1355,(1U),32);
    bufp->fullIData(oldp+1356,(4U),32);
    bufp->fullIData(oldp+1357,(0x00000014U),32);
    bufp->fullIData(oldp+1358,(5U),32);
    bufp->fullIData(oldp+1359,(0x00000040U),32);
    bufp->fullCData(oldp+1360,(4U),3);
    bufp->fullIData(oldp+1361,(0x00000020U),32);
    bufp->fullCData(oldp+1362,(0x20U),6);
    bufp->fullIData(oldp+1363,(2U),32);
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
    bufp->fullCData(oldp+372,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_0),4);
    bufp->fullCData(oldp+373,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_1_to_rest),4);
    bufp->fullSData(oldp+374,(((((((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__8__KET__) 
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
    bufp->fullBit(oldp+375,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][0U]));
    bufp->fullBit(oldp+376,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][0U]));
    bufp->fullCData(oldp+377,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][0U]),8);
    bufp->fullCData(oldp+378,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][0U]),8);
    bufp->fullCData(oldp+379,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][0U]),8);
    bufp->fullBit(oldp+380,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][0U])));
    bufp->fullBit(oldp+381,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+382,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+383,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+384,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+385,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+386,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+387,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+388,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+389,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+390,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+391,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+392,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+393,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+394,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+395,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+396,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+397,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+398,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+399,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+400,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+401,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+402,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+403,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+404,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+405,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+406,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+407,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullBit(oldp+408,((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)))));
    bufp->fullCData(oldp+409,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+410,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+411,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+412,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+413,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+414,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+415,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][0U])));
    bufp->fullBit(oldp+416,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+417,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                              [4U]),8);
    bufp->fullBit(oldp+418,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+419,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+420,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+421,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+422,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+423,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+424,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][1U]));
    bufp->fullBit(oldp+425,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][1U]));
    bufp->fullCData(oldp+426,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][0U]),8);
    bufp->fullCData(oldp+427,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][1U]),8);
    bufp->fullCData(oldp+428,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][1U]),8);
    bufp->fullBit(oldp+429,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][1U])));
    bufp->fullBit(oldp+430,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+431,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+432,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+433,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+434,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+435,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+436,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+437,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+438,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+439,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+440,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+441,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+442,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+443,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+444,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+445,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+446,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+447,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+448,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+449,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+450,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+451,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+452,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+453,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+454,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+455,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+456,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+457,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+458,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+459,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+460,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+461,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+462,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+463,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][1U])));
    bufp->fullBit(oldp+464,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+465,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                              [3U]),8);
    bufp->fullBit(oldp+466,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+467,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+468,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+469,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+470,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+471,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+472,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][2U]));
    bufp->fullBit(oldp+473,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][2U]));
    bufp->fullCData(oldp+474,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][0U]),8);
    bufp->fullCData(oldp+475,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][2U]),8);
    bufp->fullCData(oldp+476,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][2U]),8);
    bufp->fullBit(oldp+477,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][2U])));
    bufp->fullBit(oldp+478,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+479,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+480,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+481,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+482,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+483,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+484,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+485,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+486,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+487,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+488,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+489,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+490,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+491,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+492,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+493,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+494,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+495,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+496,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+497,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+498,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+499,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+500,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+501,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+502,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+503,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+504,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+505,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+506,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+507,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+508,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+509,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+510,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+511,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][2U])));
    bufp->fullBit(oldp+512,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+513,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                              [2U]),8);
    bufp->fullBit(oldp+514,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+515,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+516,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+517,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+518,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+519,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+520,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][3U]));
    bufp->fullBit(oldp+521,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][3U]));
    bufp->fullCData(oldp+522,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [3U][0U]),8);
    bufp->fullCData(oldp+523,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][3U]),8);
    bufp->fullCData(oldp+524,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][3U]),8);
    bufp->fullBit(oldp+525,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][3U])));
    bufp->fullBit(oldp+526,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+527,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+528,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+529,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+530,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+531,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+532,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+533,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+534,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+535,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+536,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+537,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+538,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+539,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+540,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+541,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+542,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+543,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+544,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+545,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+546,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+547,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+548,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+549,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+550,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+551,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+552,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+553,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+554,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+555,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+556,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+557,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+558,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+559,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][3U])));
    bufp->fullBit(oldp+560,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+561,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                              [1U]),8);
    bufp->fullBit(oldp+562,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+563,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+564,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+565,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+566,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+567,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+568,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [0U][4U]));
    bufp->fullBit(oldp+569,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [0U][4U]));
    bufp->fullCData(oldp+570,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [4U][0U]),8);
    bufp->fullCData(oldp+571,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [0U][4U]),8);
    bufp->fullCData(oldp+572,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [0U][4U]),8);
    bufp->fullBit(oldp+573,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][4U])));
    bufp->fullBit(oldp+574,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+575,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+576,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+577,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+578,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+579,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+580,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+581,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+582,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+583,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+584,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+585,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+586,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+587,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+588,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+589,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+590,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+591,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+592,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+593,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+594,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+595,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+596,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+597,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+598,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+599,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+600,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+601,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+602,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+603,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+604,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+605,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+606,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+607,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [0U][4U])));
    bufp->fullBit(oldp+608,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+609,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                              [0U]),8);
    bufp->fullBit(oldp+610,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+611,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+612,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+613,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+614,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+615,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+616,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][0U]));
    bufp->fullBit(oldp+617,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][0U]));
    bufp->fullCData(oldp+618,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][1U]),8);
    bufp->fullCData(oldp+619,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][0U]),8);
    bufp->fullCData(oldp+620,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][0U]),8);
    bufp->fullBit(oldp+621,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][0U])));
    bufp->fullBit(oldp+622,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+623,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+624,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+625,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+626,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+627,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+628,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+629,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+630,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+631,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+632,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+633,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+634,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+635,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+636,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+637,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+638,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+639,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+640,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+641,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+642,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+643,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+644,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+645,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+646,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+647,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+648,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+649,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+650,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+651,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+652,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+653,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+654,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+655,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][0U])));
    bufp->fullBit(oldp+656,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+657,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                              [4U]),8);
    bufp->fullBit(oldp+658,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+659,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+660,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+661,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+662,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+663,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+664,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][1U]));
    bufp->fullBit(oldp+665,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][1U]));
    bufp->fullCData(oldp+666,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][1U]),8);
    bufp->fullCData(oldp+667,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][1U]),8);
    bufp->fullCData(oldp+668,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][1U]),8);
    bufp->fullBit(oldp+669,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][1U])));
    bufp->fullBit(oldp+670,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+671,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+672,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+673,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+674,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+675,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+676,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+677,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+678,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+679,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+680,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+681,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+682,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+683,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+684,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+685,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+686,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+687,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+688,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+689,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+690,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+691,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+692,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+693,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+694,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+695,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+696,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+697,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+698,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+699,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+700,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+701,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+702,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+703,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][1U])));
    bufp->fullBit(oldp+704,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+705,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                              [3U]),8);
    bufp->fullBit(oldp+706,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+707,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+708,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+709,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+710,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+711,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+712,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][2U]));
    bufp->fullBit(oldp+713,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][2U]));
    bufp->fullCData(oldp+714,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][1U]),8);
    bufp->fullCData(oldp+715,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][2U]),8);
    bufp->fullCData(oldp+716,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][2U]),8);
    bufp->fullBit(oldp+717,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][2U])));
    bufp->fullBit(oldp+718,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+719,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+720,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+721,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+722,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+723,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+724,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+725,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+726,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+727,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+728,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+729,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+730,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+731,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+732,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+733,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+734,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+735,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+736,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+737,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+738,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+739,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+740,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+741,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+742,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+743,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+744,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+745,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+746,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+747,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+748,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+749,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+750,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+751,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][2U])));
    bufp->fullBit(oldp+752,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+753,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                              [2U]),8);
    bufp->fullBit(oldp+754,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+755,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+756,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+757,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+758,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+759,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+760,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][3U]));
    bufp->fullBit(oldp+761,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][3U]));
    bufp->fullCData(oldp+762,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [3U][1U]),8);
    bufp->fullCData(oldp+763,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][3U]),8);
    bufp->fullCData(oldp+764,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][3U]),8);
    bufp->fullBit(oldp+765,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][3U])));
    bufp->fullBit(oldp+766,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+767,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+768,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+769,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+770,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+771,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+772,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+773,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+774,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+775,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+776,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+777,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+778,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+779,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+780,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+781,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+782,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+783,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+784,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+785,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+786,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+787,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+788,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+789,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+790,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+791,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+792,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+793,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+794,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+795,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+796,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+797,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+798,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+799,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][3U])));
    bufp->fullBit(oldp+800,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+801,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                              [1U]),8);
    bufp->fullBit(oldp+802,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+803,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+804,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+805,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+806,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+807,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+808,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [1U][4U]));
    bufp->fullBit(oldp+809,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [1U][4U]));
    bufp->fullCData(oldp+810,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [4U][1U]),8);
    bufp->fullCData(oldp+811,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [1U][4U]),8);
    bufp->fullCData(oldp+812,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [1U][4U]),8);
    bufp->fullBit(oldp+813,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][4U])));
    bufp->fullBit(oldp+814,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+815,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+816,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+817,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+818,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+819,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+820,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+821,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+822,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+823,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+824,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+825,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+826,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+827,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+828,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+829,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+830,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+831,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+832,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+833,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+834,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+835,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+836,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+837,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+838,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+839,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+840,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+841,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+842,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+843,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+844,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+845,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+846,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+847,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [1U][4U])));
    bufp->fullBit(oldp+848,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+849,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                              [0U]),8);
    bufp->fullBit(oldp+850,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+851,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+852,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+853,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+854,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+855,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+856,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [2U][0U]));
    bufp->fullBit(oldp+857,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [2U][0U]));
    bufp->fullCData(oldp+858,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [0U][2U]),8);
    bufp->fullCData(oldp+859,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][0U]),8);
    bufp->fullCData(oldp+860,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][0U]),8);
    bufp->fullBit(oldp+861,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][0U])));
    bufp->fullBit(oldp+862,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+863,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+864,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+865,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+866,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+867,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+868,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+869,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+870,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+871,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+872,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+873,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+874,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+875,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+876,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+877,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+878,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+879,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+880,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+881,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+882,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+883,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+884,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+885,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+886,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+887,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+888,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+889,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+890,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+891,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+892,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+893,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+894,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+895,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][0U])));
    bufp->fullBit(oldp+896,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+897,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                              [4U]),8);
    bufp->fullBit(oldp+898,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+899,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+900,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+901,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+902,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+903,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+904,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [2U][1U]));
    bufp->fullBit(oldp+905,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [2U][1U]));
    bufp->fullCData(oldp+906,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [1U][2U]),8);
    bufp->fullCData(oldp+907,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][1U]),8);
    bufp->fullCData(oldp+908,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][1U]),8);
    bufp->fullBit(oldp+909,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][1U])));
    bufp->fullBit(oldp+910,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+911,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+912,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+913,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+914,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+915,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+916,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+917,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+918,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+919,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+920,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+921,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+922,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+923,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+924,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+925,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+926,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+927,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+928,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+929,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+930,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+931,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+932,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+933,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+934,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+935,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+936,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+937,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+938,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+939,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+940,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+941,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+942,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+943,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][1U])));
    bufp->fullBit(oldp+944,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+945,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                              [3U]),8);
    bufp->fullBit(oldp+946,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+947,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+948,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+949,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+950,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+951,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+952,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                            [2U][2U]));
    bufp->fullBit(oldp+953,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                            [2U][2U]));
    bufp->fullCData(oldp+954,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                              [2U][2U]),8);
    bufp->fullCData(oldp+955,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                              [2U][2U]),8);
    bufp->fullCData(oldp+956,(vlSelfRef.systolic_array__DOT__bypass_data_in
                              [2U][2U]),8);
    bufp->fullBit(oldp+957,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][2U])));
    bufp->fullBit(oldp+958,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+959,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+960,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+961,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+962,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+963,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+964,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+965,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+966,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+967,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+968,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+969,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+970,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+971,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+972,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+973,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+974,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+975,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+976,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+977,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+978,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+979,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+980,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                              [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+981,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+982,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+983,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                             & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+984,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+985,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+986,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+987,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+988,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+989,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+990,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+991,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                             & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][2U])));
    bufp->fullBit(oldp+992,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                      | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+993,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                              [2U]),8);
    bufp->fullBit(oldp+994,((0x20U <= (0x0000003fU 
                                       & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                          - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+995,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+996,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+997,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+998,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+999,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1000,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [2U][3U]));
    bufp->fullBit(oldp+1001,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][3U]));
    bufp->fullCData(oldp+1002,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [3U][2U]),8);
    bufp->fullCData(oldp+1003,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [2U][3U]),8);
    bufp->fullCData(oldp+1004,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [2U][3U]),8);
    bufp->fullBit(oldp+1005,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][3U])));
    bufp->fullBit(oldp+1006,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1007,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1008,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1009,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1010,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1011,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1012,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1013,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1014,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1015,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1016,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1017,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1018,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1019,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1020,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1021,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1022,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1023,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [2U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1024,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1025,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1026,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1027,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1028,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1029,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1030,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1031,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1032,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1033,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1034,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1035,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1036,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1037,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1038,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1039,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][3U])));
    bufp->fullBit(oldp+1040,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1041,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                               [1U]),8);
    bufp->fullBit(oldp+1042,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1043,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1044,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1045,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1046,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1047,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1048,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [2U][4U]));
    bufp->fullBit(oldp+1049,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [2U][4U]));
    bufp->fullCData(oldp+1050,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [4U][2U]),8);
    bufp->fullCData(oldp+1051,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [2U][4U]),8);
    bufp->fullCData(oldp+1052,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [2U][4U]),8);
    bufp->fullBit(oldp+1053,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][4U])));
    bufp->fullBit(oldp+1054,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1055,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1056,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1057,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1058,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1059,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1060,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1061,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1062,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1063,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1064,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1065,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1066,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1067,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1068,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1069,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1070,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1071,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [2U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1072,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1073,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1074,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1075,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1076,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1077,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1078,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1079,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1080,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1081,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1082,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1083,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1084,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1085,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1086,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1087,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][4U])));
    bufp->fullBit(oldp+1088,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1089,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                               [0U]),8);
    bufp->fullBit(oldp+1090,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1091,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1092,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1093,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1094,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1095,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1096,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][0U]));
    bufp->fullBit(oldp+1097,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][0U]));
    bufp->fullCData(oldp+1098,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [0U][3U]),8);
    bufp->fullCData(oldp+1099,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][0U]),8);
    bufp->fullCData(oldp+1100,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][0U]),8);
    bufp->fullBit(oldp+1101,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][0U])));
    bufp->fullBit(oldp+1102,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1103,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1104,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1105,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1106,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1107,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1108,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1109,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1110,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1111,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1112,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1113,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1114,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1115,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1116,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1117,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1118,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1119,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1120,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1121,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1122,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1123,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1124,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1125,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1126,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1127,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1128,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1129,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1130,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1131,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1132,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1133,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1134,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1135,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][0U])));
    bufp->fullBit(oldp+1136,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1137,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                               [4U]),8);
    bufp->fullBit(oldp+1138,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1139,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1140,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1141,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1142,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1143,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1144,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][1U]));
    bufp->fullBit(oldp+1145,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][1U]));
    bufp->fullCData(oldp+1146,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [1U][3U]),8);
    bufp->fullCData(oldp+1147,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][1U]),8);
    bufp->fullCData(oldp+1148,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][1U]),8);
    bufp->fullBit(oldp+1149,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][1U])));
    bufp->fullBit(oldp+1150,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1151,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1152,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1153,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1154,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1155,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1156,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1157,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1158,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1159,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1160,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1161,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1162,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1163,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1164,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1165,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1166,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1167,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1168,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1169,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1170,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1171,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1172,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1173,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1174,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1175,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1176,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1177,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1178,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1179,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1180,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1181,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1182,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1183,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][1U])));
    bufp->fullBit(oldp+1184,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1185,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                               [3U]),8);
    bufp->fullBit(oldp+1186,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1187,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1188,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1189,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1190,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1191,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1192,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][2U]));
    bufp->fullBit(oldp+1193,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][2U]));
    bufp->fullCData(oldp+1194,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [2U][3U]),8);
    bufp->fullCData(oldp+1195,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][2U]),8);
    bufp->fullCData(oldp+1196,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][2U]),8);
    bufp->fullBit(oldp+1197,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][2U])));
    bufp->fullBit(oldp+1198,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1199,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1200,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1201,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1202,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1203,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1204,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1205,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1206,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1207,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1208,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1209,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1210,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1211,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1212,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1213,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1214,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1215,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1216,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1217,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1218,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1219,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1220,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1221,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1222,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1223,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1224,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1225,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1226,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1227,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1228,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1229,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1230,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1231,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][2U])));
    bufp->fullBit(oldp+1232,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1233,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                               [2U]),8);
    bufp->fullBit(oldp+1234,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1235,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1236,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1237,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1238,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1239,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1240,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][3U]));
    bufp->fullBit(oldp+1241,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][3U]));
    bufp->fullCData(oldp+1242,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [3U][3U]),8);
    bufp->fullCData(oldp+1243,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][3U]),8);
    bufp->fullCData(oldp+1244,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][3U]),8);
    bufp->fullBit(oldp+1245,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][3U])));
    bufp->fullBit(oldp+1246,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1247,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1248,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1249,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1250,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1251,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1252,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1253,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1254,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1255,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1256,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1257,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1258,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1259,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1260,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1261,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1262,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1263,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1264,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1265,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1266,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1267,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1268,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1269,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1270,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1271,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1272,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1273,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1274,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1275,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1276,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1277,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1278,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1279,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][3U])));
    bufp->fullBit(oldp+1280,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1281,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                               [1U]),8);
    bufp->fullBit(oldp+1282,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1283,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1284,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1285,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1286,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1287,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1288,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [3U][4U]));
    bufp->fullBit(oldp+1289,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                             [3U][4U]));
    bufp->fullCData(oldp+1290,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                               [4U][3U]),8);
    bufp->fullCData(oldp+1291,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                               [3U][4U]),8);
    bufp->fullCData(oldp+1292,(vlSelfRef.systolic_array__DOT__bypass_data_in
                               [3U][4U]),8);
    bufp->fullBit(oldp+1293,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][4U])));
    bufp->fullBit(oldp+1294,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
    bufp->fullCData(oldp+1295,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
    bufp->fullCData(oldp+1296,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
    bufp->fullBit(oldp+1297,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
    bufp->fullBit(oldp+1298,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
    bufp->fullCData(oldp+1299,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
    bufp->fullCData(oldp+1300,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
    bufp->fullCData(oldp+1301,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
    bufp->fullCData(oldp+1302,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
    bufp->fullCData(oldp+1303,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
    bufp->fullCData(oldp+1304,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
    bufp->fullCData(oldp+1305,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
    bufp->fullCData(oldp+1306,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
    bufp->fullCData(oldp+1307,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
    bufp->fullCData(oldp+1308,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
    bufp->fullCData(oldp+1309,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                               [1U]),8);
    bufp->fullBit(oldp+1310,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
    bufp->fullCData(oldp+1311,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+1312,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+1313,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+1314,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
    bufp->fullBit(oldp+1315,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
    bufp->fullCData(oldp+1316,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                               [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
    bufp->fullBit(oldp+1317,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
    bufp->fullCData(oldp+1318,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
    bufp->fullBit(oldp+1319,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                              & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
    bufp->fullBit(oldp+1320,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+1321,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+1322,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+1323,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+1324,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+1325,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+1326,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+1327,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                              & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][4U])));
    bufp->fullBit(oldp+1328,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                       | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
    bufp->fullCData(oldp+1329,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                               [0U]),8);
    bufp->fullBit(oldp+1330,((0x20U <= (0x0000003fU 
                                        & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                           - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
    bufp->fullCData(oldp+1331,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
    bufp->fullCData(oldp+1332,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
    bufp->fullBit(oldp+1333,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
    bufp->fullBit(oldp+1334,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
    bufp->fullCData(oldp+1335,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                               - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    bufp->fullBit(oldp+1336,(vlSelfRef.clk));
    bufp->fullBit(oldp+1337,(vlSelfRef.rst));
    bufp->fullBit(oldp+1338,(vlSelfRef.en));
    bufp->fullBit(oldp+1339,(vlSelfRef.flush));
    bufp->fullBit(oldp+1340,(vlSelfRef.rst_accumulator_rdy));
    bufp->fullBit(oldp+1341,(vlSelfRef.stream_out_rdy));
    bufp->fullIData(oldp+1342,(vlSelfRef.row_data_in),32);
    bufp->fullBit(oldp+1343,(vlSelfRef.row_data_in_vld));
    bufp->fullBit(oldp+1344,(vlSelfRef.row_data_in_rdy));
    bufp->fullQData(oldp+1345,(vlSelfRef.col_data_in),40);
    bufp->fullBit(oldp+1347,(vlSelfRef.col_data_in_vld));
    bufp->fullBit(oldp+1348,(vlSelfRef.col_data_in_rdy));
    bufp->fullIData(oldp+1349,(vlSelfRef.row_data_out),32);
    bufp->fullBit(oldp+1350,(vlSelfRef.row_data_out_vld));
    bufp->fullBit(oldp+1351,(vlSelfRef.row_data_out_rdy));
}
