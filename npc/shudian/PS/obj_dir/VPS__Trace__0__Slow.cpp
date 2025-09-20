// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPS__Syms.h"


VL_ATTR_COLD void VPS___024root__trace_init_sub__TOP__0(VPS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+8,"rst", false,-1);
    tracep->declBit(c+9,"ps2_clk", false,-1);
    tracep->declBit(c+10,"ps2_data", false,-1);
    tracep->declBus(c+11,"num", false,-1, 7,0);
    tracep->declBus(c+12,"cur_key", false,-1, 9,0);
    tracep->declBus(c+13,"ascii", false,-1, 7,0);
    tracep->declBus(c+14,"h0", false,-1, 6,0);
    tracep->declBus(c+15,"h1", false,-1, 6,0);
    tracep->declBus(c+16,"h2", false,-1, 6,0);
    tracep->declBus(c+17,"h3", false,-1, 6,0);
    tracep->declBus(c+18,"h4", false,-1, 6,0);
    tracep->declBus(c+19,"h5", false,-1, 6,0);
    tracep->pushNamePrefix("PS ");
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+8,"rst", false,-1);
    tracep->declBit(c+9,"ps2_clk", false,-1);
    tracep->declBit(c+10,"ps2_data", false,-1);
    tracep->declBus(c+11,"num", false,-1, 7,0);
    tracep->declBus(c+12,"cur_key", false,-1, 9,0);
    tracep->declBus(c+13,"ascii", false,-1, 7,0);
    tracep->declBus(c+14,"h0", false,-1, 6,0);
    tracep->declBus(c+15,"h1", false,-1, 6,0);
    tracep->declBus(c+16,"h2", false,-1, 6,0);
    tracep->declBus(c+17,"h3", false,-1, 6,0);
    tracep->declBus(c+18,"h4", false,-1, 6,0);
    tracep->declBus(c+19,"h5", false,-1, 6,0);
    tracep->declBus(c+1,"count", false,-1, 3,0);
    tracep->declBit(c+2,"update", false,-1);
    tracep->pushNamePrefix("MY_PS ");
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+8,"resetn", false,-1);
    tracep->declBit(c+9,"ps2_clk", false,-1);
    tracep->declBit(c+10,"ps2_data", false,-1);
    tracep->declBus(c+12,"cur_key", false,-1, 9,0);
    tracep->declBus(c+1,"count", false,-1, 3,0);
    tracep->declBus(c+11,"num", false,-1, 7,0);
    tracep->declBit(c+2,"update", false,-1);
    tracep->declBus(c+3,"buffer", false,-1, 9,0);
    tracep->declBus(c+4,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBus(c+5,"aaa", false,-1, 7,0);
    tracep->declBit(c+6,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rom1 ");
    tracep->declBus(c+20,"key_code", false,-1, 7,0);
    tracep->declBus(c+13,"ascii_code", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg0 ");
    tracep->declBus(c+21,"b", false,-1, 3,0);
    tracep->declBus(c+14,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg1 ");
    tracep->declBus(c+22,"b", false,-1, 3,0);
    tracep->declBus(c+15,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg2 ");
    tracep->declBus(c+23,"b", false,-1, 3,0);
    tracep->declBus(c+16,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg3 ");
    tracep->declBus(c+24,"b", false,-1, 3,0);
    tracep->declBus(c+17,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg4 ");
    tracep->declBus(c+25,"b", false,-1, 3,0);
    tracep->declBus(c+18,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg5 ");
    tracep->declBus(c+26,"b", false,-1, 3,0);
    tracep->declBus(c+19,"h", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPS___024root__trace_init_top(VPS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_init_top\n"); );
    // Body
    VPS___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPS___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPS___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPS___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPS___024root__trace_register(VPS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPS___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPS___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPS___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPS___024root__trace_full_sub_0(VPS___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPS___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_full_top_0\n"); );
    // Init
    VPS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPS___024root*>(voidSelf);
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPS___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPS___024root__trace_full_sub_0(VPS___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->PS__DOT__count),4);
    bufp->fullBit(oldp+2,(vlSelf->PS__DOT__update));
    bufp->fullSData(oldp+3,(vlSelf->PS__DOT__MY_PS__DOT__buffer),10);
    bufp->fullCData(oldp+4,(vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync),3);
    bufp->fullCData(oldp+5,((0xffU & (IData)(vlSelf->PS__DOT__MY_PS__DOT__buffer))),8);
    bufp->fullBit(oldp+6,((IData)((4U == (6U & (IData)(vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync))))));
    bufp->fullBit(oldp+7,(vlSelf->clk));
    bufp->fullBit(oldp+8,(vlSelf->rst));
    bufp->fullBit(oldp+9,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+10,(vlSelf->ps2_data));
    bufp->fullCData(oldp+11,(vlSelf->num),8);
    bufp->fullSData(oldp+12,(vlSelf->cur_key),10);
    bufp->fullCData(oldp+13,(vlSelf->ascii),8);
    bufp->fullCData(oldp+14,(vlSelf->h0),7);
    bufp->fullCData(oldp+15,(vlSelf->h1),7);
    bufp->fullCData(oldp+16,(vlSelf->h2),7);
    bufp->fullCData(oldp+17,(vlSelf->h3),7);
    bufp->fullCData(oldp+18,(vlSelf->h4),7);
    bufp->fullCData(oldp+19,(vlSelf->h5),7);
    bufp->fullCData(oldp+20,((0xffU & ((IData)(vlSelf->cur_key) 
                                       >> 1U))),8);
    bufp->fullCData(oldp+21,((0xfU & ((IData)(vlSelf->cur_key) 
                                      >> 1U))),4);
    bufp->fullCData(oldp+22,((0xfU & ((IData)(vlSelf->cur_key) 
                                      >> 5U))),4);
    bufp->fullCData(oldp+23,((0xfU & (IData)(vlSelf->ascii))),4);
    bufp->fullCData(oldp+24,((0xfU & ((IData)(vlSelf->ascii) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+25,((0xfU & (IData)(vlSelf->num))),4);
    bufp->fullCData(oldp+26,((0xfU & ((IData)(vlSelf->num) 
                                      >> 4U))),4);
}
