// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLSFR.h for the primary calling header

#include "verilated.h"

#include "VLSFR___024root.h"

void VLSFR___024root___eval_act(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*6:0*/, 16> VLSFR__ConstPool__TABLE_hb2a417e2_0;

VL_INLINE_OPT void VLSFR___024root___nba_sequent__TOP__0(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___nba_sequent__TOP__0\n"); );
    // Init
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
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*7:0*/ __Vdly__q;
    __Vdly__q = 0;
    // Body
    __Vdly__q = vlSelf->q;
    if (vlSelf->reset) {
        __Vdly__q = 0U;
    } else if (((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->seal))) {
        vlSelf->LSFR__DOT__feedback = (1U & (~ (1U 
                                                & VL_REDXOR_8(
                                                              (0xb8U 
                                                               & (IData)(vlSelf->q))))));
        __Vdly__q = (((IData)(vlSelf->LSFR__DOT__feedback) 
                      << 7U) | (0x7fU & ((IData)(vlSelf->q) 
                                         >> 1U)));
    }
    vlSelf->q = __Vdly__q;
    __Vtableidx1 = (1U & (IData)(vlSelf->q));
    vlSelf->h0 = VLSFR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx1];
    __Vtableidx2 = (1U & ((IData)(vlSelf->q) >> 1U));
    vlSelf->h1 = VLSFR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx2];
    __Vtableidx3 = (1U & ((IData)(vlSelf->q) >> 2U));
    vlSelf->h2 = VLSFR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx3];
    __Vtableidx4 = (1U & ((IData)(vlSelf->q) >> 3U));
    vlSelf->h3 = VLSFR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx4];
    __Vtableidx5 = (1U & ((IData)(vlSelf->q) >> 4U));
    vlSelf->h4 = VLSFR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx5];
    __Vtableidx6 = (1U & ((IData)(vlSelf->q) >> 5U));
    vlSelf->h5 = VLSFR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx6];
    __Vtableidx7 = (1U & ((IData)(vlSelf->q) >> 6U));
    vlSelf->h6 = VLSFR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx7];
    __Vtableidx8 = (1U & ((IData)(vlSelf->q) >> 7U));
    vlSelf->h7 = VLSFR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx8];
}

void VLSFR___024root___eval_nba(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VLSFR___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VLSFR___024root___eval_triggers__act(VLSFR___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VLSFR___024root___dump_triggers__act(VLSFR___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VLSFR___024root___dump_triggers__nba(VLSFR___024root* vlSelf);
#endif  // VL_DEBUG

void VLSFR___024root___eval(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___eval\n"); );
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
            VLSFR___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VLSFR___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/LSFR.v", 28, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VLSFR___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VLSFR___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/LSFR.v", 28, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VLSFR___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VLSFR___024root___eval_debug_assertions(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->seal & 0xfeU))) {
        Verilated::overWidthError("seal");}
}
#endif  // VL_DEBUG
