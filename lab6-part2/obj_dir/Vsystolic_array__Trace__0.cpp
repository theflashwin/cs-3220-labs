// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


void Vsystolic_array___024root__trace_chg_0_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsystolic_array___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_0\n"); );
    // Body
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsystolic_array___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsystolic_array___024root__trace_chg_0_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_0_sub_0\n"); );
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.systolic_array__DOT__rst_r));
        bufp->chgBit(oldp+1,(vlSelfRef.systolic_array__DOT__rst_accumulator_rdy_r));
        bufp->chgBit(oldp+2,(vlSelfRef.systolic_array__DOT__stream_out_rdy_r));
        bufp->chgIData(oldp+3,(vlSelfRef.systolic_array__DOT__row_data_in_r),32);
        bufp->chgQData(oldp+4,(vlSelfRef.systolic_array__DOT__col_data_in_r),40);
        bufp->chgBit(oldp+6,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [0U][0U]));
        bufp->chgBit(oldp+7,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [0U][1U]));
        bufp->chgBit(oldp+8,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [0U][2U]));
        bufp->chgBit(oldp+9,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                             [0U][3U]));
        bufp->chgBit(oldp+10,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [0U][4U]));
        bufp->chgBit(oldp+11,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [0U][5U]));
        bufp->chgBit(oldp+12,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [1U][0U]));
        bufp->chgBit(oldp+13,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [1U][1U]));
        bufp->chgBit(oldp+14,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [1U][2U]));
        bufp->chgBit(oldp+15,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [1U][3U]));
        bufp->chgBit(oldp+16,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [1U][4U]));
        bufp->chgBit(oldp+17,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [1U][5U]));
        bufp->chgBit(oldp+18,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [2U][0U]));
        bufp->chgBit(oldp+19,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [2U][1U]));
        bufp->chgBit(oldp+20,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [2U][2U]));
        bufp->chgBit(oldp+21,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [2U][3U]));
        bufp->chgBit(oldp+22,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [2U][4U]));
        bufp->chgBit(oldp+23,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [2U][5U]));
        bufp->chgBit(oldp+24,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [3U][0U]));
        bufp->chgBit(oldp+25,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [3U][1U]));
        bufp->chgBit(oldp+26,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [3U][2U]));
        bufp->chgBit(oldp+27,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [3U][3U]));
        bufp->chgBit(oldp+28,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [3U][4U]));
        bufp->chgBit(oldp+29,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [3U][5U]));
        bufp->chgBit(oldp+30,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [4U][0U]));
        bufp->chgBit(oldp+31,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [4U][1U]));
        bufp->chgBit(oldp+32,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [4U][2U]));
        bufp->chgBit(oldp+33,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [4U][3U]));
        bufp->chgBit(oldp+34,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [4U][4U]));
        bufp->chgBit(oldp+35,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                              [4U][5U]));
        bufp->chgBit(oldp+36,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [0U][0U]));
        bufp->chgBit(oldp+37,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [0U][1U]));
        bufp->chgBit(oldp+38,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [0U][2U]));
        bufp->chgBit(oldp+39,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [0U][3U]));
        bufp->chgBit(oldp+40,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [0U][4U]));
        bufp->chgBit(oldp+41,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [0U][5U]));
        bufp->chgBit(oldp+42,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [1U][0U]));
        bufp->chgBit(oldp+43,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [1U][1U]));
        bufp->chgBit(oldp+44,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [1U][2U]));
        bufp->chgBit(oldp+45,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [1U][3U]));
        bufp->chgBit(oldp+46,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [1U][4U]));
        bufp->chgBit(oldp+47,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [1U][5U]));
        bufp->chgBit(oldp+48,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [2U][0U]));
        bufp->chgBit(oldp+49,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [2U][1U]));
        bufp->chgBit(oldp+50,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [2U][2U]));
        bufp->chgBit(oldp+51,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [2U][3U]));
        bufp->chgBit(oldp+52,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [2U][4U]));
        bufp->chgBit(oldp+53,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [2U][5U]));
        bufp->chgBit(oldp+54,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [3U][0U]));
        bufp->chgBit(oldp+55,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [3U][1U]));
        bufp->chgBit(oldp+56,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [3U][2U]));
        bufp->chgBit(oldp+57,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [3U][3U]));
        bufp->chgBit(oldp+58,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [3U][4U]));
        bufp->chgBit(oldp+59,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [3U][5U]));
        bufp->chgBit(oldp+60,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [4U][0U]));
        bufp->chgBit(oldp+61,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [4U][1U]));
        bufp->chgBit(oldp+62,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [4U][2U]));
        bufp->chgBit(oldp+63,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [4U][3U]));
        bufp->chgBit(oldp+64,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [4U][4U]));
        bufp->chgBit(oldp+65,(vlSelfRef.systolic_array__DOT__rst_accumulator_out
                              [4U][5U]));
        bufp->chgCData(oldp+66,(vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy),5);
        bufp->chgBit(oldp+67,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [0U][0U]));
        bufp->chgBit(oldp+68,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [0U][1U]));
        bufp->chgBit(oldp+69,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [0U][2U]));
        bufp->chgBit(oldp+70,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [0U][3U]));
        bufp->chgBit(oldp+71,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [0U][4U]));
        bufp->chgBit(oldp+72,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [0U][5U]));
        bufp->chgBit(oldp+73,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [1U][0U]));
        bufp->chgBit(oldp+74,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [1U][1U]));
        bufp->chgBit(oldp+75,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [1U][2U]));
        bufp->chgBit(oldp+76,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [1U][3U]));
        bufp->chgBit(oldp+77,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [1U][4U]));
        bufp->chgBit(oldp+78,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [1U][5U]));
        bufp->chgBit(oldp+79,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][0U]));
        bufp->chgBit(oldp+80,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][1U]));
        bufp->chgBit(oldp+81,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][2U]));
        bufp->chgBit(oldp+82,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][3U]));
        bufp->chgBit(oldp+83,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][4U]));
        bufp->chgBit(oldp+84,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [2U][5U]));
        bufp->chgBit(oldp+85,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][0U]));
        bufp->chgBit(oldp+86,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][1U]));
        bufp->chgBit(oldp+87,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][2U]));
        bufp->chgBit(oldp+88,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][3U]));
        bufp->chgBit(oldp+89,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][4U]));
        bufp->chgBit(oldp+90,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [3U][5U]));
        bufp->chgBit(oldp+91,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [4U][0U]));
        bufp->chgBit(oldp+92,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [4U][1U]));
        bufp->chgBit(oldp+93,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [4U][2U]));
        bufp->chgBit(oldp+94,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [4U][3U]));
        bufp->chgBit(oldp+95,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [4U][4U]));
        bufp->chgBit(oldp+96,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                              [4U][5U]));
        bufp->chgBit(oldp+97,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                              [0U][0U]));
        bufp->chgBit(oldp+98,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                              [0U][1U]));
        bufp->chgBit(oldp+99,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                              [0U][2U]));
        bufp->chgBit(oldp+100,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [0U][3U]));
        bufp->chgBit(oldp+101,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [0U][4U]));
        bufp->chgBit(oldp+102,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [0U][5U]));
        bufp->chgBit(oldp+103,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [1U][0U]));
        bufp->chgBit(oldp+104,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [1U][1U]));
        bufp->chgBit(oldp+105,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [1U][2U]));
        bufp->chgBit(oldp+106,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [1U][3U]));
        bufp->chgBit(oldp+107,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [1U][4U]));
        bufp->chgBit(oldp+108,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [1U][5U]));
        bufp->chgBit(oldp+109,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [2U][0U]));
        bufp->chgBit(oldp+110,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [2U][1U]));
        bufp->chgBit(oldp+111,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [2U][2U]));
        bufp->chgBit(oldp+112,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [2U][3U]));
        bufp->chgBit(oldp+113,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [2U][4U]));
        bufp->chgBit(oldp+114,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [2U][5U]));
        bufp->chgBit(oldp+115,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [3U][0U]));
        bufp->chgBit(oldp+116,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [3U][1U]));
        bufp->chgBit(oldp+117,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [3U][2U]));
        bufp->chgBit(oldp+118,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [3U][3U]));
        bufp->chgBit(oldp+119,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [3U][4U]));
        bufp->chgBit(oldp+120,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [3U][5U]));
        bufp->chgBit(oldp+121,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [4U][0U]));
        bufp->chgBit(oldp+122,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [4U][1U]));
        bufp->chgBit(oldp+123,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [4U][2U]));
        bufp->chgBit(oldp+124,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [4U][3U]));
        bufp->chgBit(oldp+125,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [4U][4U]));
        bufp->chgBit(oldp+126,(vlSelfRef.systolic_array__DOT__stream_out_rdy_out
                               [4U][5U]));
        bufp->chgCData(oldp+127,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg),5);
        bufp->chgCData(oldp+128,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [0U][0U]),8);
        bufp->chgCData(oldp+129,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [0U][1U]),8);
        bufp->chgCData(oldp+130,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [0U][2U]),8);
        bufp->chgCData(oldp+131,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [0U][3U]),8);
        bufp->chgCData(oldp+132,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [0U][4U]),8);
        bufp->chgCData(oldp+133,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [1U][0U]),8);
        bufp->chgCData(oldp+134,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [1U][1U]),8);
        bufp->chgCData(oldp+135,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [1U][2U]),8);
        bufp->chgCData(oldp+136,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [1U][3U]),8);
        bufp->chgCData(oldp+137,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [1U][4U]),8);
        bufp->chgCData(oldp+138,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [2U][0U]),8);
        bufp->chgCData(oldp+139,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [2U][1U]),8);
        bufp->chgCData(oldp+140,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [2U][2U]),8);
        bufp->chgCData(oldp+141,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [2U][3U]),8);
        bufp->chgCData(oldp+142,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [2U][4U]),8);
        bufp->chgCData(oldp+143,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [3U][0U]),8);
        bufp->chgCData(oldp+144,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [3U][1U]),8);
        bufp->chgCData(oldp+145,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [3U][2U]),8);
        bufp->chgCData(oldp+146,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [3U][3U]),8);
        bufp->chgCData(oldp+147,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [3U][4U]),8);
        bufp->chgCData(oldp+148,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [4U][0U]),8);
        bufp->chgCData(oldp+149,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [4U][1U]),8);
        bufp->chgCData(oldp+150,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [4U][2U]),8);
        bufp->chgCData(oldp+151,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [4U][3U]),8);
        bufp->chgCData(oldp+152,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [4U][4U]),8);
        bufp->chgCData(oldp+153,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [5U][0U]),8);
        bufp->chgCData(oldp+154,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [5U][1U]),8);
        bufp->chgCData(oldp+155,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [5U][2U]),8);
        bufp->chgCData(oldp+156,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [5U][3U]),8);
        bufp->chgCData(oldp+157,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [5U][4U]),8);
        bufp->chgCData(oldp+158,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [0U][0U]),8);
        bufp->chgCData(oldp+159,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [0U][1U]),8);
        bufp->chgCData(oldp+160,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [0U][2U]),8);
        bufp->chgCData(oldp+161,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [0U][3U]),8);
        bufp->chgCData(oldp+162,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [0U][4U]),8);
        bufp->chgCData(oldp+163,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [1U][0U]),8);
        bufp->chgCData(oldp+164,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [1U][1U]),8);
        bufp->chgCData(oldp+165,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [1U][2U]),8);
        bufp->chgCData(oldp+166,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [1U][3U]),8);
        bufp->chgCData(oldp+167,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [1U][4U]),8);
        bufp->chgCData(oldp+168,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [2U][0U]),8);
        bufp->chgCData(oldp+169,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [2U][1U]),8);
        bufp->chgCData(oldp+170,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [2U][2U]),8);
        bufp->chgCData(oldp+171,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [2U][3U]),8);
        bufp->chgCData(oldp+172,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [2U][4U]),8);
        bufp->chgCData(oldp+173,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [3U][0U]),8);
        bufp->chgCData(oldp+174,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [3U][1U]),8);
        bufp->chgCData(oldp+175,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [3U][2U]),8);
        bufp->chgCData(oldp+176,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [3U][3U]),8);
        bufp->chgCData(oldp+177,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [3U][4U]),8);
        bufp->chgCData(oldp+178,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [4U][0U]),8);
        bufp->chgCData(oldp+179,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [4U][1U]),8);
        bufp->chgCData(oldp+180,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [4U][2U]),8);
        bufp->chgCData(oldp+181,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [4U][3U]),8);
        bufp->chgCData(oldp+182,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [4U][4U]),8);
        bufp->chgCData(oldp+183,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [5U][0U]),8);
        bufp->chgCData(oldp+184,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [5U][1U]),8);
        bufp->chgCData(oldp+185,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [5U][2U]),8);
        bufp->chgCData(oldp+186,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [5U][3U]),8);
        bufp->chgCData(oldp+187,(vlSelfRef.systolic_array__DOT__mac_row_data_out
                                 [5U][4U]),8);
        bufp->chgCData(oldp+188,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][0U]),8);
        bufp->chgCData(oldp+189,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][1U]),8);
        bufp->chgCData(oldp+190,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][2U]),8);
        bufp->chgCData(oldp+191,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][3U]),8);
        bufp->chgCData(oldp+192,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][4U]),8);
        bufp->chgCData(oldp+193,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][5U]),8);
        bufp->chgCData(oldp+194,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][0U]),8);
        bufp->chgCData(oldp+195,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][1U]),8);
        bufp->chgCData(oldp+196,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][2U]),8);
        bufp->chgCData(oldp+197,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][3U]),8);
        bufp->chgCData(oldp+198,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][4U]),8);
        bufp->chgCData(oldp+199,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][5U]),8);
        bufp->chgCData(oldp+200,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [2U][0U]),8);
        bufp->chgCData(oldp+201,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [2U][1U]),8);
        bufp->chgCData(oldp+202,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [2U][2U]),8);
        bufp->chgCData(oldp+203,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [2U][3U]),8);
        bufp->chgCData(oldp+204,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [2U][4U]),8);
        bufp->chgCData(oldp+205,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [2U][5U]),8);
        bufp->chgCData(oldp+206,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [3U][0U]),8);
        bufp->chgCData(oldp+207,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [3U][1U]),8);
        bufp->chgCData(oldp+208,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [3U][2U]),8);
        bufp->chgCData(oldp+209,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [3U][3U]),8);
        bufp->chgCData(oldp+210,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [3U][4U]),8);
        bufp->chgCData(oldp+211,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [3U][5U]),8);
        bufp->chgCData(oldp+212,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [4U][0U]),8);
        bufp->chgCData(oldp+213,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [4U][1U]),8);
        bufp->chgCData(oldp+214,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [4U][2U]),8);
        bufp->chgCData(oldp+215,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [4U][3U]),8);
        bufp->chgCData(oldp+216,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [4U][4U]),8);
        bufp->chgCData(oldp+217,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [4U][5U]),8);
        bufp->chgCData(oldp+218,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [0U][0U]),8);
        bufp->chgCData(oldp+219,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [0U][1U]),8);
        bufp->chgCData(oldp+220,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [0U][2U]),8);
        bufp->chgCData(oldp+221,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [0U][3U]),8);
        bufp->chgCData(oldp+222,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [0U][4U]),8);
        bufp->chgCData(oldp+223,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [0U][5U]),8);
        bufp->chgCData(oldp+224,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [1U][0U]),8);
        bufp->chgCData(oldp+225,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [1U][1U]),8);
        bufp->chgCData(oldp+226,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [1U][2U]),8);
        bufp->chgCData(oldp+227,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [1U][3U]),8);
        bufp->chgCData(oldp+228,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [1U][4U]),8);
        bufp->chgCData(oldp+229,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [1U][5U]),8);
        bufp->chgCData(oldp+230,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [2U][0U]),8);
        bufp->chgCData(oldp+231,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [2U][1U]),8);
        bufp->chgCData(oldp+232,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [2U][2U]),8);
        bufp->chgCData(oldp+233,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [2U][3U]),8);
        bufp->chgCData(oldp+234,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [2U][4U]),8);
        bufp->chgCData(oldp+235,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [2U][5U]),8);
        bufp->chgCData(oldp+236,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [3U][0U]),8);
        bufp->chgCData(oldp+237,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [3U][1U]),8);
        bufp->chgCData(oldp+238,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [3U][2U]),8);
        bufp->chgCData(oldp+239,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [3U][3U]),8);
        bufp->chgCData(oldp+240,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [3U][4U]),8);
        bufp->chgCData(oldp+241,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [3U][5U]),8);
        bufp->chgCData(oldp+242,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [4U][0U]),8);
        bufp->chgCData(oldp+243,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [4U][1U]),8);
        bufp->chgCData(oldp+244,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [4U][2U]),8);
        bufp->chgCData(oldp+245,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [4U][3U]),8);
        bufp->chgCData(oldp+246,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [4U][4U]),8);
        bufp->chgCData(oldp+247,(vlSelfRef.systolic_array__DOT__mac_col_data_out
                                 [4U][5U]),8);
        bufp->chgCData(oldp+248,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][0U]),8);
        bufp->chgCData(oldp+249,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][1U]),8);
        bufp->chgCData(oldp+250,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][2U]),8);
        bufp->chgCData(oldp+251,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][3U]),8);
        bufp->chgCData(oldp+252,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][4U]),8);
        bufp->chgCData(oldp+253,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][5U]),8);
        bufp->chgCData(oldp+254,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][0U]),8);
        bufp->chgCData(oldp+255,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][1U]),8);
        bufp->chgCData(oldp+256,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][2U]),8);
        bufp->chgCData(oldp+257,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][3U]),8);
        bufp->chgCData(oldp+258,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][4U]),8);
        bufp->chgCData(oldp+259,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][5U]),8);
        bufp->chgCData(oldp+260,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [2U][0U]),8);
        bufp->chgCData(oldp+261,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [2U][1U]),8);
        bufp->chgCData(oldp+262,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [2U][2U]),8);
        bufp->chgCData(oldp+263,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [2U][3U]),8);
        bufp->chgCData(oldp+264,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [2U][4U]),8);
        bufp->chgCData(oldp+265,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [2U][5U]),8);
        bufp->chgCData(oldp+266,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [3U][0U]),8);
        bufp->chgCData(oldp+267,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [3U][1U]),8);
        bufp->chgCData(oldp+268,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [3U][2U]),8);
        bufp->chgCData(oldp+269,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [3U][3U]),8);
        bufp->chgCData(oldp+270,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [3U][4U]),8);
        bufp->chgCData(oldp+271,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [3U][5U]),8);
        bufp->chgCData(oldp+272,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [4U][0U]),8);
        bufp->chgCData(oldp+273,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [4U][1U]),8);
        bufp->chgCData(oldp+274,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [4U][2U]),8);
        bufp->chgCData(oldp+275,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [4U][3U]),8);
        bufp->chgCData(oldp+276,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [4U][4U]),8);
        bufp->chgCData(oldp+277,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [4U][5U]),8);
        bufp->chgCData(oldp+278,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [0U][0U]),8);
        bufp->chgCData(oldp+279,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [0U][1U]),8);
        bufp->chgCData(oldp+280,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [0U][2U]),8);
        bufp->chgCData(oldp+281,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [0U][3U]),8);
        bufp->chgCData(oldp+282,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [0U][4U]),8);
        bufp->chgCData(oldp+283,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [0U][5U]),8);
        bufp->chgCData(oldp+284,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [1U][0U]),8);
        bufp->chgCData(oldp+285,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [1U][1U]),8);
        bufp->chgCData(oldp+286,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [1U][2U]),8);
        bufp->chgCData(oldp+287,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [1U][3U]),8);
        bufp->chgCData(oldp+288,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [1U][4U]),8);
        bufp->chgCData(oldp+289,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [1U][5U]),8);
        bufp->chgCData(oldp+290,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [2U][0U]),8);
        bufp->chgCData(oldp+291,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [2U][1U]),8);
        bufp->chgCData(oldp+292,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [2U][2U]),8);
        bufp->chgCData(oldp+293,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [2U][3U]),8);
        bufp->chgCData(oldp+294,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [2U][4U]),8);
        bufp->chgCData(oldp+295,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [2U][5U]),8);
        bufp->chgCData(oldp+296,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [3U][0U]),8);
        bufp->chgCData(oldp+297,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [3U][1U]),8);
        bufp->chgCData(oldp+298,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [3U][2U]),8);
        bufp->chgCData(oldp+299,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [3U][3U]),8);
        bufp->chgCData(oldp+300,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [3U][4U]),8);
        bufp->chgCData(oldp+301,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [3U][5U]),8);
        bufp->chgCData(oldp+302,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [4U][0U]),8);
        bufp->chgCData(oldp+303,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [4U][1U]),8);
        bufp->chgCData(oldp+304,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [4U][2U]),8);
        bufp->chgCData(oldp+305,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [4U][3U]),8);
        bufp->chgCData(oldp+306,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [4U][4U]),8);
        bufp->chgCData(oldp+307,(vlSelfRef.systolic_array__DOT__bypass_data_out
                                 [4U][5U]),8);
        bufp->chgBit(oldp+308,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [0U][0U]));
        bufp->chgBit(oldp+309,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [0U][1U]));
        bufp->chgBit(oldp+310,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [0U][2U]));
        bufp->chgBit(oldp+311,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [0U][3U]));
        bufp->chgBit(oldp+312,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [0U][4U]));
        bufp->chgBit(oldp+313,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [0U][5U]));
        bufp->chgBit(oldp+314,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [1U][0U]));
        bufp->chgBit(oldp+315,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [1U][1U]));
        bufp->chgBit(oldp+316,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [1U][2U]));
        bufp->chgBit(oldp+317,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [1U][3U]));
        bufp->chgBit(oldp+318,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [1U][4U]));
        bufp->chgBit(oldp+319,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [1U][5U]));
        bufp->chgBit(oldp+320,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [2U][0U]));
        bufp->chgBit(oldp+321,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [2U][1U]));
        bufp->chgBit(oldp+322,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [2U][2U]));
        bufp->chgBit(oldp+323,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [2U][3U]));
        bufp->chgBit(oldp+324,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [2U][4U]));
        bufp->chgBit(oldp+325,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [2U][5U]));
        bufp->chgBit(oldp+326,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [3U][0U]));
        bufp->chgBit(oldp+327,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [3U][1U]));
        bufp->chgBit(oldp+328,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [3U][2U]));
        bufp->chgBit(oldp+329,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [3U][3U]));
        bufp->chgBit(oldp+330,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [3U][4U]));
        bufp->chgBit(oldp+331,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [3U][5U]));
        bufp->chgBit(oldp+332,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [4U][0U]));
        bufp->chgBit(oldp+333,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [4U][1U]));
        bufp->chgBit(oldp+334,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [4U][2U]));
        bufp->chgBit(oldp+335,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [4U][3U]));
        bufp->chgBit(oldp+336,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [4U][4U]));
        bufp->chgBit(oldp+337,(vlSelfRef.systolic_array__DOT__mac_full_flag
                               [4U][5U]));
        bufp->chgBit(oldp+338,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [0U][0U]));
        bufp->chgBit(oldp+339,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [0U][1U]));
        bufp->chgBit(oldp+340,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [0U][2U]));
        bufp->chgBit(oldp+341,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [0U][3U]));
        bufp->chgBit(oldp+342,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [0U][4U]));
        bufp->chgBit(oldp+343,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [0U][5U]));
        bufp->chgBit(oldp+344,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [1U][0U]));
        bufp->chgBit(oldp+345,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [1U][1U]));
        bufp->chgBit(oldp+346,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [1U][2U]));
        bufp->chgBit(oldp+347,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [1U][3U]));
        bufp->chgBit(oldp+348,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [1U][4U]));
        bufp->chgBit(oldp+349,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [1U][5U]));
        bufp->chgBit(oldp+350,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [2U][0U]));
        bufp->chgBit(oldp+351,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [2U][1U]));
        bufp->chgBit(oldp+352,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [2U][2U]));
        bufp->chgBit(oldp+353,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [2U][3U]));
        bufp->chgBit(oldp+354,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [2U][4U]));
        bufp->chgBit(oldp+355,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [2U][5U]));
        bufp->chgBit(oldp+356,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [3U][0U]));
        bufp->chgBit(oldp+357,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [3U][1U]));
        bufp->chgBit(oldp+358,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [3U][2U]));
        bufp->chgBit(oldp+359,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [3U][3U]));
        bufp->chgBit(oldp+360,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [3U][4U]));
        bufp->chgBit(oldp+361,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [3U][5U]));
        bufp->chgBit(oldp+362,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [4U][0U]));
        bufp->chgBit(oldp+363,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [4U][1U]));
        bufp->chgBit(oldp+364,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [4U][2U]));
        bufp->chgBit(oldp+365,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [4U][3U]));
        bufp->chgBit(oldp+366,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [4U][4U]));
        bufp->chgBit(oldp+367,(vlSelfRef.systolic_array__DOT__mac_psum_out_vld
                               [4U][5U]));
        bufp->chgIData(oldp+368,(vlSelfRef.systolic_array__DOT__flat_full_flags),20);
        bufp->chgBit(oldp+369,((0U != vlSelfRef.systolic_array__DOT__flat_full_flags)));
        bufp->chgIData(oldp+370,(vlSelfRef.systolic_array__DOT__row_data_out_tmp),32);
        bufp->chgCData(oldp+371,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_0),4);
        bufp->chgCData(oldp+372,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_accumulator_reg_1_to_rest),4);
        bufp->chgSData(oldp+373,(((((((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_delay__BRA__8__KET__) 
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
        bufp->chgBit(oldp+374,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][0U]));
        bufp->chgBit(oldp+375,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [0U][0U]));
        bufp->chgCData(oldp+376,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [0U][0U]),8);
        bufp->chgCData(oldp+377,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][0U]),8);
        bufp->chgCData(oldp+378,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][0U]),8);
        bufp->chgBit(oldp+379,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][0U])));
        bufp->chgBit(oldp+380,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+381,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+382,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+383,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+384,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+385,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+386,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+387,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+388,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+389,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+390,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+391,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+392,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+393,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+394,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+395,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+396,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+397,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [0U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+398,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+399,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+400,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+401,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+402,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+403,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+404,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+405,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+406,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgBit(oldp+407,((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)))));
        bufp->chgCData(oldp+408,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+409,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+410,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+411,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+412,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+413,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+414,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][0U])));
        bufp->chgBit(oldp+415,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+416,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                                 [4U]),8);
        bufp->chgBit(oldp+417,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+418,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+419,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+420,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+421,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+422,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+423,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][1U]));
        bufp->chgBit(oldp+424,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [0U][1U]));
        bufp->chgCData(oldp+425,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [1U][0U]),8);
        bufp->chgCData(oldp+426,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][1U]),8);
        bufp->chgCData(oldp+427,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][1U]),8);
        bufp->chgBit(oldp+428,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][1U])));
        bufp->chgBit(oldp+429,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+430,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+431,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+432,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+433,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+434,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+435,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+436,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+437,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+438,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+439,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+440,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+441,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+442,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+443,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+444,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+445,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+446,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [0U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+447,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+448,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+449,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+450,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+451,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+452,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+453,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+454,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+455,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+456,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+457,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+458,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+459,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+460,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+461,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+462,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][1U])));
        bufp->chgBit(oldp+463,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+464,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                                 [3U]),8);
        bufp->chgBit(oldp+465,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+466,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+467,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+468,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+469,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+470,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+471,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][2U]));
        bufp->chgBit(oldp+472,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [0U][2U]));
        bufp->chgCData(oldp+473,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [2U][0U]),8);
        bufp->chgCData(oldp+474,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][2U]),8);
        bufp->chgCData(oldp+475,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][2U]),8);
        bufp->chgBit(oldp+476,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][2U])));
        bufp->chgBit(oldp+477,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+478,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+479,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+480,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+481,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+482,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+483,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+484,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+485,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+486,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+487,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+488,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+489,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+490,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+491,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+492,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+493,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+494,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [0U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+495,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+496,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+497,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+498,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+499,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+500,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+501,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+502,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+503,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+504,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+505,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+506,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+507,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+508,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+509,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+510,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][2U])));
        bufp->chgBit(oldp+511,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+512,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                                 [2U]),8);
        bufp->chgBit(oldp+513,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+514,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+515,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+516,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+517,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+518,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+519,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][3U]));
        bufp->chgBit(oldp+520,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [0U][3U]));
        bufp->chgCData(oldp+521,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [3U][0U]),8);
        bufp->chgCData(oldp+522,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][3U]),8);
        bufp->chgCData(oldp+523,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][3U]),8);
        bufp->chgBit(oldp+524,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][3U])));
        bufp->chgBit(oldp+525,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+526,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+527,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+528,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+529,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+530,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+531,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+532,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+533,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+534,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+535,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+536,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+537,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+538,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+539,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+540,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+541,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+542,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [0U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+543,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+544,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+545,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+546,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+547,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+548,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+549,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+550,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+551,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+552,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+553,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+554,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+555,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+556,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+557,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+558,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][3U])));
        bufp->chgBit(oldp+559,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+560,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                                 [1U]),8);
        bufp->chgBit(oldp+561,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+562,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+563,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+564,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+565,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+566,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+567,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [0U][4U]));
        bufp->chgBit(oldp+568,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [0U][4U]));
        bufp->chgCData(oldp+569,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [4U][0U]),8);
        bufp->chgCData(oldp+570,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [0U][4U]),8);
        bufp->chgCData(oldp+571,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [0U][4U]),8);
        bufp->chgBit(oldp+572,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][4U])));
        bufp->chgBit(oldp+573,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+574,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+575,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+576,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+577,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+578,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+579,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+580,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+581,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+582,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+583,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+584,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+585,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+586,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+587,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+588,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+589,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+590,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [0U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+591,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+592,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+593,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+594,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+595,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+596,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+597,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+598,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+599,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+600,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+601,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+602,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+603,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+604,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+605,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+606,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [0U][4U])));
        bufp->chgBit(oldp+607,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+608,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                                 [0U]),8);
        bufp->chgBit(oldp+609,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+610,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+611,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+612,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+613,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+614,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__0__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+615,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][0U]));
        bufp->chgBit(oldp+616,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [1U][0U]));
        bufp->chgCData(oldp+617,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [0U][1U]),8);
        bufp->chgCData(oldp+618,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][0U]),8);
        bufp->chgCData(oldp+619,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][0U]),8);
        bufp->chgBit(oldp+620,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][0U])));
        bufp->chgBit(oldp+621,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+622,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+623,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+624,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+625,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+626,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+627,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+628,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+629,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+630,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+631,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+632,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+633,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+634,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+635,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+636,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+637,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+638,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [1U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+639,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+640,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+641,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+642,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+643,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+644,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+645,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+646,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+647,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+648,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+649,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+650,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+651,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+652,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+653,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+654,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][0U])));
        bufp->chgBit(oldp+655,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+656,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                                 [4U]),8);
        bufp->chgBit(oldp+657,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+658,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+659,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+660,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+661,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+662,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+663,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][1U]));
        bufp->chgBit(oldp+664,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [1U][1U]));
        bufp->chgCData(oldp+665,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [1U][1U]),8);
        bufp->chgCData(oldp+666,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][1U]),8);
        bufp->chgCData(oldp+667,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][1U]),8);
        bufp->chgBit(oldp+668,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][1U])));
        bufp->chgBit(oldp+669,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+670,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+671,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+672,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+673,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+674,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+675,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+676,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+677,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+678,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+679,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+680,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+681,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+682,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+683,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+684,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+685,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+686,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [1U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+687,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+688,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+689,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+690,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+691,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+692,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+693,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+694,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+695,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+696,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+697,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+698,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+699,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+700,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+701,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+702,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][1U])));
        bufp->chgBit(oldp+703,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+704,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                                 [3U]),8);
        bufp->chgBit(oldp+705,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+706,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+707,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+708,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+709,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+710,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+711,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][2U]));
        bufp->chgBit(oldp+712,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [1U][2U]));
        bufp->chgCData(oldp+713,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [2U][1U]),8);
        bufp->chgCData(oldp+714,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][2U]),8);
        bufp->chgCData(oldp+715,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][2U]),8);
        bufp->chgBit(oldp+716,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][2U])));
        bufp->chgBit(oldp+717,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+718,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+719,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+720,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+721,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+722,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+723,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+724,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+725,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+726,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+727,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+728,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+729,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+730,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+731,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+732,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+733,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+734,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [1U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+735,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+736,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+737,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+738,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+739,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+740,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+741,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+742,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+743,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+744,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+745,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+746,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+747,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+748,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+749,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+750,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][2U])));
        bufp->chgBit(oldp+751,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+752,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                                 [2U]),8);
        bufp->chgBit(oldp+753,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+754,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+755,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+756,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+757,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+758,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+759,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][3U]));
        bufp->chgBit(oldp+760,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [1U][3U]));
        bufp->chgCData(oldp+761,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [3U][1U]),8);
        bufp->chgCData(oldp+762,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][3U]),8);
        bufp->chgCData(oldp+763,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][3U]),8);
        bufp->chgBit(oldp+764,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][3U])));
        bufp->chgBit(oldp+765,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+766,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+767,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+768,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+769,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+770,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+771,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+772,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+773,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+774,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+775,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+776,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+777,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+778,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+779,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+780,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+781,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+782,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [1U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+783,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+784,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+785,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+786,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+787,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+788,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+789,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+790,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+791,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+792,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+793,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+794,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+795,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+796,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+797,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+798,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][3U])));
        bufp->chgBit(oldp+799,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+800,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                                 [1U]),8);
        bufp->chgBit(oldp+801,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+802,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+803,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+804,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+805,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+806,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+807,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [1U][4U]));
        bufp->chgBit(oldp+808,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [1U][4U]));
        bufp->chgCData(oldp+809,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [4U][1U]),8);
        bufp->chgCData(oldp+810,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [1U][4U]),8);
        bufp->chgCData(oldp+811,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [1U][4U]),8);
        bufp->chgBit(oldp+812,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][4U])));
        bufp->chgBit(oldp+813,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+814,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+815,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+816,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+817,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+818,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+819,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+820,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+821,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+822,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+823,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+824,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+825,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+826,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+827,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+828,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+829,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+830,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [1U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+831,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+832,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+833,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+834,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+835,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+836,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+837,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+838,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+839,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+840,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+841,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+842,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+843,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+844,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+845,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+846,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [1U][4U])));
        bufp->chgBit(oldp+847,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+848,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                                 [0U]),8);
        bufp->chgBit(oldp+849,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+850,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+851,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+852,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+853,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+854,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__1__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+855,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][0U]));
        bufp->chgBit(oldp+856,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [2U][0U]));
        bufp->chgCData(oldp+857,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [0U][2U]),8);
        bufp->chgCData(oldp+858,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [2U][0U]),8);
        bufp->chgCData(oldp+859,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [2U][0U]),8);
        bufp->chgBit(oldp+860,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [2U][0U])));
        bufp->chgBit(oldp+861,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+862,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+863,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+864,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+865,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+866,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+867,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+868,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+869,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+870,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+871,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+872,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+873,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+874,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+875,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+876,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+877,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+878,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [2U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+879,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+880,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+881,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+882,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+883,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+884,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+885,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+886,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+887,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+888,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+889,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+890,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+891,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+892,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+893,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+894,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [2U][0U])));
        bufp->chgBit(oldp+895,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+896,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                                 [4U]),8);
        bufp->chgBit(oldp+897,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+898,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+899,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+900,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+901,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+902,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+903,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][1U]));
        bufp->chgBit(oldp+904,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [2U][1U]));
        bufp->chgCData(oldp+905,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [1U][2U]),8);
        bufp->chgCData(oldp+906,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [2U][1U]),8);
        bufp->chgCData(oldp+907,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [2U][1U]),8);
        bufp->chgBit(oldp+908,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [2U][1U])));
        bufp->chgBit(oldp+909,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+910,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+911,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+912,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+913,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+914,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+915,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+916,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+917,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+918,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+919,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+920,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+921,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+922,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+923,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+924,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+925,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+926,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [2U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+927,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+928,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+929,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+930,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+931,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+932,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+933,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+934,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+935,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+936,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+937,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+938,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+939,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+940,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+941,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+942,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [2U][1U])));
        bufp->chgBit(oldp+943,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+944,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                                 [3U]),8);
        bufp->chgBit(oldp+945,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+946,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+947,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+948,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+949,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+950,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+951,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][2U]));
        bufp->chgBit(oldp+952,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                               [2U][2U]));
        bufp->chgCData(oldp+953,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                 [2U][2U]),8);
        bufp->chgCData(oldp+954,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                 [2U][2U]),8);
        bufp->chgCData(oldp+955,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                 [2U][2U]),8);
        bufp->chgBit(oldp+956,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [2U][2U])));
        bufp->chgBit(oldp+957,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+958,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+959,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+960,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+961,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+962,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+963,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+964,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+965,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+966,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+967,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+968,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+969,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+970,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+971,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+972,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+973,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+974,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                  [2U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+975,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+976,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+977,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+978,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+979,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                 [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+980,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+981,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+982,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+983,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+984,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+985,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+986,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+987,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+988,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+989,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+990,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [2U][2U])));
        bufp->chgBit(oldp+991,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                         | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+992,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                                 [2U]),8);
        bufp->chgBit(oldp+993,((0x20U <= (0x0000003fU 
                                          & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                             - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+994,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+995,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+996,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+997,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+998,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                 - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+999,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                               [2U][3U]));
        bufp->chgBit(oldp+1000,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [2U][3U]));
        bufp->chgCData(oldp+1001,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                  [3U][2U]),8);
        bufp->chgCData(oldp+1002,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                  [2U][3U]),8);
        bufp->chgCData(oldp+1003,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                  [2U][3U]),8);
        bufp->chgBit(oldp+1004,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [2U][3U])));
        bufp->chgBit(oldp+1005,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+1006,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+1007,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+1008,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+1009,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+1010,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+1011,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+1012,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+1013,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+1014,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+1015,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+1016,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+1017,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+1018,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+1019,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+1020,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                  [1U]),8);
        bufp->chgBit(oldp+1021,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+1022,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                   [2U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+1023,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+1024,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+1025,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+1026,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+1027,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                  [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+1028,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+1029,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+1030,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+1031,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+1032,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+1033,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+1034,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+1035,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+1036,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+1037,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+1038,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [2U][3U])));
        bufp->chgBit(oldp+1039,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                          | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+1040,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                                  [1U]),8);
        bufp->chgBit(oldp+1041,((0x20U <= (0x0000003fU 
                                           & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+1042,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+1043,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+1044,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+1045,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+1046,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                  - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+1047,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [2U][4U]));
        bufp->chgBit(oldp+1048,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [2U][4U]));
        bufp->chgCData(oldp+1049,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                  [4U][2U]),8);
        bufp->chgCData(oldp+1050,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                  [2U][4U]),8);
        bufp->chgCData(oldp+1051,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                  [2U][4U]),8);
        bufp->chgBit(oldp+1052,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [2U][4U])));
        bufp->chgBit(oldp+1053,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+1054,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+1055,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+1056,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+1057,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+1058,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+1059,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+1060,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+1061,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+1062,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+1063,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+1064,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+1065,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+1066,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+1067,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+1068,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                  [1U]),8);
        bufp->chgBit(oldp+1069,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+1070,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                   [2U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+1071,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+1072,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+1073,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+1074,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+1075,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                  [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+1076,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+1077,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+1078,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+1079,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+1080,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+1081,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+1082,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+1083,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+1084,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+1085,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+1086,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [2U][4U])));
        bufp->chgBit(oldp+1087,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                          | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+1088,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                                  [0U]),8);
        bufp->chgBit(oldp+1089,((0x20U <= (0x0000003fU 
                                           & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+1090,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+1091,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+1092,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+1093,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+1094,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                  - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__2__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+1095,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][0U]));
        bufp->chgBit(oldp+1096,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [3U][0U]));
        bufp->chgCData(oldp+1097,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                  [0U][3U]),8);
        bufp->chgCData(oldp+1098,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                  [3U][0U]),8);
        bufp->chgCData(oldp+1099,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                  [3U][0U]),8);
        bufp->chgBit(oldp+1100,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][0U])));
        bufp->chgBit(oldp+1101,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+1102,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+1103,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+1104,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+1105,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+1106,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+1107,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+1108,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+1109,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+1110,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+1111,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+1112,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+1113,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+1114,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+1115,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+1116,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                  [1U]),8);
        bufp->chgBit(oldp+1117,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+1118,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                   [3U][0U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+1119,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+1120,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+1121,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+1122,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+1123,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                  [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+1124,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+1125,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+1126,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+1127,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+1128,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+1129,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+1130,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+1131,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+1132,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+1133,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+1134,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][0U])));
        bufp->chgBit(oldp+1135,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                          | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+1136,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__psum
                                  [4U]),8);
        bufp->chgBit(oldp+1137,((0x20U <= (0x0000003fU 
                                           & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+1138,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+1139,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+1140,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+1141,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+1142,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                  - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__0__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+1143,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][1U]));
        bufp->chgBit(oldp+1144,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [3U][1U]));
        bufp->chgCData(oldp+1145,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                  [1U][3U]),8);
        bufp->chgCData(oldp+1146,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                  [3U][1U]),8);
        bufp->chgCData(oldp+1147,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                  [3U][1U]),8);
        bufp->chgBit(oldp+1148,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][1U])));
        bufp->chgBit(oldp+1149,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+1150,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+1151,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+1152,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+1153,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+1154,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+1155,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+1156,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+1157,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+1158,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+1159,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+1160,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+1161,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+1162,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+1163,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+1164,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                  [1U]),8);
        bufp->chgBit(oldp+1165,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+1166,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                   [3U][1U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+1167,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+1168,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+1169,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+1170,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+1171,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                  [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+1172,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+1173,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+1174,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+1175,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+1176,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+1177,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+1178,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+1179,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+1180,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+1181,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+1182,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][1U])));
        bufp->chgBit(oldp+1183,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                          | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+1184,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__psum
                                  [3U]),8);
        bufp->chgBit(oldp+1185,((0x20U <= (0x0000003fU 
                                           & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+1186,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+1187,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+1188,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+1189,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+1190,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                  - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__1__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+1191,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][2U]));
        bufp->chgBit(oldp+1192,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [3U][2U]));
        bufp->chgCData(oldp+1193,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                  [2U][3U]),8);
        bufp->chgCData(oldp+1194,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                  [3U][2U]),8);
        bufp->chgCData(oldp+1195,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                  [3U][2U]),8);
        bufp->chgBit(oldp+1196,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][2U])));
        bufp->chgBit(oldp+1197,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+1198,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+1199,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+1200,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+1201,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+1202,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+1203,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+1204,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+1205,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+1206,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+1207,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+1208,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+1209,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+1210,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+1211,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+1212,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                  [1U]),8);
        bufp->chgBit(oldp+1213,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+1214,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                   [3U][2U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+1215,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+1216,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+1217,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+1218,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+1219,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                  [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+1220,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+1221,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+1222,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+1223,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+1224,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+1225,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+1226,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+1227,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+1228,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+1229,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+1230,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][2U])));
        bufp->chgBit(oldp+1231,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                          | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+1232,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__psum
                                  [2U]),8);
        bufp->chgBit(oldp+1233,((0x20U <= (0x0000003fU 
                                           & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+1234,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+1235,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+1236,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+1237,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+1238,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                  - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__2__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+1239,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][3U]));
        bufp->chgBit(oldp+1240,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [3U][3U]));
        bufp->chgCData(oldp+1241,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                  [3U][3U]),8);
        bufp->chgCData(oldp+1242,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                  [3U][3U]),8);
        bufp->chgCData(oldp+1243,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                  [3U][3U]),8);
        bufp->chgBit(oldp+1244,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][3U])));
        bufp->chgBit(oldp+1245,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+1246,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+1247,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+1248,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+1249,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+1250,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+1251,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+1252,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+1253,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+1254,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+1255,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+1256,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+1257,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+1258,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+1259,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+1260,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                  [1U]),8);
        bufp->chgBit(oldp+1261,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+1262,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                   [3U][3U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+1263,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+1264,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+1265,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+1266,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+1267,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                  [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+1268,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+1269,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+1270,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+1271,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+1272,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+1273,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+1274,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+1275,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+1276,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+1277,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+1278,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][3U])));
        bufp->chgBit(oldp+1279,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                          | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+1280,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__psum
                                  [1U]),8);
        bufp->chgBit(oldp+1281,((0x20U <= (0x0000003fU 
                                           & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+1282,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+1283,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+1284,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+1285,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+1286,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                  - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__3__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
        bufp->chgBit(oldp+1287,(vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                [3U][4U]));
        bufp->chgBit(oldp+1288,(vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                [3U][4U]));
        bufp->chgCData(oldp+1289,(vlSelfRef.systolic_array__DOT__mac_row_data_in
                                  [4U][3U]),8);
        bufp->chgCData(oldp+1290,(vlSelfRef.systolic_array__DOT__mac_col_data_in
                                  [3U][4U]),8);
        bufp->chgCData(oldp+1291,(vlSelfRef.systolic_array__DOT__bypass_data_in
                                  [3U][4U]),8);
        bufp->chgBit(oldp+1292,(((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][4U])));
        bufp->chgBit(oldp+1293,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum_out_vld_r));
        bufp->chgCData(oldp+1294,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__row_data_out),8);
        bufp->chgCData(oldp+1295,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__col_data_out),8);
        bufp->chgBit(oldp+1296,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__rst_accumulator_out));
        bufp->chgBit(oldp+1297,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__stream_out_rdy_out));
        bufp->chgCData(oldp+1298,(vlSelfRef.systolic_array__DOT____Vcellout__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__psum_out),8);
        bufp->chgCData(oldp+1299,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[0]),8);
        bufp->chgCData(oldp+1300,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[1]),8);
        bufp->chgCData(oldp+1301,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[2]),8);
        bufp->chgCData(oldp+1302,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[3]),8);
        bufp->chgCData(oldp+1303,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[4]),8);
        bufp->chgCData(oldp+1304,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[5]),8);
        bufp->chgCData(oldp+1305,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[6]),8);
        bufp->chgCData(oldp+1306,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum[7]),8);
        bufp->chgCData(oldp+1307,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mult_out),8);
        bufp->chgCData(oldp+1308,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                  [1U]),8);
        bufp->chgBit(oldp+1309,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done));
        bufp->chgCData(oldp+1310,((vlSelfRef.systolic_array__DOT__rst_accumulator_in
                                   [3U][4U] ? 0U : (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+1311,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+1312,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+1313,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_full));
        bufp->chgBit(oldp+1314,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty));
        bufp->chgCData(oldp+1315,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__fifo
                                  [(0x0000003fU & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))]),8);
        bufp->chgBit(oldp+1316,((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter))));
        bufp->chgCData(oldp+1317,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter),3);
        bufp->chgBit(oldp+1318,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst_r)) 
                                 & (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__multiplier_done))));
        bufp->chgBit(oldp+1319,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+1320,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+1321,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+1322,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+1323,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+1324,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+1325,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+1326,(((~ (0U != vlSelfRef.systolic_array__DOT__flat_full_flags)) 
                                 & vlSelfRef.systolic_array__DOT__stream_out_rdy_in
                                 [3U][4U])));
        bufp->chgBit(oldp+1327,((1U & (~ ((0U != (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__bypass_counter)) 
                                          | (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__fifo_empty))))));
        bufp->chgCData(oldp+1328,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__psum
                                  [0U]),8);
        bufp->chgBit(oldp+1329,((0x20U <= (0x0000003fU 
                                           & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                              - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr))))));
        bufp->chgCData(oldp+1330,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr),7);
        bufp->chgCData(oldp+1331,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr),7);
        bufp->chgBit(oldp+1332,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__empty_int));
        bufp->chgBit(oldp+1333,(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__full_or_empty));
        bufp->chgCData(oldp+1334,((0x0000003fU & ((IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__w_ptr) 
                                                  - (IData)(vlSelfRef.systolic_array__DOT__instantiate_mac_rows__BRA__3__KET____DOT__instantiate_mac_cols__BRA__4__KET____DOT__mac_inst__DOT__output_fifo__DOT__r_ptr)))),6);
    }
    bufp->chgBit(oldp+1335,(vlSelfRef.clk));
    bufp->chgBit(oldp+1336,(vlSelfRef.rst));
    bufp->chgBit(oldp+1337,(vlSelfRef.en));
    bufp->chgBit(oldp+1338,(vlSelfRef.flush));
    bufp->chgBit(oldp+1339,(vlSelfRef.rst_accumulator_rdy));
    bufp->chgBit(oldp+1340,(vlSelfRef.stream_out_rdy));
    bufp->chgIData(oldp+1341,(vlSelfRef.row_data_in),32);
    bufp->chgBit(oldp+1342,(vlSelfRef.row_data_in_vld));
    bufp->chgBit(oldp+1343,(vlSelfRef.row_data_in_rdy));
    bufp->chgQData(oldp+1344,(vlSelfRef.col_data_in),40);
    bufp->chgBit(oldp+1346,(vlSelfRef.col_data_in_vld));
    bufp->chgBit(oldp+1347,(vlSelfRef.col_data_in_rdy));
    bufp->chgIData(oldp+1348,(vlSelfRef.row_data_out),32);
    bufp->chgBit(oldp+1349,(vlSelfRef.row_data_out_vld));
    bufp->chgBit(oldp+1350,(vlSelfRef.row_data_out_rdy));
}

void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_cleanup\n"); );
    // Body
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
