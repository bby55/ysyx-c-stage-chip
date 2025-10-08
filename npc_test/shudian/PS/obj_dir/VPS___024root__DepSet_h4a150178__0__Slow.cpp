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
                VL_FATAL_MT("/home/ysyxbby/ysyx-workbench/npc/shudian/PS/vsrc/PS.v", 156, "", "Settle region did not converge.");
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
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->cur_key) 
                            >> 1U));
    vlSelf->h0 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->cur_key) 
                            >> 5U));
    vlSelf->h1 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx3];
    __Vtableidx6 = (0xfU & (IData)(vlSelf->num));
    vlSelf->h4 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx6];
    __Vtableidx7 = (0xfU & ((IData)(vlSelf->num) >> 4U));
    vlSelf->h5 = VPS__ConstPool__TABLE_hb2a417e2_0[__Vtableidx7];
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

VL_ATTR_COLD void VPS___024root___eval_stl(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VPS___024root___stl_sequent__TOP__0(vlSelf);
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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPS___024root___eval_postponed__TOP(VPS___024root* vlSelf);

VL_ATTR_COLD void VPS___024root___eval_postponed(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_postponed\n"); );
    // Body
    VPS___024root___eval_postponed__TOP(vlSelf);
}

VL_ATTR_COLD void VPS___024root___ctor_var_reset(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->ps2_data = VL_RAND_RESET_I(1);
    vlSelf->num = VL_RAND_RESET_I(8);
    vlSelf->cur_key = VL_RAND_RESET_I(10);
    vlSelf->ascii = VL_RAND_RESET_I(8);
    vlSelf->h0 = VL_RAND_RESET_I(7);
    vlSelf->h1 = VL_RAND_RESET_I(7);
    vlSelf->h2 = VL_RAND_RESET_I(7);
    vlSelf->h3 = VL_RAND_RESET_I(7);
    vlSelf->h4 = VL_RAND_RESET_I(7);
    vlSelf->h5 = VL_RAND_RESET_I(7);
    vlSelf->PS__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->PS__DOT__update = VL_RAND_RESET_I(1);
    vlSelf->PS__DOT__MY_PS__DOT__buffer = VL_RAND_RESET_I(10);
    vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->PS__DOT__MY_PS__DOT____Vstrobe0 = VL_RAND_RESET_I(1);
    vlSelf->PS__DOT__MY_PS__DOT____Vstrobe1 = VL_RAND_RESET_I(1);
    vlSelf->PS__DOT__MY_PS__DOT____Vstrobe2 = VL_RAND_RESET_I(1);
    vlSelf->PS__DOT__MY_PS__DOT____Vlvbound_he42a8c0b__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
