#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtb_simple.h"

#define CLOCK_PERIOD 2
#define RESET_TIME   10
#define RUN_CYCLES   200

uint64_t timestamp = 0;
double sc_time_stamp() { return timestamp; }

void tick(Vtb_simple* dut, VerilatedVcdC* trace) {
    dut->clk = 0; dut->eval(); trace->dump(timestamp++);
    dut->clk = 1; dut->eval(); trace->dump(timestamp++);
}

int main() {
    Vtb_simple* dut = new Vtb_simple();
    Verilated::traceEverOn(true);
    auto trace = new VerilatedVcdC();
    dut->trace(trace, 99);
    trace->open("trace_simple.vcd");

    // Reset
    dut->reset = 1; dut->wr_vld = 0; dut->rd_rdy = 0; dut->wr_data = 0;
    for (int i = 0; i < 5; i++) tick(dut, trace);
    dut->reset = 0;
    for (int i = 0; i < 2; i++) tick(dut, trace);

    // Write 5 items
    uint32_t items[5] = {0xA, 0x14, 0x1E, 0x28, 0x32};
    for (int i = 0; i < 5; i++) {
        dut->wr_data = items[i];
        dut->wr_vld  = 1;
        dut->clk = 1; dut->eval();
        if (dut->wr_rdy)
            std::cout << "WRITE: 0x" << std::hex << dut->wr_data << std::endl;
        trace->dump(timestamp++);
        dut->clk = 0; dut->eval(); trace->dump(timestamp++);
    }
    dut->wr_vld = 0;

    // Wait a few cycles
    for (int i = 0; i < 5; i++) tick(dut, trace);

    // Read 5 items
    dut->rd_rdy = 1;
    for (int i = 0; i < 10; i++) {
        dut->clk = 1; dut->eval();
        if (dut->rd_vld && dut->rd_rdy)
            std::cout << "READ:  0x" << std::hex << dut->rd_data << std::endl;
        trace->dump(timestamp++);
        dut->clk = 0; dut->eval(); trace->dump(timestamp++);
    }
    dut->rd_rdy = 0;

    dut->final();
    trace->close();
    delete trace; delete dut;
    return 0;
}
