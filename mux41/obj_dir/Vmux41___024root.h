// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux41.h for the primary calling header

#ifndef VERILATED_VMUX41___024ROOT_H_
#define VERILATED_VMUX41___024ROOT_H_  // guard

#include "verilated.h"

class Vmux41__Syms;

class Vmux41___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(D0,0,0);
    VL_IN8(D1,0,0);
    VL_IN8(D2,0,0);
    VL_IN8(D3,0,0);
    VL_IN8(S,1,0);
    VL_OUT8(Y,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux41__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux41___024root(Vmux41__Syms* symsp, const char* v__name);
    ~Vmux41___024root();
    VL_UNCOPYABLE(Vmux41___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
