// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAdderAndSuber4bits.h for the primary calling header

#ifndef VERILATED_VADDERANDSUBER4BITS___024ROOT_H_
#define VERILATED_VADDERANDSUBER4BITS___024ROOT_H_  // guard

#include "verilated.h"

class VAdderAndSuber4bits__Syms;

class VAdderAndSuber4bits___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(Cin,0,0);
    VL_OUT8(Cout,0,0);
    VL_OUT8(S,3,0);
    VL_OUT8(OverFlow,0,0);
    CData/*0:0*/ AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y;
    CData/*0:0*/ AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y;
    CData/*0:0*/ AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y;
    CData/*0:0*/ AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAdderAndSuber4bits__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAdderAndSuber4bits___024root(VAdderAndSuber4bits__Syms* symsp, const char* v__name);
    ~VAdderAndSuber4bits___024root();
    VL_UNCOPYABLE(VAdderAndSuber4bits___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
