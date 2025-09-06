// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPS.h for the primary calling header

#include "verilated.h"

#include "VPS__Syms.h"
#include "VPS___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPS___024root___dump_triggers__act(VPS___024root* vlSelf);
#endif  // VL_DEBUG

void VPS___024root___eval_triggers__act(VPS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPS___024root___dump_triggers__act(vlSelf);
    }
#endif
}
