// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41.h for the primary calling header

#include "verilated.h"

#include "Vmux41___024root.h"

VL_INLINE_OPT void Vmux41___024root___ico_sequent__TOP__0(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Y = (((~ ((IData)(vlSelf->S) >> 1U)) & 
                  (((~ (IData)(vlSelf->S)) & (IData)(vlSelf->D0)) 
                   | ((IData)(vlSelf->D1) & (IData)(vlSelf->S)))) 
                 | ((((~ (IData)(vlSelf->S)) & (IData)(vlSelf->D2)) 
                     | ((IData)(vlSelf->D3) & (IData)(vlSelf->S))) 
                    & ((IData)(vlSelf->S) >> 1U)));
}

void Vmux41___024root___eval_ico(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vmux41___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vmux41___024root___eval_act(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_act\n"); );
}

void Vmux41___024root___eval_nba(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_nba\n"); );
}

void Vmux41___024root___eval_triggers__ico(Vmux41___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41___024root___dump_triggers__ico(Vmux41___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41___024root___eval_triggers__act(Vmux41___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41___024root___dump_triggers__act(Vmux41___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41___024root___dump_triggers__nba(Vmux41___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux41___024root___eval(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmux41___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmux41___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("mux41.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmux41___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmux41___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmux41___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("mux41.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmux41___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmux41___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("mux41.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmux41___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmux41___024root___eval_debug_assertions(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->D0 & 0xfeU))) {
        Verilated::overWidthError("D0");}
    if (VL_UNLIKELY((vlSelf->D1 & 0xfeU))) {
        Verilated::overWidthError("D1");}
    if (VL_UNLIKELY((vlSelf->D2 & 0xfeU))) {
        Verilated::overWidthError("D2");}
    if (VL_UNLIKELY((vlSelf->D3 & 0xfeU))) {
        Verilated::overWidthError("D3");}
    if (VL_UNLIKELY((vlSelf->S & 0xfcU))) {
        Verilated::overWidthError("S");}
}
#endif  // VL_DEBUG
