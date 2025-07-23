// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__u_rom__DOT__rom[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__u_rom__DOT__rom[1]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__pc),32);
        bufp->chgIData(oldp+3,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__instr),32);
        bufp->chgCData(oldp+5,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 7U))),5);
        bufp->chgSData(oldp+8,((vlSelf->top__DOT__instr 
                                >> 0x14U)),12);
        bufp->chgIData(oldp+9,((((- (IData)((vlSelf->top__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->top__DOT__instr 
                                             >> 0x14U))),32);
        bufp->chgIData(oldp+10,(((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                  >> 0xfU)))
                                  ? 0U : vlSelf->top__DOT__u_regfile__DOT__rf
                                 [(0x1fU & (vlSelf->top__DOT__instr 
                                            >> 0xfU))])),32);
        bufp->chgIData(oldp+11,(((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                  >> 0x14U)))
                                  ? 0U : vlSelf->top__DOT__u_regfile__DOT__rf
                                 [(0x1fU & (vlSelf->top__DOT__instr 
                                            >> 0x14U))])),32);
        bufp->chgIData(oldp+12,((((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                   >> 0xfU)))
                                   ? 0U : vlSelf->top__DOT__u_regfile__DOT__rf
                                  [(0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0xfU))]) 
                                 + (((- (IData)((vlSelf->top__DOT__instr 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSelf->top__DOT__instr 
                                                 >> 0x14U)))),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+45,((vlSelf->top__DOT__pc 
                                 - (IData)(0x80000000U))),32);
        bufp->chgIData(oldp+46,(((vlSelf->top__DOT__pc 
                                  - (IData)(0x80000000U)) 
                                 >> 2U)),32);
    }
    bufp->chgBit(oldp+47,(vlSelf->clk));
    bufp->chgBit(oldp+48,(vlSelf->reset));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
