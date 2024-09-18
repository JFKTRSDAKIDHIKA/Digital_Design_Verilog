// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdderAnybits.h for the primary calling header

#include "verilated.h"

#include "VAdderAnybits___024root.h"

VL_ATTR_COLD void VAdderAnybits___024root___eval_static(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval_static\n"); );
}

VL_ATTR_COLD void VAdderAnybits___024root___eval_initial(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VAdderAnybits___024root___eval_final(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval_final\n"); );
}

VL_ATTR_COLD void VAdderAnybits___024root___eval_triggers__stl(VAdderAnybits___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAnybits___024root___dump_triggers__stl(VAdderAnybits___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VAdderAnybits___024root___eval_stl(VAdderAnybits___024root* vlSelf);

VL_ATTR_COLD void VAdderAnybits___024root___eval_settle(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VAdderAnybits___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VAdderAnybits___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("AdderAnybits.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VAdderAnybits___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAnybits___024root___dump_triggers__stl(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VAdderAnybits___024root___ico_sequent__TOP__0(VAdderAnybits___024root* vlSelf);

VL_ATTR_COLD void VAdderAnybits___024root___eval_stl(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VAdderAnybits___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAnybits___024root___dump_triggers__ico(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAnybits___024root___dump_triggers__act(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAnybits___024root___dump_triggers__nba(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAdderAnybits___024root___ctor_var_reset(VAdderAnybits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAnybits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAnybits___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(32);
    vlSelf->B = VL_RAND_RESET_I(32);
    vlSelf->S = VL_RAND_RESET_I(32);
    vlSelf->Cout = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__4__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__5__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__6__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__7__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__8__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__9__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__10__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__11__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__12__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__13__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__14__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__15__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__16__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__17__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__18__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__19__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__20__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__21__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__22__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__23__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__24__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__25__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__26__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__27__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__28__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__29__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__30__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAnybits__DOT____Vcellinp__adders__BRA__31__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
