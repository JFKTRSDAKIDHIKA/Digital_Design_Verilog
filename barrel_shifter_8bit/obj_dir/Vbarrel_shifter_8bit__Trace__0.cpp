// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbarrel_shifter_8bit__Syms.h"


void Vbarrel_shifter_8bit___024root__trace_chg_sub_0(Vbarrel_shifter_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbarrel_shifter_8bit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root__trace_chg_top_0\n"); );
    // Init
    Vbarrel_shifter_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter_8bit___024root*>(voidSelf);
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbarrel_shifter_8bit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vbarrel_shifter_8bit___024root__trace_chg_sub_0(Vbarrel_shifter_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->barrel_shifter_8bit__DOT__stage1),8);
        bufp->chgCData(oldp+1,(vlSelf->barrel_shifter_8bit__DOT__stage2),8);
        bufp->chgCData(oldp+2,(vlSelf->barrel_shifter_8bit__DOT__stage3),8);
        bufp->chgBit(oldp+3,(vlSelf->barrel_shifter_8bit__DOT__fill_bit));
    }
    bufp->chgCData(oldp+4,(vlSelf->din),8);
    bufp->chgCData(oldp+5,(vlSelf->shamt),3);
    bufp->chgBit(oldp+6,(vlSelf->L_R));
    bufp->chgBit(oldp+7,(vlSelf->A_L));
    bufp->chgCData(oldp+8,(vlSelf->dout),8);
}

void Vbarrel_shifter_8bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root__trace_cleanup\n"); );
    // Init
    Vbarrel_shifter_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter_8bit___024root*>(voidSelf);
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
