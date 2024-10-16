// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ top__DOT__result_sub;
    top__DOT__result_sub = 0;
    CData/*0:0*/ top__DOT__Overflow_sub;
    top__DOT__Overflow_sub = 0;
    CData/*0:0*/ top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin;
    top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin = 0;
    CData/*0:0*/ top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin;
    top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin = 0;
    CData/*0:0*/ top__DOT__my_AS4__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout;
    top__DOT__my_AS4__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout = 0;
    CData/*0:0*/ top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin;
    top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin = 0;
    CData/*0:0*/ top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin;
    top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin = 0;
    CData/*0:0*/ top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin;
    top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin = 0;
    CData/*0:0*/ top__DOT__my_AS4_sub__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout;
    top__DOT__my_AS4_sub__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout = 0;
    CData/*0:0*/ top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin;
    top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin = 0;
    // Body
    top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin 
        = (IData)((0x11U == (0x11U & (IData)(vlSelf->sw))));
    top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin 
        = (1U & (IData)(((0x10U != (0x11U & (IData)(vlSelf->sw))) 
                         | (1U == (0x11U & (IData)(vlSelf->sw))))));
    top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin 
        = (1U & (((IData)((0U != (0x22U & (IData)(vlSelf->sw)))) 
                  & (IData)(top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin)) 
                 | (IData)((0x22U == (0x22U & (IData)(vlSelf->sw))))));
    top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin 
        = (1U & (((IData)((0x20U != (0x22U & (IData)(vlSelf->sw)))) 
                  & (IData)(top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin)) 
                 | (IData)((2U == (0x22U & (IData)(vlSelf->sw))))));
    top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin 
        = (1U & (((IData)((0U != (0x44U & (IData)(vlSelf->sw)))) 
                  & (IData)(top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin)) 
                 | (IData)((0x44U == (0x44U & (IData)(vlSelf->sw))))));
    top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin 
        = (1U & (((IData)((0x40U != (0x44U & (IData)(vlSelf->sw)))) 
                  & (IData)(top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin)) 
                 | (IData)((4U == (0x44U & (IData)(vlSelf->sw))))));
    top__DOT__my_AS4__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout 
        = (1U & (((IData)((0U != (0x88U & (IData)(vlSelf->sw)))) 
                  & (IData)(top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin)) 
                 | (IData)((0x88U == (0x88U & (IData)(vlSelf->sw))))));
    top__DOT__result_sub = ((8U & ((~ (VL_REDXOR_8(
                                                   (0x88U 
                                                    & (IData)(vlSelf->sw))) 
                                       ^ (IData)(top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin))) 
                                   << 3U)) | ((4U & 
                                               ((~ 
                                                 (VL_REDXOR_8(
                                                              (0x44U 
                                                               & (IData)(vlSelf->sw))) 
                                                  ^ (IData)(top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin))) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((~ 
                                                      (VL_REDXOR_8(
                                                                   (0x22U 
                                                                    & (IData)(vlSelf->sw))) 
                                                       ^ (IData)(top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((IData)(vlSelf->sw) 
                                                        >> 4U) 
                                                       ^ (IData)(vlSelf->sw))))));
    top__DOT__my_AS4_sub__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout 
        = (1U & (((IData)((0x80U != (0x88U & (IData)(vlSelf->sw)))) 
                  & (IData)(top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin)) 
                 | (IData)((8U == (0x88U & (IData)(vlSelf->sw))))));
    top__DOT__Overflow_sub = ((IData)(top__DOT__my_AS4_sub__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin) 
                              ^ (IData)(top__DOT__my_AS4_sub__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout));
    vlSelf->ledr = ((0x400U & (IData)(vlSelf->sw)) ? 
                    ((0x200U & (IData)(vlSelf->sw))
                      ? ((0x100U & (IData)(vlSelf->sw))
                          ? ((0xfffeU & (IData)(vlSelf->ledr)) 
                             | (1U & (~ (IData)((0U 
                                                 != (IData)(top__DOT__result_sub))))))
                          : ((0xffc0U & (IData)(vlSelf->ledr)) 
                             | (1U & (((IData)(top__DOT__result_sub) 
                                       >> 3U) ^ (IData)(top__DOT__Overflow_sub)))))
                      : ((0xffc0U & (IData)(vlSelf->ledr)) 
                         | ((0x100U & (IData)(vlSelf->sw))
                             ? (0xfU & ((IData)(vlSelf->sw) 
                                        ^ ((IData)(vlSelf->sw) 
                                           >> 4U)))
                             : (0xfU & ((IData)(vlSelf->sw) 
                                        | ((IData)(vlSelf->sw) 
                                           >> 4U))))))
                     : ((0xffc0U & (IData)(vlSelf->ledr)) 
                        | ((0x200U & (IData)(vlSelf->sw))
                            ? ((0x100U & (IData)(vlSelf->sw))
                                ? (0xfU & ((IData)(vlSelf->sw) 
                                           & ((IData)(vlSelf->sw) 
                                              >> 4U)))
                                : (0xfU & (~ (IData)(vlSelf->sw))))
                            : ((0x100U & (IData)(vlSelf->sw))
                                ? (((IData)(top__DOT__Overflow_sub) 
                                    << 5U) | (((IData)(top__DOT__my_AS4_sub__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout) 
                                               << 4U) 
                                              | (IData)(top__DOT__result_sub)))
                                : ((((IData)(top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin) 
                                     ^ (IData)(top__DOT__my_AS4__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout)) 
                                    << 5U) | (((IData)(top__DOT__my_AS4__DOT____Vcellout__adder_stage__BRA__3__KET____DOT__u__Cout) 
                                               << 4U) 
                                              | ((8U 
                                                  & ((VL_REDXOR_8(
                                                                  (0x88U 
                                                                   & (IData)(vlSelf->sw))) 
                                                      ^ (IData)(top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__3__KET____DOT__u__Cin)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((VL_REDXOR_8(
                                                                     (0x44U 
                                                                      & (IData)(vlSelf->sw))) 
                                                         ^ (IData)(top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__2__KET____DOT__u__Cin)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((VL_REDXOR_8(
                                                                        (0x22U 
                                                                         & (IData)(vlSelf->sw))) 
                                                            ^ (IData)(top__DOT__my_AS4__DOT____Vcellinp__adder_stage__BRA__1__KET____DOT__u__Cin)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->sw) 
                                                             ^ 
                                                             ((IData)(vlSelf->sw) 
                                                              >> 4U))))))))))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/root/Digital_Design_Verilog/lab3/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/root/Digital_Design_Verilog/lab3/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/root/Digital_Design_Verilog/lab3/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
