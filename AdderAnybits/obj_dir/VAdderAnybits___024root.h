// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAdderAnybits.h for the primary calling header

#ifndef VERILATED_VADDERANYBITS___024ROOT_H_
#define VERILATED_VADDERANYBITS___024ROOT_H_  // guard

#include "verilated.h"

class VAdderAnybits__Syms;

class VAdderAnybits___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(Cout,0,0);
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin;
    CData/*0:0*/ AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin;
    CData/*0:0*/ __VactContinue;
    VL_IN(A,31,0);
    VL_IN(B,31,0);
    VL_OUT(S,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAdderAnybits__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAdderAnybits___024root(VAdderAnybits__Syms* symsp, const char* v__name);
    ~VAdderAnybits___024root();
    VL_UNCOPYABLE(VAdderAnybits___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
