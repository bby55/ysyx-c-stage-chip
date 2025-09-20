// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLSFR__Syms.h"


void VLSFR___024root__trace_chg_sub_0(VLSFR___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VLSFR___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root__trace_chg_top_0\n"); );
    // Init
    VLSFR___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLSFR___024root*>(voidSelf);
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VLSFR___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VLSFR___024root__trace_chg_sub_0(VLSFR___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgBit(oldp+2,(vlSelf->seal));
    bufp->chgCData(oldp+3,(vlSelf->q),8);
    bufp->chgCData(oldp+4,(vlSelf->h1),7);
    bufp->chgCData(oldp+5,(vlSelf->h0),7);
    bufp->chgCData(oldp+6,(vlSelf->h2),7);
    bufp->chgCData(oldp+7,(vlSelf->h3),7);
    bufp->chgCData(oldp+8,(vlSelf->h4),7);
    bufp->chgCData(oldp+9,(vlSelf->h5),7);
    bufp->chgCData(oldp+10,(vlSelf->h6),7);
    bufp->chgCData(oldp+11,(vlSelf->h7),7);
    bufp->chgBit(oldp+12,(vlSelf->LSFR__DOT__feedback));
    bufp->chgCData(oldp+13,((1U & (IData)(vlSelf->q))),4);
    bufp->chgCData(oldp+14,((1U & ((IData)(vlSelf->q) 
                                   >> 1U))),4);
    bufp->chgCData(oldp+15,((1U & ((IData)(vlSelf->q) 
                                   >> 2U))),4);
    bufp->chgCData(oldp+16,((1U & ((IData)(vlSelf->q) 
                                   >> 3U))),4);
    bufp->chgCData(oldp+17,((1U & ((IData)(vlSelf->q) 
                                   >> 4U))),4);
    bufp->chgCData(oldp+18,((1U & ((IData)(vlSelf->q) 
                                   >> 5U))),4);
    bufp->chgCData(oldp+19,((1U & ((IData)(vlSelf->q) 
                                   >> 6U))),4);
    bufp->chgCData(oldp+20,((1U & ((IData)(vlSelf->q) 
                                   >> 7U))),4);
}

void VLSFR___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root__trace_cleanup\n"); );
    // Init
    VLSFR___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLSFR___024root*>(voidSelf);
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
