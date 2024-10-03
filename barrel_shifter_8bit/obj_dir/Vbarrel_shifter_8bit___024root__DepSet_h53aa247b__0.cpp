// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shifter_8bit.h for the primary calling header

#include "verilated.h"

#include "Vbarrel_shifter_8bit___024root.h"

VL_INLINE_OPT void Vbarrel_shifter_8bit___024root___ico_sequent__TOP__0(Vbarrel_shifter_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->barrel_shifter_8bit__DOT__fill_bit = ((IData)(vlSelf->A_L) 
                                                  & ((IData)(vlSelf->din) 
                                                     >> 7U));
    if (vlSelf->L_R) {
        vlSelf->barrel_shifter_8bit__DOT__stage1 = 
            ((1U & (IData)(vlSelf->shamt)) ? (0xfeU 
                                              & ((IData)(vlSelf->din) 
                                                 << 1U))
              : (IData)(vlSelf->din));
        vlSelf->barrel_shifter_8bit__DOT__stage2 = 
            ((2U & (IData)(vlSelf->shamt)) ? (0xfcU 
                                              & ((IData)(vlSelf->barrel_shifter_8bit__DOT__stage1) 
                                                 << 2U))
              : (IData)(vlSelf->barrel_shifter_8bit__DOT__stage1));
        vlSelf->barrel_shifter_8bit__DOT__stage3 = 
            ((4U & (IData)(vlSelf->shamt)) ? (0xf0U 
                                              & ((IData)(vlSelf->barrel_shifter_8bit__DOT__stage2) 
                                                 << 4U))
              : (IData)(vlSelf->barrel_shifter_8bit__DOT__stage2));
    } else if ((1U & (~ (IData)(vlSelf->L_R)))) {
        vlSelf->barrel_shifter_8bit__DOT__stage1 = 
            ((1U & (IData)(vlSelf->shamt)) ? (((IData)(vlSelf->barrel_shifter_8bit__DOT__fill_bit) 
                                               << 7U) 
                                              | (0x7fU 
                                                 & ((IData)(vlSelf->din) 
                                                    >> 1U)))
              : (IData)(vlSelf->din));
        vlSelf->barrel_shifter_8bit__DOT__stage2 = 
            ((2U & (IData)(vlSelf->shamt)) ? ((0xc0U 
                                               & ((- (IData)((IData)(vlSelf->barrel_shifter_8bit__DOT__fill_bit))) 
                                                  << 6U)) 
                                              | (0x3fU 
                                                 & ((IData)(vlSelf->barrel_shifter_8bit__DOT__stage1) 
                                                    >> 2U)))
              : (IData)(vlSelf->barrel_shifter_8bit__DOT__stage1));
        vlSelf->barrel_shifter_8bit__DOT__stage3 = 
            ((4U & (IData)(vlSelf->shamt)) ? ((0xf0U 
                                               & ((- (IData)((IData)(vlSelf->barrel_shifter_8bit__DOT__fill_bit))) 
                                                  << 4U)) 
                                              | (0xfU 
                                                 & ((IData)(vlSelf->barrel_shifter_8bit__DOT__stage2) 
                                                    >> 4U)))
              : (IData)(vlSelf->barrel_shifter_8bit__DOT__stage2));
    }
    vlSelf->dout = vlSelf->barrel_shifter_8bit__DOT__stage3;
}

void Vbarrel_shifter_8bit___024root___eval_ico(Vbarrel_shifter_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vbarrel_shifter_8bit___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vbarrel_shifter_8bit___024root___eval_act(Vbarrel_shifter_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root___eval_act\n"); );
}

void Vbarrel_shifter_8bit___024root___eval_nba(Vbarrel_shifter_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root___eval_nba\n"); );
}

void Vbarrel_shifter_8bit___024root___eval_triggers__ico(Vbarrel_shifter_8bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter_8bit___024root___dump_triggers__ico(Vbarrel_shifter_8bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vbarrel_shifter_8bit___024root___eval_triggers__act(Vbarrel_shifter_8bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter_8bit___024root___dump_triggers__act(Vbarrel_shifter_8bit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter_8bit___024root___dump_triggers__nba(Vbarrel_shifter_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vbarrel_shifter_8bit___024root___eval(Vbarrel_shifter_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root___eval\n"); );
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
        Vbarrel_shifter_8bit___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vbarrel_shifter_8bit___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("barrel_shifter_8bit.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vbarrel_shifter_8bit___024root___eval_ico(vlSelf);
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
            Vbarrel_shifter_8bit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vbarrel_shifter_8bit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("barrel_shifter_8bit.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vbarrel_shifter_8bit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vbarrel_shifter_8bit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("barrel_shifter_8bit.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vbarrel_shifter_8bit___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vbarrel_shifter_8bit___024root___eval_debug_assertions(Vbarrel_shifter_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->shamt & 0xf8U))) {
        Verilated::overWidthError("shamt");}
    if (VL_UNLIKELY((vlSelf->L_R & 0xfeU))) {
        Verilated::overWidthError("L_R");}
    if (VL_UNLIKELY((vlSelf->A_L & 0xfeU))) {
        Verilated::overWidthError("A_L");}
}
#endif  // VL_DEBUG
