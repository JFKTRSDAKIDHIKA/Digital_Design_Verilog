// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_register.h for the primary calling header

#include "verilated.h"

#include "Vshift_register___024root.h"

void Vshift_register___024root___eval_act(Vshift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vshift_register___024root___nba_sequent__TOP__0(Vshift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h2afdfd4a__0;
    // Body
    __Vtemp_h2afdfd4a__0 = ((4U & (IData)(vlSelf->mode))
                             ? ((2U & (IData)(vlSelf->mode))
                                 ? ((1U & (IData)(vlSelf->mode))
                                     ? ((0xfeU & ((IData)(vlSelf->Q) 
                                                  << 1U)) 
                                        | (1U & ((IData)(vlSelf->Q) 
                                                 >> 7U)))
                                     : ((0x80U & ((IData)(vlSelf->Q) 
                                                  << 7U)) 
                                        | (0x7fU & 
                                           ((IData)(vlSelf->Q) 
                                            >> 1U))))
                                 : ((1U & (IData)(vlSelf->mode))
                                     ? (((IData)(vlSelf->serial_in) 
                                         << 7U) | (0x7fU 
                                                   & ((IData)(vlSelf->Q) 
                                                      >> 1U)))
                                     : ((0x80U & (IData)(vlSelf->Q)) 
                                        | (0x7fU & 
                                           ((IData)(vlSelf->Q) 
                                            >> 1U)))))
                             : ((2U & (IData)(vlSelf->mode))
                                 ? ((1U & (IData)(vlSelf->mode))
                                     ? (0xfeU & ((IData)(vlSelf->Q) 
                                                 << 1U))
                                     : (0x7fU & ((IData)(vlSelf->Q) 
                                                 >> 1U)))
                                 : ((1U & (IData)(vlSelf->mode))
                                     ? (IData)(vlSelf->D)
                                     : 0U)));
    vlSelf->Q = __Vtemp_h2afdfd4a__0;
}

void Vshift_register___024root___eval_nba(Vshift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vshift_register___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vshift_register___024root___eval_triggers__act(Vshift_register___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register___024root___dump_triggers__act(Vshift_register___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register___024root___dump_triggers__nba(Vshift_register___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_register___024root___eval(Vshift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vshift_register___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vshift_register___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("shift_register.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vshift_register___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vshift_register___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("shift_register.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vshift_register___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vshift_register___024root___eval_debug_assertions(Vshift_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->mode & 0xf8U))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY((vlSelf->serial_in & 0xfeU))) {
        Verilated::overWidthError("serial_in");}
}
#endif  // VL_DEBUG
