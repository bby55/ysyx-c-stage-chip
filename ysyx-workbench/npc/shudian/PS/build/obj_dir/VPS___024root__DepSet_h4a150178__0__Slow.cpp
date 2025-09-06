// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPS.h for the primary calling header

#include "verilated.h"

#include "VPS___024root.h"

VL_ATTR_COLD void VPS___024root___eval_static(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPS___024root___eval_initial(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void VPS___024root___eval_final(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPS___024root___eval_triggers__stl(VPS___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPS___024root___dump_triggers__stl(VPS___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPS___024root___eval_stl(VPS___024root* vlSelf);

VL_ATTR_COLD void VPS___024root___eval_settle(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPS___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VPS___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/ysyxbby/ysyx-workbench/npc/shudian/PS/vsrc/PS.v", 173, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPS___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPS___024root___dump_triggers__stl(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> VPS__ConstPool__TABLE_hb2a417e2_0;
extern const VlUnpacked<CData/*7:0*/, 256> VPS__ConstPool__TABLE_hd1442380_0;

VL_ATTR_COLD void VPS___024root___stl_sequent__TOP__0(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    __Vtableidx6 = (0xfU & (IData)(vlSelf->num));
    vlSelf->h4 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx6];
    __Vtableidx7 = (0xfU & ((IData)(vlSelf->num) >> 4U));
    vlSelf->h5 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx7];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->cur_key) 
                            >> 1U));
    vlSelf->PS__DOT__hh0 = VPS__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->cur_key) 
                            >> 5U));
    vlSelf->PS__DOT__hh1 = VPS__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx3];
    __Vtableidx1 = (0xffU & ((IData)(vlSelf->cur_key) 
                             >> 1U));
    vlSelf->ascii = VPS__ConstPool__TABLE_hd1442380_0
        [__Vtableidx1];
    __Vtableidx4 = (0xfU & (IData)(vlSelf->ascii));
    vlSelf->PS__DOT__hh2 = VPS__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & ((IData)(vlSelf->ascii) 
                            >> 4U));
    vlSelf->PS__DOT__hh3 = VPS__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx5];
    if (vlSelf->PS__DOT__update) {
        vlSelf->h0 = 0x7fU;
        vlSelf->h1 = 0x7fU;
        vlSelf->h2 = 0x7fU;
        vlSelf->h3 = 0x7fU;
    } else {
        vlSelf->h0 = vlSelf->PS__DOT__hh0;
        vlSelf->h1 = vlSelf->PS__DOT__hh1;
        vlSelf->h2 = vlSelf->PS__DOT__hh2;
        vlSelf->h3 = vlSelf->PS__DOT__hh3;
    }
}

VL_ATTR_COLD void VPS___024root___eval_stl(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VPS___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPS___024root___dump_triggers__act(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPS___024root___dump_triggers__nba(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPS___024root___ctor_var_reset(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->num = 0;
    vlSelf->cur_key = 0;
    vlSelf->ascii = 0;
    vlSelf->h0 = 0;
    vlSelf->h1 = 0;
    vlSelf->h2 = 0;
    vlSelf->h3 = 0;
    vlSelf->h4 = 0;
    vlSelf->h5 = 0;
    vlSelf->PS__DOT__hh0 = 0;
    vlSelf->PS__DOT__hh1 = 0;
    vlSelf->PS__DOT__hh2 = 0;
    vlSelf->PS__DOT__hh3 = 0;
    vlSelf->PS__DOT__count = 0;
    vlSelf->PS__DOT__update = 0;
    vlSelf->PS__DOT__MY_PS__DOT__buffer = 0;
    vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync = 0;
    vlSelf->PS__DOT__MY_PS__DOT__seal = 0;
    vlSelf->PS__DOT__MY_PS__DOT__state = 0;
    vlSelf->PS__DOT__MY_PS__DOT__next_state = 0;
    vlSelf->PS__DOT__MY_PS__DOT____Vlvbound_he42a8c0b__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
