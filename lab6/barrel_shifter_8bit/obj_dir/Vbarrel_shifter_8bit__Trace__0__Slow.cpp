// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbarrel_shifter_8bit__Syms.h"


VL_ATTR_COLD void Vbarrel_shifter_8bit___024root__trace_init_sub__TOP__0(Vbarrel_shifter_8bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+5,"din", false,-1, 7,0);
    tracep->declBus(c+6,"shamt", false,-1, 2,0);
    tracep->declBit(c+7,"L_R", false,-1);
    tracep->declBit(c+8,"A_L", false,-1);
    tracep->declBus(c+9,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("barrel_shifter_8bit ");
    tracep->declBus(c+5,"din", false,-1, 7,0);
    tracep->declBus(c+6,"shamt", false,-1, 2,0);
    tracep->declBit(c+7,"L_R", false,-1);
    tracep->declBit(c+8,"A_L", false,-1);
    tracep->declBus(c+9,"dout", false,-1, 7,0);
    tracep->declBus(c+1,"stage1", false,-1, 7,0);
    tracep->declBus(c+2,"stage2", false,-1, 7,0);
    tracep->declBus(c+3,"stage3", false,-1, 7,0);
    tracep->declBit(c+4,"fill_bit", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vbarrel_shifter_8bit___024root__trace_init_top(Vbarrel_shifter_8bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root__trace_init_top\n"); );
    // Body
    Vbarrel_shifter_8bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbarrel_shifter_8bit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbarrel_shifter_8bit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbarrel_shifter_8bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbarrel_shifter_8bit___024root__trace_register(Vbarrel_shifter_8bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbarrel_shifter_8bit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbarrel_shifter_8bit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbarrel_shifter_8bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbarrel_shifter_8bit___024root__trace_full_sub_0(Vbarrel_shifter_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbarrel_shifter_8bit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root__trace_full_top_0\n"); );
    // Init
    Vbarrel_shifter_8bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter_8bit___024root*>(voidSelf);
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbarrel_shifter_8bit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbarrel_shifter_8bit___024root__trace_full_sub_0(Vbarrel_shifter_8bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_shifter_8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter_8bit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->barrel_shifter_8bit__DOT__stage1),8);
    bufp->fullCData(oldp+2,(vlSelf->barrel_shifter_8bit__DOT__stage2),8);
    bufp->fullCData(oldp+3,(vlSelf->barrel_shifter_8bit__DOT__stage3),8);
    bufp->fullBit(oldp+4,(vlSelf->barrel_shifter_8bit__DOT__fill_bit));
    bufp->fullCData(oldp+5,(vlSelf->din),8);
    bufp->fullCData(oldp+6,(vlSelf->shamt),3);
    bufp->fullBit(oldp+7,(vlSelf->L_R));
    bufp->fullBit(oldp+8,(vlSelf->A_L));
    bufp->fullCData(oldp+9,(vlSelf->dout),8);
}
