// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAdderAndSuber4bits.h for the primary calling header

#include "verilated.h"

#include "VAdderAndSuber4bits___024root.h"

VL_ATTR_COLD void VAdderAndSuber4bits___024root___eval_static(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___eval_static\n"); );
}

VL_ATTR_COLD void VAdderAndSuber4bits___024root___eval_initial(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VAdderAndSuber4bits___024root___eval_final(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___eval_final\n"); );
}

VL_ATTR_COLD void VAdderAndSuber4bits___024root___eval_triggers__stl(VAdderAndSuber4bits___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAndSuber4bits___024root___dump_triggers__stl(VAdderAndSuber4bits___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VAdderAndSuber4bits___024root___eval_stl(VAdderAndSuber4bits___024root* vlSelf);

VL_ATTR_COLD void VAdderAndSuber4bits___024root___eval_settle(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VAdderAndSuber4bits___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VAdderAndSuber4bits___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("AdderAndSuber4bits.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VAdderAndSuber4bits___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAndSuber4bits___024root___dump_triggers__stl(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VAdderAndSuber4bits___024root___ico_sequent__TOP__0(VAdderAndSuber4bits___024root* vlSelf);

VL_ATTR_COLD void VAdderAndSuber4bits___024root___eval_stl(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VAdderAndSuber4bits___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAndSuber4bits___024root___dump_triggers__ico(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VAdderAndSuber4bits___024root___dump_triggers__act(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAdderAndSuber4bits___024root___dump_triggers__nba(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAdderAndSuber4bits___024root___ctor_var_reset(VAdderAndSuber4bits___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAdderAndSuber4bits__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdderAndSuber4bits___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(4);
    vlSelf->B = VL_RAND_RESET_I(4);
    vlSelf->Cin = VL_RAND_RESET_I(1);
    vlSelf->Cout = VL_RAND_RESET_I(1);
    vlSelf->S = VL_RAND_RESET_I(4);
    vlSelf->OverFlow = VL_RAND_RESET_I(1);
    vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__0__KET____DOT__u__Y = VL_RAND_RESET_I(1);
    vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__1__KET____DOT__u__Y = VL_RAND_RESET_I(1);
    vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__2__KET____DOT__u__Y = VL_RAND_RESET_I(1);
    vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Cin = VL_RAND_RESET_I(1);
    vlSelf->AdderAndSuber4bits__DOT____Vcellinp__adders__BRA__3__KET____DOT__u__Y = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
