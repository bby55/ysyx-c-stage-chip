// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPS__Syms.h"


void VPS___024root__trace_chg_sub_0(VPS___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPS___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_chg_top_0\n"); );
    // Init
    VPS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPS___024root*>(voidSelf);
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPS___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPS___024root__trace_chg_sub_0(VPS___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->PS__DOT__count),4);
        bufp->chgBit(oldp+1,(vlSelf->PS__DOT__update));
        bufp->chgSData(oldp+2,(vlSelf->PS__DOT__MY_PS__DOT__buffer),10);
        bufp->chgCData(oldp+3,(vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync),3);
        bufp->chgCData(oldp+4,((0xffU & (IData)(vlSelf->PS__DOT__MY_PS__DOT__buffer))),8);
        bufp->chgBit(oldp+5,((IData)((4U == (6U & (IData)(vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync))))));
    }
    bufp->chgBit(oldp+6,(vlSelf->clk));
    bufp->chgBit(oldp+7,(vlSelf->rst));
    bufp->chgBit(oldp+8,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+9,(vlSelf->ps2_data));
    bufp->chgCData(oldp+10,(vlSelf->num),8);
    bufp->chgSData(oldp+11,(vlSelf->cur_key),10);
    bufp->chgCData(oldp+12,(vlSelf->ascii),8);
    bufp->chgCData(oldp+13,(vlSelf->h0),7);
    bufp->chgCData(oldp+14,(vlSelf->h1),7);
    bufp->chgCData(oldp+15,(vlSelf->h2),7);
    bufp->chgCData(oldp+16,(vlSelf->h3),7);
    bufp->chgCData(oldp+17,(vlSelf->h4),7);
    bufp->chgCData(oldp+18,(vlSelf->h5),7);
    bufp->chgCData(oldp+19,((0xffU & ((IData)(vlSelf->cur_key) 
                                      >> 1U))),8);
    bufp->chgCData(oldp+20,((0xfU & ((IData)(vlSelf->cur_key) 
                                     >> 1U))),4);
    bufp->chgCData(oldp+21,((0xfU & ((IData)(vlSelf->cur_key) 
                                     >> 5U))),4);
    bufp->chgCData(oldp+22,((0xfU & (IData)(vlSelf->ascii))),4);
    bufp->chgCData(oldp+23,((0xfU & ((IData)(vlSelf->ascii) 
                                     >> 4U))),4);
    bufp->chgCData(oldp+24,((0xfU & (IData)(vlSelf->num))),4);
    bufp->chgCData(oldp+25,((0xfU & ((IData)(vlSelf->num) 
                                     >> 4U))),4);
}

void VPS___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_cleanup\n"); );
    // Init
    VPS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPS___024root*>(voidSelf);
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
