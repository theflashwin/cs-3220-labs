// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axis_fifo__Syms.h"


VL_ATTR_COLD void Vtb_axis_fifo___024root__trace_init_sub__TOP__0(Vtb_axis_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+79,"reset", false,-1);
}

VL_ATTR_COLD void Vtb_axis_fifo___024root__trace_init_sub__TOP__tb_axis_fifo__0(Vtb_axis_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root__trace_init_sub__TOP__tb_axis_fifo__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBit(c+79,"reset", false,-1);
    tracep->declBus(c+87,"AXIS_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+88,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+89,"DATA_NUM", false,-1, 31,0);
    tracep->declBus(c+90,"write_start", false,-1, 31,0);
    tracep->declBus(c+80,"din_0_rsc_dat", false,-1, 31,0);
    tracep->declBit(c+81,"din_0_rsc_rdy", false,-1);
    tracep->declBit(c+82,"din_0_rsc_vld", false,-1);
    tracep->declBus(c+83,"dout_0_rsc_dat", false,-1, 31,0);
    tracep->declBit(c+84,"dout_0_rsc_rdy", false,-1);
    tracep->declBit(c+85,"dout_0_rsc_vld", false,-1);
    tracep->declBus(c+10,"din_0_rsc_dat_reg", false,-1, 31,0);
    tracep->declBit(c+11,"din_0_rsc_vld_reg", false,-1);
    tracep->declBit(c+12,"dout_0_rsc_rdy_reg", false,-1);
    tracep->declArray(c+13,"cycle_count_reg", false,-1, 128,0);
    tracep->declBus(c+18,"in_0_ptr", false,-1, 31,0);
    tracep->declBus(c+19,"out_0_ptr", false,-1, 31,0);
    tracep->declBus(c+91,"f_in_0", false,-1, 31,0);
    tracep->declBus(c+92,"f_out_0", false,-1, 31,0);
    tracep->pushNamePrefix("axis_fifo_inst ");
    tracep->declBus(c+88,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+87,"AXIS_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+78,"wr_aclk", false,-1);
    tracep->declBit(c+86,"wr_rstn", false,-1);
    tracep->declBus(c+80,"wr_axis_data", false,-1, 31,0);
    tracep->declBit(c+82,"wr_axis_vld", false,-1);
    tracep->declBit(c+81,"wr_axis_rdy", false,-1);
    tracep->declBit(c+78,"rd_aclk", false,-1);
    tracep->declBit(c+86,"rd_rstn", false,-1);
    tracep->declBus(c+83,"rd_axis_data", false,-1, 31,0);
    tracep->declBit(c+85,"rd_axis_vld", false,-1);
    tracep->declBit(c+84,"rd_axis_rdy", false,-1);
    tracep->declBus(c+20,"wr_ptr_reg", false,-1, 4,0);
    tracep->declBus(c+1,"wr_ptr_next", false,-1, 4,0);
    tracep->declBus(c+21,"wr_ptr_gray_reg", false,-1, 4,0);
    tracep->declBus(c+2,"wr_ptr_gray_next", false,-1, 4,0);
    tracep->declBus(c+22,"wr_addr_reg", false,-1, 4,0);
    tracep->declBus(c+23,"rd_ptr_reg", false,-1, 4,0);
    tracep->declBus(c+3,"rd_ptr_next", false,-1, 4,0);
    tracep->declBus(c+24,"rd_ptr_gray_reg", false,-1, 4,0);
    tracep->declBus(c+4,"rd_ptr_gray_next", false,-1, 4,0);
    tracep->declBus(c+25,"rd_addr_reg", false,-1, 4,0);
    tracep->declBus(c+26,"wr_ptr_gray_sync1_reg", false,-1, 4,0);
    tracep->declBus(c+27,"wr_ptr_gray_sync2_reg", false,-1, 4,0);
    tracep->declBus(c+28,"rd_ptr_gray_sync1_reg", false,-1, 4,0);
    tracep->declBus(c+29,"rd_ptr_gray_sync2_reg", false,-1, 4,0);
    tracep->declBit(c+30,"wr_rst_sync1_reg", false,-1);
    tracep->declBit(c+31,"wr_rst_sync2_reg", false,-1);
    tracep->declBit(c+32,"wr_rst_sync3_reg", false,-1);
    tracep->declBit(c+33,"rd_rst_sync1_reg", false,-1);
    tracep->declBit(c+34,"rd_rst_sync2_reg", false,-1);
    tracep->declBit(c+35,"rd_rst_sync3_reg", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+36+i*2,"mem", true,(i+0), 32,0);
    }
    tracep->declQuad(c+68,"mem_read_data_reg", false,-1, 32,0);
    tracep->declBit(c+70,"mem_read_data_valid_reg", false,-1);
    tracep->declBit(c+5,"mem_read_data_valid_next", false,-1);
    tracep->declQuad(c+71,"mem_write_data", false,-1, 32,0);
    tracep->declQuad(c+73,"rd_data_reg", false,-1, 32,0);
    tracep->declBit(c+75,"rd_axis_vld_reg", false,-1);
    tracep->declBit(c+6,"rd_axis_vld_next", false,-1);
    tracep->declBit(c+76,"full", false,-1);
    tracep->declBit(c+77,"empty", false,-1);
    tracep->declBit(c+7,"write", false,-1);
    tracep->declBit(c+8,"read", false,-1);
    tracep->declBit(c+9,"store_output", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_axis_fifo___024root__trace_init_top(Vtb_axis_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root__trace_init_top\n"); );
    // Body
    Vtb_axis_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("tb_axis_fifo ");
    Vtb_axis_fifo___024root__trace_init_sub__TOP__tb_axis_fifo__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_axis_fifo___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axis_fifo___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axis_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_axis_fifo___024root__trace_register(Vtb_axis_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_axis_fifo___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_axis_fifo___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_axis_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_axis_fifo___024root__trace_full_sub_0(Vtb_axis_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axis_fifo___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root__trace_full_top_0\n"); );
    // Init
    Vtb_axis_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axis_fifo___024root*>(voidSelf);
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_axis_fifo___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axis_fifo___024root__trace_full_sub_0(Vtb_axis_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_next),5);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next),5);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_next),5);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next),5);
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_axis_vld_next));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__write));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__read));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__store_output));
    bufp->fullIData(oldp+10,(vlSymsp->TOP__tb_axis_fifo.__PVT__din_0_rsc_dat_reg),32);
    bufp->fullBit(oldp+11,(vlSymsp->TOP__tb_axis_fifo.__PVT__din_0_rsc_vld_reg));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__tb_axis_fifo.__PVT__dout_0_rsc_rdy_reg));
    bufp->fullWData(oldp+13,(vlSymsp->TOP__tb_axis_fifo.__PVT__cycle_count_reg),129);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__tb_axis_fifo.__PVT__in_0_ptr),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__tb_axis_fifo.__PVT__out_0_ptr),32);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_reg),5);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg),5);
    bufp->fullCData(oldp+22,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_addr_reg),5);
    bufp->fullCData(oldp+23,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_reg),5);
    bufp->fullCData(oldp+24,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg),5);
    bufp->fullCData(oldp+25,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_addr_reg),5);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg),5);
    bufp->fullCData(oldp+27,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg),5);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg),5);
    bufp->fullCData(oldp+29,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg),5);
    bufp->fullBit(oldp+30,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg));
    bufp->fullQData(oldp+36,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[0]),33);
    bufp->fullQData(oldp+38,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[1]),33);
    bufp->fullQData(oldp+40,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[2]),33);
    bufp->fullQData(oldp+42,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[3]),33);
    bufp->fullQData(oldp+44,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[4]),33);
    bufp->fullQData(oldp+46,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[5]),33);
    bufp->fullQData(oldp+48,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[6]),33);
    bufp->fullQData(oldp+50,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[7]),33);
    bufp->fullQData(oldp+52,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[8]),33);
    bufp->fullQData(oldp+54,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[9]),33);
    bufp->fullQData(oldp+56,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[10]),33);
    bufp->fullQData(oldp+58,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[11]),33);
    bufp->fullQData(oldp+60,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[12]),33);
    bufp->fullQData(oldp+62,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[13]),33);
    bufp->fullQData(oldp+64,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[14]),33);
    bufp->fullQData(oldp+66,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[15]),33);
    bufp->fullQData(oldp+68,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_read_data_reg),33);
    bufp->fullBit(oldp+70,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg));
    bufp->fullQData(oldp+71,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_write_data),33);
    bufp->fullQData(oldp+73,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_data_reg),33);
    bufp->fullBit(oldp+75,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__full));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__empty));
    bufp->fullBit(oldp+78,(vlSelf->clk));
    bufp->fullBit(oldp+79,(vlSelf->reset));
    bufp->fullIData(oldp+80,(vlSymsp->TOP__tb_axis_fifo.din_0_rsc_dat),32);
    bufp->fullBit(oldp+81,(vlSymsp->TOP__tb_axis_fifo.din_0_rsc_rdy));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__tb_axis_fifo.din_0_rsc_vld));
    bufp->fullIData(oldp+83,(vlSymsp->TOP__tb_axis_fifo.dout_0_rsc_dat),32);
    bufp->fullBit(oldp+84,(vlSymsp->TOP__tb_axis_fifo.dout_0_rsc_rdy));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__tb_axis_fifo.dout_0_rsc_vld));
    bufp->fullBit(oldp+86,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullIData(oldp+87,(0x20U),32);
    bufp->fullIData(oldp+88,(4U),32);
    bufp->fullIData(oldp+89,(0x400U),32);
    bufp->fullIData(oldp+90,(0x200U),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__tb_axis_fifo.__PVT__f_in_0),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__tb_axis_fifo.__PVT__f_out_0),32);
}
