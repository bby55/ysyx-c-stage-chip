// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoder.h for the primary calling header

#include "verilated.h"

#include "Vcoder___024root.h"

extern const VlUnpacked<CData/*2:0*/, 512> Vcoder__ConstPool__TABLE_h0d68042a_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vcoder__ConstPool__TABLE_h934a15ab_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vcoder__ConstPool__TABLE_hc7cb9ab7_0;
extern const VlUnpacked<CData/*6:0*/, 16> Vcoder__ConstPool__TABLE_hb2a417e2_0;

VL_INLINE_OPT void Vcoder___024root___ico_sequent__TOP__0(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ coder__DOT__temp;
    coder__DOT__temp = 0;
    SData/*8:0*/ __Vtableidx1;
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
    __Vtableidx1 = (((IData)(vlSelf->in) << 1U) | (IData)(vlSelf->en));
    vlSelf->out = Vcoder__ConstPool__TABLE_h0d68042a_0
        [__Vtableidx1];
    vlSelf->seal = Vcoder__ConstPool__TABLE_h934a15ab_0
        [__Vtableidx1];
    coder__DOT__temp = Vcoder__ConstPool__TABLE_hc7cb9ab7_0
        [__Vtableidx1];
    __Vtableidx6 = vlSelf->seal;
    vlSelf->h3 = Vcoder__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx6];
    __Vtableidx2 = coder__DOT__temp;
    vlSelf->h = Vcoder__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx2];
    __Vtableidx3 = (1U & (IData)(vlSelf->out));
    vlSelf->h0 = Vcoder__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx3];
    __Vtableidx4 = (1U & ((IData)(vlSelf->out) >> 1U));
    vlSelf->h1 = Vcoder__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx4];
    __Vtableidx5 = (1U & ((IData)(vlSelf->out) >> 2U));
    vlSelf->h2 = Vcoder__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx5];
}

void Vcoder___024root___eval_ico(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vcoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vcoder___024root___eval_act(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_act\n"); );
}

void Vcoder___024root___eval_nba(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_nba\n"); );
}

void Vcoder___024root___eval_triggers__ico(Vcoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoder___024root___dump_triggers__ico(Vcoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vcoder___024root___eval_triggers__act(Vcoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoder___024root___dump_triggers__act(Vcoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoder___024root___dump_triggers__nba(Vcoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vcoder___024root___eval(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcoder___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcoder___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/ysyxbby/ysyx-workbench/npc/shudian/coder/vsrc/coder.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcoder___024root___eval_ico(vlSelf);
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
            Vcoder___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcoder___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ysyxbby/ysyx-workbench/npc/shudian/coder/vsrc/coder.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcoder___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcoder___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ysyxbby/ysyx-workbench/npc/shudian/coder/vsrc/coder.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcoder___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcoder___024root___eval_debug_assertions(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
