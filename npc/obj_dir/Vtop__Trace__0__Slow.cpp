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
    tracep->declBit(c+353,"clk", false,-1);
    tracep->declBit(c+354,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+353,"clk", false,-1);
    tracep->declBit(c+354,"reset", false,-1);
    tracep->declBus(c+181,"pc", false,-1, 31,0);
    tracep->declBus(c+182,"pc_next", false,-1, 31,0);
    tracep->declBus(c+183,"instr", false,-1, 31,0);
    tracep->declBus(c+184,"instr_type", false,-1, 11,0);
    tracep->declBus(c+185,"opcode", false,-1, 6,0);
    tracep->declBus(c+186,"funct3", false,-1, 2,0);
    tracep->declBus(c+187,"funct7", false,-1, 6,0);
    tracep->declBus(c+188,"rs1", false,-1, 4,0);
    tracep->declBus(c+189,"rs2", false,-1, 4,0);
    tracep->declBus(c+190,"rd", false,-1, 4,0);
    tracep->declBus(c+191,"imm", false,-1, 31,0);
    tracep->declBus(c+192,"I_imm", false,-1, 11,0);
    tracep->declBus(c+193,"J_imm", false,-1, 19,0);
    tracep->declBus(c+194,"B_imm", false,-1, 11,0);
    tracep->declBit(c+358,"R_imm", false,-1);
    tracep->declBus(c+195,"S_imm", false,-1, 11,0);
    tracep->declBus(c+196,"U_imm", false,-1, 19,0);
    tracep->declBus(c+197,"I_ex", false,-1, 31,0);
    tracep->declBus(c+198,"S_ex", false,-1, 31,0);
    tracep->declBus(c+199,"J_ex", false,-1, 31,0);
    tracep->declBus(c+200,"U_ex", false,-1, 31,0);
    tracep->declBus(c+201,"B_ex", false,-1, 31,0);
    tracep->declBus(c+359,"R_ex", false,-1, 31,0);
    tracep->declBus(c+360,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+202,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+203,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+355,"rd_data", false,-1, 31,0);
    tracep->declBus(c+204,"rom_index", false,-1, 31,0);
    tracep->declBit(c+205,"wen", false,-1);
    tracep->declBus(c+206,"opcode_funct3", false,-1, 9,0);
    tracep->declBus(c+207,"opcode_funct3_funct7", false,-1, 16,0);
    tracep->declBus(c+208,"a0_val", false,-1, 31,0);
    tracep->declBus(c+356,"rdata", false,-1, 31,0);
    tracep->declBus(c+357,"wdata", false,-1, 31,0);
    tracep->declBus(c+209,"raddr", false,-1, 31,0);
    tracep->declBus(c+210,"waddr", false,-1, 31,0);
    tracep->declBus(c+211,"wmask", false,-1, 7,0);
    tracep->declBus(c+212,"wmask_sh", false,-1, 7,0);
    tracep->declBit(c+213,"valid", false,-1);
    tracep->declBit(c+214,"wen_ram", false,-1);
    tracep->declBit(c+361,"is_lui", false,-1);
    tracep->declBus(c+215,"instr_type_tmp", false,-1, 11,0);
    tracep->declBus(c+216,"instr_type_nofunct", false,-1, 11,0);
    tracep->declBus(c+217,"instr_type_funct7", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+215,"out", false,-1, 11,0);
    tracep->declBus(c+206,"key", false,-1, 9,0);
    tracep->declBus(c+365,"default_out", false,-1, 11,0);
    tracep->declArray(c+366,"lut", false,-1, 483,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+215,"out", false,-1, 11,0);
    tracep->declBus(c+206,"key", false,-1, 9,0);
    tracep->declBus(c+365,"default_out", false,-1, 11,0);
    tracep->declArray(c+366,"lut", false,-1, 483,0);
    tracep->declBus(c+362,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 22; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 21,0);
    }
    for (int i = 0; i < 22; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 22; ++i) {
        tracep->declBus(c+45+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+218,"lut_out", false,-1, 11,0);
    tracep->declBit(c+219,"hit", false,-1);
    tracep->declBus(c+383,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+191,"out", false,-1, 31,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+359,"default_out", false,-1, 31,0);
    tracep->declArray(c+220,"lut", false,-1, 1583,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+191,"out", false,-1, 31,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+359,"default_out", false,-1, 31,0);
    tracep->declArray(c+220,"lut", false,-1, 1583,0);
    tracep->declBus(c+386,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+270,"lut_out", false,-1, 31,0);
    tracep->declBit(c+271,"hit", false,-1);
    tracep->declBus(c+387,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+205,"out", false,-1, 0,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+388,"default_out", false,-1, 0,0);
    tracep->declArray(c+389,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+205,"out", false,-1, 0,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+388,"default_out", false,-1, 0,0);
    tracep->declArray(c+389,"lut", false,-1, 129,0);
    tracep->declBus(c+394,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+67+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+77+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+87+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+272,"lut_out", false,-1, 0,0);
    tracep->declBit(c+273,"hit", false,-1);
    tracep->declBus(c+395,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+396,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+182,"out", false,-1, 31,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+275,"lut", false,-1, 351,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+396,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+182,"out", false,-1, 31,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+275,"lut", false,-1, 351,0);
    tracep->declBus(c+386,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+286+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+97+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+302+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+310,"lut_out", false,-1, 31,0);
    tracep->declBit(c+311,"hit", false,-1);
    tracep->declBus(c+397,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+396,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+213,"out", false,-1, 0,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+358,"default_out", false,-1, 0,0);
    tracep->declArray(c+398,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+396,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+213,"out", false,-1, 0,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+358,"default_out", false,-1, 0,0);
    tracep->declArray(c+398,"lut", false,-1, 103,0);
    tracep->declBus(c+394,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+105+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+113+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+121+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+312,"lut_out", false,-1, 0,0);
    tracep->declBit(c+313,"hit", false,-1);
    tracep->declBus(c+397,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i5 ");
    tracep->declBus(c+402,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+214,"out", false,-1, 0,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+358,"default_out", false,-1, 0,0);
    tracep->declQuad(c+403,"lut", false,-1, 38,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+402,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+214,"out", false,-1, 0,0);
    tracep->declBus(c+184,"key", false,-1, 11,0);
    tracep->declBus(c+358,"default_out", false,-1, 0,0);
    tracep->declQuad(c+403,"lut", false,-1, 38,0);
    tracep->declBus(c+394,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+129+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+132+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+135+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+314,"lut_out", false,-1, 0,0);
    tracep->declBit(c+315,"hit", false,-1);
    tracep->declBus(c+405,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i6 ");
    tracep->declBus(c+402,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+406,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+216,"out", false,-1, 11,0);
    tracep->declBus(c+185,"key", false,-1, 6,0);
    tracep->declBus(c+365,"default_out", false,-1, 11,0);
    tracep->declQuad(c+407,"lut", false,-1, 56,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+402,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+406,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+216,"out", false,-1, 11,0);
    tracep->declBus(c+185,"key", false,-1, 6,0);
    tracep->declBus(c+365,"default_out", false,-1, 11,0);
    tracep->declQuad(c+407,"lut", false,-1, 56,0);
    tracep->declBus(c+409,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+138+i*1,"pair_list", true,(i+0), 18,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+141+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+144+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+316,"lut_out", false,-1, 11,0);
    tracep->declBit(c+317,"hit", false,-1);
    tracep->declBus(c+405,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i7 ");
    tracep->declBus(c+410,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+411,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+217,"out", false,-1, 11,0);
    tracep->declBus(c+207,"key", false,-1, 16,0);
    tracep->declBus(c+365,"default_out", false,-1, 11,0);
    tracep->declArray(c+412,"lut", false,-1, 318,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+410,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+411,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+364,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+217,"out", false,-1, 11,0);
    tracep->declBus(c+207,"key", false,-1, 16,0);
    tracep->declBus(c+365,"default_out", false,-1, 11,0);
    tracep->declArray(c+412,"lut", false,-1, 318,0);
    tracep->declBus(c+422,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+147+i*1,"pair_list", true,(i+0), 28,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+158+i*1,"key_list", true,(i+0), 16,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+169+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+318,"lut_out", false,-1, 11,0);
    tracep->declBit(c+319,"hit", false,-1);
    tracep->declBus(c+423,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+385,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+202,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+203,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+209,"raddr", false,-1, 31,0);
    tracep->declBus(c+191,"imm", false,-1, 31,0);
    tracep->declBus(c+181,"pc", false,-1, 31,0);
    tracep->declBus(c+356,"rdata", false,-1, 31,0);
    tracep->declBus(c+184,"alu_ctrl", false,-1, 11,0);
    tracep->declBus(c+355,"alu_out", false,-1, 31,0);
    tracep->declBus(c+320,"byte_idx", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_idu ");
    tracep->declBus(c+183,"instr", false,-1, 31,0);
    tracep->declBus(c+188,"rs1", false,-1, 4,0);
    tracep->declBus(c+189,"rs2", false,-1, 4,0);
    tracep->declBus(c+190,"rd", false,-1, 4,0);
    tracep->declBus(c+192,"I_imm", false,-1, 11,0);
    tracep->declBus(c+193,"J_imm", false,-1, 19,0);
    tracep->declBus(c+194,"B_imm", false,-1, 11,0);
    tracep->declBit(c+358,"R_imm", false,-1);
    tracep->declBus(c+195,"S_imm", false,-1, 11,0);
    tracep->declBus(c+196,"U_imm", false,-1, 19,0);
    tracep->declBus(c+186,"funct3", false,-1, 2,0);
    tracep->declBus(c+187,"funct7", false,-1, 6,0);
    tracep->declBus(c+185,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc ");
    tracep->declBus(c+424,"PC_START", false,-1, 31,0);
    tracep->declBit(c+353,"clk", false,-1);
    tracep->declBit(c+354,"reset", false,-1);
    tracep->declBus(c+182,"pc_in", false,-1, 31,0);
    tracep->declBus(c+181,"pc_out", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+385,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+424,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+353,"clk", false,-1);
    tracep->declBit(c+354,"rst", false,-1);
    tracep->declBus(c+182,"din", false,-1, 31,0);
    tracep->declBus(c+181,"dout", false,-1, 31,0);
    tracep->declBit(c+388,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_regfile ");
    tracep->declBus(c+425,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+353,"clk", false,-1);
    tracep->declBit(c+205,"wen", false,-1);
    tracep->declBus(c+355,"wdata", false,-1, 31,0);
    tracep->declBus(c+190,"waddr", false,-1, 4,0);
    tracep->declBus(c+188,"raddr1", false,-1, 4,0);
    tracep->declBus(c+202,"rdata1", false,-1, 31,0);
    tracep->declBus(c+189,"raddr2", false,-1, 4,0);
    tracep->declBus(c+203,"rdata2", false,-1, 31,0);
    tracep->declBus(c+208,"a0_val", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+321+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+180,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h70154769_0;
extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_h2ac0b763_0;

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<11>/*351:0*/ __Vtemp_hbcb9a2cc__0;
    VlWide<5>/*159:0*/ __Vtemp_h6aa3a09a__0;
    VlWide<4>/*127:0*/ __Vtemp_hb716f3c3__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[0]),22);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[1]),22);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[2]),22);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[3]),22);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[4]),22);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[5]),22);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[6]),22);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[7]),22);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[8]),22);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[9]),22);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[10]),22);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[11]),22);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[12]),22);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[13]),22);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[14]),22);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[15]),22);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[16]),22);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[17]),22);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[18]),22);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[19]),22);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[20]),22);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[21]),22);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[4]),10);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[5]),10);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[6]),10);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[7]),10);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[8]),10);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[9]),10);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[10]),10);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[11]),10);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[12]),10);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[13]),10);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[14]),10);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[15]),10);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[16]),10);
    bufp->fullSData(oldp+40,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[17]),10);
    bufp->fullSData(oldp+41,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[18]),10);
    bufp->fullSData(oldp+42,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[19]),10);
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[20]),10);
    bufp->fullSData(oldp+44,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[21]),10);
    bufp->fullSData(oldp+45,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3]),12);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[4]),12);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[5]),12);
    bufp->fullSData(oldp+51,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[6]),12);
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[7]),12);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[8]),12);
    bufp->fullSData(oldp+54,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[9]),12);
    bufp->fullSData(oldp+55,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[10]),12);
    bufp->fullSData(oldp+56,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[11]),12);
    bufp->fullSData(oldp+57,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[12]),12);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[13]),12);
    bufp->fullSData(oldp+59,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[14]),12);
    bufp->fullSData(oldp+60,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[15]),12);
    bufp->fullSData(oldp+61,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[16]),12);
    bufp->fullSData(oldp+62,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[17]),12);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[18]),12);
    bufp->fullSData(oldp+64,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[19]),12);
    bufp->fullSData(oldp+65,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[20]),12);
    bufp->fullSData(oldp+66,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[21]),12);
    bufp->fullSData(oldp+67,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+68,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+69,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+70,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+71,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+72,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+73,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+75,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[8]),13);
    bufp->fullSData(oldp+76,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[9]),13);
    bufp->fullSData(oldp+77,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+78,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+79,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+80,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+81,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+82,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+83,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+84,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[7]),12);
    bufp->fullSData(oldp+85,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[8]),12);
    bufp->fullSData(oldp+86,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[9]),12);
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[7]));
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[8]));
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[9]));
    bufp->fullSData(oldp+97,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+98,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+99,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+100,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+101,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+102,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+103,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+104,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[7]),12);
    bufp->fullSData(oldp+105,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+106,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+107,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+108,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+109,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+110,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+111,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+112,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+113,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+114,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+115,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+116,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+117,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+118,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+119,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+120,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[7]),12);
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+123,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[7]));
    bufp->fullSData(oldp+129,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+130,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+131,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+132,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+133,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+134,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[2]),12);
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[2]));
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__i6__DOT__i0__DOT__pair_list[0]),19);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__i6__DOT__i0__DOT__pair_list[1]),19);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__i6__DOT__i0__DOT__pair_list[2]),19);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__i6__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__i6__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__i6__DOT__i0__DOT__key_list[2]),7);
    bufp->fullSData(oldp+144,(vlSelf->top__DOT__i6__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+145,(vlSelf->top__DOT__i6__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+146,(vlSelf->top__DOT__i6__DOT__i0__DOT__data_list[2]),12);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[0]),29);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[1]),29);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[2]),29);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[3]),29);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[4]),29);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[5]),29);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[6]),29);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[7]),29);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[8]),29);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[9]),29);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[10]),29);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[0]),17);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[1]),17);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[2]),17);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[3]),17);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[4]),17);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[5]),17);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[6]),17);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[7]),17);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[8]),17);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[9]),17);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[10]),17);
    bufp->fullSData(oldp+169,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+170,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+171,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+172,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[3]),12);
    bufp->fullSData(oldp+173,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[4]),12);
    bufp->fullSData(oldp+174,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[5]),12);
    bufp->fullSData(oldp+175,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[6]),12);
    bufp->fullSData(oldp+176,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[7]),12);
    bufp->fullSData(oldp+177,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[8]),12);
    bufp->fullSData(oldp+178,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[9]),12);
    bufp->fullSData(oldp+179,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[10]),12);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__u_regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__pc_next),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__instr),32);
    bufp->fullSData(oldp+184,(vlSelf->top__DOT__instr_type),12);
    bufp->fullCData(oldp+185,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+186,((7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+187,((vlSelf->top__DOT__instr 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+188,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+189,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+190,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 7U))),5);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__imm),32);
    bufp->fullSData(oldp+192,((vlSelf->top__DOT__instr 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__J_imm),20);
    bufp->fullSData(oldp+194,(vlSelf->top__DOT__B_imm),12);
    bufp->fullSData(oldp+195,(vlSelf->top__DOT__S_imm),12);
    bufp->fullIData(oldp+196,((vlSelf->top__DOT__instr 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__I_ex),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__S_ex),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__J_ex),32);
    bufp->fullIData(oldp+200,((0xfffff000U & vlSelf->top__DOT__instr)),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__B_ex),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__rs2_data),32);
    bufp->fullIData(oldp+204,(((0x80000000U > vlSelf->top__DOT__pc)
                                ? (vlSelf->top__DOT__pc 
                                   >> 2U) : ((vlSelf->top__DOT__pc 
                                              - (IData)(0x80000000U)) 
                                             >> 2U))),32);
    bufp->fullBit(oldp+205,(vlSelf->top__DOT__wen));
    bufp->fullSData(oldp+206,(vlSelf->top__DOT__opcode_funct3),10);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__opcode_funct3_funct7),17);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__u_regfile__DOT__rf
                              [0xaU]),32);
    bufp->fullIData(oldp+209,(((IData)(vlSelf->top__DOT__valid)
                                ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+210,(((IData)(vlSelf->top__DOT__wen_ram)
                                ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+211,(((0x10U == (IData)(vlSelf->top__DOT__instr_type))
                                ? ((IData)(vlSelf->top__DOT____VdfgTmp_hb37fddff__0)
                                    ? 0xcU : 3U) : 
                               ((3U == (IData)(vlSelf->top__DOT__instr_type))
                                 ? 0xfU : ((0U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                            ? 1U : 
                                           ((1U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                             ? 2U : 
                                            ((2U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                              ? 4U : 
                                             ((3U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                               ? 8U
                                               : 0U))))))),8);
    bufp->fullCData(oldp+212,(((IData)(vlSelf->top__DOT____VdfgTmp_hb37fddff__0)
                                ? 0xcU : 3U)),8);
    bufp->fullBit(oldp+213,(vlSelf->top__DOT__valid));
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__wen_ram));
    bufp->fullSData(oldp+215,(vlSelf->top__DOT__instr_type_tmp),12);
    bufp->fullSData(oldp+216,(vlSelf->top__DOT__instr_type_nofunct),12);
    bufp->fullSData(oldp+217,(vlSelf->top__DOT__instr_type_funct7),12);
    bufp->fullSData(oldp+218,(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+220,(vlSelf->top__DOT____Vcellinp__i1____pinNumber4),1584);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__i1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+274,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
    __Vtemp_hbcb9a2cc__0[0U] = (IData)((0x1c00000000ULL 
                                        | (QData)((IData)(
                                                          ((vlSelf->top__DOT__rs1_data 
                                                            < vlSelf->top__DOT__rs2_data)
                                                            ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                            : 
                                                           ((IData)(4U) 
                                                            + vlSelf->top__DOT__pc))))));
    __Vtemp_hbcb9a2cc__0[1U] = ((((vlSelf->top__DOT__rs1_data 
                                   >= vlSelf->top__DOT__rs2_data)
                                   ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                   : ((IData)(4U) + vlSelf->top__DOT__pc)) 
                                 << 0xcU) | (IData)(
                                                    ((0x1c00000000ULL 
                                                      | (QData)((IData)(
                                                                        ((vlSelf->top__DOT__rs1_data 
                                                                          < vlSelf->top__DOT__rs2_data)
                                                                          ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                                          : 
                                                                         ((IData)(4U) 
                                                                          + vlSelf->top__DOT__pc))))) 
                                                     >> 0x20U)));
    __Vtemp_hbcb9a2cc__0[2U] = (0x1b000U | (((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                               ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)) 
                                             << 0x18U) 
                                            | (((vlSelf->top__DOT__rs1_data 
                                                 >= vlSelf->top__DOT__rs2_data)
                                                 ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)) 
                                               >> 0x14U)));
    __Vtemp_hbcb9a2cc__0[3U] = (0x18000000U | ((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                                 ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)) 
                                               >> 8U));
    __Vtemp_hbcb9a2cc__0[4U] = ((VL_GTES_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                  ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                  : ((IData)(4U) + vlSelf->top__DOT__pc)) 
                                << 4U);
    __Vtemp_hbcb9a2cc__0[5U] = (0x170U | ((((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                             ? ((IData)(4U) 
                                                + vlSelf->top__DOT__pc)
                                             : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0) 
                                           << 0x10U) 
                                          | ((VL_GTES_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                               ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)) 
                                             >> 0x1cU)));
    __Vtemp_hbcb9a2cc__0[6U] = (0xe0000U | ((((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                               ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)
                                                 : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0) 
                                               >> 0x10U)));
    __Vtemp_hbcb9a2cc__0[7U] = (0xd0000000U | (((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                                 ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)) 
                                               >> 4U));
    __Vtemp_hbcb9a2cc__0[8U] = (((0x80000000U > vlSelf->top__DOT__pc)
                                  ? ((IData)(0x80000000U) 
                                     + vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0)
                                  : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0) 
                                << 8U);
    __Vtemp_hbcb9a2cc__0[9U] = (0xa00U | ((((0x80000000U 
                                             > vlSelf->top__DOT__rs1_data)
                                             ? ((IData)(0x80000000U) 
                                                + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                             : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0) 
                                           << 0x14U) 
                                          | (((0x80000000U 
                                               > vlSelf->top__DOT__pc)
                                               ? ((IData)(0x80000000U) 
                                                  + vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0)
                                               : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0) 
                                             >> 0x18U)));
    __Vtemp_hbcb9a2cc__0[0xaU] = (0x100000U | (((0x80000000U 
                                                 > vlSelf->top__DOT__rs1_data)
                                                 ? 
                                                ((IData)(0x80000000U) 
                                                 + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                                 : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0) 
                                               >> 0xcU));
    bufp->fullWData(oldp+275,(__Vtemp_hbcb9a2cc__0),352);
    bufp->fullQData(oldp+286,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+288,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+290,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+292,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullQData(oldp+294,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[4]),44);
    bufp->fullQData(oldp+296,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[5]),44);
    bufp->fullQData(oldp+298,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[6]),44);
    bufp->fullQData(oldp+300,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[7]),44);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__i3__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+312,(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+313,(vlSelf->top__DOT__i4__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+314,(vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+315,(vlSelf->top__DOT__i5__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+316,(vlSelf->top__DOT__i6__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+317,(vlSelf->top__DOT__i6__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+318,(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+319,(vlSelf->top__DOT__i7__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+320,(vlSelf->top__DOT__u_alu__DOT__byte_idx),2);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+330,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+331,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+333,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+334,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+335,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+336,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+337,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+338,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+339,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+340,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+341,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+342,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+343,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+344,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+345,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+346,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+349,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+350,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+351,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+352,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+353,(vlSelf->clk));
    bufp->fullBit(oldp+354,(vlSelf->reset));
    bufp->fullIData(oldp+355,(vlSelf->top__DOT__rd_data),32);
    bufp->fullIData(oldp+356,(vlSelf->top__DOT__rdata),32);
    bufp->fullIData(oldp+357,(((3U == (IData)(vlSelf->top__DOT__instr_type))
                                ? vlSelf->top__DOT__rd_data
                                : ((0x10U == (IData)(vlSelf->top__DOT__instr_type))
                                    ? ((IData)(vlSelf->top__DOT____VdfgTmp_hb37fddff__0)
                                        ? (vlSelf->top__DOT__rd_data 
                                           << 0x10U)
                                        : (0xffffU 
                                           & vlSelf->top__DOT__rd_data))
                                    : ((7U == (IData)(vlSelf->top__DOT__instr_type))
                                        ? ((0U == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                            ? (0xffU 
                                               & vlSelf->top__DOT__rd_data)
                                            : ((1U 
                                                == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                ? (0xff00U 
                                                   & (vlSelf->top__DOT__rd_data 
                                                      << 8U))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                    ? 
                                                   (0xff0000U 
                                                    & (vlSelf->top__DOT__rd_data 
                                                       << 0x10U))
                                                    : 
                                                   (vlSelf->top__DOT__rd_data 
                                                    << 0x18U))))
                                        : 0U)))),32);
    bufp->fullBit(oldp+358,(0U));
    bufp->fullIData(oldp+359,(0U),32);
    bufp->fullIData(oldp+360,(vlSelf->top__DOT__imm_ex),32);
    bufp->fullBit(oldp+361,(vlSelf->top__DOT__is_lui));
    bufp->fullIData(oldp+362,(0x16U),32);
    bufp->fullIData(oldp+363,(0xaU),32);
    bufp->fullIData(oldp+364,(0xcU),32);
    bufp->fullSData(oldp+365,(0U),12);
    bufp->fullWData(oldp+366,(Vtop__ConstPool__CONST_h70154769_0),484);
    bufp->fullIData(oldp+382,(1U),32);
    bufp->fullIData(oldp+383,(0x16U),32);
    bufp->fullIData(oldp+384,(0x24U),32);
    bufp->fullIData(oldp+385,(0x20U),32);
    bufp->fullIData(oldp+386,(0x2cU),32);
    bufp->fullIData(oldp+387,(0x24U),32);
    bufp->fullBit(oldp+388,(1U));
    __Vtemp_h6aa3a09a__0[0U] = 0xc006c038U;
    __Vtemp_h6aa3a09a__0[1U] = 0x2001700U;
    __Vtemp_h6aa3a09a__0[2U] = 0x70068038U;
    __Vtemp_h6aa3a09a__0[3U] = 0xc00800U;
    __Vtemp_h6aa3a09a__0[4U] = 0U;
    bufp->fullWData(oldp+389,(__Vtemp_h6aa3a09a__0),130);
    bufp->fullIData(oldp+394,(0xdU),32);
    bufp->fullIData(oldp+395,(0xaU),32);
    bufp->fullIData(oldp+396,(8U),32);
    bufp->fullIData(oldp+397,(8U),32);
    __Vtemp_hb716f3c3__0[0U] = 0xfc082047U;
    __Vtemp_hb716f3c3__0[1U] = 0xf01080U;
    __Vtemp_hb716f3c3__0[2U] = 0x2804400eU;
    __Vtemp_hb716f3c3__0[3U] = 0U;
    bufp->fullWData(oldp+398,(__Vtemp_hb716f3c3__0),104);
    bufp->fullIData(oldp+402,(3U),32);
    bufp->fullQData(oldp+403,(0x1c01e021ULL),39);
    bufp->fullIData(oldp+405,(3U),32);
    bufp->fullIData(oldp+406,(7U),32);
    bufp->fullQData(oldp+407,(0xdc018b804ef00aULL),57);
    bufp->fullIData(oldp+409,(0x13U),32);
    bufp->fullIData(oldp+410,(0xbU),32);
    bufp->fullIData(oldp+411,(0x11U),32);
    bufp->fullWData(oldp+412,(Vtop__ConstPool__CONST_h2ac0b763_0),319);
    bufp->fullIData(oldp+422,(0x1dU),32);
    bufp->fullIData(oldp+423,(0xbU),32);
    bufp->fullIData(oldp+424,(0x80000000U),32);
    bufp->fullIData(oldp+425,(5U),32);
}
