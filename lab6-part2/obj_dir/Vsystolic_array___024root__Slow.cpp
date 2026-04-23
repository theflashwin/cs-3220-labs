// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "Vsystolic_array__pch.h"

void Vsystolic_array___024root___ctor_var_reset(Vsystolic_array___024root* vlSelf);

Vsystolic_array___024root::Vsystolic_array___024root(Vsystolic_array__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vsystolic_array___024root___ctor_var_reset(this);
}

void Vsystolic_array___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsystolic_array___024root::~Vsystolic_array___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
