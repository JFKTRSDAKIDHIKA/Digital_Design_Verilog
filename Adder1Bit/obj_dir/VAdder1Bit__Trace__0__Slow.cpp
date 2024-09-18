// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAdder1Bit__Syms.h"


VL_ATTR_COLD void VAdder1Bit___024root__trace_init_sub__TOP__0(VAdder1Bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder1Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder1Bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"X", false,-1);
    tracep->declBit(c+2,"Y", false,-1);
    tracep->declBit(c+3,"Cin", false,-1);
    tracep->declBit(c+4,"Cout", false,-1);
    tracep->declBit(c+5,"Sum", false,-1);
    tracep->pushNamePrefix("Adder1Bit ");
    tracep->declBit(c+1,"X", false,-1);
    tracep->declBit(c+2,"Y", false,-1);
    tracep->declBit(c+3,"Cin", false,-1);
    tracep->declBit(c+4,"Cout", false,-1);
    tracep->declBit(c+5,"Sum", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VAdder1Bit___024root__trace_init_top(VAdder1Bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder1Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder1Bit___024root__trace_init_top\n"); );
    // Body
    VAdder1Bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAdder1Bit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdder1Bit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAdder1Bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAdder1Bit___024root__trace_register(VAdder1Bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder1Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder1Bit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAdder1Bit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAdder1Bit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAdder1Bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAdder1Bit___024root__trace_full_sub_0(VAdder1Bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAdder1Bit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder1Bit___024root__trace_full_top_0\n"); );
    // Init
    VAdder1Bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAdder1Bit___024root*>(voidSelf);
    VAdder1Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAdder1Bit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAdder1Bit___024root__trace_full_sub_0(VAdder1Bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAdder1Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAdder1Bit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->X));
    bufp->fullBit(oldp+2,(vlSelf->Y));
    bufp->fullBit(oldp+3,(vlSelf->Cin));
    bufp->fullBit(oldp+4,(vlSelf->Cout));
    bufp->fullBit(oldp+5,(vlSelf->Sum));
}
