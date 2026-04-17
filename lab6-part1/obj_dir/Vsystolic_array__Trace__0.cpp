// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


void Vsystolic_array___024root__trace_chg_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsystolic_array___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_top_0\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsystolic_array___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsystolic_array___024root__trace_chg_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->systolic_array__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->systolic_array__DOT__rst_accumulator_rdy));
        bufp->chgBit(oldp+2,(vlSelf->systolic_array__DOT__stream_out_rdy));
        bufp->chgIData(oldp+3,(vlSelf->systolic_array__DOT__row_data_in),32);
        bufp->chgIData(oldp+4,(vlSelf->systolic_array__DOT__col_data_in),32);
        bufp->chgCData(oldp+5,(vlSelf->systolic_array__DOT__u_ctrl__DOT__rst_col_skew),4);
        bufp->chgCData(oldp+6,((0xfU & (- (IData)(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain
                                                  [8U])))),4);
        bufp->chgCData(oldp+7,(vlSelf->systolic_array__DOT__w_row_data
                               [0U][0U]),8);
        bufp->chgCData(oldp+8,(vlSelf->systolic_array__DOT__w_row_data
                               [0U][1U]),8);
        bufp->chgCData(oldp+9,(vlSelf->systolic_array__DOT__w_row_data
                               [0U][2U]),8);
        bufp->chgCData(oldp+10,(vlSelf->systolic_array__DOT__w_row_data
                                [0U][3U]),8);
        bufp->chgCData(oldp+11,(vlSelf->systolic_array__DOT__w_row_data
                                [0U][4U]),8);
        bufp->chgCData(oldp+12,(vlSelf->systolic_array__DOT__w_row_data
                                [1U][0U]),8);
        bufp->chgCData(oldp+13,(vlSelf->systolic_array__DOT__w_row_data
                                [1U][1U]),8);
        bufp->chgCData(oldp+14,(vlSelf->systolic_array__DOT__w_row_data
                                [1U][2U]),8);
        bufp->chgCData(oldp+15,(vlSelf->systolic_array__DOT__w_row_data
                                [1U][3U]),8);
        bufp->chgCData(oldp+16,(vlSelf->systolic_array__DOT__w_row_data
                                [1U][4U]),8);
        bufp->chgCData(oldp+17,(vlSelf->systolic_array__DOT__w_row_data
                                [2U][0U]),8);
        bufp->chgCData(oldp+18,(vlSelf->systolic_array__DOT__w_row_data
                                [2U][1U]),8);
        bufp->chgCData(oldp+19,(vlSelf->systolic_array__DOT__w_row_data
                                [2U][2U]),8);
        bufp->chgCData(oldp+20,(vlSelf->systolic_array__DOT__w_row_data
                                [2U][3U]),8);
        bufp->chgCData(oldp+21,(vlSelf->systolic_array__DOT__w_row_data
                                [2U][4U]),8);
        bufp->chgCData(oldp+22,(vlSelf->systolic_array__DOT__w_row_data
                                [3U][0U]),8);
        bufp->chgCData(oldp+23,(vlSelf->systolic_array__DOT__w_row_data
                                [3U][1U]),8);
        bufp->chgCData(oldp+24,(vlSelf->systolic_array__DOT__w_row_data
                                [3U][2U]),8);
        bufp->chgCData(oldp+25,(vlSelf->systolic_array__DOT__w_row_data
                                [3U][3U]),8);
        bufp->chgCData(oldp+26,(vlSelf->systolic_array__DOT__w_row_data
                                [3U][4U]),8);
        bufp->chgCData(oldp+27,(vlSelf->systolic_array__DOT__w_col_data
                                [0U][0U]),8);
        bufp->chgCData(oldp+28,(vlSelf->systolic_array__DOT__w_col_data
                                [0U][1U]),8);
        bufp->chgCData(oldp+29,(vlSelf->systolic_array__DOT__w_col_data
                                [0U][2U]),8);
        bufp->chgCData(oldp+30,(vlSelf->systolic_array__DOT__w_col_data
                                [0U][3U]),8);
        bufp->chgCData(oldp+31,(vlSelf->systolic_array__DOT__w_col_data
                                [1U][0U]),8);
        bufp->chgCData(oldp+32,(vlSelf->systolic_array__DOT__w_col_data
                                [1U][1U]),8);
        bufp->chgCData(oldp+33,(vlSelf->systolic_array__DOT__w_col_data
                                [1U][2U]),8);
        bufp->chgCData(oldp+34,(vlSelf->systolic_array__DOT__w_col_data
                                [1U][3U]),8);
        bufp->chgCData(oldp+35,(vlSelf->systolic_array__DOT__w_col_data
                                [2U][0U]),8);
        bufp->chgCData(oldp+36,(vlSelf->systolic_array__DOT__w_col_data
                                [2U][1U]),8);
        bufp->chgCData(oldp+37,(vlSelf->systolic_array__DOT__w_col_data
                                [2U][2U]),8);
        bufp->chgCData(oldp+38,(vlSelf->systolic_array__DOT__w_col_data
                                [2U][3U]),8);
        bufp->chgCData(oldp+39,(vlSelf->systolic_array__DOT__w_col_data
                                [3U][0U]),8);
        bufp->chgCData(oldp+40,(vlSelf->systolic_array__DOT__w_col_data
                                [3U][1U]),8);
        bufp->chgCData(oldp+41,(vlSelf->systolic_array__DOT__w_col_data
                                [3U][2U]),8);
        bufp->chgCData(oldp+42,(vlSelf->systolic_array__DOT__w_col_data
                                [3U][3U]),8);
        bufp->chgCData(oldp+43,(vlSelf->systolic_array__DOT__w_col_data
                                [4U][0U]),8);
        bufp->chgCData(oldp+44,(vlSelf->systolic_array__DOT__w_col_data
                                [4U][1U]),8);
        bufp->chgCData(oldp+45,(vlSelf->systolic_array__DOT__w_col_data
                                [4U][2U]),8);
        bufp->chgCData(oldp+46,(vlSelf->systolic_array__DOT__w_col_data
                                [4U][3U]),8);
        bufp->chgBit(oldp+47,(vlSelf->systolic_array__DOT__w_rst_acc
                              [0U][0U]));
        bufp->chgBit(oldp+48,(vlSelf->systolic_array__DOT__w_rst_acc
                              [0U][1U]));
        bufp->chgBit(oldp+49,(vlSelf->systolic_array__DOT__w_rst_acc
                              [0U][2U]));
        bufp->chgBit(oldp+50,(vlSelf->systolic_array__DOT__w_rst_acc
                              [0U][3U]));
        bufp->chgBit(oldp+51,(vlSelf->systolic_array__DOT__w_rst_acc
                              [1U][0U]));
        bufp->chgBit(oldp+52,(vlSelf->systolic_array__DOT__w_rst_acc
                              [1U][1U]));
        bufp->chgBit(oldp+53,(vlSelf->systolic_array__DOT__w_rst_acc
                              [1U][2U]));
        bufp->chgBit(oldp+54,(vlSelf->systolic_array__DOT__w_rst_acc
                              [1U][3U]));
        bufp->chgBit(oldp+55,(vlSelf->systolic_array__DOT__w_rst_acc
                              [2U][0U]));
        bufp->chgBit(oldp+56,(vlSelf->systolic_array__DOT__w_rst_acc
                              [2U][1U]));
        bufp->chgBit(oldp+57,(vlSelf->systolic_array__DOT__w_rst_acc
                              [2U][2U]));
        bufp->chgBit(oldp+58,(vlSelf->systolic_array__DOT__w_rst_acc
                              [2U][3U]));
        bufp->chgBit(oldp+59,(vlSelf->systolic_array__DOT__w_rst_acc
                              [3U][0U]));
        bufp->chgBit(oldp+60,(vlSelf->systolic_array__DOT__w_rst_acc
                              [3U][1U]));
        bufp->chgBit(oldp+61,(vlSelf->systolic_array__DOT__w_rst_acc
                              [3U][2U]));
        bufp->chgBit(oldp+62,(vlSelf->systolic_array__DOT__w_rst_acc
                              [3U][3U]));
        bufp->chgBit(oldp+63,(vlSelf->systolic_array__DOT__w_rst_acc
                              [4U][0U]));
        bufp->chgBit(oldp+64,(vlSelf->systolic_array__DOT__w_rst_acc
                              [4U][1U]));
        bufp->chgBit(oldp+65,(vlSelf->systolic_array__DOT__w_rst_acc
                              [4U][2U]));
        bufp->chgBit(oldp+66,(vlSelf->systolic_array__DOT__w_rst_acc
                              [4U][3U]));
        bufp->chgBit(oldp+67,(vlSelf->systolic_array__DOT__w_stream
                              [0U][0U]));
        bufp->chgBit(oldp+68,(vlSelf->systolic_array__DOT__w_stream
                              [0U][1U]));
        bufp->chgBit(oldp+69,(vlSelf->systolic_array__DOT__w_stream
                              [0U][2U]));
        bufp->chgBit(oldp+70,(vlSelf->systolic_array__DOT__w_stream
                              [0U][3U]));
        bufp->chgBit(oldp+71,(vlSelf->systolic_array__DOT__w_stream
                              [1U][0U]));
        bufp->chgBit(oldp+72,(vlSelf->systolic_array__DOT__w_stream
                              [1U][1U]));
        bufp->chgBit(oldp+73,(vlSelf->systolic_array__DOT__w_stream
                              [1U][2U]));
        bufp->chgBit(oldp+74,(vlSelf->systolic_array__DOT__w_stream
                              [1U][3U]));
        bufp->chgBit(oldp+75,(vlSelf->systolic_array__DOT__w_stream
                              [2U][0U]));
        bufp->chgBit(oldp+76,(vlSelf->systolic_array__DOT__w_stream
                              [2U][1U]));
        bufp->chgBit(oldp+77,(vlSelf->systolic_array__DOT__w_stream
                              [2U][2U]));
        bufp->chgBit(oldp+78,(vlSelf->systolic_array__DOT__w_stream
                              [2U][3U]));
        bufp->chgBit(oldp+79,(vlSelf->systolic_array__DOT__w_stream
                              [3U][0U]));
        bufp->chgBit(oldp+80,(vlSelf->systolic_array__DOT__w_stream
                              [3U][1U]));
        bufp->chgBit(oldp+81,(vlSelf->systolic_array__DOT__w_stream
                              [3U][2U]));
        bufp->chgBit(oldp+82,(vlSelf->systolic_array__DOT__w_stream
                              [3U][3U]));
        bufp->chgBit(oldp+83,(vlSelf->systolic_array__DOT__w_stream
                              [4U][0U]));
        bufp->chgBit(oldp+84,(vlSelf->systolic_array__DOT__w_stream
                              [4U][1U]));
        bufp->chgBit(oldp+85,(vlSelf->systolic_array__DOT__w_stream
                              [4U][2U]));
        bufp->chgBit(oldp+86,(vlSelf->systolic_array__DOT__w_stream
                              [4U][3U]));
        bufp->chgCData(oldp+87,(vlSelf->systolic_array__DOT__w_psum
                                [0U][0U]),8);
        bufp->chgCData(oldp+88,(vlSelf->systolic_array__DOT__w_psum
                                [0U][1U]),8);
        bufp->chgCData(oldp+89,(vlSelf->systolic_array__DOT__w_psum
                                [0U][2U]),8);
        bufp->chgCData(oldp+90,(vlSelf->systolic_array__DOT__w_psum
                                [0U][3U]),8);
        bufp->chgCData(oldp+91,(vlSelf->systolic_array__DOT__w_psum
                                [0U][4U]),8);
        bufp->chgCData(oldp+92,(vlSelf->systolic_array__DOT__w_psum
                                [1U][0U]),8);
        bufp->chgCData(oldp+93,(vlSelf->systolic_array__DOT__w_psum
                                [1U][1U]),8);
        bufp->chgCData(oldp+94,(vlSelf->systolic_array__DOT__w_psum
                                [1U][2U]),8);
        bufp->chgCData(oldp+95,(vlSelf->systolic_array__DOT__w_psum
                                [1U][3U]),8);
        bufp->chgCData(oldp+96,(vlSelf->systolic_array__DOT__w_psum
                                [1U][4U]),8);
        bufp->chgCData(oldp+97,(vlSelf->systolic_array__DOT__w_psum
                                [2U][0U]),8);
        bufp->chgCData(oldp+98,(vlSelf->systolic_array__DOT__w_psum
                                [2U][1U]),8);
        bufp->chgCData(oldp+99,(vlSelf->systolic_array__DOT__w_psum
                                [2U][2U]),8);
        bufp->chgCData(oldp+100,(vlSelf->systolic_array__DOT__w_psum
                                 [2U][3U]),8);
        bufp->chgCData(oldp+101,(vlSelf->systolic_array__DOT__w_psum
                                 [2U][4U]),8);
        bufp->chgCData(oldp+102,(vlSelf->systolic_array__DOT__w_psum
                                 [3U][0U]),8);
        bufp->chgCData(oldp+103,(vlSelf->systolic_array__DOT__w_psum
                                 [3U][1U]),8);
        bufp->chgCData(oldp+104,(vlSelf->systolic_array__DOT__w_psum
                                 [3U][2U]),8);
        bufp->chgCData(oldp+105,(vlSelf->systolic_array__DOT__w_psum
                                 [3U][3U]),8);
        bufp->chgCData(oldp+106,(vlSelf->systolic_array__DOT__w_psum
                                 [3U][4U]),8);
        bufp->chgBit(oldp+107,(vlSelf->systolic_array__DOT__w_rst_acc
                               [0U][0U]));
        bufp->chgBit(oldp+108,(vlSelf->systolic_array__DOT__w_stream
                               [0U][0U]));
        bufp->chgCData(oldp+109,(vlSelf->systolic_array__DOT__w_row_data
                                 [0U][0U]),8);
        bufp->chgCData(oldp+110,(vlSelf->systolic_array__DOT__w_col_data
                                 [0U][0U]),8);
        bufp->chgCData(oldp+111,(vlSelf->systolic_array__DOT__w_psum
                                 [0U][1U]),8);
        bufp->chgCData(oldp+112,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+113,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+114,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+115,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+116,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+117,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+118,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+119,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+120,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+121,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [0U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+122,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [2U]),8);
        bufp->chgCData(oldp+123,((vlSelf->systolic_array__DOT__w_stream
                                  [0U][0U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [2U] : vlSelf->systolic_array__DOT__w_psum
                                  [0U][1U])),8);
        bufp->chgCData(oldp+124,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgCData(oldp+125,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
        bufp->chgCData(oldp+126,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[2]),8);
        bufp->chgIData(oldp+127,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+128,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+129,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+130,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+131,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+132,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+133,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+134,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+135,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+136,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+137,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+138,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+139,(vlSelf->systolic_array__DOT__w_rst_acc
                               [0U][1U]));
        bufp->chgBit(oldp+140,(vlSelf->systolic_array__DOT__w_stream
                               [0U][1U]));
        bufp->chgCData(oldp+141,(vlSelf->systolic_array__DOT__w_row_data
                                 [0U][1U]),8);
        bufp->chgCData(oldp+142,(vlSelf->systolic_array__DOT__w_col_data
                                 [0U][1U]),8);
        bufp->chgCData(oldp+143,(vlSelf->systolic_array__DOT__w_psum
                                 [0U][2U]),8);
        bufp->chgCData(oldp+144,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+145,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+146,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+147,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+148,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+149,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+150,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+151,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+152,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+153,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [0U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+154,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [1U]),8);
        bufp->chgCData(oldp+155,((vlSelf->systolic_array__DOT__w_stream
                                  [0U][1U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [1U] : vlSelf->systolic_array__DOT__w_psum
                                  [0U][2U])),8);
        bufp->chgCData(oldp+156,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgCData(oldp+157,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
        bufp->chgIData(oldp+158,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+159,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+160,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+161,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+162,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+163,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+164,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+165,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+166,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+167,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+168,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+169,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+170,(vlSelf->systolic_array__DOT__w_rst_acc
                               [0U][2U]));
        bufp->chgBit(oldp+171,(vlSelf->systolic_array__DOT__w_stream
                               [0U][2U]));
        bufp->chgCData(oldp+172,(vlSelf->systolic_array__DOT__w_row_data
                                 [0U][2U]),8);
        bufp->chgCData(oldp+173,(vlSelf->systolic_array__DOT__w_col_data
                                 [0U][2U]),8);
        bufp->chgCData(oldp+174,(vlSelf->systolic_array__DOT__w_psum
                                 [0U][3U]),8);
        bufp->chgCData(oldp+175,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+176,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+177,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+178,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+179,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+180,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+181,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+182,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+183,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+184,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [0U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+185,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [0U]),8);
        bufp->chgCData(oldp+186,((vlSelf->systolic_array__DOT__w_stream
                                  [0U][2U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [0U] : vlSelf->systolic_array__DOT__w_psum
                                  [0U][3U])),8);
        bufp->chgCData(oldp+187,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgIData(oldp+188,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+189,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+190,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+191,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+192,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+193,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+194,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+195,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+196,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+197,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+198,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+199,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+200,(vlSelf->systolic_array__DOT__w_rst_acc
                               [0U][3U]));
        bufp->chgBit(oldp+201,(vlSelf->systolic_array__DOT__w_stream
                               [0U][3U]));
        bufp->chgCData(oldp+202,(vlSelf->systolic_array__DOT__w_row_data
                                 [0U][3U]),8);
        bufp->chgCData(oldp+203,(vlSelf->systolic_array__DOT__w_col_data
                                 [0U][3U]),8);
        bufp->chgCData(oldp+204,(vlSelf->systolic_array__DOT__w_psum
                                 [0U][4U]),8);
        bufp->chgCData(oldp+205,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+206,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+207,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+208,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+209,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+210,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+211,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+212,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+213,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+214,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [0U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+215,((vlSelf->systolic_array__DOT__w_stream
                                  [0U][3U] ? (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add)
                                   : vlSelf->systolic_array__DOT__w_psum
                                  [0U][4U])),8);
        bufp->chgBit(oldp+216,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+217,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+218,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+219,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+220,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+221,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+222,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+223,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+224,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+225,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+226,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__0__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+227,(vlSelf->systolic_array__DOT__w_rst_acc
                               [1U][0U]));
        bufp->chgBit(oldp+228,(vlSelf->systolic_array__DOT__w_stream
                               [1U][0U]));
        bufp->chgCData(oldp+229,(vlSelf->systolic_array__DOT__w_row_data
                                 [1U][0U]),8);
        bufp->chgCData(oldp+230,(vlSelf->systolic_array__DOT__w_col_data
                                 [1U][0U]),8);
        bufp->chgCData(oldp+231,(vlSelf->systolic_array__DOT__w_psum
                                 [1U][1U]),8);
        bufp->chgCData(oldp+232,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+233,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+234,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+235,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+236,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+237,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+238,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+239,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+240,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+241,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [1U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+242,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [2U]),8);
        bufp->chgCData(oldp+243,((vlSelf->systolic_array__DOT__w_stream
                                  [1U][0U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [2U] : vlSelf->systolic_array__DOT__w_psum
                                  [1U][1U])),8);
        bufp->chgCData(oldp+244,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgCData(oldp+245,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
        bufp->chgCData(oldp+246,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[2]),8);
        bufp->chgIData(oldp+247,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+248,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+249,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+250,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+251,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+252,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+253,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+254,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+255,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+256,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+257,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+258,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+259,(vlSelf->systolic_array__DOT__w_rst_acc
                               [1U][1U]));
        bufp->chgBit(oldp+260,(vlSelf->systolic_array__DOT__w_stream
                               [1U][1U]));
        bufp->chgCData(oldp+261,(vlSelf->systolic_array__DOT__w_row_data
                                 [1U][1U]),8);
        bufp->chgCData(oldp+262,(vlSelf->systolic_array__DOT__w_col_data
                                 [1U][1U]),8);
        bufp->chgCData(oldp+263,(vlSelf->systolic_array__DOT__w_psum
                                 [1U][2U]),8);
        bufp->chgCData(oldp+264,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+265,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+266,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+267,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+268,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+269,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+270,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+271,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+272,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+273,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [1U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+274,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [1U]),8);
        bufp->chgCData(oldp+275,((vlSelf->systolic_array__DOT__w_stream
                                  [1U][1U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [1U] : vlSelf->systolic_array__DOT__w_psum
                                  [1U][2U])),8);
        bufp->chgCData(oldp+276,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgCData(oldp+277,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
        bufp->chgIData(oldp+278,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+279,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+280,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+281,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+282,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+283,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+284,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+285,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+286,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+287,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+288,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+289,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+290,(vlSelf->systolic_array__DOT__w_rst_acc
                               [1U][2U]));
        bufp->chgBit(oldp+291,(vlSelf->systolic_array__DOT__w_stream
                               [1U][2U]));
        bufp->chgCData(oldp+292,(vlSelf->systolic_array__DOT__w_row_data
                                 [1U][2U]),8);
        bufp->chgCData(oldp+293,(vlSelf->systolic_array__DOT__w_col_data
                                 [1U][2U]),8);
        bufp->chgCData(oldp+294,(vlSelf->systolic_array__DOT__w_psum
                                 [1U][3U]),8);
        bufp->chgCData(oldp+295,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+296,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+297,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+298,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+299,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+300,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+301,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+302,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+303,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+304,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [1U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+305,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [0U]),8);
        bufp->chgCData(oldp+306,((vlSelf->systolic_array__DOT__w_stream
                                  [1U][2U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [0U] : vlSelf->systolic_array__DOT__w_psum
                                  [1U][3U])),8);
        bufp->chgCData(oldp+307,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgIData(oldp+308,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+309,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+310,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+311,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+312,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+313,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+314,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+315,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+316,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+317,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+318,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+319,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+320,(vlSelf->systolic_array__DOT__w_rst_acc
                               [1U][3U]));
        bufp->chgBit(oldp+321,(vlSelf->systolic_array__DOT__w_stream
                               [1U][3U]));
        bufp->chgCData(oldp+322,(vlSelf->systolic_array__DOT__w_row_data
                                 [1U][3U]),8);
        bufp->chgCData(oldp+323,(vlSelf->systolic_array__DOT__w_col_data
                                 [1U][3U]),8);
        bufp->chgCData(oldp+324,(vlSelf->systolic_array__DOT__w_psum
                                 [1U][4U]),8);
        bufp->chgCData(oldp+325,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+326,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+327,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+328,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+329,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+330,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+331,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+332,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+333,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+334,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [1U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+335,((vlSelf->systolic_array__DOT__w_stream
                                  [1U][3U] ? (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add)
                                   : vlSelf->systolic_array__DOT__w_psum
                                  [1U][4U])),8);
        bufp->chgBit(oldp+336,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+337,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+338,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+339,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+340,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+341,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+342,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+343,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+344,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+345,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+346,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__1__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+347,(vlSelf->systolic_array__DOT__w_rst_acc
                               [2U][0U]));
        bufp->chgBit(oldp+348,(vlSelf->systolic_array__DOT__w_stream
                               [2U][0U]));
        bufp->chgCData(oldp+349,(vlSelf->systolic_array__DOT__w_row_data
                                 [2U][0U]),8);
        bufp->chgCData(oldp+350,(vlSelf->systolic_array__DOT__w_col_data
                                 [2U][0U]),8);
        bufp->chgCData(oldp+351,(vlSelf->systolic_array__DOT__w_psum
                                 [2U][1U]),8);
        bufp->chgCData(oldp+352,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+353,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+354,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+355,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+356,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+357,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+358,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+359,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+360,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+361,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [2U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+362,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [2U]),8);
        bufp->chgCData(oldp+363,((vlSelf->systolic_array__DOT__w_stream
                                  [2U][0U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [2U] : vlSelf->systolic_array__DOT__w_psum
                                  [2U][1U])),8);
        bufp->chgCData(oldp+364,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgCData(oldp+365,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
        bufp->chgCData(oldp+366,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[2]),8);
        bufp->chgIData(oldp+367,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+368,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+369,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+370,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+371,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+372,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+373,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+374,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+375,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+376,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+377,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+378,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+379,(vlSelf->systolic_array__DOT__w_rst_acc
                               [2U][1U]));
        bufp->chgBit(oldp+380,(vlSelf->systolic_array__DOT__w_stream
                               [2U][1U]));
        bufp->chgCData(oldp+381,(vlSelf->systolic_array__DOT__w_row_data
                                 [2U][1U]),8);
        bufp->chgCData(oldp+382,(vlSelf->systolic_array__DOT__w_col_data
                                 [2U][1U]),8);
        bufp->chgCData(oldp+383,(vlSelf->systolic_array__DOT__w_psum
                                 [2U][2U]),8);
        bufp->chgCData(oldp+384,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+385,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+386,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+387,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+388,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+389,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+390,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+391,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+392,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+393,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [2U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+394,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [1U]),8);
        bufp->chgCData(oldp+395,((vlSelf->systolic_array__DOT__w_stream
                                  [2U][1U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [1U] : vlSelf->systolic_array__DOT__w_psum
                                  [2U][2U])),8);
        bufp->chgCData(oldp+396,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgCData(oldp+397,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
        bufp->chgIData(oldp+398,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+399,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+400,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+401,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+402,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+403,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+404,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+405,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+406,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+407,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+408,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+409,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+410,(vlSelf->systolic_array__DOT__w_rst_acc
                               [2U][2U]));
        bufp->chgBit(oldp+411,(vlSelf->systolic_array__DOT__w_stream
                               [2U][2U]));
        bufp->chgCData(oldp+412,(vlSelf->systolic_array__DOT__w_row_data
                                 [2U][2U]),8);
        bufp->chgCData(oldp+413,(vlSelf->systolic_array__DOT__w_col_data
                                 [2U][2U]),8);
        bufp->chgCData(oldp+414,(vlSelf->systolic_array__DOT__w_psum
                                 [2U][3U]),8);
        bufp->chgCData(oldp+415,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+416,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+417,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+418,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+419,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+420,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+421,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+422,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+423,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+424,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [2U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+425,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [0U]),8);
        bufp->chgCData(oldp+426,((vlSelf->systolic_array__DOT__w_stream
                                  [2U][2U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [0U] : vlSelf->systolic_array__DOT__w_psum
                                  [2U][3U])),8);
        bufp->chgCData(oldp+427,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgIData(oldp+428,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+429,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+430,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+431,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+432,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+433,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+434,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+435,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+436,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+437,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+438,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+439,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+440,(vlSelf->systolic_array__DOT__w_rst_acc
                               [2U][3U]));
        bufp->chgBit(oldp+441,(vlSelf->systolic_array__DOT__w_stream
                               [2U][3U]));
        bufp->chgCData(oldp+442,(vlSelf->systolic_array__DOT__w_row_data
                                 [2U][3U]),8);
        bufp->chgCData(oldp+443,(vlSelf->systolic_array__DOT__w_col_data
                                 [2U][3U]),8);
        bufp->chgCData(oldp+444,(vlSelf->systolic_array__DOT__w_psum
                                 [2U][4U]),8);
        bufp->chgCData(oldp+445,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+446,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+447,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+448,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+449,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+450,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+451,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+452,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+453,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+454,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [2U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+455,((vlSelf->systolic_array__DOT__w_stream
                                  [2U][3U] ? (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add)
                                   : vlSelf->systolic_array__DOT__w_psum
                                  [2U][4U])),8);
        bufp->chgBit(oldp+456,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+457,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+458,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+459,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+460,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+461,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+462,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+463,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+464,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+465,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+466,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__2__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+467,(vlSelf->systolic_array__DOT__w_rst_acc
                               [3U][0U]));
        bufp->chgBit(oldp+468,(vlSelf->systolic_array__DOT__w_stream
                               [3U][0U]));
        bufp->chgCData(oldp+469,(vlSelf->systolic_array__DOT__w_row_data
                                 [3U][0U]),8);
        bufp->chgCData(oldp+470,(vlSelf->systolic_array__DOT__w_col_data
                                 [3U][0U]),8);
        bufp->chgCData(oldp+471,(vlSelf->systolic_array__DOT__w_psum
                                 [3U][1U]),8);
        bufp->chgCData(oldp+472,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+473,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+474,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+475,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+476,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+477,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+478,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+479,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+480,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+481,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [3U][0U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+482,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [2U]),8);
        bufp->chgCData(oldp+483,((vlSelf->systolic_array__DOT__w_stream
                                  [3U][0U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [2U] : vlSelf->systolic_array__DOT__w_psum
                                  [3U][1U])),8);
        bufp->chgCData(oldp+484,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgCData(oldp+485,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
        bufp->chgCData(oldp+486,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[2]),8);
        bufp->chgIData(oldp+487,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+488,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+489,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+490,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+491,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+492,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+493,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+494,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+495,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+496,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+497,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+498,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__0__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+499,(vlSelf->systolic_array__DOT__w_rst_acc
                               [3U][1U]));
        bufp->chgBit(oldp+500,(vlSelf->systolic_array__DOT__w_stream
                               [3U][1U]));
        bufp->chgCData(oldp+501,(vlSelf->systolic_array__DOT__w_row_data
                                 [3U][1U]),8);
        bufp->chgCData(oldp+502,(vlSelf->systolic_array__DOT__w_col_data
                                 [3U][1U]),8);
        bufp->chgCData(oldp+503,(vlSelf->systolic_array__DOT__w_psum
                                 [3U][2U]),8);
        bufp->chgCData(oldp+504,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+505,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+506,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+507,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+508,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+509,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+510,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+511,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+512,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+513,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [3U][1U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+514,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [1U]),8);
        bufp->chgCData(oldp+515,((vlSelf->systolic_array__DOT__w_stream
                                  [3U][1U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [1U] : vlSelf->systolic_array__DOT__w_psum
                                  [3U][2U])),8);
        bufp->chgCData(oldp+516,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgCData(oldp+517,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[1]),8);
        bufp->chgIData(oldp+518,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+519,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+520,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+521,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+522,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+523,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+524,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+525,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+526,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+527,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+528,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+529,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__1__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+530,(vlSelf->systolic_array__DOT__w_rst_acc
                               [3U][2U]));
        bufp->chgBit(oldp+531,(vlSelf->systolic_array__DOT__w_stream
                               [3U][2U]));
        bufp->chgCData(oldp+532,(vlSelf->systolic_array__DOT__w_row_data
                                 [3U][2U]),8);
        bufp->chgCData(oldp+533,(vlSelf->systolic_array__DOT__w_col_data
                                 [3U][2U]),8);
        bufp->chgCData(oldp+534,(vlSelf->systolic_array__DOT__w_psum
                                 [3U][3U]),8);
        bufp->chgCData(oldp+535,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+536,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+537,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+538,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+539,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+540,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+541,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+542,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+543,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+544,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [3U][2U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+545,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                 [0U]),8);
        bufp->chgCData(oldp+546,((vlSelf->systolic_array__DOT__w_stream
                                  [3U][2U] ? vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain
                                  [0U] : vlSelf->systolic_array__DOT__w_psum
                                  [3U][3U])),8);
        bufp->chgCData(oldp+547,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__delay_chain[0]),8);
        bufp->chgIData(oldp+548,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__gen_delay__DOT__d),32);
        bufp->chgBit(oldp+549,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+550,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+551,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+552,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+553,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+554,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+555,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+556,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+557,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+558,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+559,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__2__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+560,(vlSelf->systolic_array__DOT__w_rst_acc
                               [3U][3U]));
        bufp->chgBit(oldp+561,(vlSelf->systolic_array__DOT__w_stream
                               [3U][3U]));
        bufp->chgCData(oldp+562,(vlSelf->systolic_array__DOT__w_row_data
                                 [3U][3U]),8);
        bufp->chgCData(oldp+563,(vlSelf->systolic_array__DOT__w_col_data
                                 [3U][3U]),8);
        bufp->chgCData(oldp+564,(vlSelf->systolic_array__DOT__w_psum
                                 [3U][4U]),8);
        bufp->chgCData(oldp+565,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__row_data_out),8);
        bufp->chgCData(oldp+566,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__col_data_out),8);
        bufp->chgBit(oldp+567,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__rst_accumulator_out));
        bufp->chgBit(oldp+568,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__stream_out_rdy_out));
        bufp->chgCData(oldp+569,(vlSelf->systolic_array__DOT____Vcellout__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__psum_out),8);
        bufp->chgCData(oldp+570,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed
                                 [3U]),8);
        bufp->chgBit(oldp+571,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed
                                [3U])));
        bufp->chgCData(oldp+572,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add),8);
        bufp->chgBit(oldp+573,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg))));
        bufp->chgCData(oldp+574,((vlSelf->systolic_array__DOT__w_rst_acc
                                  [3U][3U] ? 0U : (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add))),8);
        bufp->chgCData(oldp+575,((vlSelf->systolic_array__DOT__w_stream
                                  [3U][3U] ? (IData)(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__add)
                                   : vlSelf->systolic_array__DOT__w_psum
                                  [3U][4U])),8);
        bufp->chgBit(oldp+576,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_add__DOT__en_reg));
        bufp->chgCData(oldp+577,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__mult),8);
        bufp->chgBit(oldp+578,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__en_reg));
        bufp->chgCData(oldp+579,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+580,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgCData(oldp+581,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[2]),8);
        bufp->chgCData(oldp+582,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__mult_delayed[3]),8);
        bufp->chgBit(oldp+583,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+584,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+585,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[2]));
        bufp->chgBit(oldp+586,(vlSelf->systolic_array__DOT__gen_mac_row__BRA__3__KET____DOT__gen_mac_col__BRA__3__KET____DOT__u_mac__DOT__u_mult__DOT__genblk1__DOT__en_delayed[3]));
        bufp->chgBit(oldp+587,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain
                               [8U]));
        bufp->chgBit(oldp+588,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain
                               [3U]));
        bufp->chgIData(oldp+589,(vlSelf->systolic_array__DOT__u_ctrl__DOT__cs),32);
        bufp->chgBit(oldp+590,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain[0]));
        bufp->chgBit(oldp+591,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain[1]));
        bufp->chgBit(oldp+592,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain[2]));
        bufp->chgBit(oldp+593,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__rst_chain[3]));
        bufp->chgIData(oldp+594,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_rst_delay__DOT__r),32);
        bufp->chgBit(oldp+595,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[0]));
        bufp->chgBit(oldp+596,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[1]));
        bufp->chgBit(oldp+597,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[2]));
        bufp->chgBit(oldp+598,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[3]));
        bufp->chgBit(oldp+599,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[4]));
        bufp->chgBit(oldp+600,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[5]));
        bufp->chgBit(oldp+601,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[6]));
        bufp->chgBit(oldp+602,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[7]));
        bufp->chgBit(oldp+603,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__stream_chain[8]));
        bufp->chgIData(oldp+604,(vlSelf->systolic_array__DOT__u_ctrl__DOT__gen_stream_delay__DOT__s),32);
    }
    bufp->chgBit(oldp+605,(vlSelf->clk));
    bufp->chgBit(oldp+606,(vlSelf->rst_in));
    bufp->chgBit(oldp+607,(vlSelf->rst_accumulator_rdy_in));
    bufp->chgBit(oldp+608,(vlSelf->stream_out_rdy_in_in));
    bufp->chgIData(oldp+609,(vlSelf->row_data_in_in),32);
    bufp->chgIData(oldp+610,(vlSelf->col_data_in_in),32);
    bufp->chgIData(oldp+611,(vlSelf->row_data_out),32);
}

void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_cleanup\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
