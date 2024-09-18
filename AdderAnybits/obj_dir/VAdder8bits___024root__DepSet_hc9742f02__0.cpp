// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdder8bits.h for the primary calling header

#include "verilated.h"

#include "VAdder8bits___024root.h"

VL_INLINE_OPT void VAdder8bits___024root___ico_sequent__TOP__0(VAdder8bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin 
        = (1U & ((IData)(vlSelf->A) & (IData)(vlSelf->B)));
    vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin 
        = (1U & (((((IData)(vlSelf->A) | (IData)(vlSelf->B)) 
                   >> 1U) & (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin)) 
                 | (((IData)(vlSelf->A) & (IData)(vlSelf->B)) 
                    >> 1U)));
    vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin 
        = (1U & (((((IData)(vlSelf->A) | (IData)(vlSelf->B)) 
                   >> 2U) & (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin)) 
                 | (((IData)(vlSelf->A) & (IData)(vlSelf->B)) 
                    >> 2U)));
    vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin 
        = (1U & (((((IData)(vlSelf->A) | (IData)(vlSelf->B)) 
                   >> 3U) & (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin)) 
                 | (((IData)(vlSelf->A) & (IData)(vlSelf->B)) 
                    >> 3U)));
    vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin 
        = (1U & (((((IData)(vlSelf->A) | (IData)(vlSelf->B)) 
                   >> 4U) & (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin)) 
                 | (((IData)(vlSelf->A) & (IData)(vlSelf->B)) 
                    >> 4U)));
    vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin 
        = (1U & (((((IData)(vlSelf->A) | (IData)(vlSelf->B)) 
                   >> 5U) & (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin)) 
                 | (((IData)(vlSelf->A) & (IData)(vlSelf->B)) 
                    >> 5U)));
    vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin 
        = (1U & (((((IData)(vlSelf->A) | (IData)(vlSelf->B)) 
                   >> 6U) & (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin)) 
                 | (((IData)(vlSelf->A) & (IData)(vlSelf->B)) 
                    >> 6U)));
    vlSelf->Cout = (1U & (((((IData)(vlSelf->A) | (IData)(vlSelf->B)) 
                            >> 7U) & (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin)) 
                          | (((IData)(vlSelf->A) & (IData)(vlSelf->B)) 
                             >> 7U)));
    vlSelf->S = (((IData)(((((IData)(vlSelf->A) >> 7U) 
                            ^ (IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin)) 
                           ^ ((IData)(vlSelf->B) >> 7U))) 
                  << 7U) | ((0x40U & ((0xffffffc0U 
                                       & (IData)(vlSelf->A)) 
                                      ^ (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                          << 6U) ^ 
                                         (0xffffffc0U 
                                          & (IData)(vlSelf->B))))) 
                            | ((0x20U & ((0xffffffe0U 
                                          & (IData)(vlSelf->A)) 
                                         ^ (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                             << 5U) 
                                            ^ (0xffffffe0U 
                                               & (IData)(vlSelf->B))))) 
                               | ((0x10U & ((0xfffffff0U 
                                             & (IData)(vlSelf->A)) 
                                            ^ (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                                << 4U) 
                                               ^ (0xfffffff0U 
                                                  & (IData)(vlSelf->B))))) 
                                  | ((8U & ((0xfffffff8U 
                                             & (IData)(vlSelf->A)) 
                                            ^ (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                                << 3U) 
                                               ^ (0xfffffff8U 
                                                  & (IData)(vlSelf->B))))) 
                                     | ((4U & ((0xfffffffcU 
                                                & (IData)(vlSelf->A)) 
                                               ^ (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                                   << 2U) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & (IData)(vlSelf->B))))) 
                                        | ((2U & ((0xfffffffeU 
                                                   & (IData)(vlSelf->A)) 
                                                  ^ 
                                                  (((IData)(vlSelf->Adder8bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                                    << 1U) 
                                                   ^ 
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelf->B))))) 
                                           | (1U & 
                                              ((IData)(vlSelf->A) 
                                               ^ (IData)(vlSelf->B))))))))));
}

void VAdder8bits___024root___eval_ico(VAdder8bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VAdder8bits___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VAdder8bits___024root___eval_act(VAdder8bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root___eval_act\n"); );
}

void VAdder8bits___024root___eval_nba(VAdder8bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root___eval_nba\n"); );
}

void VAdder8bits___024root___eval_triggers__ico(VAdder8bits___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder8bits___024root___dump_triggers__ico(VAdder8bits___024root* vlSelf);
#endif  // VL_DEBUG
void VAdder8bits___024root___eval_triggers__act(VAdder8bits___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder8bits___024root___dump_triggers__act(VAdder8bits___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdder8bits___024root___dump_triggers__nba(VAdder8bits___024root* vlSelf);
#endif  // VL_DEBUG

void VAdder8bits___024root___eval(VAdder8bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root___eval\n"); );
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
        VAdder8bits___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VAdder8bits___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("Adder8bits.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VAdder8bits___024root___eval_ico(vlSelf);
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
            VAdder8bits___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VAdder8bits___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("Adder8bits.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VAdder8bits___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VAdder8bits___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("Adder8bits.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VAdder8bits___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VAdder8bits___024root___eval_debug_assertions(VAdder8bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder8bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder8bits___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
