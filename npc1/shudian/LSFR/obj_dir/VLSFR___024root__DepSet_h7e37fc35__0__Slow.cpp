// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLSFR.h for the primary calling header

#include "verilated.h"

#include "VLSFR___024root.h"

VL_ATTR_COLD void VLSFR___024root___eval_static(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___eval_static\n"); );
}

VL_ATTR_COLD void VLSFR___024root___eval_initial(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VLSFR___024root___eval_final(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___eval_final\n"); );
}

VL_ATTR_COLD void VLSFR___024root___eval_triggers__stl(VLSFR___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VLSFR___024root___dump_triggers__stl(VLSFR___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VLSFR___024root___eval_stl(VLSFR___024root* vlSelf);

VL_ATTR_COLD void VLSFR___024root___eval_settle(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VLSFR___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VLSFR___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/LSFR.v", 28, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VLSFR___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLSFR___024root___dump_triggers__stl(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> VLSFR__ConstPool__TABLE_hb2a417e2_0;

VL_ATTR_COLD void VLSFR___024root___stl_sequent__TOP__0(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___stl_sequent__TOP__0\n"); );
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
    // Body
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

VL_ATTR_COLD void VLSFR___024root___eval_stl(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VLSFR___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLSFR___024root___dump_triggers__act(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VLSFR___024root___dump_triggers__nba(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VLSFR___024root___ctor_var_reset(VLSFR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->seal = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(8);
    vlSelf->h1 = VL_RAND_RESET_I(7);
    vlSelf->h0 = VL_RAND_RESET_I(7);
    vlSelf->h2 = VL_RAND_RESET_I(7);
    vlSelf->h3 = VL_RAND_RESET_I(7);
    vlSelf->h4 = VL_RAND_RESET_I(7);
    vlSelf->h5 = VL_RAND_RESET_I(7);
    vlSelf->h6 = VL_RAND_RESET_I(7);
    vlSelf->h7 = VL_RAND_RESET_I(7);
    vlSelf->LSFR__DOT__feedback = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
