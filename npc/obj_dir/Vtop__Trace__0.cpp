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
    VlWide<6>/*191:0*/ __Vtemp_hfe816ff6__0;
    VlWide<14>/*447:0*/ __Vtemp_h578d3fd9__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[0]),22);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[1]),22);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[2]),22);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[3]),22);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[4]),22);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[5]),22);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[6]),22);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[7]),22);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[8]),22);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[9]),22);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[10]),22);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[11]),22);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[12]),22);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[13]),22);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[14]),22);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[15]),22);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[16]),22);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[17]),22);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[18]),22);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[19]),22);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[20]),22);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[21]),22);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[22]),22);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[23]),22);
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[0]),10);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[1]),10);
        bufp->chgSData(oldp+26,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[2]),10);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[3]),10);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[4]),10);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[5]),10);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[6]),10);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[7]),10);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[8]),10);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[9]),10);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[10]),10);
        bufp->chgSData(oldp+35,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[11]),10);
        bufp->chgSData(oldp+36,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[12]),10);
        bufp->chgSData(oldp+37,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[13]),10);
        bufp->chgSData(oldp+38,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[14]),10);
        bufp->chgSData(oldp+39,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[15]),10);
        bufp->chgSData(oldp+40,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[16]),10);
        bufp->chgSData(oldp+41,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[17]),10);
        bufp->chgSData(oldp+42,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[18]),10);
        bufp->chgSData(oldp+43,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[19]),10);
        bufp->chgSData(oldp+44,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[20]),10);
        bufp->chgSData(oldp+45,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[21]),10);
        bufp->chgSData(oldp+46,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[22]),10);
        bufp->chgSData(oldp+47,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[23]),10);
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0]),12);
        bufp->chgSData(oldp+49,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1]),12);
        bufp->chgSData(oldp+50,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2]),12);
        bufp->chgSData(oldp+51,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3]),12);
        bufp->chgSData(oldp+52,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[4]),12);
        bufp->chgSData(oldp+53,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[5]),12);
        bufp->chgSData(oldp+54,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[6]),12);
        bufp->chgSData(oldp+55,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[7]),12);
        bufp->chgSData(oldp+56,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[8]),12);
        bufp->chgSData(oldp+57,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[9]),12);
        bufp->chgSData(oldp+58,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[10]),12);
        bufp->chgSData(oldp+59,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[11]),12);
        bufp->chgSData(oldp+60,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[12]),12);
        bufp->chgSData(oldp+61,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[13]),12);
        bufp->chgSData(oldp+62,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[14]),12);
        bufp->chgSData(oldp+63,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[15]),12);
        bufp->chgSData(oldp+64,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[16]),12);
        bufp->chgSData(oldp+65,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[17]),12);
        bufp->chgSData(oldp+66,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[18]),12);
        bufp->chgSData(oldp+67,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[19]),12);
        bufp->chgSData(oldp+68,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[20]),12);
        bufp->chgSData(oldp+69,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[21]),12);
        bufp->chgSData(oldp+70,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[22]),12);
        bufp->chgSData(oldp+71,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[23]),12);
        bufp->chgSData(oldp+72,(vlSelf->top__DOT__i10__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+73,(vlSelf->top__DOT__i10__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+74,(vlSelf->top__DOT__i10__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+75,(vlSelf->top__DOT__i10__DOT__i0__DOT__key_list[3]),12);
        bufp->chgSData(oldp+76,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgSData(oldp+77,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+78,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[2]),13);
        bufp->chgSData(oldp+79,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[3]),13);
        bufp->chgSData(oldp+80,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[4]),13);
        bufp->chgSData(oldp+81,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[5]),13);
        bufp->chgSData(oldp+82,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[6]),13);
        bufp->chgSData(oldp+83,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[7]),13);
        bufp->chgSData(oldp+84,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[8]),13);
        bufp->chgSData(oldp+85,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[9]),13);
        bufp->chgSData(oldp+86,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[10]),13);
        bufp->chgSData(oldp+87,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+88,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+89,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+90,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[3]),12);
        bufp->chgSData(oldp+91,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[4]),12);
        bufp->chgSData(oldp+92,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[5]),12);
        bufp->chgSData(oldp+93,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[6]),12);
        bufp->chgSData(oldp+94,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[7]),12);
        bufp->chgSData(oldp+95,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[8]),12);
        bufp->chgSData(oldp+96,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[9]),12);
        bufp->chgSData(oldp+97,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[10]),12);
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+101,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+102,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[6]));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[7]));
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[8]));
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[9]));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[10]));
        bufp->chgSData(oldp+109,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+110,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+111,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+112,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[3]),12);
        bufp->chgSData(oldp+113,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[4]),12);
        bufp->chgSData(oldp+114,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[5]),12);
        bufp->chgSData(oldp+115,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[6]),12);
        bufp->chgSData(oldp+116,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[7]),12);
        bufp->chgSData(oldp+117,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[8]),12);
        bufp->chgSData(oldp+118,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[9]),12);
        bufp->chgSData(oldp+119,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgSData(oldp+120,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+121,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[2]),13);
        bufp->chgSData(oldp+122,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[3]),13);
        bufp->chgSData(oldp+123,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[4]),13);
        bufp->chgSData(oldp+124,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[5]),13);
        bufp->chgSData(oldp+125,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[6]),13);
        bufp->chgSData(oldp+126,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[7]),13);
        bufp->chgSData(oldp+127,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+128,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+129,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+130,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[3]),12);
        bufp->chgSData(oldp+131,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[4]),12);
        bufp->chgSData(oldp+132,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[5]),12);
        bufp->chgSData(oldp+133,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[6]),12);
        bufp->chgSData(oldp+134,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[7]),12);
        bufp->chgBit(oldp+135,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+137,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+138,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+139,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+140,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+141,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[6]));
        bufp->chgBit(oldp+142,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[7]));
        bufp->chgSData(oldp+143,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgSData(oldp+144,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+145,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[2]),13);
        bufp->chgSData(oldp+146,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+147,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+148,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[2]),12);
        bufp->chgBit(oldp+149,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+150,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+151,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[2]));
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__i6__DOT__i0__DOT__pair_list[0]),19);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__i6__DOT__i0__DOT__pair_list[1]),19);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__i6__DOT__i0__DOT__pair_list[2]),19);
        bufp->chgCData(oldp+155,(vlSelf->top__DOT__i6__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+156,(vlSelf->top__DOT__i6__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+157,(vlSelf->top__DOT__i6__DOT__i0__DOT__key_list[2]),7);
        bufp->chgSData(oldp+158,(vlSelf->top__DOT__i6__DOT__i0__DOT__data_list[0]),12);
        bufp->chgSData(oldp+159,(vlSelf->top__DOT__i6__DOT__i0__DOT__data_list[1]),12);
        bufp->chgSData(oldp+160,(vlSelf->top__DOT__i6__DOT__i0__DOT__data_list[2]),12);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[0]),29);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[1]),29);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[2]),29);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[3]),29);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[4]),29);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[5]),29);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[6]),29);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[7]),29);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[8]),29);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[9]),29);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[10]),29);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[0]),17);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[1]),17);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[2]),17);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[3]),17);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[4]),17);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[5]),17);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[6]),17);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[7]),17);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[8]),17);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[9]),17);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[10]),17);
        bufp->chgSData(oldp+183,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[0]),12);
        bufp->chgSData(oldp+184,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[1]),12);
        bufp->chgSData(oldp+185,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[2]),12);
        bufp->chgSData(oldp+186,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[3]),12);
        bufp->chgSData(oldp+187,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[4]),12);
        bufp->chgSData(oldp+188,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[5]),12);
        bufp->chgSData(oldp+189,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[6]),12);
        bufp->chgSData(oldp+190,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[7]),12);
        bufp->chgSData(oldp+191,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[8]),12);
        bufp->chgSData(oldp+192,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[9]),12);
        bufp->chgSData(oldp+193,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[10]),12);
        bufp->chgQData(oldp+194,(vlSelf->top__DOT__i8__DOT__i0__DOT__pair_list[0]),44);
        bufp->chgQData(oldp+196,(vlSelf->top__DOT__i8__DOT__i0__DOT__pair_list[1]),44);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__i8__DOT__i0__DOT__key_list[0]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__i8__DOT__i0__DOT__key_list[1]),32);
        bufp->chgSData(oldp+200,(vlSelf->top__DOT__i8__DOT__i0__DOT__data_list[0]),12);
        bufp->chgSData(oldp+201,(vlSelf->top__DOT__i8__DOT__i0__DOT__data_list[1]),12);
        bufp->chgQData(oldp+202,(vlSelf->top__DOT__i9__DOT__i0__DOT__pair_list[0]),44);
        bufp->chgQData(oldp+204,(vlSelf->top__DOT__i9__DOT__i0__DOT__pair_list[1]),44);
        bufp->chgQData(oldp+206,(vlSelf->top__DOT__i9__DOT__i0__DOT__pair_list[2]),44);
        bufp->chgQData(oldp+208,(vlSelf->top__DOT__i9__DOT__i0__DOT__pair_list[3]),44);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__i9__DOT__i0__DOT__key_list[0]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__i9__DOT__i0__DOT__key_list[1]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__i9__DOT__i0__DOT__key_list[2]),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__i9__DOT__i0__DOT__key_list[3]),32);
        bufp->chgSData(oldp+214,(vlSelf->top__DOT__i9__DOT__i0__DOT__data_list[0]),12);
        bufp->chgSData(oldp+215,(vlSelf->top__DOT__i9__DOT__i0__DOT__data_list[1]),12);
        bufp->chgSData(oldp+216,(vlSelf->top__DOT__i9__DOT__i0__DOT__data_list[2]),12);
        bufp->chgSData(oldp+217,(vlSelf->top__DOT__i9__DOT__i0__DOT__data_list[3]),12);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__u_regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__pc),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__pc_next),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__instr),32);
        bufp->chgSData(oldp+222,(vlSelf->top__DOT__instr_type),12);
        bufp->chgCData(oldp+223,((0x7fU & vlSelf->top__DOT__instr)),7);
        bufp->chgCData(oldp+224,((7U & (vlSelf->top__DOT__instr 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+225,((vlSelf->top__DOT__instr 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+226,((0x1fU & (vlSelf->top__DOT__instr 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+227,((0x1fU & (vlSelf->top__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+228,((0x1fU & (vlSelf->top__DOT__instr 
                                           >> 7U))),5);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__imm),32);
        bufp->chgSData(oldp+230,((vlSelf->top__DOT__instr 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__J_imm),20);
        bufp->chgSData(oldp+232,(vlSelf->top__DOT__B_imm),12);
        bufp->chgSData(oldp+233,(vlSelf->top__DOT__S_imm),12);
        bufp->chgIData(oldp+234,((vlSelf->top__DOT__instr 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__I_ex),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__S_ex),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__J_ex),32);
        bufp->chgIData(oldp+238,((0xfffff000U & vlSelf->top__DOT__instr)),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__B_ex),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__rs2_data),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__u_regfile__DOT__mcause),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__u_regfile__DOT__mepc),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__u_regfile__DOT__mtvec),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__u_regfile__DOT__mstatus),32);
        bufp->chgSData(oldp+246,(vlSelf->top__DOT__csr),12);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__t),32);
        bufp->chgIData(oldp+248,(((0x80000000U > vlSelf->top__DOT__pc)
                                   ? (vlSelf->top__DOT__pc 
                                      >> 2U) : ((vlSelf->top__DOT__pc 
                                                 - (IData)(0x80000000U)) 
                                                >> 2U))),32);
        bufp->chgBit(oldp+249,(vlSelf->top__DOT__wen));
        bufp->chgSData(oldp+250,(vlSelf->top__DOT__opcode_funct3),10);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__opcode_funct3_funct7),17);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__u_regfile__DOT__rf
                                 [0xaU]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__csr_val),32);
        bufp->chgIData(oldp+254,(((IData)(vlSelf->top__DOT__valid)
                                   ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                                   : 0x80000000U)),32);
        bufp->chgIData(oldp+255,(((IData)(vlSelf->top__DOT__wen_ram)
                                   ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                                   : 0x80000000U)),32);
        bufp->chgCData(oldp+256,(((0x10U == (IData)(vlSelf->top__DOT__instr_type))
                                   ? ((IData)(vlSelf->top__DOT____VdfgTmp_hb37fddff__0)
                                       ? 0xcU : 3U)
                                   : ((3U == (IData)(vlSelf->top__DOT__instr_type))
                                       ? 0xfU : ((0U 
                                                  == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                     ? 8U
                                                     : 0U))))))),8);
        bufp->chgCData(oldp+257,(((IData)(vlSelf->top__DOT____VdfgTmp_hb37fddff__0)
                                   ? 0xcU : 3U)),8);
        bufp->chgBit(oldp+258,(vlSelf->top__DOT__valid));
        bufp->chgBit(oldp+259,(vlSelf->top__DOT__wen_ram));
        bufp->chgSData(oldp+260,(vlSelf->top__DOT__instr_type_tmp),12);
        bufp->chgSData(oldp+261,(vlSelf->top__DOT__instr_type_nofunct),12);
        bufp->chgSData(oldp+262,(vlSelf->top__DOT__instr_type_funct7),12);
        bufp->chgSData(oldp+263,(vlSelf->top__DOT__instr_type_csr),12);
        bufp->chgSData(oldp+264,(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out),12);
        bufp->chgBit(oldp+265,(vlSelf->top__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+266,(vlSelf->top__DOT____Vcellinp__i1____pinNumber4),1760);
        bufp->chgIData(oldp+321,(vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+322,(vlSelf->top__DOT__i1__DOT__i0__DOT__hit));
        __Vtemp_hfe816ff6__0[0U] = (IData)((0x400000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__u_regfile__DOT__mtvec))));
        __Vtemp_hfe816ff6__0[1U] = ((vlSelf->top__DOT__u_regfile__DOT__mstatus 
                                     << 0xcU) | (IData)(
                                                        ((0x400000000ULL 
                                                          | (QData)((IData)(vlSelf->top__DOT__u_regfile__DOT__mtvec))) 
                                                         >> 0x20U)));
        __Vtemp_hfe816ff6__0[2U] = (0x3000U | ((vlSelf->top__DOT__u_regfile__DOT__mcause 
                                                << 0x18U) 
                                               | (vlSelf->top__DOT__u_regfile__DOT__mstatus 
                                                  >> 0x14U)));
        __Vtemp_hfe816ff6__0[3U] = (0x2000000U | (vlSelf->top__DOT__u_regfile__DOT__mcause 
                                                  >> 8U));
        __Vtemp_hfe816ff6__0[4U] = (vlSelf->top__DOT__u_regfile__DOT__mepc 
                                    << 4U);
        __Vtemp_hfe816ff6__0[5U] = (0x10U | (vlSelf->top__DOT__u_regfile__DOT__mepc 
                                             >> 0x1cU));
        bufp->chgWData(oldp+323,(__Vtemp_hfe816ff6__0),176);
        bufp->chgQData(oldp+329,(vlSelf->top__DOT__i10__DOT__i0__DOT__pair_list[0]),44);
        bufp->chgQData(oldp+331,(vlSelf->top__DOT__i10__DOT__i0__DOT__pair_list[1]),44);
        bufp->chgQData(oldp+333,(vlSelf->top__DOT__i10__DOT__i0__DOT__pair_list[2]),44);
        bufp->chgQData(oldp+335,(vlSelf->top__DOT__i10__DOT__i0__DOT__pair_list[3]),44);
        bufp->chgIData(oldp+337,(vlSelf->top__DOT__i10__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+338,(vlSelf->top__DOT__i10__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+339,(vlSelf->top__DOT__i10__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+340,(vlSelf->top__DOT__i10__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+341,(vlSelf->top__DOT__i10__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+342,(vlSelf->top__DOT__i10__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+343,(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+344,(vlSelf->top__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+345,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
        __Vtemp_h578d3fd9__0[0U] = (IData)((0x2700000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__u_regfile__DOT__mepc))));
        __Vtemp_h578d3fd9__0[1U] = ((vlSelf->top__DOT__u_regfile__DOT__mtvec 
                                     << 0xcU) | (IData)(
                                                        ((0x2700000000ULL 
                                                          | (QData)((IData)(vlSelf->top__DOT__u_regfile__DOT__mepc))) 
                                                         >> 0x20U)));
        __Vtemp_h578d3fd9__0[2U] = (0x24000U | ((((vlSelf->top__DOT__rs1_data 
                                                   < vlSelf->top__DOT__rs2_data)
                                                   ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__pc)) 
                                                 << 0x18U) 
                                                | (vlSelf->top__DOT__u_regfile__DOT__mtvec 
                                                   >> 0x14U)));
        __Vtemp_h578d3fd9__0[3U] = (0x1c000000U | (
                                                   ((vlSelf->top__DOT__rs1_data 
                                                     < vlSelf->top__DOT__rs2_data)
                                                     ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__pc)) 
                                                   >> 8U));
        __Vtemp_h578d3fd9__0[4U] = (((vlSelf->top__DOT__rs1_data 
                                      >= vlSelf->top__DOT__rs2_data)
                                      ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                      : ((IData)(4U) 
                                         + vlSelf->top__DOT__pc)) 
                                    << 4U);
        __Vtemp_h578d3fd9__0[5U] = (0x1b0U | (((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                                 ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)) 
                                               << 0x10U) 
                                              | (((vlSelf->top__DOT__rs1_data 
                                                   >= vlSelf->top__DOT__rs2_data)
                                                   ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__pc)) 
                                                 >> 0x1cU)));
        __Vtemp_h578d3fd9__0[6U] = (0x180000U | (((
                                                   VL_GTES_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                                    ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__pc)) 
                                                  << 0x1cU) 
                                                 | ((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                                      ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->top__DOT__pc)) 
                                                    >> 0x10U)));
        __Vtemp_h578d3fd9__0[7U] = (0x70000000U | (
                                                   (VL_GTES_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                                     ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__pc)) 
                                                   >> 4U));
        __Vtemp_h578d3fd9__0[8U] = (1U | (((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                            ? ((IData)(4U) 
                                               + vlSelf->top__DOT__pc)
                                            : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0) 
                                          << 8U));
        __Vtemp_h578d3fd9__0[9U] = (0xe00U | ((((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                                 ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__pc)
                                                   : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0) 
                                                 >> 0x18U)));
        __Vtemp_h578d3fd9__0[0xaU] = (0xd00000U | (
                                                   ((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                                     ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__pc)) 
                                                   >> 0xcU));
        __Vtemp_h578d3fd9__0[0xbU] = ((0x80000000U 
                                       > vlSelf->top__DOT__pc)
                                       ? ((IData)(0x80000000U) 
                                          + vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0)
                                       : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0);
        __Vtemp_h578d3fd9__0[0xcU] = (0xaU | (((0x80000000U 
                                                > vlSelf->top__DOT__rs1_data)
                                                ? ((IData)(0x80000000U) 
                                                   + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                                : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0) 
                                              << 0xcU));
        __Vtemp_h578d3fd9__0[0xdU] = (0x1000U | (((0x80000000U 
                                                   > vlSelf->top__DOT__rs1_data)
                                                   ? 
                                                  ((IData)(0x80000000U) 
                                                   + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                                   : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0) 
                                                 >> 0x14U));
        bufp->chgWData(oldp+346,(__Vtemp_h578d3fd9__0),440);
        bufp->chgQData(oldp+360,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[0]),44);
        bufp->chgQData(oldp+362,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[1]),44);
        bufp->chgQData(oldp+364,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[2]),44);
        bufp->chgQData(oldp+366,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[3]),44);
        bufp->chgQData(oldp+368,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[4]),44);
        bufp->chgQData(oldp+370,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[5]),44);
        bufp->chgQData(oldp+372,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[6]),44);
        bufp->chgQData(oldp+374,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[7]),44);
        bufp->chgQData(oldp+376,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[8]),44);
        bufp->chgQData(oldp+378,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[9]),44);
        bufp->chgIData(oldp+380,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+381,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+382,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+383,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+384,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+385,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+386,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+387,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+388,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+389,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+390,(vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+391,(vlSelf->top__DOT__i3__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+392,(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+393,(vlSelf->top__DOT__i4__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+394,(vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+395,(vlSelf->top__DOT__i5__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+396,(vlSelf->top__DOT__i6__DOT__i0__DOT__lut_out),12);
        bufp->chgBit(oldp+397,(vlSelf->top__DOT__i6__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+398,(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out),12);
        bufp->chgBit(oldp+399,(vlSelf->top__DOT__i7__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+400,(vlSelf->top__DOT__i8__DOT__i0__DOT__lut_out),12);
        bufp->chgBit(oldp+401,(vlSelf->top__DOT__i8__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+402,(vlSelf->top__DOT__i9__DOT__i0__DOT__lut_out),12);
        bufp->chgBit(oldp+403,(vlSelf->top__DOT__i9__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+404,(vlSelf->top__DOT__u_alu__DOT__byte_idx),2);
        bufp->chgIData(oldp+405,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+406,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+407,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+408,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+409,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+410,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+411,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+412,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+413,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+414,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+415,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+416,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+417,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+418,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+419,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+420,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+421,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+422,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+423,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+424,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+425,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+426,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+427,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+428,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+429,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+430,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+431,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+432,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+433,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+434,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+435,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+436,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+437,(((0U == vlSelf->top__DOT__u_regfile__DOT__rf
                                   [0x11U]) ? ((IData)(4U) 
                                               + vlSelf->top__DOT__pc)
                                   : vlSelf->top__DOT__pc)),32);
    }
    bufp->chgBit(oldp+438,(vlSelf->clk));
    bufp->chgBit(oldp+439,(vlSelf->reset));
    bufp->chgIData(oldp+440,(vlSelf->top__DOT__rd_data),32);
    bufp->chgIData(oldp+441,(vlSelf->top__DOT__rdata),32);
    bufp->chgIData(oldp+442,(((3U == (IData)(vlSelf->top__DOT__instr_type))
                               ? vlSelf->top__DOT__rd_data
                               : ((0x10U == (IData)(vlSelf->top__DOT__instr_type))
                                   ? ((IData)(vlSelf->top__DOT____VdfgTmp_hb37fddff__0)
                                       ? (vlSelf->top__DOT__rd_data 
                                          << 0x10U)
                                       : (0xffffU & vlSelf->top__DOT__rd_data))
                                   : ((7U == (IData)(vlSelf->top__DOT__instr_type))
                                       ? ((0U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                           ? (0xffU 
                                              & vlSelf->top__DOT__rd_data)
                                           : ((1U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                               ? (0xff00U 
                                                  & (vlSelf->top__DOT__rd_data 
                                                     << 8U))
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                   ? 
                                                  (0xff0000U 
                                                   & (vlSelf->top__DOT__rd_data 
                                                      << 0x10U))
                                                   : 
                                                  (vlSelf->top__DOT__rd_data 
                                                   << 0x18U))))
                                       : 0U)))),32);
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
