// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shifter_8bit.h for the primary calling header

#include "verilated.h"

#include "Vbarrel_shifter_8bit__Syms.h"
#include "Vbarrel_shifter_8bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter_8bit___024root___dump_triggers__ico(Vbarrel_shifter_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vbarrel_shifter_8bit___024root___eval_triggers__ico(Vbarrel_shifter_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbarrel_shifter_8bit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter_8bit___024root___dump_triggers__act(Vbarrel_shifter_8bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vbarrel_shifter_8bit___024root___eval_triggers__act(Vbarrel_shifter_8bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbarrel_shifter_8bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
