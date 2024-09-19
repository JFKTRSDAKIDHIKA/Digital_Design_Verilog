// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder1bit.h for the primary calling header

#include "verilated.h"

#include "VAdder1bit__Syms.h"
#include "VAdder1bit___024root.h"

void VAdder1bit___024root___ctor_var_reset(VAdder1bit___024root* vlSelf);

VAdder1bit___024root::VAdder1bit___024root(VAdder1bit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VAdder1bit___024root___ctor_var_reset(this);
}

void VAdder1bit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VAdder1bit___024root::~VAdder1bit___024root() {
}
