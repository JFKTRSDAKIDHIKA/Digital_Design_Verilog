// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder8bits.h for the primary calling header

#include "verilated.h"

#include "VAdder8bits__Syms.h"
#include "VAdder8bits___024root.h"

void VAdder8bits___024root___ctor_var_reset(VAdder8bits___024root* vlSelf);

VAdder8bits___024root::VAdder8bits___024root(VAdder8bits__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VAdder8bits___024root___ctor_var_reset(this);
}

void VAdder8bits___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VAdder8bits___024root::~VAdder8bits___024root() {
}
