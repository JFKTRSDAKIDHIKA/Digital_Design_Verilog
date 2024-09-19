// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU32bits.h for the primary calling header

#include "verilated.h"

#include "VALU32bits__Syms.h"
#include "VALU32bits___024root.h"

void VALU32bits___024root___ctor_var_reset(VALU32bits___024root* vlSelf);

VALU32bits___024root::VALU32bits___024root(VALU32bits__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU32bits___024root___ctor_var_reset(this);
}

void VALU32bits___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALU32bits___024root::~VALU32bits___024root() {
}
