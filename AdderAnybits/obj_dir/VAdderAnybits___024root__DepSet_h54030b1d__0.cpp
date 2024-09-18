// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdderAnybits.h for the primary calling header

#include "verilated.h"

#include "VAdderAnybits___024root.h"

VL_INLINE_OPT void VAdderAnybits___024root___ico_sequent__TOP__0(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin 
        = (1U & (vlSelf->A & vlSelf->B));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 1U) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 1U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 2U) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 2U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 3U) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 3U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 4U) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 4U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 5U) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 5U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 6U) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 6U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 7U) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 7U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 8U) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 8U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 9U) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 9U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0xaU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0xaU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0xbU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0xbU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0xcU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0xcU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0xdU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0xdU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0xeU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0xeU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0xfU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0xfU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x10U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x10U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x11U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x11U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x12U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x12U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x13U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x13U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x14U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x14U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x15U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x15U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x16U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x16U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x17U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x17U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x18U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x18U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x19U) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x19U)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x1aU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x1aU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x1bU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x1bU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x1cU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x1cU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x1dU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x1dU)));
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin 
        = (1U & ((((vlSelf->A | vlSelf->B) >> 0x1eU) 
                  & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin)) 
                 | ((vlSelf->A & vlSelf->B) >> 0x1eU)));
    vlSelf->Cout = (1U & ((((vlSelf->A | vlSelf->B) 
                            >> 0x1fU) & (IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin)) 
                          | ((vlSelf->A & vlSelf->B) 
                             >> 0x1fU)));
    vlSelf->S = ((((0x80000000U & vlSelf->A) ^ ((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin) 
                                                << 0x1fU)) 
                  ^ (0x80000000U & vlSelf->B)) | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->A) 
                                                      ^ 
                                                      (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin) 
                                                        << 0x1eU) 
                                                       ^ 
                                                       (0xc0000000U 
                                                        & vlSelf->B)))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->A) 
                                                         ^ 
                                                         (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin) 
                                                           << 0x1dU) 
                                                          ^ 
                                                          (0xe0000000U 
                                                           & vlSelf->B)))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->A) 
                                                            ^ 
                                                            (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin) 
                                                              << 0x1cU) 
                                                             ^ 
                                                             (0xf0000000U 
                                                              & vlSelf->B)))) 
                                                        | ((0x8000000U 
                                                            & ((0xf8000000U 
                                                                & vlSelf->A) 
                                                               ^ 
                                                               (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin) 
                                                                 << 0x1bU) 
                                                                ^ 
                                                                (0xf8000000U 
                                                                 & vlSelf->B)))) 
                                                           | ((0x4000000U 
                                                               & ((0xfc000000U 
                                                                   & vlSelf->A) 
                                                                  ^ 
                                                                  (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin) 
                                                                    << 0x1aU) 
                                                                   ^ 
                                                                   (0xfc000000U 
                                                                    & vlSelf->B)))) 
                                                              | ((0x2000000U 
                                                                  & ((0xfe000000U 
                                                                      & vlSelf->A) 
                                                                     ^ 
                                                                     (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin) 
                                                                       << 0x19U) 
                                                                      ^ 
                                                                      (0xfe000000U 
                                                                       & vlSelf->B)))) 
                                                                 | ((0x1000000U 
                                                                     & ((0xff000000U 
                                                                         & vlSelf->A) 
                                                                        ^ 
                                                                        (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin) 
                                                                          << 0x18U) 
                                                                         ^ 
                                                                         (0xff000000U 
                                                                          & vlSelf->B)))) 
                                                                    | ((0x800000U 
                                                                        & ((0xff800000U 
                                                                            & vlSelf->A) 
                                                                           ^ 
                                                                           (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin) 
                                                                             << 0x17U) 
                                                                            ^ 
                                                                            (0xff800000U 
                                                                             & vlSelf->B)))) 
                                                                       | ((0x400000U 
                                                                           & ((0xffc00000U 
                                                                               & vlSelf->A) 
                                                                              ^ 
                                                                              (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin) 
                                                                                << 0x16U) 
                                                                               ^ 
                                                                               (0xffc00000U 
                                                                                & vlSelf->B)))) 
                                                                          | ((0x200000U 
                                                                              & ((0xffe00000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin) 
                                                                                << 0x15U) 
                                                                                ^ 
                                                                                (0xffe00000U 
                                                                                & vlSelf->B)))) 
                                                                             | ((0x100000U 
                                                                                & ((0xfff00000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin) 
                                                                                << 0x14U) 
                                                                                ^ 
                                                                                (0xfff00000U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x80000U 
                                                                                & ((0xfff80000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin) 
                                                                                << 0x13U) 
                                                                                ^ 
                                                                                (0xfff80000U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x40000U 
                                                                                & ((0xfffc0000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin) 
                                                                                << 0x12U) 
                                                                                ^ 
                                                                                (0xfffc0000U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x20000U 
                                                                                & ((0xfffe0000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin) 
                                                                                << 0x11U) 
                                                                                ^ 
                                                                                (0xfffe0000U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x10000U 
                                                                                & ((0xffff0000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin) 
                                                                                << 0x10U) 
                                                                                ^ 
                                                                                (0xffff0000U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x8000U 
                                                                                & ((0xffff8000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin) 
                                                                                << 0xfU) 
                                                                                ^ 
                                                                                (0xffff8000U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x4000U 
                                                                                & ((0xffffc000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin) 
                                                                                << 0xeU) 
                                                                                ^ 
                                                                                (0xffffc000U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x2000U 
                                                                                & ((0xffffe000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin) 
                                                                                << 0xdU) 
                                                                                ^ 
                                                                                (0xffffe000U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin) 
                                                                                << 0xcU) 
                                                                                ^ 
                                                                                (0xfffff000U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin) 
                                                                                << 0xbU) 
                                                                                ^ 
                                                                                (0xfffff800U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin) 
                                                                                << 0xaU) 
                                                                                ^ 
                                                                                (0xfffffc00U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin) 
                                                                                << 9U) 
                                                                                ^ 
                                                                                (0xfffffe00U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin) 
                                                                                << 8U) 
                                                                                ^ 
                                                                                (0xffffff00U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin) 
                                                                                << 7U) 
                                                                                ^ 
                                                                                (0xffffff80U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x40U 
                                                                                & ((0xffffffc0U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin) 
                                                                                << 6U) 
                                                                                ^ 
                                                                                (0xffffffc0U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x20U 
                                                                                & ((0xffffffe0U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin) 
                                                                                << 5U) 
                                                                                ^ 
                                                                                (0xffffffe0U 
                                                                                & vlSelf->B)))) 
                                                                                | ((0x10U 
                                                                                & ((0xfffffff0U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin) 
                                                                                << 4U) 
                                                                                ^ 
                                                                                (0xfffffff0U 
                                                                                & vlSelf->B)))) 
                                                                                | ((8U 
                                                                                & ((0xfffffff8U 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin) 
                                                                                << 3U) 
                                                                                ^ 
                                                                                (0xfffffff8U 
                                                                                & vlSelf->B)))) 
                                                                                | ((4U 
                                                                                & ((0xfffffffcU 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin) 
                                                                                << 2U) 
                                                                                ^ 
                                                                                (0xfffffffcU 
                                                                                & vlSelf->B)))) 
                                                                                | ((2U 
                                                                                & ((0xfffffffeU 
                                                                                & vlSelf->A) 
                                                                                ^ 
                                                                                (((IData)(vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin) 
                                                                                << 1U) 
                                                                                ^ 
                                                                                (0xfffffffeU 
                                                                                & vlSelf->B)))) 
                                                                                | (1U 
                                                                                & (vlSelf->A 
                                                                                ^ vlSelf->B)))))))))))))))))))))))))))))))));
}

void VAdderAnybits___024root___eval_ico(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VAdderAnybits___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VAdderAnybits___024root___eval_act(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval_act\n"); );
}

void VAdderAnybits___024root___eval_nba(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval_nba\n"); );
}

void VAdderAnybits___024root___eval_triggers__ico(VAdderAnybits___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAnybits___024root___dump_triggers__ico(VAdderAnybits___024root* vlSelf);
#endif  // VL_DEBUG
void VAdderAnybits___024root___eval_triggers__act(VAdderAnybits___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAnybits___024root___dump_triggers__act(VAdderAnybits___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAnybits___024root___dump_triggers__nba(VAdderAnybits___024root* vlSelf);
#endif  // VL_DEBUG

void VAdderAnybits___024root___eval(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval\n"); );
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
        VAdderAnybits___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VAdderAnybits___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("AdderAnybits.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VAdderAnybits___024root___eval_ico(vlSelf);
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
            VAdderAnybits___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VAdderAnybits___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("AdderAnybits.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VAdderAnybits___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VAdderAnybits___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("AdderAnybits.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VAdderAnybits___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VAdderAnybits___024root___eval_debug_assertions(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
