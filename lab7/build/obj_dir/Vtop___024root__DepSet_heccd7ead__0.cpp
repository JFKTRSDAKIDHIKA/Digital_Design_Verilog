// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT____Vcellinp__my_keyboard__clrn 
        = (1U & (~ (IData)(vlSelf->rst)));
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync;
    vlSelf->__Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h1f93ebb4_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
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
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__r_ptr;
    __Vdly__top__DOT__my_keyboard__DOT__r_ptr = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0;
    __Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0;
    __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0;
    __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0 = 0;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__my_keyboard__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__count = 0;
    // Body
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__w_ptr = vlSelf->top__DOT__my_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__my_keyboard__DOT__r_ptr = vlSelf->top__DOT__my_keyboard__DOT__r_ptr;
    __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0 = 0U;
    if (vlSelf->top__DOT____Vcellinp__my_keyboard__clrn) {
        if (vlSelf->top__DOT__ready) {
            __Vdly__top__DOT__my_keyboard__DOT__r_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__r_ptr)));
            if (((IData)(vlSelf->top__DOT__my_keyboard__DOT__w_ptr) 
                 == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__r_ptr))))) {
                vlSelf->top__DOT__ready = 0U;
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                if ((((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                               >> 1U))))) {
                    if ((0xf0U != (0xffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                            >> 1U)))) {
                        vlSelf->top__DOT__my_keyboard__DOT__key_count_reg 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__my_keyboard__DOT__key_count_reg)));
                    }
                    __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0 
                        = vlSelf->top__DOT__my_keyboard__DOT__w_ptr;
                    vlSelf->top__DOT__ready = 1U;
                    __Vdly__top__DOT__my_keyboard__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__w_ptr)));
                    vlSelf->top__DOT__my_keyboard__DOT__overflow 
                        = ((IData)(vlSelf->top__DOT__my_keyboard__DOT__overflow) 
                           | ((IData)(vlSelf->top__DOT__my_keyboard__DOT__r_ptr) 
                              == (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__my_keyboard__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                    vlSelf->top__DOT__my_keyboard__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                            & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0) 
                                        << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))));
                }
                __Vdly__top__DOT__my_keyboard__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
            }
        }
    } else {
        vlSelf->top__DOT__my_keyboard__DOT__key_count_reg = 0U;
        __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
        __Vdly__top__DOT__my_keyboard__DOT__w_ptr = 0U;
        __Vdly__top__DOT__my_keyboard__DOT__r_ptr = 0U;
        vlSelf->top__DOT__my_keyboard__DOT__overflow = 0U;
        vlSelf->top__DOT__ready = 0U;
    }
    vlSelf->top__DOT__my_keyboard__DOT__w_ptr = __Vdly__top__DOT__my_keyboard__DOT__w_ptr;
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__r_ptr = __Vdly__top__DOT__my_keyboard__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0) {
        vlSelf->top__DOT__my_keyboard__DOT__fifo[__Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0;
    }
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->__Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
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
    VlTriggerVec<2> __VpreTriggered;
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
                VL_FATAL_MT("/root/Digital_Design_Verilog/lab7/vsrc/top.v", 1, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/root/Digital_Design_Verilog/lab7/vsrc/top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/root/Digital_Design_Verilog/lab7/vsrc/top.v", 1, "", "NBA region did not converge.");
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
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
