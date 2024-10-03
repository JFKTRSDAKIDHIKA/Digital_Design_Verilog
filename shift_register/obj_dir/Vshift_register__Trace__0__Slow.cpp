// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift_register__Syms.h"


VL_ATTR_COLD void Vshift_register___024root__trace_init_sub__TOP__0(Vshift_register___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"mode", false,-1, 2,0);
    tracep->declBus(c+3,"D", false,-1, 7,0);
    tracep->declBit(c+4,"serial_in", false,-1);
    tracep->declBus(c+5,"Q", false,-1, 7,0);
    tracep->pushNamePrefix("shift_register ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"mode", false,-1, 2,0);
    tracep->declBus(c+3,"D", false,-1, 7,0);
    tracep->declBit(c+4,"serial_in", false,-1);
    tracep->declBus(c+5,"Q", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vshift_register___024root__trace_init_top(Vshift_register___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_init_top\n"); );
    // Body
    Vshift_register___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vshift_register___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_register___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_register___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vshift_register___024root__trace_register(Vshift_register___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vshift_register___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vshift_register___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vshift_register___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vshift_register___024root__trace_full_sub_0(Vshift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vshift_register___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_full_top_0\n"); );
    // Init
    Vshift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_register___024root*>(voidSelf);
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vshift_register___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vshift_register___024root__trace_full_sub_0(Vshift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullCData(oldp+2,(vlSelf->mode),3);
    bufp->fullCData(oldp+3,(vlSelf->D),8);
    bufp->fullBit(oldp+4,(vlSelf->serial_in));
    bufp->fullCData(oldp+5,(vlSelf->Q),8);
}
