// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static\n"); );
    // Body
    VysyxSoCFull___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial__TOP(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial\n"); );
    // Body
    VysyxSoCFull___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_spi_sck 
        = vlSelf->ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT____Vcellinp__bitrev__ss 
        = vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_psram_ce_n 
        = vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_psram_sck 
        = vlSelf->ysyxSoCFull__DOT___asic_psram_sck;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial__TOP(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[0x27U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[0xaU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[0xdU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[0x13U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[0x14U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[0x22U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x399U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x39aU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x18U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[3U] = 0x1dU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[4U] = 0x19U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[5U] = 0x9bU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[6U] = 0x31eU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[7U] = 0x31fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[8U] = 0x31cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[9U] = 0x31dU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0xaU] = 0x9cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0xbU] = 0x9fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0xcU] = 0x119U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0xdU] = 0x319U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0xeU] = 0x318U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0xfU] = 0x99U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0x10U] = 0x1cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0x11U] = 0x118U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0x12U] = 0x198U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0x13U] = 0x398U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0x14U] = 0x11aU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0x15U] = 0x1aU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0x16U] = 0x338U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0x17U] = 0x98U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0U] = 0x26U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[1U] = 0x25U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[2U] = 0x23U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[3U] = 0x20U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[4U] = 0x1fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[5U] = 0x1eU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[6U] = 0x1cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[7U] = 0x1bU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[8U] = 0x18U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[9U] = 0x17U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0xaU] = 0x16U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0xbU] = 0x11U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0xcU] = 0x10U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0xdU] = 0xeU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0xeU] = 0xdU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0xfU] = 0xbU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0x10U] = 8U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0x11U] = 7U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0x12U] = 5U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0x13U] = 4U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0x14U] = 3U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0x15U] = 2U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0x16U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0x17U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x399026U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0x39a025U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[2U] = 0x18023U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[3U] = 0x1d020U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[4U] = 0x1901fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[5U] = 0x9b01eU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[6U] = 0x31e01cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[7U] = 0x31f01bU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[8U] = 0x31c018U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[9U] = 0x31d017U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0xaU] = 0x9c016U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0xbU] = 0x9f011U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0xcU] = 0x119010U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0xdU] = 0x31900eU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0xeU] = 0x31800dU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0xfU] = 0x9900bU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0x10U] = 0x1c008U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0x11U] = 0x118007U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0x12U] = 0x198005U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0x13U] = 0x398004U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0x14U] = 0x11a003U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0x15U] = 0x1a002U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0x16U] = 0x338001U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0x17U] = 0x98000U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[0U] = 0x6fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[1U] = 0x17U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[2U] = 0x37U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[0U] = 0xaU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[1U] = 9U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[2U] = 6U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[0U] = 0x6f00aU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[1U] = 0x17009U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[2U] = 0x37006U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[0U] = 0xce80U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[1U] = 0xcea0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[2U] = 0xcd00U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[3U] = 0xce00U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[4U] = 0x4e80U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[5U] = 0xcf00U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[6U] = 0xcd80U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[7U] = 0xcf80U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[8U] = 0xcc80U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[9U] = 0x4ea0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[0xaU] = 0xcc20U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[0U] = 0x22U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[1U] = 0x21U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[2U] = 0x1dU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[3U] = 0x1aU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[4U] = 0x19U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[5U] = 0x15U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[6U] = 0x14U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[7U] = 0x13U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[8U] = 0x12U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[9U] = 0xfU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[0xaU] = 0xcU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[0U] = 0xce80022U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[1U] = 0xcea0021U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[2U] = 0xcd0001dU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[3U] = 0xce0001aU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[4U] = 0x4e80019U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[5U] = 0xcf00015U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[6U] = 0xcd80014U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[7U] = 0xcf80013U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[8U] = 0xcc80012U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[9U] = 0x4ea000fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[0xaU] = 0xcc2000cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__key_list[0U] = 0x30200073U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__key_list[1U] = 0x73U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__data_list[0U] = 0x27U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__data_list[1U] = 0x24U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__pair_list[0U] = 0x30200073027ULL;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__pair_list[1U] = 0x73024ULL;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[0U] = 0x24U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[1U] = 0x1cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[2U] = 0x1bU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[3U] = 0x18U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[4U] = 0x17U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[5U] = 0x10U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[6U] = 0xeU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[7U] = 0xdU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[9U] = 4U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[0xaU] = 3U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[0xaU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[0U] = 0x48U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[1U] = 0x38U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[2U] = 0x36U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[3U] = 0x30U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[4U] = 0x2eU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[5U] = 0x20U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[6U] = 0x1cU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[7U] = 0x1aU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[8U] = 0xeU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[9U] = 8U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[0xaU] = 6U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[0U] = 0x23U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[1U] = 0x20U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[2U] = 0x1fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[3U] = 8U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[0U] = 0x47U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[1U] = 0x41U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[2U] = 0x3fU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[3U] = 0x11U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[4U] = 5U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__key_list[0U] = 0x10U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__pair_list[0U] = 0x21U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__pair_list[1U] = 0xfU;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__pair_list[2U] = 7U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[0U] = 0xf12U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[1U] = 0xf11U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[2U] = 0xb80U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[3U] = 0xb00U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[4U] = 0x305U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[5U] = 0x300U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[6U] = 0x342U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[7U] = 0x341U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[0U] = 8U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[1U] = 7U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[2U] = 6U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[3U] = 5U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[4U] = 4U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[5U] = 3U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[6U] = 2U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[7U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[0U] = 0xf12008U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[1U] = 0xf11007U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[2U] = 0xb80006U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[3U] = 0xb00005U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[4U] = 0x305004U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[5U] = 0x300003U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[6U] = 0x342002U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[7U] = 0x341001U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[2U] = 6U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[5U] = 3U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[7U] = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[4U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[5U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[6U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[7U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[8U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[9U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xaU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xbU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xcU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xdU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xeU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xfU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[4U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[5U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[6U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[7U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[8U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[9U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xaU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xbU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xcU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xdU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xeU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0xfU] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcause = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mepc = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mstatus = 0x1800U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mtvec = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycle = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycleh = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mvendorid = 0x79737978U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__marchid = 0x17d9f6cU;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__mem[0U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__mem[1U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__mem[2U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__mem[3U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__b = 4U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__active_bank = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__curr_col = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__burst_cnt = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__burst_len = 4U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cas_latency = 2U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__read_en = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__write_en = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cas_cnt = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__dq_out = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__row_active = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__mem[0U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__mem[1U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__mem[2U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__mem[3U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__b = 4U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__active_bank = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__curr_col = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__burst_cnt = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__burst_len = 4U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__cas_latency = 2U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__read_en = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__write_en = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__cas_cnt = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__dq_out = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__row_active = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__mem[0U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__mem[1U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__mem[2U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__mem[3U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__b = 4U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__active_bank = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__curr_col = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__burst_cnt = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__burst_len = 4U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cas_latency = 2U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__read_en = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__write_en = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cas_cnt = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__dq_out = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__row_active = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__mem[0U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__mem[1U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__mem[2U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r)) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c = 0U;
        while (VL_GTS_III(32, 0x200U, vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c)) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__mem[3U][(0x1fffU 
                                                                         & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r)][(0x1ffU 
                                                                                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c)] = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__b = 4U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__active_bank = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__curr_col = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__burst_cnt = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__burst_len = 4U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__cas_latency = 2U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__read_en = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__write_en = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__cas_cnt = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__dq_out = 0U;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__row_active = 0U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_final\n"); );
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VysyxSoCFull___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/ysyxbby/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5248, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VysyxSoCFull___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VysyxSoCFull___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock or posedge ysyxSoCFull.asic.__Vcellinp__cpu__reset)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clock or posedge reset)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ysyxSoCFull.__Vcellinp__flash__ss or posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge ysyxSoCFull.__Vcellinp__bitrev__ss or posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge ysyxSoCFull.__Vcellinp__bitrev__ss or negedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge ysyxSoCFull._asic_psram_ce_n or posedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge ysyxSoCFull._asic_psram_ce_n or negedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock or posedge ysyxSoCFull.asic.__Vcellinp__cpu__reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clock or posedge reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ysyxSoCFull.__Vcellinp__flash__ss or posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge ysyxSoCFull.__Vcellinp__bitrev__ss or posedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge ysyxSoCFull.__Vcellinp__bitrev__ss or negedge ysyxSoCFull._asic_spi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge ysyxSoCFull._asic_psram_ce_n or posedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge ysyxSoCFull._asic_psram_ce_n or negedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge ysyxSoCFull._asic_psram_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->externalPins_gpio_out = VL_RAND_RESET_I(16);
    vlSelf->externalPins_gpio_in = VL_RAND_RESET_I(16);
    vlSelf->externalPins_gpio_seg_0 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_1 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_2 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_3 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_4 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_5 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_6 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_gpio_seg_7 = VL_RAND_RESET_I(8);
    vlSelf->externalPins_ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->externalPins_ps2_data = VL_RAND_RESET_I(1);
    vlSelf->externalPins_vga_r = VL_RAND_RESET_I(8);
    vlSelf->externalPins_vga_g = VL_RAND_RESET_I(8);
    vlSelf->externalPins_vga_b = VL_RAND_RESET_I(8);
    vlSelf->externalPins_vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->externalPins_vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->externalPins_vga_valid = VL_RAND_RESET_I(1);
    vlSelf->externalPins_uart_rx = VL_RAND_RESET_I(1);
    vlSelf->externalPins_uart_tx = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___bitrev_miso = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_psram_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT___dio_wire = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT___dq_wire = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__dio__en2 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready = VL_RAND_RESET_I(6);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1 = VL_RAND_RESET_I(6);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h026b18ec__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__InstrNum = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrNum = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reqValid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWen = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AluByteIdx = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ExuRes = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrData = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrExuData = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs1Data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs2Data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WmaskSh = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf1fac965__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__CurrentState = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__NextState = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__UpdatePC_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__instruction_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__B_imm = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__S_imm = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__J_imm = VL_RAND_RESET_I(20);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__I_ex = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__S_ex = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__J_ex = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__B_ex = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Imm = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__CsrNum = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__lsu_size = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Opcode_Funct3 = VL_RAND_RESET_I(10);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Opcode_Funct3_Funct7 = VL_RAND_RESET_I(17);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrFunct3 = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrNoFunct = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrFunct7 = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrCsr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(1760, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT____Vcellinp__i1__lut);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__is_loadmemory = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__is_storememory = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(44);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 40; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 40; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(12);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycle = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycleh = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mvendorid = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__marchid = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(44);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_LSU__DOT__CurrentState = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_LSU__DOT__NextState = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_Arbiter__DOT__CurrentState = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_Arbiter__DOT__NextState = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = VL_RAND_RESET_I(10);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = VL_RAND_RESET_I(11);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__CurrentState = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__NextState = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_init_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_phy_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_adr = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_stb = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_cyc = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rx_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pslverr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i = VL_RAND_RESET_I(5);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = VL_RAND_RESET_I(14);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_cmd = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = VL_RAND_RESET_I(24);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 = VL_RAND_RESET_I(11);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____VdfgTmp_hfb738304__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = VL_RAND_RESET_I(17);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT____VdfgTmp_h54d0e926__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r = VL_RAND_RESET_I(4);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_Q(47);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(47);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_Q(36);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_I(6);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_Q(47);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(47);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data = VL_RAND_RESET_Q(39);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 = VL_RAND_RESET_I(23);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 = VL_RAND_RESET_I(23);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0 = 0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram = VL_RAND_RESET_Q(49);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram = VL_RAND_RESET_Q(49);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram = VL_RAND_RESET_Q(37);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_data = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__counter_wr = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__raddr = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__in_qpi = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_hfd99ceed__0 = 0;
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h61ef4ce4__0 = 0;
    vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h4931a47d__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_low_1 = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_high_1 = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_grp1 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_low_2 = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_high_2 = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_grp2 = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__out__strong__out4 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__out__strong__out5 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__out__strong__out6 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__out__strong__out7 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__r_active_row = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__w_active_row = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__active_bank = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__curr_col = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__burst_cnt = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__burst_len = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cas_latency = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cas_cnt = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__dq_out = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cmd = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cas_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__burst_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__col_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__wdata = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8192; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 512; ++__Vi2) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__mem[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(16);
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__r_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__bank_row[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT____VdfgTmp_h4eeb857c__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT____VdfgTmp_h28a2b46b__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__r_active_row = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__w_active_row = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__active_bank = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__curr_col = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__burst_cnt = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__burst_len = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__cas_latency = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__cas_cnt = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__dq_out = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__cas_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__burst_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__col_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__wdata = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8192; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 512; ++__Vi2) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__mem[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(16);
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__r_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__bank_row[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT____VdfgTmp_h4eeb857c__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT____VdfgTmp_h28a2b46b__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__r_active_row = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__w_active_row = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__active_bank = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__curr_col = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__burst_cnt = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__burst_len = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cas_latency = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cas_cnt = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__dq_out = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cmd = VL_RAND_RESET_I(3);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cas_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__burst_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__col_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__wdata = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8192; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 512; ++__Vi2) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__mem[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(16);
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__r_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__bank_row[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT____VdfgTmp_h4eeb857c__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT____VdfgTmp_h28a2b46b__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__r_active_row = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__w_active_row = VL_RAND_RESET_I(13);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__active_bank = VL_RAND_RESET_I(2);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__curr_col = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__burst_cnt = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__burst_len = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__cas_latency = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__cas_cnt = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__dq_out = VL_RAND_RESET_I(16);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__cas_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__burst_done = VL_RAND_RESET_I(1);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__col_addr = VL_RAND_RESET_I(9);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__wdata = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8192; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 512; ++__Vi2) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__mem[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(16);
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__r_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__bank_row[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT____VdfgTmp_h4eeb857c__0 = 0;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT____VdfgTmp_h28a2b46b__0 = 0;
    vlSelf->__VdfgTmp_hf132a334__0 = 0;
    vlSelf->__VdfgTmp_h7fb30c92__0 = 0;
    vlSelf->__VdfgTmp_ha17ae98a__0 = 0;
    vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__4__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx6 = 0;
    vlSelf->__Vtableidx8 = 0;
    vlSelf->__Vtableidx9 = 0;
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = VL_RAND_RESET_I(17);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_data = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT____Vcellinp__flash__ss = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_spi_sck = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT____Vcellinp__bitrev__ss = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_psram_ce_n = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT___asic_psram_sck = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
