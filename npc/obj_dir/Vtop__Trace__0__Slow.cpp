// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+186,"clk", false,-1);
    tracep->declBit(c+187,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+186,"clk", false,-1);
    tracep->declBit(c+187,"reset", false,-1);
    tracep->declBus(c+62,"pc", false,-1, 31,0);
    tracep->declBus(c+63,"pc_next", false,-1, 31,0);
    tracep->declBus(c+64,"instr", false,-1, 31,0);
    tracep->declBus(c+65,"instr_type", false,-1, 11,0);
    tracep->declBus(c+66,"opcode", false,-1, 6,0);
    tracep->declBus(c+67,"funct3", false,-1, 2,0);
    tracep->declBus(c+68,"rs1", false,-1, 4,0);
    tracep->declBus(c+69,"rs2", false,-1, 4,0);
    tracep->declBus(c+70,"rd", false,-1, 4,0);
    tracep->declBus(c+71,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"I_imm", false,-1, 11,0);
    tracep->declBus(c+73,"J_imm", false,-1, 19,0);
    tracep->declBus(c+74,"B_imm", false,-1, 11,0);
    tracep->declBit(c+191,"R_imm", false,-1);
    tracep->declBus(c+75,"S_imm", false,-1, 11,0);
    tracep->declBus(c+76,"U_imm", false,-1, 19,0);
    tracep->declBus(c+77,"I_ex", false,-1, 31,0);
    tracep->declBus(c+78,"S_ex", false,-1, 31,0);
    tracep->declBus(c+79,"J_ex", false,-1, 31,0);
    tracep->declBus(c+80,"U_ex", false,-1, 31,0);
    tracep->declBus(c+81,"B_ex", false,-1, 31,0);
    tracep->declBus(c+192,"R_ex", false,-1, 31,0);
    tracep->declBus(c+193,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+82,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+188,"rd_data", false,-1, 31,0);
    tracep->declBus(c+84,"rom_index", false,-1, 31,0);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->declBus(c+86,"opcode_funct3", false,-1, 9,0);
    tracep->declBus(c+87,"a0_val", false,-1, 31,0);
    tracep->declBus(c+189,"rdata", false,-1, 31,0);
    tracep->declBus(c+190,"wdata", false,-1, 31,0);
    tracep->declBus(c+88,"raddr", false,-1, 31,0);
    tracep->declBus(c+89,"waddr", false,-1, 31,0);
    tracep->declBus(c+90,"wmask", false,-1, 7,0);
    tracep->declBit(c+91,"valid", false,-1);
    tracep->declBit(c+92,"wen_ram", false,-1);
    tracep->declBit(c+93,"is_lui", false,-1);
    tracep->declBus(c+94,"instr_type_tmp", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+194,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+195,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+94,"out", false,-1, 11,0);
    tracep->declBus(c+86,"key", false,-1, 9,0);
    tracep->declBus(c+197,"default_out", false,-1, 11,0);
    tracep->declArray(c+198,"lut", false,-1, 175,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+194,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+195,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+94,"out", false,-1, 11,0);
    tracep->declBus(c+86,"key", false,-1, 9,0);
    tracep->declBus(c+197,"default_out", false,-1, 11,0);
    tracep->declArray(c+198,"lut", false,-1, 175,0);
    tracep->declBus(c+205,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 21,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+17+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+95,"lut_out", false,-1, 11,0);
    tracep->declBit(c+96,"hit", false,-1);
    tracep->declBus(c+206,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+207,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+208,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 31,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+192,"default_out", false,-1, 31,0);
    tracep->declArray(c+97,"lut", false,-1, 395,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+207,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+208,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 31,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+192,"default_out", false,-1, 31,0);
    tracep->declArray(c+97,"lut", false,-1, 395,0);
    tracep->declBus(c+209,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+110+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+25+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+128+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+137,"lut_out", false,-1, 31,0);
    tracep->declBit(c+138,"hit", false,-1);
    tracep->declBus(c+210,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+211,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+85,"out", false,-1, 0,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+212,"default_out", false,-1, 0,0);
    tracep->declQuad(c+213,"lut", false,-1, 38,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+211,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+85,"out", false,-1, 0,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+212,"default_out", false,-1, 0,0);
    tracep->declQuad(c+213,"lut", false,-1, 38,0);
    tracep->declBus(c+215,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+37+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+40+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+139,"lut_out", false,-1, 0,0);
    tracep->declBit(c+140,"hit", false,-1);
    tracep->declBus(c+216,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+204,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+208,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 31,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+141,"default_out", false,-1, 31,0);
    tracep->declQuad(c+142,"lut", false,-1, 43,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+204,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+208,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 31,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+141,"default_out", false,-1, 31,0);
    tracep->declQuad(c+142,"lut", false,-1, 43,0);
    tracep->declBus(c+209,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+144+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+43+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+146+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+147,"lut_out", false,-1, 31,0);
    tracep->declBit(c+148,"hit", false,-1);
    tracep->declBus(c+217,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+218,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+91,"out", false,-1, 0,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+191,"default_out", false,-1, 0,0);
    tracep->declQuad(c+219,"lut", false,-1, 51,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+218,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+91,"out", false,-1, 0,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+191,"default_out", false,-1, 0,0);
    tracep->declQuad(c+219,"lut", false,-1, 51,0);
    tracep->declBus(c+215,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+44+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+48+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+52+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+149,"lut_out", false,-1, 0,0);
    tracep->declBit(c+150,"hit", false,-1);
    tracep->declBus(c+221,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i5 ");
    tracep->declBus(c+222,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+92,"out", false,-1, 0,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+191,"default_out", false,-1, 0,0);
    tracep->declBus(c+223,"lut", false,-1, 25,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+222,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+92,"out", false,-1, 0,0);
    tracep->declBus(c+65,"key", false,-1, 11,0);
    tracep->declBus(c+191,"default_out", false,-1, 0,0);
    tracep->declBus(c+223,"lut", false,-1, 25,0);
    tracep->declBus(c+215,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+56+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+58+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+60+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+151,"lut_out", false,-1, 0,0);
    tracep->declBit(c+152,"hit", false,-1);
    tracep->declBus(c+224,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+208,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+88,"raddr", false,-1, 31,0);
    tracep->declBus(c+71,"imm", false,-1, 31,0);
    tracep->declBus(c+62,"pc", false,-1, 31,0);
    tracep->declBus(c+189,"rdata", false,-1, 31,0);
    tracep->declBus(c+65,"alu_ctrl", false,-1, 11,0);
    tracep->declBus(c+188,"alu_out", false,-1, 31,0);
    tracep->declBus(c+153,"byte_idx", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_idu ");
    tracep->declBus(c+64,"instr", false,-1, 31,0);
    tracep->declBus(c+68,"rs1", false,-1, 4,0);
    tracep->declBus(c+69,"rs2", false,-1, 4,0);
    tracep->declBus(c+70,"rd", false,-1, 4,0);
    tracep->declBus(c+72,"I_imm", false,-1, 11,0);
    tracep->declBus(c+73,"J_imm", false,-1, 19,0);
    tracep->declBus(c+74,"B_imm", false,-1, 11,0);
    tracep->declBit(c+191,"R_imm", false,-1);
    tracep->declBus(c+75,"S_imm", false,-1, 11,0);
    tracep->declBus(c+76,"U_imm", false,-1, 19,0);
    tracep->declBus(c+67,"funct3", false,-1, 2,0);
    tracep->declBus(c+66,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc ");
    tracep->declBus(c+225,"PC_START", false,-1, 31,0);
    tracep->declBit(c+186,"clk", false,-1);
    tracep->declBit(c+187,"reset", false,-1);
    tracep->declBus(c+63,"pc_in", false,-1, 31,0);
    tracep->declBus(c+62,"pc_out", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+208,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+225,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+186,"clk", false,-1);
    tracep->declBit(c+187,"rst", false,-1);
    tracep->declBus(c+63,"din", false,-1, 31,0);
    tracep->declBus(c+62,"dout", false,-1, 31,0);
    tracep->declBit(c+212,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_regfile ");
    tracep->declBus(c+226,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+208,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+186,"clk", false,-1);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->declBus(c+188,"wdata", false,-1, 31,0);
    tracep->declBus(c+70,"waddr", false,-1, 4,0);
    tracep->declBus(c+68,"raddr1", false,-1, 4,0);
    tracep->declBus(c+82,"rdata1", false,-1, 31,0);
    tracep->declBus(c+69,"raddr2", false,-1, 4,0);
    tracep->declBus(c+83,"rdata2", false,-1, 31,0);
    tracep->declBus(c+87,"a0_val", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+154+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<13>/*415:0*/ __Vtemp_h762c87bf__0;
    VlWide<6>/*191:0*/ __Vtemp_h356c3421__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[0]),22);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[1]),22);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[2]),22);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[3]),22);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[4]),22);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[5]),22);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[6]),22);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[7]),22);
    bufp->fullSData(oldp+9,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+10,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+11,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+12,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+13,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[4]),10);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[5]),10);
    bufp->fullSData(oldp+15,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[6]),10);
    bufp->fullSData(oldp+16,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[7]),10);
    bufp->fullSData(oldp+17,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+18,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+19,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+20,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3]),12);
    bufp->fullSData(oldp+21,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[4]),12);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[5]),12);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[6]),12);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[7]),12);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[7]),12);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__i1__DOT__i0__DOT__key_list[8]),12);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[2]),12);
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[2]));
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+44,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+45,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+51,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[3]),12);
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[3]));
    bufp->fullSData(oldp+56,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+57,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+59,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[1]),12);
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[1]));
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__pc_next),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__instr),32);
    bufp->fullSData(oldp+65,(vlSelf->top__DOT__instr_type),12);
    bufp->fullCData(oldp+66,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+67,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+68,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+69,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+70,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__imm),32);
    bufp->fullSData(oldp+72,((vlSelf->top__DOT__instr 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+73,(((0x80000U & (vlSelf->top__DOT__instr 
                                           >> 0xcU)) 
                              | ((0x7f800U & (vlSelf->top__DOT__instr 
                                              >> 1U)) 
                                 | ((0x400U & (vlSelf->top__DOT__instr 
                                               >> 0xaU)) 
                                    | (0x3ffU & (vlSelf->top__DOT__instr 
                                                 >> 0x15U)))))),20);
    bufp->fullSData(oldp+74,(((0x800U & (vlSelf->top__DOT__instr 
                                         >> 0x14U)) 
                              | ((0x400U & (vlSelf->top__DOT__instr 
                                            << 3U)) 
                                 | ((0x3f0U & (vlSelf->top__DOT__instr 
                                               >> 0x15U)) 
                                    | (0xfU & (vlSelf->top__DOT__instr 
                                               >> 8U)))))),12);
    bufp->fullSData(oldp+75,(vlSelf->top__DOT__S_imm),12);
    bufp->fullIData(oldp+76,((vlSelf->top__DOT__instr 
                              >> 0xcU)),20);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__I_ex),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__S_ex),32);
    bufp->fullIData(oldp+79,((((- (IData)((1U & (vlSelf->top__DOT__instr 
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
    bufp->fullIData(oldp+80,((0xfffff000U & vlSelf->top__DOT__instr)),32);
    bufp->fullIData(oldp+81,((((- (IData)((vlSelf->top__DOT__instr 
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
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__rs2_data),32);
    bufp->fullIData(oldp+84,(((0x80000000U > vlSelf->top__DOT__pc)
                               ? (vlSelf->top__DOT__pc 
                                  >> 2U) : ((vlSelf->top__DOT__pc 
                                             - (IData)(0x80000000U)) 
                                            >> 2U))),32);
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__wen));
    bufp->fullSData(oldp+86,(vlSelf->top__DOT__opcode_funct3),10);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__u_regfile__DOT__rf
                             [0xaU]),32);
    bufp->fullIData(oldp+88,(((IData)(vlSelf->top__DOT__valid)
                               ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                               : 0x80000000U)),32);
    bufp->fullIData(oldp+89,(((IData)(vlSelf->top__DOT__wen_ram)
                               ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                               : 0x80000000U)),32);
    bufp->fullCData(oldp+90,(((3U == (IData)(vlSelf->top__DOT__instr_type))
                               ? 0xfU : ((0U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                          ? 1U : ((1U 
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
                                                     : 0U)))))),8);
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__valid));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__wen_ram));
    bufp->fullBit(oldp+93,((0x37U == (0x7fU & vlSelf->top__DOT__instr))));
    bufp->fullSData(oldp+94,(vlSelf->top__DOT__instr_type_tmp),12);
    bufp->fullSData(oldp+95,(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__i0__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+97,(__Vtemp_h762c87bf__0),396);
    bufp->fullQData(oldp+110,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+112,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+114,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+116,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullQData(oldp+118,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[4]),44);
    bufp->fullQData(oldp+120,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[5]),44);
    bufp->fullQData(oldp+122,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[6]),44);
    bufp->fullQData(oldp+124,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[7]),44);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[8]),44);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__i1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+141,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
    bufp->fullQData(oldp+142,((0x100000000ULL | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  > vlSelf->top__DOT__rs1_data)
                                                                  ? 
                                                                 ((IData)(0x80000000U) 
                                                                  + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                                                  : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0))))),44);
    bufp->fullQData(oldp+144,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__i3__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+150,(vlSelf->top__DOT__i4__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+151,(vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__i5__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__u_alu__DOT__byte_idx),2);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+186,(vlSelf->clk));
    bufp->fullBit(oldp+187,(vlSelf->reset));
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__rd_data),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__rdata),32);
    bufp->fullIData(oldp+190,(((3U == (IData)(vlSelf->top__DOT__instr_type))
                                ? vlSelf->top__DOT__rd_data
                                : ((7U == (IData)(vlSelf->top__DOT__instr_type))
                                    ? ((0U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                        ? (0xffU & vlSelf->top__DOT__rd_data)
                                        : ((1U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                            ? (0xff00U 
                                               & (vlSelf->top__DOT__rd_data 
                                                  << 8U))
                                            : ((2U 
                                                == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                ? (0xff0000U 
                                                   & (vlSelf->top__DOT__rd_data 
                                                      << 0x10U))
                                                : (vlSelf->top__DOT__rd_data 
                                                   << 0x18U))))
                                    : 0U))),32);
    bufp->fullBit(oldp+191,(0U));
    bufp->fullIData(oldp+192,(0U),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__imm_ex),32);
    bufp->fullIData(oldp+194,(8U),32);
    bufp->fullIData(oldp+195,(0xaU),32);
    bufp->fullIData(oldp+196,(0xcU),32);
    bufp->fullSData(oldp+197,(0U),12);
    __Vtemp_h356c3421__0[0U] = 0x1c1c008U;
    __Vtemp_h356c3421__0[1U] = 0x98005460U;
    __Vtemp_h356c3421__0[2U] = 0x3e60011U;
    __Vtemp_h356c3421__0[3U] = 0x680091a0U;
    __Vtemp_h356c3421__0[4U] = 0x3380010U;
    __Vtemp_h356c3421__0[5U] = 0x2600U;
    bufp->fullWData(oldp+198,(__Vtemp_h356c3421__0),176);
    bufp->fullIData(oldp+204,(1U),32);
    bufp->fullIData(oldp+205,(0x16U),32);
    bufp->fullIData(oldp+206,(8U),32);
    bufp->fullIData(oldp+207,(9U),32);
    bufp->fullIData(oldp+208,(0x20U),32);
    bufp->fullIData(oldp+209,(0x2cU),32);
    bufp->fullIData(oldp+210,(9U),32);
    bufp->fullIData(oldp+211,(3U),32);
    bufp->fullBit(oldp+212,(1U));
    bufp->fullQData(oldp+213,(0x1801000eULL),39);
    bufp->fullIData(oldp+215,(0xdU),32);
    bufp->fullIData(oldp+216,(3U),32);
    bufp->fullIData(oldp+217,(1U),32);
    bufp->fullIData(oldp+218,(4U),32);
    bufp->fullQData(oldp+219,(0x2804400e00fULL),52);
    bufp->fullIData(oldp+221,(4U),32);
    bufp->fullIData(oldp+222,(2U),32);
    bufp->fullIData(oldp+223,(0xe00fU),26);
    bufp->fullIData(oldp+224,(2U),32);
    bufp->fullIData(oldp+225,(0x80000000U),32);
    bufp->fullIData(oldp+226,(5U),32);
}
