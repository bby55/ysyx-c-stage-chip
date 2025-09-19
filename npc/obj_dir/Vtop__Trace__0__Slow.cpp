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
    tracep->declBit(c+439,"clk", false,-1);
    tracep->declBit(c+440,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+439,"clk", false,-1);
    tracep->declBit(c+440,"reset", false,-1);
    tracep->declBus(c+220,"pc", false,-1, 31,0);
    tracep->declBus(c+221,"pc_next", false,-1, 31,0);
    tracep->declBus(c+222,"instr", false,-1, 31,0);
    tracep->declBus(c+223,"instr_type", false,-1, 11,0);
    tracep->declBus(c+224,"opcode", false,-1, 6,0);
    tracep->declBus(c+225,"funct3", false,-1, 2,0);
    tracep->declBus(c+226,"funct7", false,-1, 6,0);
    tracep->declBus(c+227,"rs1", false,-1, 4,0);
    tracep->declBus(c+228,"rs2", false,-1, 4,0);
    tracep->declBus(c+229,"rd", false,-1, 4,0);
    tracep->declBus(c+230,"imm", false,-1, 31,0);
    tracep->declBus(c+231,"I_imm", false,-1, 11,0);
    tracep->declBus(c+232,"J_imm", false,-1, 19,0);
    tracep->declBus(c+233,"B_imm", false,-1, 11,0);
    tracep->declBit(c+444,"R_imm", false,-1);
    tracep->declBus(c+234,"S_imm", false,-1, 11,0);
    tracep->declBus(c+235,"U_imm", false,-1, 19,0);
    tracep->declBus(c+236,"I_ex", false,-1, 31,0);
    tracep->declBus(c+237,"S_ex", false,-1, 31,0);
    tracep->declBus(c+238,"J_ex", false,-1, 31,0);
    tracep->declBus(c+239,"U_ex", false,-1, 31,0);
    tracep->declBus(c+240,"B_ex", false,-1, 31,0);
    tracep->declBus(c+445,"R_ex", false,-1, 31,0);
    tracep->declBus(c+446,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+241,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+242,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+441,"rd_data", false,-1, 31,0);
    tracep->declBus(c+243,"mcause_data", false,-1, 31,0);
    tracep->declBus(c+244,"mepc_data", false,-1, 31,0);
    tracep->declBus(c+245,"mtvec_data", false,-1, 31,0);
    tracep->declBus(c+246,"mstatus_data", false,-1, 31,0);
    tracep->declBus(c+247,"csr", false,-1, 11,0);
    tracep->declBus(c+248,"t", false,-1, 31,0);
    tracep->declBus(c+249,"rom_index", false,-1, 31,0);
    tracep->declBit(c+250,"wen", false,-1);
    tracep->declBus(c+251,"opcode_funct3", false,-1, 9,0);
    tracep->declBus(c+252,"opcode_funct3_funct7", false,-1, 16,0);
    tracep->declBus(c+253,"a0_val", false,-1, 31,0);
    tracep->declBus(c+254,"csr_val", false,-1, 31,0);
    tracep->declBus(c+442,"rdata", false,-1, 31,0);
    tracep->declBus(c+443,"wdata", false,-1, 31,0);
    tracep->declBus(c+255,"raddr", false,-1, 31,0);
    tracep->declBus(c+256,"waddr", false,-1, 31,0);
    tracep->declBus(c+257,"wmask", false,-1, 7,0);
    tracep->declBus(c+258,"wmask_sh", false,-1, 7,0);
    tracep->declBit(c+259,"valid", false,-1);
    tracep->declBit(c+260,"wen_ram", false,-1);
    tracep->declBit(c+447,"is_lui", false,-1);
    tracep->declBus(c+261,"instr_type_tmp", false,-1, 11,0);
    tracep->declBus(c+262,"instr_type_nofunct", false,-1, 11,0);
    tracep->declBus(c+263,"instr_type_funct7", false,-1, 11,0);
    tracep->declBus(c+264,"instr_type_csr", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+261,"out", false,-1, 11,0);
    tracep->declBus(c+251,"key", false,-1, 9,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declArray(c+452,"lut", false,-1, 527,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+449,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+261,"out", false,-1, 11,0);
    tracep->declBus(c+251,"key", false,-1, 9,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declArray(c+452,"lut", false,-1, 527,0);
    tracep->declBus(c+470,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 21,0);
    }
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+25+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+49+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+265,"lut_out", false,-1, 11,0);
    tracep->declBit(c+266,"hit", false,-1);
    tracep->declBus(c+471,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+472,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+230,"out", false,-1, 31,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+445,"default_out", false,-1, 31,0);
    tracep->declArray(c+267,"lut", false,-1, 1759,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+472,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+230,"out", false,-1, 31,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+445,"default_out", false,-1, 31,0);
    tracep->declArray(c+267,"lut", false,-1, 1759,0);
    tracep->declBus(c+474,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+322,"lut_out", false,-1, 31,0);
    tracep->declBit(c+323,"hit", false,-1);
    tracep->declBus(c+475,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i10 ");
    tracep->declBus(c+476,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+248,"out", false,-1, 31,0);
    tracep->declBus(c+247,"key", false,-1, 11,0);
    tracep->declBus(c+445,"default_out", false,-1, 31,0);
    tracep->declArray(c+324,"lut", false,-1, 175,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+476,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+248,"out", false,-1, 31,0);
    tracep->declBus(c+247,"key", false,-1, 11,0);
    tracep->declBus(c+445,"default_out", false,-1, 31,0);
    tracep->declArray(c+324,"lut", false,-1, 175,0);
    tracep->declBus(c+474,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+330+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+73+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+338+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+342,"lut_out", false,-1, 31,0);
    tracep->declBit(c+343,"hit", false,-1);
    tracep->declBus(c+477,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+478,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+250,"out", false,-1, 0,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+479,"default_out", false,-1, 0,0);
    tracep->declArray(c+480,"lut", false,-1, 142,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+478,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+250,"out", false,-1, 0,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+479,"default_out", false,-1, 0,0);
    tracep->declArray(c+480,"lut", false,-1, 142,0);
    tracep->declBus(c+485,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+77+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+88+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+99+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+344,"lut_out", false,-1, 0,0);
    tracep->declBit(c+345,"hit", false,-1);
    tracep->declBus(c+486,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+449,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+221,"out", false,-1, 31,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+346,"default_out", false,-1, 31,0);
    tracep->declArray(c+347,"lut", false,-1, 439,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+449,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+473,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+221,"out", false,-1, 31,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+346,"default_out", false,-1, 31,0);
    tracep->declArray(c+347,"lut", false,-1, 439,0);
    tracep->declBus(c+474,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+361+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+110+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+381+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+391,"lut_out", false,-1, 31,0);
    tracep->declBit(c+392,"hit", false,-1);
    tracep->declBus(c+487,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+488,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+259,"out", false,-1, 0,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+444,"default_out", false,-1, 0,0);
    tracep->declArray(c+489,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+488,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+259,"out", false,-1, 0,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+444,"default_out", false,-1, 0,0);
    tracep->declArray(c+489,"lut", false,-1, 103,0);
    tracep->declBus(c+485,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+120+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+128+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+136+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+393,"lut_out", false,-1, 0,0);
    tracep->declBit(c+394,"hit", false,-1);
    tracep->declBus(c+493,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i5 ");
    tracep->declBus(c+494,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+260,"out", false,-1, 0,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+444,"default_out", false,-1, 0,0);
    tracep->declQuad(c+495,"lut", false,-1, 38,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+494,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+450,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+260,"out", false,-1, 0,0);
    tracep->declBus(c+223,"key", false,-1, 11,0);
    tracep->declBus(c+444,"default_out", false,-1, 0,0);
    tracep->declQuad(c+495,"lut", false,-1, 38,0);
    tracep->declBus(c+485,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+144+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+147+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+150+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+395,"lut_out", false,-1, 0,0);
    tracep->declBit(c+396,"hit", false,-1);
    tracep->declBus(c+497,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i6 ");
    tracep->declBus(c+494,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+498,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+262,"out", false,-1, 11,0);
    tracep->declBus(c+224,"key", false,-1, 6,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declQuad(c+499,"lut", false,-1, 56,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+494,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+498,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+262,"out", false,-1, 11,0);
    tracep->declBus(c+224,"key", false,-1, 6,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declQuad(c+499,"lut", false,-1, 56,0);
    tracep->declBus(c+501,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+153+i*1,"pair_list", true,(i+0), 18,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+156+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+159+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+397,"lut_out", false,-1, 11,0);
    tracep->declBit(c+398,"hit", false,-1);
    tracep->declBus(c+497,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i7 ");
    tracep->declBus(c+478,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+502,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+263,"out", false,-1, 11,0);
    tracep->declBus(c+252,"key", false,-1, 16,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declArray(c+503,"lut", false,-1, 318,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+478,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+502,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+263,"out", false,-1, 11,0);
    tracep->declBus(c+252,"key", false,-1, 16,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declArray(c+503,"lut", false,-1, 318,0);
    tracep->declBus(c+513,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+162+i*1,"pair_list", true,(i+0), 28,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+173+i*1,"key_list", true,(i+0), 16,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+184+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+399,"lut_out", false,-1, 11,0);
    tracep->declBit(c+400,"hit", false,-1);
    tracep->declBus(c+486,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i8 ");
    tracep->declBus(c+514,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+473,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+264,"out", false,-1, 11,0);
    tracep->declBus(c+222,"key", false,-1, 31,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declArray(c+515,"lut", false,-1, 87,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+514,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+473,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+264,"out", false,-1, 11,0);
    tracep->declBus(c+222,"key", false,-1, 31,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declArray(c+515,"lut", false,-1, 87,0);
    tracep->declBus(c+474,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+195+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+199+i*1,"key_list", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+201+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+401,"lut_out", false,-1, 11,0);
    tracep->declBit(c+402,"hit", false,-1);
    tracep->declBus(c+518,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i9 ");
    tracep->declBus(c+476,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+473,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+247,"out", false,-1, 11,0);
    tracep->declBus(c+230,"key", false,-1, 31,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declArray(c+519,"lut", false,-1, 175,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+476,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+473,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+450,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+469,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+247,"out", false,-1, 11,0);
    tracep->declBus(c+230,"key", false,-1, 31,0);
    tracep->declBus(c+451,"default_out", false,-1, 11,0);
    tracep->declArray(c+519,"lut", false,-1, 175,0);
    tracep->declBus(c+474,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+203+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+211+i*1,"key_list", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+215+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+403,"lut_out", false,-1, 11,0);
    tracep->declBit(c+404,"hit", false,-1);
    tracep->declBus(c+477,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+473,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+241,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+242,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+255,"raddr", false,-1, 31,0);
    tracep->declBus(c+230,"imm", false,-1, 31,0);
    tracep->declBus(c+220,"pc", false,-1, 31,0);
    tracep->declBus(c+442,"rdata", false,-1, 31,0);
    tracep->declBus(c+248,"t", false,-1, 31,0);
    tracep->declBus(c+223,"alu_ctrl", false,-1, 11,0);
    tracep->declBus(c+441,"alu_out", false,-1, 31,0);
    tracep->declBus(c+405,"byte_idx", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_idu ");
    tracep->declBus(c+222,"instr", false,-1, 31,0);
    tracep->declBus(c+227,"rs1", false,-1, 4,0);
    tracep->declBus(c+228,"rs2", false,-1, 4,0);
    tracep->declBus(c+229,"rd", false,-1, 4,0);
    tracep->declBus(c+231,"I_imm", false,-1, 11,0);
    tracep->declBus(c+232,"J_imm", false,-1, 19,0);
    tracep->declBus(c+233,"B_imm", false,-1, 11,0);
    tracep->declBit(c+444,"R_imm", false,-1);
    tracep->declBus(c+234,"S_imm", false,-1, 11,0);
    tracep->declBus(c+235,"U_imm", false,-1, 19,0);
    tracep->declBus(c+225,"funct3", false,-1, 2,0);
    tracep->declBus(c+226,"funct7", false,-1, 6,0);
    tracep->declBus(c+224,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc ");
    tracep->declBus(c+525,"PC_START", false,-1, 31,0);
    tracep->declBit(c+439,"clk", false,-1);
    tracep->declBit(c+440,"reset", false,-1);
    tracep->declBus(c+221,"pc_in", false,-1, 31,0);
    tracep->declBus(c+220,"pc_out", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+473,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+525,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+439,"clk", false,-1);
    tracep->declBit(c+440,"rst", false,-1);
    tracep->declBus(c+221,"din", false,-1, 31,0);
    tracep->declBus(c+220,"dout", false,-1, 31,0);
    tracep->declBit(c+479,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_regfile ");
    tracep->declBus(c+526,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+473,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+439,"clk", false,-1);
    tracep->declBit(c+250,"wen", false,-1);
    tracep->declBus(c+441,"wdata", false,-1, 31,0);
    tracep->declBus(c+229,"waddr", false,-1, 4,0);
    tracep->declBus(c+227,"raddr1", false,-1, 4,0);
    tracep->declBus(c+241,"rdata1", false,-1, 31,0);
    tracep->declBus(c+228,"raddr2", false,-1, 4,0);
    tracep->declBus(c+242,"rdata2", false,-1, 31,0);
    tracep->declBus(c+253,"a0_val", false,-1, 31,0);
    tracep->declBus(c+223,"instr_type", false,-1, 11,0);
    tracep->declBus(c+247,"csr", false,-1, 11,0);
    tracep->declBus(c+220,"epc", false,-1, 31,0);
    tracep->declBus(c+254,"csr_val", false,-1, 31,0);
    tracep->declBus(c+243,"mcause_data", false,-1, 31,0);
    tracep->declBus(c+244,"mepc_data", false,-1, 31,0);
    tracep->declBus(c+246,"mstatus_data", false,-1, 31,0);
    tracep->declBus(c+245,"mtvec_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+406+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+243,"mcause", false,-1, 31,0);
    tracep->declBus(c+244,"mepc", false,-1, 31,0);
    tracep->declBus(c+246,"mstatus", false,-1, 31,0);
    tracep->declBus(c+245,"mtvec", false,-1, 31,0);
    tracep->declBus(c+438,"epc_val", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+219,"i", false,-1, 31,0);
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

extern const VlWide<17>/*543:0*/ Vtop__ConstPool__CONST_hcfa051ba_0;
extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_h2ac0b763_0;

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<6>/*191:0*/ __Vtemp_hfe816ff6__0;
    VlWide<14>/*447:0*/ __Vtemp_h578d3fd9__0;
    VlWide<5>/*159:0*/ __Vtemp_hd67b6bdc__0;
    VlWide<4>/*127:0*/ __Vtemp_hb716f3c3__0;
    VlWide<3>/*95:0*/ __Vtemp_h21d89b9f__0;
    VlWide<6>/*191:0*/ __Vtemp_h4d72b146__0;
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
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[22]),22);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[23]),22);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[4]),10);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[5]),10);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[6]),10);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[7]),10);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[8]),10);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[9]),10);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[10]),10);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[11]),10);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[12]),10);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[13]),10);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[14]),10);
    bufp->fullSData(oldp+40,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[15]),10);
    bufp->fullSData(oldp+41,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[16]),10);
    bufp->fullSData(oldp+42,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[17]),10);
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[18]),10);
    bufp->fullSData(oldp+44,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[19]),10);
    bufp->fullSData(oldp+45,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[20]),10);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[21]),10);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[22]),10);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[23]),10);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+51,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3]),12);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[4]),12);
    bufp->fullSData(oldp+54,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[5]),12);
    bufp->fullSData(oldp+55,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[6]),12);
    bufp->fullSData(oldp+56,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[7]),12);
    bufp->fullSData(oldp+57,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[8]),12);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[9]),12);
    bufp->fullSData(oldp+59,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[10]),12);
    bufp->fullSData(oldp+60,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[11]),12);
    bufp->fullSData(oldp+61,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[12]),12);
    bufp->fullSData(oldp+62,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[13]),12);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[14]),12);
    bufp->fullSData(oldp+64,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[15]),12);
    bufp->fullSData(oldp+65,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[16]),12);
    bufp->fullSData(oldp+66,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[17]),12);
    bufp->fullSData(oldp+67,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[18]),12);
    bufp->fullSData(oldp+68,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[19]),12);
    bufp->fullSData(oldp+69,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[20]),12);
    bufp->fullSData(oldp+70,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[21]),12);
    bufp->fullSData(oldp+71,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[22]),12);
    bufp->fullSData(oldp+72,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[23]),12);
    bufp->fullSData(oldp+73,(vlSelf->top__DOT__i10__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__i10__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+75,(vlSelf->top__DOT__i10__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+76,(vlSelf->top__DOT__i10__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+77,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+78,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+79,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+80,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+81,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+82,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+83,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+84,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+85,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[8]),13);
    bufp->fullSData(oldp+86,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[9]),13);
    bufp->fullSData(oldp+87,(vlSelf->top__DOT__i2__DOT__i0__DOT__pair_list[10]),13);
    bufp->fullSData(oldp+88,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+89,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+90,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+91,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+92,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+93,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+94,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+95,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[7]),12);
    bufp->fullSData(oldp+96,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[8]),12);
    bufp->fullSData(oldp+97,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[9]),12);
    bufp->fullSData(oldp+98,(vlSelf->top__DOT__i2__DOT__i0__DOT__key_list[10]),12);
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[7]));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[8]));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[9]));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__i2__DOT__i0__DOT__data_list[10]));
    bufp->fullSData(oldp+110,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+111,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+112,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+113,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+114,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+115,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+116,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+117,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[7]),12);
    bufp->fullSData(oldp+118,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[8]),12);
    bufp->fullSData(oldp+119,(vlSelf->top__DOT__i3__DOT__i0__DOT__key_list[9]),12);
    bufp->fullSData(oldp+120,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+121,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+122,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+123,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+124,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+125,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+126,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+127,(vlSelf->top__DOT__i4__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+128,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+129,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+130,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+131,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+132,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+133,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+134,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+135,(vlSelf->top__DOT__i4__DOT__i0__DOT__key_list[7]),12);
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__i4__DOT__i0__DOT__data_list[7]));
    bufp->fullSData(oldp+144,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+145,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+146,(vlSelf->top__DOT__i5__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+147,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+148,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+149,(vlSelf->top__DOT__i5__DOT__i0__DOT__key_list[2]),12);
    bufp->fullBit(oldp+150,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+151,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__i5__DOT__i0__DOT__data_list[2]));
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__i6__DOT__i0__DOT__pair_list[0]),19);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__i6__DOT__i0__DOT__pair_list[1]),19);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__i6__DOT__i0__DOT__pair_list[2]),19);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__i6__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__i6__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__i6__DOT__i0__DOT__key_list[2]),7);
    bufp->fullSData(oldp+159,(vlSelf->top__DOT__i6__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+160,(vlSelf->top__DOT__i6__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+161,(vlSelf->top__DOT__i6__DOT__i0__DOT__data_list[2]),12);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[0]),29);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[1]),29);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[2]),29);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[3]),29);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[4]),29);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[5]),29);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[6]),29);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[7]),29);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[8]),29);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[9]),29);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__i7__DOT__i0__DOT__pair_list[10]),29);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[0]),17);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[1]),17);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[2]),17);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[3]),17);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[4]),17);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[5]),17);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[6]),17);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[7]),17);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[8]),17);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[9]),17);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__i7__DOT__i0__DOT__key_list[10]),17);
    bufp->fullSData(oldp+184,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+185,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+186,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+187,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[3]),12);
    bufp->fullSData(oldp+188,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[4]),12);
    bufp->fullSData(oldp+189,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[5]),12);
    bufp->fullSData(oldp+190,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[6]),12);
    bufp->fullSData(oldp+191,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[7]),12);
    bufp->fullSData(oldp+192,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[8]),12);
    bufp->fullSData(oldp+193,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[9]),12);
    bufp->fullSData(oldp+194,(vlSelf->top__DOT__i7__DOT__i0__DOT__data_list[10]),12);
    bufp->fullQData(oldp+195,(vlSelf->top__DOT__i8__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+197,(vlSelf->top__DOT__i8__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__i8__DOT__i0__DOT__key_list[0]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__i8__DOT__i0__DOT__key_list[1]),32);
    bufp->fullSData(oldp+201,(vlSelf->top__DOT__i8__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+202,(vlSelf->top__DOT__i8__DOT__i0__DOT__data_list[1]),12);
    bufp->fullQData(oldp+203,(vlSelf->top__DOT__i9__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+205,(vlSelf->top__DOT__i9__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+207,(vlSelf->top__DOT__i9__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+209,(vlSelf->top__DOT__i9__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__i9__DOT__i0__DOT__key_list[0]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__i9__DOT__i0__DOT__key_list[1]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__i9__DOT__i0__DOT__key_list[2]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__i9__DOT__i0__DOT__key_list[3]),32);
    bufp->fullSData(oldp+215,(vlSelf->top__DOT__i9__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+216,(vlSelf->top__DOT__i9__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+217,(vlSelf->top__DOT__i9__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+218,(vlSelf->top__DOT__i9__DOT__i0__DOT__data_list[3]),12);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__u_regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__pc_next),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__instr),32);
    bufp->fullSData(oldp+223,(vlSelf->top__DOT__instr_type),12);
    bufp->fullCData(oldp+224,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+225,((7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+226,((vlSelf->top__DOT__instr 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+227,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+228,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+229,((0x1fU & (vlSelf->top__DOT__instr 
                                        >> 7U))),5);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__imm),32);
    bufp->fullSData(oldp+231,((vlSelf->top__DOT__instr 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__J_imm),20);
    bufp->fullSData(oldp+233,(vlSelf->top__DOT__B_imm),12);
    bufp->fullSData(oldp+234,(vlSelf->top__DOT__S_imm),12);
    bufp->fullIData(oldp+235,((vlSelf->top__DOT__instr 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__I_ex),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__S_ex),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__J_ex),32);
    bufp->fullIData(oldp+239,((0xfffff000U & vlSelf->top__DOT__instr)),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__B_ex),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__rs2_data),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__u_regfile__DOT__mcause),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__u_regfile__DOT__mepc),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__u_regfile__DOT__mtvec),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__u_regfile__DOT__mstatus),32);
    bufp->fullSData(oldp+247,(vlSelf->top__DOT__csr),12);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__t),32);
    bufp->fullIData(oldp+249,(((0x80000000U > vlSelf->top__DOT__pc)
                                ? (vlSelf->top__DOT__pc 
                                   >> 2U) : ((vlSelf->top__DOT__pc 
                                              - (IData)(0x80000000U)) 
                                             >> 2U))),32);
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__wen));
    bufp->fullSData(oldp+251,(vlSelf->top__DOT__opcode_funct3),10);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__opcode_funct3_funct7),17);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__u_regfile__DOT__rf
                              [0xaU]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__csr_val),32);
    bufp->fullIData(oldp+255,(((IData)(vlSelf->top__DOT__valid)
                                ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                                : 0x80000000U)),32);
    bufp->fullIData(oldp+256,(((IData)(vlSelf->top__DOT__wen_ram)
                                ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                                : 0x80000000U)),32);
    bufp->fullCData(oldp+257,(((0x10U == (IData)(vlSelf->top__DOT__instr_type))
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
    bufp->fullCData(oldp+258,(((IData)(vlSelf->top__DOT____VdfgTmp_hb37fddff__0)
                                ? 0xcU : 3U)),8);
    bufp->fullBit(oldp+259,(vlSelf->top__DOT__valid));
    bufp->fullBit(oldp+260,(vlSelf->top__DOT__wen_ram));
    bufp->fullSData(oldp+261,(vlSelf->top__DOT__instr_type_tmp),12);
    bufp->fullSData(oldp+262,(vlSelf->top__DOT__instr_type_nofunct),12);
    bufp->fullSData(oldp+263,(vlSelf->top__DOT__instr_type_funct7),12);
    bufp->fullSData(oldp+264,(vlSelf->top__DOT__instr_type_csr),12);
    bufp->fullSData(oldp+265,(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+266,(vlSelf->top__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+267,(vlSelf->top__DOT____Vcellinp__i1____pinNumber4),1760);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+323,(vlSelf->top__DOT__i1__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+324,(__Vtemp_hfe816ff6__0),176);
    bufp->fullQData(oldp+330,(vlSelf->top__DOT__i10__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+332,(vlSelf->top__DOT__i10__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+334,(vlSelf->top__DOT__i10__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+336,(vlSelf->top__DOT__i10__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullIData(oldp+338,(vlSelf->top__DOT__i10__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+339,(vlSelf->top__DOT__i10__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+340,(vlSelf->top__DOT__i10__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+341,(vlSelf->top__DOT__i10__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+342,(vlSelf->top__DOT__i10__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+343,(vlSelf->top__DOT__i10__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+344,(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+346,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
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
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)) 
                                             << 0x18U) 
                                            | (vlSelf->top__DOT__u_regfile__DOT__mtvec 
                                               >> 0x14U)));
    __Vtemp_h578d3fd9__0[3U] = (0x1c000000U | (((vlSelf->top__DOT__rs1_data 
                                                 < vlSelf->top__DOT__rs2_data)
                                                 ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)) 
                                               >> 8U));
    __Vtemp_h578d3fd9__0[4U] = (((vlSelf->top__DOT__rs1_data 
                                  >= vlSelf->top__DOT__rs2_data)
                                  ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                  : ((IData)(4U) + vlSelf->top__DOT__pc)) 
                                << 4U);
    __Vtemp_h578d3fd9__0[5U] = (0x1b0U | (((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                             ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                             : ((IData)(4U) 
                                                + vlSelf->top__DOT__pc)) 
                                           << 0x10U) 
                                          | (((vlSelf->top__DOT__rs1_data 
                                               >= vlSelf->top__DOT__rs2_data)
                                               ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)) 
                                             >> 0x1cU)));
    __Vtemp_h578d3fd9__0[6U] = (0x180000U | (((VL_GTES_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                                ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                : ((IData)(4U) 
                                                   + vlSelf->top__DOT__pc)) 
                                              << 0x1cU) 
                                             | ((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                                  ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)) 
                                                >> 0x10U)));
    __Vtemp_h578d3fd9__0[7U] = (0x70000000U | ((VL_GTES_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
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
                                             : ((IData)(4U) 
                                                + vlSelf->top__DOT__pc)) 
                                           << 0x14U) 
                                          | (((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                               ? ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)
                                               : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0) 
                                             >> 0x18U)));
    __Vtemp_h578d3fd9__0[0xaU] = (0xd00000U | (((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                                 ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)) 
                                               >> 0xcU));
    __Vtemp_h578d3fd9__0[0xbU] = ((0x80000000U > vlSelf->top__DOT__pc)
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
                                               ? ((IData)(0x80000000U) 
                                                  + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                               : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0) 
                                             >> 0x14U));
    bufp->fullWData(oldp+347,(__Vtemp_h578d3fd9__0),440);
    bufp->fullQData(oldp+361,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+363,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+365,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+367,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullQData(oldp+369,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[4]),44);
    bufp->fullQData(oldp+371,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[5]),44);
    bufp->fullQData(oldp+373,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[6]),44);
    bufp->fullQData(oldp+375,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[7]),44);
    bufp->fullQData(oldp+377,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[8]),44);
    bufp->fullQData(oldp+379,(vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[9]),44);
    bufp->fullIData(oldp+381,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+382,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+383,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+384,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+385,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+386,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+387,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+388,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+389,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+390,(vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+391,(vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+392,(vlSelf->top__DOT__i3__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+393,(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+394,(vlSelf->top__DOT__i4__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+395,(vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+396,(vlSelf->top__DOT__i5__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+397,(vlSelf->top__DOT__i6__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+398,(vlSelf->top__DOT__i6__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+399,(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+400,(vlSelf->top__DOT__i7__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+401,(vlSelf->top__DOT__i8__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+402,(vlSelf->top__DOT__i8__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+403,(vlSelf->top__DOT__i9__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+404,(vlSelf->top__DOT__i9__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+405,(vlSelf->top__DOT__u_alu__DOT__byte_idx),2);
    bufp->fullIData(oldp+406,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+407,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+408,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+409,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+410,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+411,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+412,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+413,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+414,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+415,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+416,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+417,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+418,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+419,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+420,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+421,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+422,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+423,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+424,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+425,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+426,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+427,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+428,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+429,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+430,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+431,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+432,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+433,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+434,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+435,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+436,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+437,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+438,(((0U == vlSelf->top__DOT__u_regfile__DOT__rf
                                [0xaU]) ? ((IData)(4U) 
                                           + vlSelf->top__DOT__pc)
                                : vlSelf->top__DOT__pc)),32);
    bufp->fullBit(oldp+439,(vlSelf->clk));
    bufp->fullBit(oldp+440,(vlSelf->reset));
    bufp->fullIData(oldp+441,(vlSelf->top__DOT__rd_data),32);
    bufp->fullIData(oldp+442,(vlSelf->top__DOT__rdata),32);
    bufp->fullIData(oldp+443,(((3U == (IData)(vlSelf->top__DOT__instr_type))
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
    bufp->fullBit(oldp+444,(0U));
    bufp->fullIData(oldp+445,(0U),32);
    bufp->fullIData(oldp+446,(vlSelf->top__DOT__imm_ex),32);
    bufp->fullBit(oldp+447,(vlSelf->top__DOT__is_lui));
    bufp->fullIData(oldp+448,(0x18U),32);
    bufp->fullIData(oldp+449,(0xaU),32);
    bufp->fullIData(oldp+450,(0xcU),32);
    bufp->fullSData(oldp+451,(0U),12);
    bufp->fullWData(oldp+452,(Vtop__ConstPool__CONST_hcfa051ba_0),528);
    bufp->fullIData(oldp+469,(1U),32);
    bufp->fullIData(oldp+470,(0x16U),32);
    bufp->fullIData(oldp+471,(0x18U),32);
    bufp->fullIData(oldp+472,(0x28U),32);
    bufp->fullIData(oldp+473,(0x20U),32);
    bufp->fullIData(oldp+474,(0x2cU),32);
    bufp->fullIData(oldp+475,(0x28U),32);
    bufp->fullIData(oldp+476,(4U),32);
    bufp->fullIData(oldp+477,(4U),32);
    bufp->fullIData(oldp+478,(0xbU),32);
    bufp->fullBit(oldp+479,(1U));
    __Vtemp_hd67b6bdc__0[0U] = 0xd8070048U;
    __Vtemp_hd67b6bdc__0[1U] = 0x2e01800U;
    __Vtemp_hd67b6bdc__0[2U] = 0xd0070040U;
    __Vtemp_hd67b6bdc__0[3U] = 0x1000e00U;
    __Vtemp_hd67b6bdc__0[4U] = 0x18U;
    bufp->fullWData(oldp+480,(__Vtemp_hd67b6bdc__0),143);
    bufp->fullIData(oldp+485,(0xdU),32);
    bufp->fullIData(oldp+486,(0xbU),32);
    bufp->fullIData(oldp+487,(0xaU),32);
    bufp->fullIData(oldp+488,(8U),32);
    __Vtemp_hb716f3c3__0[0U] = 0xfc082047U;
    __Vtemp_hb716f3c3__0[1U] = 0xf01080U;
    __Vtemp_hb716f3c3__0[2U] = 0x2804400eU;
    __Vtemp_hb716f3c3__0[3U] = 0U;
    bufp->fullWData(oldp+489,(__Vtemp_hb716f3c3__0),104);
    bufp->fullIData(oldp+493,(8U),32);
    bufp->fullIData(oldp+494,(3U),32);
    bufp->fullQData(oldp+495,(0x1c01e021ULL),39);
    bufp->fullIData(oldp+497,(3U),32);
    bufp->fullIData(oldp+498,(7U),32);
    bufp->fullQData(oldp+499,(0xdc018b804ef00aULL),57);
    bufp->fullIData(oldp+501,(0x13U),32);
    bufp->fullIData(oldp+502,(0x11U),32);
    bufp->fullWData(oldp+503,(Vtop__ConstPool__CONST_h2ac0b763_0),319);
    bufp->fullIData(oldp+513,(0x1dU),32);
    bufp->fullIData(oldp+514,(2U),32);
    __Vtemp_h21d89b9f__0[0U] = 0x73027U;
    __Vtemp_h21d89b9f__0[1U] = 0x73024302U;
    __Vtemp_h21d89b9f__0[2U] = 0U;
    bufp->fullWData(oldp+515,(__Vtemp_h21d89b9f__0),88);
    bufp->fullIData(oldp+518,(2U),32);
    __Vtemp_h4d72b146__0[0U] = 0x305004U;
    __Vtemp_h4d72b146__0[1U] = 0x3000U;
    __Vtemp_h4d72b146__0[2U] = 0x2000003U;
    __Vtemp_h4d72b146__0[3U] = 0x3420U;
    __Vtemp_h4d72b146__0[4U] = 0x3410010U;
    __Vtemp_h4d72b146__0[5U] = 0U;
    bufp->fullWData(oldp+519,(__Vtemp_h4d72b146__0),176);
    bufp->fullIData(oldp+525,(0x80000000U),32);
    bufp->fullIData(oldp+526,(5U),32);
}
