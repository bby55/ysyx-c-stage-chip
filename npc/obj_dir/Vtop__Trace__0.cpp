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
    VlWide<13>/*415:0*/ __Vtemp_h762c87bf__0;
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
        bufp->chgSData(oldp+8,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[0]),10);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[1]),10);
        bufp->chgSData(oldp+10,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[2]),10);
        bufp->chgSData(oldp+11,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[3]),10);
        bufp->chgSData(oldp+12,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[4]),10);
        bufp->chgSData(oldp+13,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[5]),10);
        bufp->chgSData(oldp+14,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[6]),10);
        bufp->chgSData(oldp+15,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[7]),10);
        bufp->chgSData(oldp+16,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0]),12);
        bufp->chgSData(oldp+17,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1]),12);
        bufp->chgSData(oldp+18,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2]),12);
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3]),12);
        bufp->chgSData(oldp+20,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[4]),12);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[5]),12);
        bufp->chgSData(oldp+22,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[6]),12);
        bufp->chgSData(oldp+23,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[7]),12);
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+26,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[3]),12);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[4]),12);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[5]),12);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[6]),12);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[7]),12);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[8]),12);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+35,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[2]),13);
        bufp->chgSData(oldp+36,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+37,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+38,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[2]),12);
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[2]));
        bufp->chgSData(oldp+42,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+43,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgSData(oldp+44,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+45,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[2]),13);
        bufp->chgSData(oldp+46,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[3]),13);
        bufp->chgSData(oldp+47,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+49,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+50,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[3]),12);
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[3]));
        bufp->chgSData(oldp+55,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgSData(oldp+56,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+57,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+58,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[1]),12);
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__pc),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__pc_next),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__instr),32);
        bufp->chgSData(oldp+64,(vlSelf->top__DOT__instr_type),12);
        bufp->chgCData(oldp+65,((0x7fU & vlSelf->top__DOT__instr)),7);
        bufp->chgCData(oldp+66,((7U & (vlSelf->top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+67,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+68,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+69,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__imm),32);
        bufp->chgSData(oldp+71,((vlSelf->top__DOT__instr 
                                 >> 0x14U)),12);
        bufp->chgIData(oldp+72,(((0x80000U & (vlSelf->top__DOT__instr 
                                              >> 0xcU)) 
                                 | ((0x7f800U & (vlSelf->top__DOT__instr 
                                                 >> 1U)) 
                                    | ((0x400U & (vlSelf->top__DOT__instr 
                                                  >> 0xaU)) 
                                       | (0x3ffU & 
                                          (vlSelf->top__DOT__instr 
                                           >> 0x15U)))))),20);
        bufp->chgSData(oldp+73,(((0x800U & (vlSelf->top__DOT__instr 
                                            >> 0x14U)) 
                                 | ((0x400U & (vlSelf->top__DOT__instr 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->top__DOT__instr 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->top__DOT__instr 
                                                  >> 8U)))))),12);
        bufp->chgSData(oldp+74,(vlSelf->top__DOT__S_imm),12);
        bufp->chgIData(oldp+75,((vlSelf->top__DOT__instr 
                                 >> 0xcU)),20);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__I_ex),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__S_ex),32);
        bufp->chgIData(oldp+78,((((- (IData)((1U & 
                                              (vlSelf->top__DOT__instr 
                                               >> 0xcU)))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->top__DOT__instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->top__DOT__instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->top__DOT__instr 
                                                           >> 0x14U))))))),32);
        bufp->chgIData(oldp+79,((0xfffff000U & vlSelf->top__DOT__instr)),32);
        bufp->chgIData(oldp+80,((((- (IData)((vlSelf->top__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xdU) | ((0x1000U 
                                               & (vlSelf->top__DOT__instr 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelf->top__DOT__instr 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->top__DOT__instr 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->top__DOT__instr 
                                                          >> 7U))))))),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__rs2_data),32);
        bufp->chgIData(oldp+83,(((vlSelf->top__DOT__pc 
                                  - (IData)(0x80000000U)) 
                                 >> 2U)),32);
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__wen));
        bufp->chgSData(oldp+85,(vlSelf->top__DOT__opcode_funct3),10);
        bufp->chgIData(oldp+86,((0x7cU & (vlSelf->top__DOT__instr 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+87,(((0U == (3U & vlSelf->top__DOT__imm))
                                  ? 1U : ((1U == (3U 
                                                  & vlSelf->top__DOT__imm))
                                           ? 2U : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__imm))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->top__DOT__imm))
                                                     ? 8U
                                                     : 0U))))),8);
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__valid));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__wen_ram));
        bufp->chgBit(oldp+90,((0x37U == (0x7fU & vlSelf->top__DOT__instr))));
        bufp->chgSData(oldp+91,(vlSelf->top__DOT__instr_type_tmp),12);
        bufp->chgSData(oldp+92,(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out),12);
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__i0__DOT__i0__DOT__hit));
        __Vtemp_h762c87bf__0[0U] = (IData)((0x800000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__I_ex))));
        __Vtemp_h762c87bf__0[1U] = ((vlSelf->top__DOT__S_ex 
                                     << 0xcU) | (IData)(
                                                        ((0x800000000ULL 
                                                          | (QData)((IData)(vlSelf->top__DOT__I_ex))) 
                                                         >> 0x20U)));
        __Vtemp_h762c87bf__0[2U] = (0x7000U | (vlSelf->top__DOT__S_ex 
                                               >> 0x14U));
        __Vtemp_h762c87bf__0[3U] = (0x6000000U | (0xfffff0U 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 8U)));
        __Vtemp_h762c87bf__0[4U] = 0U;
        __Vtemp_h762c87bf__0[5U] = (0x50U | (vlSelf->top__DOT__I_ex 
                                             << 0x10U));
        __Vtemp_h762c87bf__0[6U] = (0x40000U | ((vlSelf->top__DOT__S_ex 
                                                 << 0x1cU) 
                                                | (vlSelf->top__DOT__I_ex 
                                                   >> 0x10U)));
        __Vtemp_h762c87bf__0[7U] = (0x30000000U | (vlSelf->top__DOT__S_ex 
                                                   >> 4U));
        __Vtemp_h762c87bf__0[8U] = (vlSelf->top__DOT__I_ex 
                                    << 8U);
        __Vtemp_h762c87bf__0[9U] = (0x200U | ((vlSelf->top__DOT__I_ex 
                                               << 0x14U) 
                                              | (vlSelf->top__DOT__I_ex 
                                                 >> 0x18U)));
        __Vtemp_h762c87bf__0[0xaU] = (0x100000U | (vlSelf->top__DOT__I_ex 
                                                   >> 0xcU));
        __Vtemp_h762c87bf__0[0xbU] = vlSelf->top__DOT__I_ex;
        __Vtemp_h762c87bf__0[0xcU] = 0U;
        bufp->chgWData(oldp+94,(__Vtemp_h762c87bf__0),396);
        bufp->chgQData(oldp+107,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[0]),44);
        bufp->chgQData(oldp+109,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[1]),44);
        bufp->chgQData(oldp+111,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[2]),44);
        bufp->chgQData(oldp+113,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[3]),44);
        bufp->chgQData(oldp+115,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[4]),44);
        bufp->chgQData(oldp+117,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[5]),44);
        bufp->chgQData(oldp+119,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[6]),44);
        bufp->chgQData(oldp+121,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[7]),44);
        bufp->chgQData(oldp+123,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[8]),44);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+135,(vlSelf->top__DOT__i1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+137,(vlSelf->top__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+138,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
        bufp->chgQData(oldp+139,((0x100000000ULL | (QData)((IData)(
                                                                   ((0x80000000U 
                                                                     > vlSelf->top__DOT__rs1_data)
                                                                     ? 
                                                                    ((IData)(0x80000000U) 
                                                                     + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                                                     : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0))))),44);
        bufp->chgQData(oldp+141,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[0]),44);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+145,(vlSelf->top__DOT__i3__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+146,(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+147,(vlSelf->top__DOT__i4__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+148,(vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+149,(vlSelf->top__DOT__i5__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+150,((3U & vlSelf->top__DOT__imm)),2);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+183,(vlSelf->clk));
    bufp->chgBit(oldp+184,(vlSelf->reset));
    bufp->chgIData(oldp+185,(vlSelf->top__DOT__rd_data),32);
    bufp->chgIData(oldp+186,(vlSelf->top__DOT__rdata),32);
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
