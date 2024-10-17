// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__my_keyboard__clrn 
        = vlSelf->top__DOT____Vcellinp__my_keyboard__clrn;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x45U] = 0x30U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x16U] = 0x31U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x1eU] = 0x32U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x26U] = 0x33U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x25U] = 0x34U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x2eU] = 0x35U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x36U] = 0x36U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x3dU] = 0x37U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x3eU] = 0x38U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x46U] = 0x39U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x1cU] = 0x41U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x32U] = 0x42U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x21U] = 0x43U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x23U] = 0x44U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x24U] = 0x45U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x2bU] = 0x46U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x34U] = 0x47U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x33U] = 0x48U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x43U] = 0x49U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x3bU] = 0x4aU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x42U] = 0x4bU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x4bU] = 0x4cU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x3aU] = 0x4dU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x31U] = 0x4eU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x44U] = 0x4fU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x4dU] = 0x50U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x15U] = 0x51U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x2dU] = 0x52U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x1bU] = 0x53U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x2cU] = 0x54U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x3cU] = 0x55U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x2aU] = 0x56U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x1dU] = 0x57U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x22U] = 0x58U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x35U] = 0x59U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x1aU] = 0x5aU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x1cU] = 0x61U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x32U] = 0x62U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x21U] = 0x63U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x23U] = 0x64U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x24U] = 0x65U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x2bU] = 0x66U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x34U] = 0x67U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x33U] = 0x68U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x43U] = 0x69U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x3bU] = 0x6aU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x42U] = 0x6bU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x4bU] = 0x6cU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x3aU] = 0x6dU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x31U] = 0x6eU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x44U] = 0x6fU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x4dU] = 0x70U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x15U] = 0x71U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x2dU] = 0x72U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x1bU] = 0x73U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x2cU] = 0x74U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x3cU] = 0x75U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x2aU] = 0x76U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x1dU] = 0x77U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x22U] = 0x78U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x35U] = 0x79U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x1aU] = 0x7aU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0xeU] = 0x60U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x4eU] = 0x2dU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x55U] = 0x3dU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x5dU] = 0x5cU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x54U] = 0x5bU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x5bU] = 0x5dU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x4cU] = 0x3bU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x52U] = 0x27U;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x41U] = 0x2cU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x49U] = 0x2eU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x4aU] = 0x2fU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x5aU] = 0xaU;
    vlSelf->top__DOT__my_sca2ascii__DOT__rom[0x29U] = 0x20U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/root/Digital_Design_Verilog/lab7/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h1f93ebb4_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ top__DOT__data_read;
    top__DOT__data_read = 0;
    CData/*7:0*/ top__DOT__ascii;
    top__DOT__ascii = 0;
    CData/*7:0*/ top__DOT__int_seg0;
    top__DOT__int_seg0 = 0;
    CData/*7:0*/ top__DOT__int_seg1;
    top__DOT__int_seg1 = 0;
    CData/*7:0*/ top__DOT__int_seg2;
    top__DOT__int_seg2 = 0;
    CData/*7:0*/ top__DOT__int_seg3;
    top__DOT__int_seg3 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->top__DOT____Vcellinp__my_keyboard__clrn 
        = (1U & (~ (IData)(vlSelf->rst)));
    __Vtableidx5 = (0xfU & (IData)(vlSelf->top__DOT__my_keyboard__DOT__key_count_reg));
    vlSelf->seg4 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__key_count_reg) 
                            >> 4U));
    vlSelf->seg5 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx6];
    top__DOT__data_read = vlSelf->top__DOT__my_keyboard__DOT__fifo
        [vlSelf->top__DOT__my_keyboard__DOT__r_ptr];
    __Vtableidx1 = (0xfU & (IData)(top__DOT__data_read));
    top__DOT__int_seg0 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(top__DOT__data_read) 
                            >> 4U));
    top__DOT__int_seg1 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx2];
    top__DOT__ascii = vlSelf->top__DOT__my_sca2ascii__DOT__rom
        [top__DOT__data_read];
    __Vtableidx3 = (0xfU & (IData)(top__DOT__ascii));
    top__DOT__int_seg2 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(top__DOT__ascii) 
                            >> 4U));
    top__DOT__int_seg3 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx4];
    if ((0xf0U == (IData)(top__DOT__data_read))) {
        vlSelf->seg0 = 0xffU;
        vlSelf->seg1 = 0xffU;
        vlSelf->seg2 = 0xffU;
        vlSelf->seg3 = 0xffU;
    } else {
        vlSelf->seg0 = top__DOT__int_seg0;
        vlSelf->seg1 = top__DOT__int_seg1;
        vlSelf->seg2 = top__DOT__int_seg2;
        vlSelf->seg3 = top__DOT__int_seg3;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge top.__Vcellinp__my_keyboard__clrn)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge top.__Vcellinp__my_keyboard__clrn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->seg0 = 0;
    vlSelf->seg1 = 0;
    vlSelf->seg2 = 0;
    vlSelf->seg3 = 0;
    vlSelf->seg4 = 0;
    vlSelf->seg5 = 0;
    vlSelf->top__DOT__ready = 0;
    vlSelf->top__DOT____Vcellinp__my_keyboard__clrn = 0;
    vlSelf->top__DOT__my_keyboard__DOT__overflow = 0;
    vlSelf->top__DOT__my_keyboard__DOT__buffer = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__my_keyboard__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->top__DOT__my_keyboard__DOT__w_ptr = 0;
    vlSelf->top__DOT__my_keyboard__DOT__r_ptr = 0;
    vlSelf->top__DOT__my_keyboard__DOT__count = 0;
    vlSelf->top__DOT__my_keyboard__DOT__key_count_reg = 0;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__my_sca2ascii__DOT__rom[__Vi0] = 0;
    }
    vlSelf->__Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__my_keyboard__clrn = 0;
}
