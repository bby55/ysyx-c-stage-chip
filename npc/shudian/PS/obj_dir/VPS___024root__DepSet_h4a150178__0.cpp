// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPS.h for the primary calling header

#include "verilated.h"

#include "VPS___024root.h"

void VPS___024root___eval_act(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*6:0*/, 16> VPS__ConstPool__TABLE_hb2a417e2_0;
extern const VlUnpacked<CData/*7:0*/, 256> VPS__ConstPool__TABLE_hd1442380_0;

VL_INLINE_OPT void VPS___024root___nba_sequent__TOP__0(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
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
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*2:0*/ __Vdly__PS__DOT__MY_PS__DOT__ps2_clk_sync;
    __Vdly__PS__DOT__MY_PS__DOT__ps2_clk_sync = 0;
    CData/*7:0*/ __Vdly__num;
    __Vdly__num = 0;
    CData/*3:0*/ __Vdly__PS__DOT__count;
    __Vdly__PS__DOT__count = 0;
    // Body
    __Vdly__PS__DOT__MY_PS__DOT__ps2_clk_sync = vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync;
    __Vdly__PS__DOT__count = vlSelf->PS__DOT__count;
    __Vdly__num = vlSelf->num;
    __Vdly__PS__DOT__MY_PS__DOT__ps2_clk_sync = ((6U 
                                                  & ((IData)(vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        if ((IData)((4U == (6U & (IData)(vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->PS__DOT__count))) {
                if ((((~ (IData)(vlSelf->PS__DOT__MY_PS__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->PS__DOT__MY_PS__DOT__buffer) 
                                               >> 1U))))) {
                    if (VL_UNLIKELY((0xf0U == (0xffU 
                                               & ((IData)(vlSelf->PS__DOT__MY_PS__DOT__buffer) 
                                                  >> 1U))))) {
                        VL_WRITEF("display buffer:%x\n",
                                  8,(0xffU & ((IData)(vlSelf->PS__DOT__MY_PS__DOT__buffer) 
                                              >> 1U)));
                        vlSelf->PS__DOT__MY_PS__DOT____Vstrobe0 = 1U;
                        __Vdly__num = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->num)));
                        vlSelf->PS__DOT__MY_PS__DOT____Vstrobe1 = 1U;
                        vlSelf->PS__DOT__MY_PS__DOT____Vstrobe2 = 1U;
                        vlSelf->PS__DOT__update = 1U;
                        VL_WRITEF("display cur_key %x\ndisplay num:%3#\n",
                                  8,(0xffU & ((IData)(vlSelf->cur_key) 
                                              >> 1U)),
                                  8,(IData)(vlSelf->num));
                        vlSelf->cur_key = 0U;
                    } else {
                        vlSelf->cur_key = vlSelf->PS__DOT__MY_PS__DOT__buffer;
                        vlSelf->PS__DOT__update = 0U;
                    }
                }
                __Vdly__PS__DOT__count = 0U;
            } else {
                vlSelf->PS__DOT__MY_PS__DOT____Vlvbound_he42a8c0b__0 
                    = vlSelf->ps2_data;
                if (VL_LIKELY((9U >= (IData)(vlSelf->PS__DOT__count)))) {
                    vlSelf->PS__DOT__MY_PS__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->PS__DOT__count))) 
                            & (IData)(vlSelf->PS__DOT__MY_PS__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->PS__DOT__MY_PS__DOT____Vlvbound_he42a8c0b__0) 
                                        << (IData)(vlSelf->PS__DOT__count))));
                }
                __Vdly__PS__DOT__count = (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->PS__DOT__count)));
            }
        }
    } else {
        __Vdly__PS__DOT__count = 0U;
        __Vdly__num = 0U;
        vlSelf->cur_key = 0U;
    }
    vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync = __Vdly__PS__DOT__MY_PS__DOT__ps2_clk_sync;
    vlSelf->PS__DOT__count = __Vdly__PS__DOT__count;
    vlSelf->num = __Vdly__num;
    __Vtableidx6 = (0xfU & (IData)(vlSelf->num));
    vlSelf->h4 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx6];
    __Vtableidx7 = (0xfU & ((IData)(vlSelf->num) >> 4U));
    vlSelf->h5 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx7];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->cur_key) 
                            >> 1U));
    vlSelf->h0 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->cur_key) 
                            >> 5U));
    vlSelf->h1 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx3];
    __Vtableidx1 = (0xffU & ((IData)(vlSelf->cur_key) 
                             >> 1U));
    vlSelf->ascii = VPS__ConstPool__TABLE_hd1442380_0
        [__Vtableidx1];
    __Vtableidx4 = (0xfU & (IData)(vlSelf->ascii));
    vlSelf->h2 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx4];
    __Vtableidx5 = (0xfU & ((IData)(vlSelf->ascii) 
                            >> 4U));
    vlSelf->h3 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx5];
}

void VPS___024root___eval_nba(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPS___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VPS___024root___eval_triggers__act(VPS___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPS___024root___dump_triggers__act(VPS___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPS___024root___dump_triggers__nba(VPS___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPS___024root___eval_postponed(VPS___024root* vlSelf);

void VPS___024root___eval(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPS___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPS___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ysyxbby/ysyx-workbench/npc/shudian/PS/vsrc/PS.v", 156, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPS___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPS___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ysyxbby/ysyx-workbench/npc/shudian/PS/vsrc/PS.v", 156, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPS___024root___eval_nba(vlSelf);
        }
    }
    VPS___024root___eval_postponed(vlSelf);
}

#ifdef VL_DEBUG
void VPS___024root___eval_debug_assertions(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_debug_assertions\n"); );
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
