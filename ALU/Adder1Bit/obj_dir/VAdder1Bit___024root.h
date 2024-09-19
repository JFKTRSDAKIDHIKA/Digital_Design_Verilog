// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAdder1Bit.h for the primary calling header

#ifndef VERILATED_VADDER1BIT___024ROOT_H_
#define VERILATED_VADDER1BIT___024ROOT_H_  // guard

#include "verilated.h"

class VAdder1Bit__Syms;

class VAdder1Bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(X,0,0);
    VL_IN8(Y,0,0);
    VL_IN8(Cin,0,0);
    VL_OUT8(Cout,0,0);
    VL_OUT8(Sum,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAdder1Bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAdder1Bit___024root(VAdder1Bit__Syms* symsp, const char* v__name);
    ~VAdder1Bit___024root();
    VL_UNCOPYABLE(VAdder1Bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
