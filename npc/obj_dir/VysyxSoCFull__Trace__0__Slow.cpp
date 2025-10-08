// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+890,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+891,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+890,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+891,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+603,"spi_sck", false,-1);
    tracep->declBus(c+604,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+835,"spi_mosi", false,-1);
    tracep->declBit(c+892,"spi_miso", false,-1);
    tracep->declBit(c+890,"uart_rx", false,-1);
    tracep->declBit(c+891,"uart_tx", false,-1);
    tracep->declBit(c+893,"sdram_clk", false,-1);
    tracep->declBit(c+836,"sdram_cke", false,-1);
    tracep->declBit(c+837,"sdram_cs", false,-1);
    tracep->declBit(c+838,"sdram_ras", false,-1);
    tracep->declBit(c+839,"sdram_cas", false,-1);
    tracep->declBit(c+840,"sdram_we", false,-1);
    tracep->declBus(c+841,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+842,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+843,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+894,"sdram_dq", false,-1, 15,0);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBus(c+853,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+225,"in_psel", false,-1);
    tracep->declBit(c+226,"in_penable", false,-1);
    tracep->declBus(c+920,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+227,"in_pwrite", false,-1);
    tracep->declBus(c+829,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+877,"in_pready", false,-1);
    tracep->declBus(c+878,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+921,"in_pslverr", false,-1);
    tracep->declBus(c+853,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+225,"out_psel", false,-1);
    tracep->declBit(c+226,"out_penable", false,-1);
    tracep->declBus(c+920,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+227,"out_pwrite", false,-1);
    tracep->declBus(c+829,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+877,"out_pready", false,-1);
    tracep->declBus(c+878,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+921,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+225,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+226,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+227,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+853,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+829,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+877,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+921,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+878,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+895,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+896,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+227,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+853,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+920,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+829,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+605,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+921,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+606,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+854,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+855,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+227,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+856,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+920,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+829,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+857,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+921,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+897,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+898,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+899,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+227,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+858,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+920,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+829,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+900,"auto_anon_out_0_pready", false,-1);
    tracep->declBus(c+901,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+859,"sel_0", false,-1);
    tracep->declBit(c+860,"sel_1", false,-1);
    tracep->declBit(c+861,"sel_2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+229,"auto_in_awready", false,-1);
    tracep->declBit(c+230,"auto_in_awvalid", false,-1);
    tracep->declBus(c+231,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+232,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+233,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+234,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+229,"auto_in_wready", false,-1);
    tracep->declBit(c+235,"auto_in_wvalid", false,-1);
    tracep->declBus(c+236,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+237,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+238,"auto_in_bready", false,-1);
    tracep->declBit(c+879,"auto_in_bvalid", false,-1);
    tracep->declBus(c+239,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+240,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+241,"auto_in_arready", false,-1);
    tracep->declBit(c+242,"auto_in_arvalid", false,-1);
    tracep->declBus(c+243,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+244,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+245,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+246,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+247,"auto_in_rready", false,-1);
    tracep->declBit(c+880,"auto_in_rvalid", false,-1);
    tracep->declBus(c+248,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+240,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+225,"auto_out_psel", false,-1);
    tracep->declBit(c+226,"auto_out_penable", false,-1);
    tracep->declBit(c+227,"auto_out_pwrite", false,-1);
    tracep->declBus(c+853,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+829,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+877,"auto_out_pready", false,-1);
    tracep->declBit(c+921,"auto_out_pslverr", false,-1);
    tracep->declBus(c+878,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+226,"nodeOut_penable", false,-1);
    tracep->declBus(c+249,"state", false,-1, 1,0);
    tracep->declBit(c+241,"accept_read", false,-1);
    tracep->declBit(c+229,"accept_write", false,-1);
    tracep->declBit(c+250,"is_write_r", false,-1);
    tracep->declBit(c+227,"is_write", false,-1);
    tracep->declBus(c+248,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+239,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+251,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+252,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+253,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+254,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+922,"resp", false,-1, 1,0);
    tracep->declBus(c+255,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+240,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+880,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+256,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+879,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+257,"auto_in_awready", false,-1);
    tracep->declBit(c+258,"auto_in_awvalid", false,-1);
    tracep->declBus(c+923,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+924,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+260,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+922,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+261,"auto_in_wready", false,-1);
    tracep->declBit(c+262,"auto_in_wvalid", false,-1);
    tracep->declBus(c+263,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+264,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+925,"auto_in_wlast", false,-1);
    tracep->declBit(c+265,"auto_in_bready", false,-1);
    tracep->declBit(c+266,"auto_in_bvalid", false,-1);
    tracep->declBus(c+267,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+268,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_in_arready", false,-1);
    tracep->declBit(c+270,"auto_in_arvalid", false,-1);
    tracep->declBus(c+923,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+924,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+272,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+922,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+273,"auto_in_rready", false,-1);
    tracep->declBit(c+274,"auto_in_rvalid", false,-1);
    tracep->declBus(c+275,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+276,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+277,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+278,"auto_in_rlast", false,-1);
    tracep->declBit(c+229,"auto_out_awready", false,-1);
    tracep->declBit(c+230,"auto_out_awvalid", false,-1);
    tracep->declBus(c+231,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+232,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+233,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+234,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+229,"auto_out_wready", false,-1);
    tracep->declBit(c+235,"auto_out_wvalid", false,-1);
    tracep->declBus(c+236,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+237,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+238,"auto_out_bready", false,-1);
    tracep->declBit(c+879,"auto_out_bvalid", false,-1);
    tracep->declBus(c+239,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+240,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+241,"auto_out_arready", false,-1);
    tracep->declBit(c+242,"auto_out_arvalid", false,-1);
    tracep->declBus(c+243,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+244,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+245,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+246,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+247,"auto_out_rready", false,-1);
    tracep->declBit(c+880,"auto_out_rvalid", false,-1);
    tracep->declBus(c+248,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+902,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+240,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+238,"io_enq_ready", false,-1);
    tracep->declBit(c+879,"io_enq_valid", false,-1);
    tracep->declBus(c+239,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+240,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+265,"io_deq_ready", false,-1);
    tracep->declBit(c+266,"io_deq_valid", false,-1);
    tracep->declBus(c+267,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+268,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+279,"wrap", false,-1);
    tracep->declBit(c+280,"wrap_1", false,-1);
    tracep->declBit(c+281,"maybe_full", false,-1);
    tracep->declBit(c+282,"ptr_match", false,-1);
    tracep->declBit(c+283,"empty", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+881,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+280,"R0_addr", false,-1);
    tracep->declBit(c+925,"R0_en", false,-1);
    tracep->declBit(c+888,"R0_clk", false,-1);
    tracep->declBus(c+285,"R0_data", false,-1, 5,0);
    tracep->declBit(c+279,"W0_addr", false,-1);
    tracep->declBit(c+881,"W0_en", false,-1);
    tracep->declBit(c+888,"W0_clk", false,-1);
    tracep->declBus(c+286,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+287+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+289,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+880,"io_enq_valid", false,-1);
    tracep->declBus(c+248,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+902,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+240,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+273,"io_deq_ready", false,-1);
    tracep->declBit(c+274,"io_deq_valid", false,-1);
    tracep->declBus(c+275,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+276,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+277,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+278,"io_deq_bits_last", false,-1);
    tracep->declBit(c+290,"wrap", false,-1);
    tracep->declBit(c+291,"wrap_1", false,-1);
    tracep->declBit(c+292,"maybe_full", false,-1);
    tracep->declBit(c+293,"ptr_match", false,-1);
    tracep->declBit(c+294,"empty", false,-1);
    tracep->declBit(c+295,"full", false,-1);
    tracep->declBit(c+882,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+291,"R0_addr", false,-1);
    tracep->declBit(c+925,"R0_en", false,-1);
    tracep->declBit(c+888,"R0_clk", false,-1);
    tracep->declQuad(c+296,"R0_data", false,-1, 38,0);
    tracep->declBit(c+290,"W0_addr", false,-1);
    tracep->declBit(c+882,"W0_en", false,-1);
    tracep->declBit(c+888,"W0_clk", false,-1);
    tracep->declQuad(c+903,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+298+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+302,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+270,"io_enq_valid", false,-1);
    tracep->declBus(c+923,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+271,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+924,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+272,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+922,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+241,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBus(c+243,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+244,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+245,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+246,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+303,"wrap", false,-1);
    tracep->declBit(c+304,"wrap_1", false,-1);
    tracep->declBit(c+305,"maybe_full", false,-1);
    tracep->declBit(c+306,"ptr_match", false,-1);
    tracep->declBit(c+307,"empty", false,-1);
    tracep->declBit(c+308,"full", false,-1);
    tracep->declBit(c+309,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+304,"R0_addr", false,-1);
    tracep->declBit(c+925,"R0_en", false,-1);
    tracep->declBit(c+888,"R0_clk", false,-1);
    tracep->declQuad(c+310,"R0_data", false,-1, 46,0);
    tracep->declBit(c+303,"W0_addr", false,-1);
    tracep->declBit(c+309,"W0_en", false,-1);
    tracep->declBit(c+888,"W0_clk", false,-1);
    tracep->declQuad(c+312,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+314+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+258,"io_enq_valid", false,-1);
    tracep->declBus(c+923,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+259,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+924,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+260,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+922,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+229,"io_deq_ready", false,-1);
    tracep->declBit(c+230,"io_deq_valid", false,-1);
    tracep->declBus(c+231,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+232,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+233,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+234,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+319,"wrap", false,-1);
    tracep->declBit(c+320,"wrap_1", false,-1);
    tracep->declBit(c+321,"maybe_full", false,-1);
    tracep->declBit(c+322,"ptr_match", false,-1);
    tracep->declBit(c+323,"empty", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+320,"R0_addr", false,-1);
    tracep->declBit(c+925,"R0_en", false,-1);
    tracep->declBit(c+888,"R0_clk", false,-1);
    tracep->declQuad(c+326,"R0_data", false,-1, 46,0);
    tracep->declBit(c+319,"W0_addr", false,-1);
    tracep->declBit(c+325,"W0_en", false,-1);
    tracep->declBit(c+888,"W0_clk", false,-1);
    tracep->declQuad(c+328,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+330+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+262,"io_enq_valid", false,-1);
    tracep->declBus(c+263,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+264,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+925,"io_enq_bits_last", false,-1);
    tracep->declBit(c+229,"io_deq_ready", false,-1);
    tracep->declBit(c+235,"io_deq_valid", false,-1);
    tracep->declBus(c+236,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+237,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+335,"wrap", false,-1);
    tracep->declBit(c+336,"wrap_1", false,-1);
    tracep->declBit(c+337,"maybe_full", false,-1);
    tracep->declBit(c+338,"ptr_match", false,-1);
    tracep->declBit(c+339,"empty", false,-1);
    tracep->declBit(c+340,"full", false,-1);
    tracep->declBit(c+341,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+336,"R0_addr", false,-1);
    tracep->declBit(c+925,"R0_en", false,-1);
    tracep->declBit(c+888,"R0_clk", false,-1);
    tracep->declQuad(c+342,"R0_data", false,-1, 35,0);
    tracep->declBit(c+335,"W0_addr", false,-1);
    tracep->declBit(c+341,"W0_en", false,-1);
    tracep->declBit(c+888,"W0_clk", false,-1);
    tracep->declQuad(c+344,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+346+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+257,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+258,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+923,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+924,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+260,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+261,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+262,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+263,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+264,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+925,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+265,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+266,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+267,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+268,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+270,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+923,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+924,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+272,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+273,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+274,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+275,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+276,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+277,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+278,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+257,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+258,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+923,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+924,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+260,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+261,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+262,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+263,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+264,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+925,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+265,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+266,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+267,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+268,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+270,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+923,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+924,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+272,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+273,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+274,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+275,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+276,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+277,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+278,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+905,"reset", false,-1);
    tracep->declBit(c+257,"auto_master_out_awready", false,-1);
    tracep->declBit(c+258,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+923,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+259,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+924,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+260,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+922,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+261,"auto_master_out_wready", false,-1);
    tracep->declBit(c+262,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+263,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+264,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+925,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+265,"auto_master_out_bready", false,-1);
    tracep->declBit(c+266,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+267,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+268,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_master_out_arready", false,-1);
    tracep->declBit(c+270,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+923,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+924,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+272,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+922,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+273,"auto_master_out_rready", false,-1);
    tracep->declBit(c+274,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+275,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+276,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+277,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+278,"auto_master_out_rlast", false,-1);
    tracep->declBit(c+921,"io_interrupt", false,-1);
    tracep->declBit(c+921,"io_slave_awready", false,-1);
    tracep->declBit(c+921,"io_slave_awvalid", false,-1);
    tracep->declBus(c+923,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+926,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+924,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+927,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+922,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+921,"io_slave_wready", false,-1);
    tracep->declBit(c+921,"io_slave_wvalid", false,-1);
    tracep->declBus(c+926,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+923,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+921,"io_slave_wlast", false,-1);
    tracep->declBit(c+921,"io_slave_bready", false,-1);
    tracep->declBit(c+921,"io_slave_bvalid", false,-1);
    tracep->declBus(c+923,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+922,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+921,"io_slave_arready", false,-1);
    tracep->declBit(c+921,"io_slave_arvalid", false,-1);
    tracep->declBus(c+923,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+926,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+924,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+927,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+922,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+921,"io_slave_rready", false,-1);
    tracep->declBit(c+921,"io_slave_rvalid", false,-1);
    tracep->declBus(c+923,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+926,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+922,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+921,"io_slave_rlast", false,-1);
    tracep->pushNamePrefix("bridge ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+905,"reset", false,-1);
    tracep->declBus(c+351,"io_ifu_addr", false,-1, 31,0);
    tracep->declBit(c+352,"io_ifu_reqValid", false,-1);
    tracep->declBus(c+353,"io_ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+354,"io_ifu_respValid", false,-1);
    tracep->declBus(c+259,"io_lsu_addr", false,-1, 31,0);
    tracep->declBit(c+355,"io_lsu_reqValid", false,-1);
    tracep->declBus(c+276,"io_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+356,"io_lsu_respValid", false,-1);
    tracep->declBus(c+357,"io_lsu_size", false,-1, 1,0);
    tracep->declBit(c+358,"io_lsu_wen", false,-1);
    tracep->declBus(c+263,"io_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+264,"io_lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+257,"io_master_awready", false,-1);
    tracep->declBit(c+258,"io_master_awvalid", false,-1);
    tracep->declBus(c+923,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+259,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+924,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+260,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+922,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+261,"io_master_wready", false,-1);
    tracep->declBit(c+262,"io_master_wvalid", false,-1);
    tracep->declBus(c+263,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+264,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+925,"io_master_wlast", false,-1);
    tracep->declBit(c+265,"io_master_bready", false,-1);
    tracep->declBit(c+266,"io_master_bvalid", false,-1);
    tracep->declBus(c+267,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+268,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+269,"io_master_arready", false,-1);
    tracep->declBit(c+270,"io_master_arvalid", false,-1);
    tracep->declBus(c+923,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+271,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+924,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+272,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+922,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+273,"io_master_rready", false,-1);
    tracep->declBit(c+274,"io_master_rvalid", false,-1);
    tracep->declBus(c+275,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+276,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+277,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+278,"io_master_rlast", false,-1);
    tracep->declBit(c+359,"isValidLoad", false,-1);
    tracep->declBit(c+360,"isValidStore", false,-1);
    tracep->declBus(c+361,"stateI", false,-1, 1,0);
    tracep->declBus(c+362,"stateD", false,-1, 2,0);
    tracep->declBit(c+265,"io_master_bready_0", false,-1);
    tracep->declBit(c+363,"lsuRead", false,-1);
    tracep->declBit(c+354,"instReturn", false,-1);
    tracep->declBus(c+364,"io_ifu_rdata_r", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+905,"reset", false,-1);
    tracep->declBit(c+354,"io_ifu_respValid", false,-1);
    tracep->declBus(c+353,"io_ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+356,"io_lsu_respValid", false,-1);
    tracep->declBus(c+276,"io_lsu_rdata", false,-1, 31,0);
    tracep->declBit(c+355,"io_lsu_reqValid", false,-1);
    tracep->declBus(c+259,"io_lsu_addr", false,-1, 31,0);
    tracep->declBus(c+357,"io_lsu_size", false,-1, 1,0);
    tracep->declBit(c+358,"io_lsu_wen", false,-1);
    tracep->declBus(c+263,"io_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+264,"io_lsu_wmask", false,-1, 3,0);
    tracep->declBit(c+352,"io_ifu_reqValid", false,-1);
    tracep->declBus(c+351,"io_ifu_addr", false,-1, 31,0);
    tracep->declBus(c+365,"Instruction", false,-1, 31,0);
    tracep->declBit(c+928,"IfuValid", false,-1);
    tracep->declBit(c+929,"respValid", false,-1);
    tracep->declBus(c+930,"IfuRdata", false,-1, 31,0);
    tracep->declBus(c+931,"IfuRaddr", false,-1, 31,0);
    tracep->declBus(c+366,"Imm", false,-1, 31,0);
    tracep->declBus(c+367,"InstrNum", false,-1, 11,0);
    tracep->declBus(c+368,"CsrNum", false,-1, 11,0);
    tracep->declBus(c+369,"Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+370,"Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+371,"RdRaddr", false,-1, 4,0);
    tracep->declBit(c+372,"reqValid", false,-1);
    tracep->declBit(c+932,"MemWen", false,-1);
    tracep->declBit(c+373,"RegWen", false,-1);
    tracep->declBit(c+374,"JumpPC_en", false,-1);
    tracep->declBus(c+375,"AluByteIdx", false,-1, 1,0);
    tracep->declBus(c+376,"JumpPC", false,-1, 31,0);
    tracep->declBus(c+377,"ExuRes", false,-1, 31,0);
    tracep->declBus(c+378,"PC", false,-1, 31,0);
    tracep->declBus(c+379,"CsrData", false,-1, 31,0);
    tracep->declBus(c+380,"CsrExuData", false,-1, 31,0);
    tracep->declBus(c+381,"Rs1Data", false,-1, 31,0);
    tracep->declBus(c+382,"Rs2Data", false,-1, 31,0);
    tracep->declBus(c+383,"ReturnA0", false,-1, 31,0);
    tracep->declBus(c+933,"McauseData", false,-1, 31,0);
    tracep->declBus(c+934,"MepcData", false,-1, 31,0);
    tracep->declBus(c+935,"MstatusData", false,-1, 31,0);
    tracep->declBus(c+936,"MtvecData", false,-1, 31,0);
    tracep->declBus(c+937,"LsuRaddr", false,-1, 31,0);
    tracep->declBus(c+938,"LsuWaddr", false,-1, 31,0);
    tracep->declBus(c+939,"LsuWdata", false,-1, 31,0);
    tracep->declBus(c+940,"LsuRData", false,-1, 31,0);
    tracep->declBus(c+941,"LsuWmask", false,-1, 7,0);
    tracep->declBus(c+384,"WmaskSh", false,-1, 3,0);
    tracep->pushNamePrefix("U_ALU ");
    tracep->declBus(c+942,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+381,"i_Rs1Data", false,-1, 31,0);
    tracep->declBus(c+382,"i_Rs2Data", false,-1, 31,0);
    tracep->declBus(c+366,"i_Imm", false,-1, 31,0);
    tracep->declBus(c+378,"i_PC", false,-1, 31,0);
    tracep->declBus(c+276,"i_LsuRData", false,-1, 31,0);
    tracep->declBus(c+379,"i_CsrData", false,-1, 31,0);
    tracep->declBus(c+367,"i_InstrNum", false,-1, 11,0);
    tracep->declBus(c+375,"i_ByteIdx", false,-1, 1,0);
    tracep->declBus(c+377,"o_ExuRes", false,-1, 31,0);
    tracep->declBus(c+380,"o_CsrExuData", false,-1, 31,0);
    tracep->declBus(c+376,"o_JumpPC", false,-1, 31,0);
    tracep->declBit(c+374,"o_JumpPC_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_IDU ");
    tracep->declBus(c+365,"i_instr", false,-1, 31,0);
    tracep->declBit(c+354,"i_IfuValid", false,-1);
    tracep->declBit(c+356,"i_respValid", false,-1);
    tracep->declBus(c+369,"o_Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+370,"o_Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+371,"o_RdRaddr", false,-1, 4,0);
    tracep->declBus(c+366,"o_Imm", false,-1, 31,0);
    tracep->declBus(c+367,"o_InstrNum", false,-1, 11,0);
    tracep->declBus(c+368,"o_CsrNum", false,-1, 11,0);
    tracep->declBit(c+372,"o_reqValid", false,-1);
    tracep->declBit(c+358,"o_MemWen", false,-1);
    tracep->declBit(c+373,"o_RegWen", false,-1);
    tracep->declBus(c+357,"o_lsu_size", false,-1, 1,0);
    tracep->declBus(c+369,"Rs1", false,-1, 4,0);
    tracep->declBus(c+370,"Rs2", false,-1, 4,0);
    tracep->declBus(c+371,"Rd", false,-1, 4,0);
    tracep->declBus(c+385,"Funct_3", false,-1, 2,0);
    tracep->declBus(c+386,"Funct_7", false,-1, 6,0);
    tracep->declBus(c+387,"Opcode", false,-1, 6,0);
    tracep->declBus(c+388,"I_imm", false,-1, 11,0);
    tracep->declBus(c+389,"B_imm", false,-1, 11,0);
    tracep->declBus(c+390,"S_imm", false,-1, 11,0);
    tracep->declBus(c+391,"J_imm", false,-1, 19,0);
    tracep->declBus(c+392,"U_imm", false,-1, 19,0);
    tracep->declBit(c+921,"R_imm", false,-1);
    tracep->declBus(c+393,"I_ex", false,-1, 31,0);
    tracep->declBus(c+394,"S_ex", false,-1, 31,0);
    tracep->declBus(c+395,"J_ex", false,-1, 31,0);
    tracep->declBus(c+396,"U_ex", false,-1, 31,0);
    tracep->declBus(c+397,"B_ex", false,-1, 31,0);
    tracep->declBus(c+926,"R_ex", false,-1, 31,0);
    tracep->declBus(c+366,"Imm", false,-1, 31,0);
    tracep->declBus(c+368,"CsrNum", false,-1, 11,0);
    tracep->declBus(c+357,"lsu_size", false,-1, 1,0);
    tracep->declBus(c+398,"Opcode_Funct3", false,-1, 9,0);
    tracep->declBus(c+399,"Opcode_Funct3_Funct7", false,-1, 16,0);
    tracep->declBus(c+400,"InstrFunct3", false,-1, 11,0);
    tracep->declBus(c+401,"InstrNoFunct", false,-1, 11,0);
    tracep->declBus(c+402,"InstrFunct7", false,-1, 11,0);
    tracep->declBus(c+403,"InstrCsr", false,-1, 11,0);
    tracep->declBus(c+367,"InstrType", false,-1, 11,0);
    tracep->declBit(c+404,"is_load", false,-1);
    tracep->declBit(c+405,"is_store", false,-1);
    tracep->declBus(c+406,"lsu_funct3_key", false,-1, 2,0);
    tracep->declBit(c+407,"reg_wen", false,-1);
    tracep->declBit(c+372,"reqValid", false,-1);
    tracep->declBit(c+358,"wen_ram", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+943,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+944,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+400,"out", false,-1, 11,0);
    tracep->declBus(c+398,"key", false,-1, 9,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declArray(c+947,"lut", false,-1, 527,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+943,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+944,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+400,"out", false,-1, 11,0);
    tracep->declBus(c+398,"key", false,-1, 9,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declArray(c+947,"lut", false,-1, 527,0);
    tracep->declBus(c+965,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 21,0);
    }
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+25+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+49+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+408,"lut_out", false,-1, 11,0);
    tracep->declBit(c+409,"hit", false,-1);
    tracep->declBus(c+966,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+967,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+942,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+366,"out", false,-1, 31,0);
    tracep->declBus(c+367,"key", false,-1, 11,0);
    tracep->declBus(c+926,"default_out", false,-1, 31,0);
    tracep->declArray(c+410,"lut", false,-1, 1759,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+967,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+942,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+366,"out", false,-1, 31,0);
    tracep->declBus(c+367,"key", false,-1, 11,0);
    tracep->declBus(c+926,"default_out", false,-1, 31,0);
    tracep->declArray(c+410,"lut", false,-1, 1759,0);
    tracep->declBus(c+968,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+465,"lut_out", false,-1, 31,0);
    tracep->declBit(c+466,"hit", false,-1);
    tracep->declBus(c+969,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i11 ");
    tracep->declBus(c+970,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+971,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+972,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"out", false,-1, 1,0);
    tracep->declBus(c+406,"key", false,-1, 2,0);
    tracep->declBus(c+922,"default_out", false,-1, 1,0);
    tracep->declBus(c+973,"lut", false,-1, 24,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+970,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+971,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+972,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+357,"out", false,-1, 1,0);
    tracep->declBus(c+406,"key", false,-1, 2,0);
    tracep->declBus(c+922,"default_out", false,-1, 1,0);
    tracep->declBus(c+973,"lut", false,-1, 24,0);
    tracep->declBus(c+970,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+73+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+78+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+83+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+467,"lut_out", false,-1, 1,0);
    tracep->declBit(c+468,"hit", false,-1);
    tracep->declBus(c+974,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+975,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+407,"out", false,-1, 0,0);
    tracep->declBus(c+367,"key", false,-1, 11,0);
    tracep->declBus(c+925,"default_out", false,-1, 0,0);
    tracep->declArray(c+976,"lut", false,-1, 142,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+975,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+407,"out", false,-1, 0,0);
    tracep->declBus(c+367,"key", false,-1, 11,0);
    tracep->declBus(c+925,"default_out", false,-1, 0,0);
    tracep->declArray(c+976,"lut", false,-1, 142,0);
    tracep->declBus(c+981,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+88+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+99+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+110+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+469,"lut_out", false,-1, 0,0);
    tracep->declBit(c+470,"hit", false,-1);
    tracep->declBus(c+982,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+983,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"out", false,-1, 0,0);
    tracep->declBus(c+367,"key", false,-1, 11,0);
    tracep->declBus(c+921,"default_out", false,-1, 0,0);
    tracep->declArray(c+984,"lut", false,-1, 103,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+983,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+372,"out", false,-1, 0,0);
    tracep->declBus(c+367,"key", false,-1, 11,0);
    tracep->declBus(c+921,"default_out", false,-1, 0,0);
    tracep->declArray(c+984,"lut", false,-1, 103,0);
    tracep->declBus(c+981,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+121+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+129+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+137+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+471,"lut_out", false,-1, 0,0);
    tracep->declBit(c+472,"hit", false,-1);
    tracep->declBus(c+988,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i5 ");
    tracep->declBus(c+971,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"out", false,-1, 0,0);
    tracep->declBus(c+367,"key", false,-1, 11,0);
    tracep->declBus(c+921,"default_out", false,-1, 0,0);
    tracep->declQuad(c+989,"lut", false,-1, 38,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+971,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+358,"out", false,-1, 0,0);
    tracep->declBus(c+367,"key", false,-1, 11,0);
    tracep->declBus(c+921,"default_out", false,-1, 0,0);
    tracep->declQuad(c+989,"lut", false,-1, 38,0);
    tracep->declBus(c+981,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+145+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+148+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+151+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+473,"lut_out", false,-1, 0,0);
    tracep->declBit(c+474,"hit", false,-1);
    tracep->declBus(c+991,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i6 ");
    tracep->declBus(c+971,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+992,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+401,"out", false,-1, 11,0);
    tracep->declBus(c+387,"key", false,-1, 6,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declQuad(c+993,"lut", false,-1, 56,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+971,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+992,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+401,"out", false,-1, 11,0);
    tracep->declBus(c+387,"key", false,-1, 6,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declQuad(c+993,"lut", false,-1, 56,0);
    tracep->declBus(c+995,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+154+i*1,"pair_list", true,(i+0), 18,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+157+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+160+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+475,"lut_out", false,-1, 11,0);
    tracep->declBit(c+476,"hit", false,-1);
    tracep->declBus(c+991,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i7 ");
    tracep->declBus(c+975,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+996,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+402,"out", false,-1, 11,0);
    tracep->declBus(c+399,"key", false,-1, 16,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declArray(c+997,"lut", false,-1, 318,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+975,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+996,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+402,"out", false,-1, 11,0);
    tracep->declBus(c+399,"key", false,-1, 16,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declArray(c+997,"lut", false,-1, 318,0);
    tracep->declBus(c+1007,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+163+i*1,"pair_list", true,(i+0), 28,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+174+i*1,"key_list", true,(i+0), 16,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+185+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+477,"lut_out", false,-1, 11,0);
    tracep->declBit(c+478,"hit", false,-1);
    tracep->declBus(c+982,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i8 ");
    tracep->declBus(c+972,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+942,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+403,"out", false,-1, 11,0);
    tracep->declBus(c+365,"key", false,-1, 31,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declArray(c+1008,"lut", false,-1, 87,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+972,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+942,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+403,"out", false,-1, 11,0);
    tracep->declBus(c+365,"key", false,-1, 31,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declArray(c+1008,"lut", false,-1, 87,0);
    tracep->declBus(c+968,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+196+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+200+i*1,"key_list", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+202+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+479,"lut_out", false,-1, 11,0);
    tracep->declBit(c+480,"hit", false,-1);
    tracep->declBus(c+1011,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i9 ");
    tracep->declBus(c+972,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+368,"out", false,-1, 11,0);
    tracep->declBus(c+388,"key", false,-1, 11,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declQuad(c+1012,"lut", false,-1, 47,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+972,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+945,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+368,"out", false,-1, 11,0);
    tracep->declBus(c+388,"key", false,-1, 11,0);
    tracep->declBus(c+946,"default_out", false,-1, 11,0);
    tracep->declQuad(c+1012,"lut", false,-1, 47,0);
    tracep->declBus(c+943,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+204+i*1,"pair_list", true,(i+0), 23,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+206+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+208+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+481,"lut_out", false,-1, 11,0);
    tracep->declBit(c+482,"hit", false,-1);
    tracep->declBus(c+1011,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("U_IFU ");
    tracep->declBus(c+1014,"PC_START", false,-1, 31,0);
    tracep->declBit(c+888,"i_clk", false,-1);
    tracep->declBit(c+905,"i_rst", false,-1);
    tracep->declBus(c+353,"i_IfuRdata", false,-1, 31,0);
    tracep->declBus(c+376,"i_JumpPC", false,-1, 31,0);
    tracep->declBit(c+374,"i_JumpPC_en", false,-1);
    tracep->declBit(c+354,"io_ifu_respValid", false,-1);
    tracep->declBit(c+356,"i_respValid", false,-1);
    tracep->declBit(c+355,"i_reqValid", false,-1);
    tracep->declBus(c+351,"o_IfuRaddr", false,-1, 31,0);
    tracep->declBus(c+365,"o_instr", false,-1, 31,0);
    tracep->declBit(c+352,"o_IfuValid", false,-1);
    tracep->declBus(c+378,"o_PC", false,-1, 31,0);
    tracep->declBus(c+1015,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1016,"WAIT", false,-1, 0,0);
    tracep->declBit(c+483,"CurrentState", false,-1);
    tracep->declBit(c+484,"NextState", false,-1);
    tracep->declBit(c+485,"UpdatePC_en", false,-1);
    tracep->declBit(c+486,"o_IfuValid_next", false,-1);
    tracep->declBus(c+378,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("U_PC ");
    tracep->declBus(c+1014,"PC_START", false,-1, 31,0);
    tracep->declBit(c+888,"i_clk", false,-1);
    tracep->declBit(c+905,"i_rst", false,-1);
    tracep->declBit(c+485,"i_UpdatePC_en", false,-1);
    tracep->declBus(c+376,"i_JumpPC", false,-1, 31,0);
    tracep->declBit(c+374,"i_JumpPC_en", false,-1);
    tracep->declBus(c+378,"o_PC", false,-1, 31,0);
    tracep->declBus(c+378,"d_PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("U_LSU ");
    tracep->declBit(c+888,"i_clk", false,-1);
    tracep->declBit(c+905,"i_rst", false,-1);
    tracep->declBit(c+372,"i_reqValid", false,-1);
    tracep->declBit(c+354,"i_IfuValid", false,-1);
    tracep->declBit(c+356,"io_lsu_respValid", false,-1);
    tracep->declBit(c+355,"io_lsu_reqValid", false,-1);
    tracep->declBus(c+1015,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1016,"WAIT", false,-1, 0,0);
    tracep->declBit(c+487,"CurrentState", false,-1);
    tracep->declBit(c+488,"NextState", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_WBU ");
    tracep->declBus(c+970,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+942,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+888,"i_clk", false,-1);
    tracep->declBit(c+373,"i_RegWen", false,-1);
    tracep->declBus(c+367,"i_InstrNum", false,-1, 11,0);
    tracep->declBus(c+368,"i_CsrNum", false,-1, 11,0);
    tracep->declBus(c+369,"i_Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+370,"i_Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+371,"i_RdRaddr", false,-1, 4,0);
    tracep->declBus(c+377,"i_ExuRes", false,-1, 31,0);
    tracep->declBus(c+378,"i_PC", false,-1, 31,0);
    tracep->declBus(c+380,"i_CsrExuData", false,-1, 31,0);
    tracep->declBus(c+381,"o_Rs1Data", false,-1, 31,0);
    tracep->declBus(c+382,"o_Rs2Data", false,-1, 31,0);
    tracep->declBus(c+383,"o_ReturnA0", false,-1, 31,0);
    tracep->declBus(c+379,"o_CsrData", false,-1, 31,0);
    tracep->declBus(c+489,"A5Data", false,-1, 31,0);
    tracep->pushNamePrefix("U_CSR ");
    tracep->declBus(c+945,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+942,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+888,"i_clk", false,-1);
    tracep->declBit(c+373,"i_RegWen", false,-1);
    tracep->declBus(c+367,"i_InstrNum", false,-1, 11,0);
    tracep->declBus(c+368,"i_CsrNum", false,-1, 11,0);
    tracep->declBus(c+378,"i_PC", false,-1, 31,0);
    tracep->declBus(c+377,"i_ExuRes", false,-1, 31,0);
    tracep->declBus(c+489,"i_A5Data", false,-1, 31,0);
    tracep->declBus(c+380,"i_CsrExuData", false,-1, 31,0);
    tracep->declBus(c+379,"o_CsrData", false,-1, 31,0);
    tracep->declBus(c+490,"mcause", false,-1, 31,0);
    tracep->declBus(c+491,"mepc", false,-1, 31,0);
    tracep->declBus(c+492,"mstatus", false,-1, 31,0);
    tracep->declBus(c+493,"mtvec", false,-1, 31,0);
    tracep->declBus(c+494,"mcycle", false,-1, 31,0);
    tracep->declBus(c+495,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+210,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+211,"marchid", false,-1, 31,0);
    tracep->declBus(c+496,"EpcData", false,-1, 31,0);
    tracep->pushNamePrefix("i10 ");
    tracep->declBus(c+1017,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+942,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"out", false,-1, 31,0);
    tracep->declBus(c+368,"key", false,-1, 11,0);
    tracep->declBus(c+926,"default_out", false,-1, 31,0);
    tracep->declArray(c+497,"lut", false,-1, 263,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1017,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+945,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+942,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+964,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+379,"out", false,-1, 31,0);
    tracep->declBus(c+368,"key", false,-1, 11,0);
    tracep->declBus(c+926,"default_out", false,-1, 31,0);
    tracep->declArray(c+497,"lut", false,-1, 263,0);
    tracep->declBus(c+968,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+506+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+212+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+518+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+524,"lut_out", false,-1, 31,0);
    tracep->declBit(c+525,"hit", false,-1);
    tracep->declBus(c+1018,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("U_REG ");
    tracep->declBus(c+970,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+942,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+888,"i_clk", false,-1);
    tracep->declBit(c+373,"i_RegWen", false,-1);
    tracep->declBus(c+369,"i_Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+370,"i_Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+371,"i_RdRaddr", false,-1, 4,0);
    tracep->declBus(c+377,"i_ExuRes", false,-1, 31,0);
    tracep->declBus(c+381,"o_Rs1Data", false,-1, 31,0);
    tracep->declBus(c+382,"o_Rs2Data", false,-1, 31,0);
    tracep->declBus(c+383,"o_ReturnA0", false,-1, 31,0);
    tracep->declBus(c+489,"o_A5Data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+526+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+218,"i", false,-1, 31,0);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"io_d", false,-1);
    tracep->declBit(c+558,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"io_d", false,-1);
    tracep->declBit(c+558,"io_q", false,-1);
    tracep->declBit(c+558,"sync_0", false,-1);
    tracep->declBit(c+559,"sync_1", false,-1);
    tracep->declBit(c+560,"sync_2", false,-1);
    tracep->declBit(c+561,"sync_3", false,-1);
    tracep->declBit(c+562,"sync_4", false,-1);
    tracep->declBit(c+563,"sync_5", false,-1);
    tracep->declBit(c+564,"sync_6", false,-1);
    tracep->declBit(c+565,"sync_7", false,-1);
    tracep->declBit(c+566,"sync_8", false,-1);
    tracep->declBit(c+567,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+895,"auto_in_psel", false,-1);
    tracep->declBit(c+896,"auto_in_penable", false,-1);
    tracep->declBit(c+227,"auto_in_pwrite", false,-1);
    tracep->declBus(c+853,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+920,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+829,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+605,"auto_in_pready", false,-1);
    tracep->declBit(c+921,"auto_in_pslverr", false,-1);
    tracep->declBus(c+606,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+893,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+836,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+837,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+838,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+839,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+840,"sdram_bundle_we", false,-1);
    tracep->declBus(c+841,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+842,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+843,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+894,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBus(c+853,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+895,"in_psel", false,-1);
    tracep->declBit(c+896,"in_penable", false,-1);
    tracep->declBus(c+920,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+227,"in_pwrite", false,-1);
    tracep->declBus(c+829,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+605,"in_pready", false,-1);
    tracep->declBus(c+606,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+921,"in_pslverr", false,-1);
    tracep->declBit(c+893,"sdram_clk", false,-1);
    tracep->declBit(c+836,"sdram_cke", false,-1);
    tracep->declBit(c+837,"sdram_cs", false,-1);
    tracep->declBit(c+838,"sdram_ras", false,-1);
    tracep->declBit(c+839,"sdram_cas", false,-1);
    tracep->declBit(c+840,"sdram_we", false,-1);
    tracep->declBus(c+841,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+842,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+843,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+894,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+607,"sdram_dout_en", false,-1);
    tracep->declBus(c+608,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+568,"state", false,-1, 1,0);
    tracep->declBit(c+844,"req_accept", false,-1);
    tracep->declBit(c+862,"is_read", false,-1);
    tracep->declBit(c+863,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+888,"clk_i", false,-1);
    tracep->declBit(c+889,"rst_i", false,-1);
    tracep->declBus(c+864,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+862,"inport_rd_i", false,-1);
    tracep->declBus(c+924,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+853,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+829,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+894,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+844,"inport_accept_o", false,-1);
    tracep->declBit(c+605,"inport_ack_o", false,-1);
    tracep->declBit(c+921,"inport_error_o", false,-1);
    tracep->declBus(c+606,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+893,"sdram_clk_o", false,-1);
    tracep->declBit(c+836,"sdram_cke_o", false,-1);
    tracep->declBit(c+837,"sdram_cs_o", false,-1);
    tracep->declBit(c+838,"sdram_ras_o", false,-1);
    tracep->declBit(c+839,"sdram_cas_o", false,-1);
    tracep->declBit(c+840,"sdram_we_o", false,-1);
    tracep->declBus(c+843,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+841,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+842,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+608,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+607,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1019,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+943,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1020,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+972,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+972,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+972,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1021,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+981,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1022,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1023,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1024,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1021,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1025,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1026,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1027,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1028,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1029,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1030,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1031,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+923,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1032,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1021,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+923,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1031,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1030,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1026,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1028,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1027,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1029,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1025,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1033,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1034,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+944,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+944,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1035,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+944,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+972,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+972,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1017,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+853,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+864,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+862,"ram_rd_w", false,-1);
    tracep->declBit(c+844,"ram_accept_w", false,-1);
    tracep->declBus(c+829,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+606,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+605,"ram_ack_w", false,-1);
    tracep->declBit(c+865,"ram_req_w", false,-1);
    tracep->declBus(c+845,"command_q", false,-1, 3,0);
    tracep->declBus(c+841,"addr_q", false,-1, 12,0);
    tracep->declBus(c+608,"data_q", false,-1, 15,0);
    tracep->declBit(c+609,"data_rd_en_q", false,-1);
    tracep->declBus(c+843,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+836,"cke_q", false,-1);
    tracep->declBus(c+842,"bank_q", false,-1, 1,0);
    tracep->declBus(c+610,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+846,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+894,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+611,"refresh_q", false,-1);
    tracep->declBus(c+612,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+613+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+847,"state_q", false,-1, 3,0);
    tracep->declBus(c+883,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+884,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+617,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+618,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+866,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+867,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+868,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1021,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+619,"delay_q", false,-1, 3,0);
    tracep->declBus(c+885,"delay_r", false,-1, 3,0);
    tracep->declBus(c+996,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+848,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+620,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+621,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+622,"idx", false,-1, 31,0);
    tracep->declBus(c+623,"rd_q", false,-1, 3,0);
    tracep->declBit(c+605,"ack_q", false,-1);
    tracep->declArray(c+849,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+898,"auto_in_psel", false,-1);
    tracep->declBit(c+899,"auto_in_penable", false,-1);
    tracep->declBit(c+227,"auto_in_pwrite", false,-1);
    tracep->declBus(c+858,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+920,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+829,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+900,"auto_in_pready", false,-1);
    tracep->declBus(c+901,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+603,"spi_bundle_sck", false,-1);
    tracep->declBus(c+604,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+835,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+892,"spi_bundle_miso", false,-1);
    tracep->declBus(c+569,"cmd_state", false,-1, 3,0);
    tracep->declBus(c+830,"spi_state", false,-1, 1,0);
    tracep->declBit(c+831,"mspi_in_psel", false,-1);
    tracep->declBit(c+906,"spi_ack", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1014,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1036,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+983,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBus(c+869,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+831,"in_psel", false,-1);
    tracep->declBit(c+832,"in_penable", false,-1);
    tracep->declBus(c+920,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+833,"in_pwrite", false,-1);
    tracep->declBus(c+870,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+834,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+624,"in_pready", false,-1);
    tracep->declBus(c+625,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+921,"in_pslverr", false,-1);
    tracep->declBit(c+603,"spi_sck", false,-1);
    tracep->declBus(c+604,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+835,"spi_mosi", false,-1);
    tracep->declBit(c+892,"spi_miso", false,-1);
    tracep->declBit(c+626,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+964,"Tp", false,-1, 31,0);
    tracep->declBit(c+888,"wb_clk_i", false,-1);
    tracep->declBit(c+889,"wb_rst_i", false,-1);
    tracep->declBus(c+871,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+870,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+625,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+834,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+833,"wb_we_i", false,-1);
    tracep->declBit(c+831,"wb_stb_i", false,-1);
    tracep->declBit(c+832,"wb_cyc_i", false,-1);
    tracep->declBit(c+624,"wb_ack_o", false,-1);
    tracep->declBit(c+921,"wb_err_o", false,-1);
    tracep->declBit(c+626,"wb_int_o", false,-1);
    tracep->declBus(c+604,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+603,"sclk_pad_o", false,-1);
    tracep->declBit(c+835,"mosi_pad_o", false,-1);
    tracep->declBit(c+892,"miso_pad_i", false,-1);
    tracep->declBus(c+627,"divider", false,-1, 15,0);
    tracep->declBus(c+628,"ctrl", false,-1, 13,0);
    tracep->declBus(c+629,"ss", false,-1, 7,0);
    tracep->declBus(c+886,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+630,"rx", false,-1, 127,0);
    tracep->declBit(c+634,"rx_negedge", false,-1);
    tracep->declBit(c+635,"tx_negedge", false,-1);
    tracep->declBus(c+636,"char_len", false,-1, 6,0);
    tracep->declBit(c+637,"go", false,-1);
    tracep->declBit(c+638,"lsb", false,-1);
    tracep->declBit(c+639,"ie", false,-1);
    tracep->declBit(c+640,"ass", false,-1);
    tracep->declBit(c+907,"spi_divider_sel", false,-1);
    tracep->declBit(c+908,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+909,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+910,"spi_ss_sel", false,-1);
    tracep->declBit(c+641,"tip", false,-1);
    tracep->declBit(c+642,"pos_edge", false,-1);
    tracep->declBit(c+643,"neg_edge", false,-1);
    tracep->declBit(c+644,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+964,"Tp", false,-1, 31,0);
    tracep->declBit(c+888,"clk_in", false,-1);
    tracep->declBit(c+889,"rst", false,-1);
    tracep->declBit(c+641,"enable", false,-1);
    tracep->declBit(c+637,"go", false,-1);
    tracep->declBit(c+644,"last_clk", false,-1);
    tracep->declBus(c+627,"divider", false,-1, 15,0);
    tracep->declBit(c+603,"clk_out", false,-1);
    tracep->declBit(c+642,"pos_edge", false,-1);
    tracep->declBit(c+643,"neg_edge", false,-1);
    tracep->declBus(c+645,"cnt", false,-1, 15,0);
    tracep->declBit(c+646,"cnt_zero", false,-1);
    tracep->declBit(c+647,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+964,"Tp", false,-1, 31,0);
    tracep->declBit(c+888,"clk", false,-1);
    tracep->declBit(c+889,"rst", false,-1);
    tracep->declBus(c+872,"latch", false,-1, 3,0);
    tracep->declBus(c+834,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+636,"len", false,-1, 6,0);
    tracep->declBit(c+638,"lsb", false,-1);
    tracep->declBit(c+637,"go", false,-1);
    tracep->declBit(c+642,"pos_edge", false,-1);
    tracep->declBit(c+643,"neg_edge", false,-1);
    tracep->declBit(c+634,"rx_negedge", false,-1);
    tracep->declBit(c+635,"tx_negedge", false,-1);
    tracep->declBit(c+641,"tip", false,-1);
    tracep->declBit(c+644,"last", false,-1);
    tracep->declBus(c+870,"p_in", false,-1, 31,0);
    tracep->declArray(c+630,"p_out", false,-1, 127,0);
    tracep->declBit(c+603,"s_clk", false,-1);
    tracep->declBit(c+892,"s_in", false,-1);
    tracep->declBit(c+835,"s_out", false,-1);
    tracep->declBus(c+648,"cnt", false,-1, 7,0);
    tracep->declArray(c+630,"data", false,-1, 127,0);
    tracep->declBus(c+649,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+650,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+651,"rx_clk", false,-1);
    tracep->declBit(c+652,"tx_clk", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+854,"auto_in_psel", false,-1);
    tracep->declBit(c+855,"auto_in_penable", false,-1);
    tracep->declBit(c+227,"auto_in_pwrite", false,-1);
    tracep->declBus(c+856,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+920,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+829,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+857,"auto_in_pready", false,-1);
    tracep->declBit(c+921,"auto_in_pslverr", false,-1);
    tracep->declBus(c+897,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+890,"uart_rx", false,-1);
    tracep->declBit(c+891,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+889,"reset", false,-1);
    tracep->declBit(c+888,"clock", false,-1);
    tracep->declBit(c+854,"in_psel", false,-1);
    tracep->declBit(c+855,"in_penable", false,-1);
    tracep->declBus(c+920,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+857,"in_pready", false,-1);
    tracep->declBit(c+921,"in_pslverr", false,-1);
    tracep->declBus(c+873,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+227,"in_pwrite", false,-1);
    tracep->declBus(c+897,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+829,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+228,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+890,"uart_rx", false,-1);
    tracep->declBit(c+891,"uart_tx", false,-1);
    tracep->declBit(c+653,"rtsn", false,-1);
    tracep->declBit(c+921,"ctsn", false,-1);
    tracep->declBit(c+654,"dtr_pad_o", false,-1);
    tracep->declBit(c+921,"dsr_pad_i", false,-1);
    tracep->declBit(c+921,"ri_pad_i", false,-1);
    tracep->declBit(c+921,"dcd_pad_i", false,-1);
    tracep->declBit(c+655,"interrupt", false,-1);
    tracep->declBit(c+911,"reg_we", false,-1);
    tracep->declBit(c+912,"reg_re", false,-1);
    tracep->declBus(c+874,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+875,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+570,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+887,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+656,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+888,"clk", false,-1);
    tracep->declBit(c+889,"wb_rst_i", false,-1);
    tracep->declBus(c+874,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+876,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+887,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+911,"wb_we_i", false,-1);
    tracep->declBit(c+912,"wb_re_i", false,-1);
    tracep->declBit(c+891,"stx_pad_o", false,-1);
    tracep->declBit(c+890,"srx_pad_i", false,-1);
    tracep->declBus(c+1033,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+656,"rts_pad_o", false,-1);
    tracep->declBit(c+654,"dtr_pad_o", false,-1);
    tracep->declBit(c+655,"int_o", false,-1);
    tracep->declBit(c+657,"enable", false,-1);
    tracep->declBit(c+658,"srx_pad", false,-1);
    tracep->declBus(c+659,"ier", false,-1, 3,0);
    tracep->declBus(c+660,"iir", false,-1, 3,0);
    tracep->declBus(c+661,"fcr", false,-1, 1,0);
    tracep->declBus(c+662,"mcr", false,-1, 4,0);
    tracep->declBus(c+663,"lcr", false,-1, 7,0);
    tracep->declBus(c+664,"msr", false,-1, 7,0);
    tracep->declBus(c+665,"dl", false,-1, 15,0);
    tracep->declBus(c+666,"scratch", false,-1, 7,0);
    tracep->declBit(c+667,"start_dlc", false,-1);
    tracep->declBit(c+668,"lsr_mask_d", false,-1);
    tracep->declBit(c+669,"msi_reset", false,-1);
    tracep->declBus(c+670,"dlc", false,-1, 15,0);
    tracep->declBus(c+671,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+672,"rx_reset", false,-1);
    tracep->declBit(c+673,"tx_reset", false,-1);
    tracep->declBit(c+674,"dlab", false,-1);
    tracep->declBit(c+925,"cts_pad_i", false,-1);
    tracep->declBit(c+921,"dsr_pad_i", false,-1);
    tracep->declBit(c+921,"ri_pad_i", false,-1);
    tracep->declBit(c+921,"dcd_pad_i", false,-1);
    tracep->declBit(c+675,"loopback", false,-1);
    tracep->declBit(c+921,"cts", false,-1);
    tracep->declBit(c+925,"dsr", false,-1);
    tracep->declBit(c+925,"ri", false,-1);
    tracep->declBit(c+925,"dcd", false,-1);
    tracep->declBit(c+676,"cts_c", false,-1);
    tracep->declBit(c+677,"dsr_c", false,-1);
    tracep->declBit(c+678,"ri_c", false,-1);
    tracep->declBit(c+679,"dcd_c", false,-1);
    tracep->declBus(c+680,"lsr", false,-1, 7,0);
    tracep->declBit(c+681,"lsr0", false,-1);
    tracep->declBit(c+682,"lsr1", false,-1);
    tracep->declBit(c+683,"lsr2", false,-1);
    tracep->declBit(c+684,"lsr3", false,-1);
    tracep->declBit(c+685,"lsr4", false,-1);
    tracep->declBit(c+686,"lsr5", false,-1);
    tracep->declBit(c+687,"lsr6", false,-1);
    tracep->declBit(c+688,"lsr7", false,-1);
    tracep->declBit(c+689,"lsr0r", false,-1);
    tracep->declBit(c+690,"lsr1r", false,-1);
    tracep->declBit(c+691,"lsr2r", false,-1);
    tracep->declBit(c+692,"lsr3r", false,-1);
    tracep->declBit(c+693,"lsr4r", false,-1);
    tracep->declBit(c+694,"lsr5r", false,-1);
    tracep->declBit(c+695,"lsr6r", false,-1);
    tracep->declBit(c+696,"lsr7r", false,-1);
    tracep->declBit(c+219,"lsr_mask", false,-1);
    tracep->declBit(c+697,"rls_int", false,-1);
    tracep->declBit(c+698,"rda_int", false,-1);
    tracep->declBit(c+699,"ti_int", false,-1);
    tracep->declBit(c+700,"thre_int", false,-1);
    tracep->declBit(c+701,"ms_int", false,-1);
    tracep->declBit(c+702,"tf_push", false,-1);
    tracep->declBit(c+703,"rf_pop", false,-1);
    tracep->declBus(c+913,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+704,"rf_error_bit", false,-1);
    tracep->declBit(c+682,"rf_overrun", false,-1);
    tracep->declBit(c+705,"rf_push_pulse", false,-1);
    tracep->declBus(c+706,"rf_count", false,-1, 4,0);
    tracep->declBus(c+707,"tf_count", false,-1, 4,0);
    tracep->declBus(c+708,"tstate", false,-1, 2,0);
    tracep->declBus(c+709,"rstate", false,-1, 3,0);
    tracep->declBus(c+710,"counter_t", false,-1, 9,0);
    tracep->declBit(c+711,"thre_set_en", false,-1);
    tracep->declBus(c+712,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+713,"block_value", false,-1, 7,0);
    tracep->declBit(c+714,"serial_out", false,-1);
    tracep->declBit(c+715,"serial_in", false,-1);
    tracep->declBit(c+220,"lsr_mask_condition", false,-1);
    tracep->declBit(c+221,"iir_read", false,-1);
    tracep->declBit(c+222,"msr_read", false,-1);
    tracep->declBit(c+223,"fifo_read", false,-1);
    tracep->declBit(c+224,"fifo_write", false,-1);
    tracep->declBus(c+716,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+717,"lsr0_d", false,-1);
    tracep->declBit(c+718,"lsr1_d", false,-1);
    tracep->declBit(c+719,"lsr2_d", false,-1);
    tracep->declBit(c+720,"lsr3_d", false,-1);
    tracep->declBit(c+721,"lsr4_d", false,-1);
    tracep->declBit(c+722,"lsr5_d", false,-1);
    tracep->declBit(c+723,"lsr6_d", false,-1);
    tracep->declBit(c+724,"lsr7_d", false,-1);
    tracep->declBit(c+725,"rls_int_d", false,-1);
    tracep->declBit(c+726,"thre_int_d", false,-1);
    tracep->declBit(c+727,"ms_int_d", false,-1);
    tracep->declBit(c+728,"ti_int_d", false,-1);
    tracep->declBit(c+729,"rda_int_d", false,-1);
    tracep->declBit(c+730,"rls_int_rise", false,-1);
    tracep->declBit(c+731,"thre_int_rise", false,-1);
    tracep->declBit(c+732,"ms_int_rise", false,-1);
    tracep->declBit(c+733,"ti_int_rise", false,-1);
    tracep->declBit(c+734,"rda_int_rise", false,-1);
    tracep->declBit(c+735,"rls_int_pnd", false,-1);
    tracep->declBit(c+736,"rda_int_pnd", false,-1);
    tracep->declBit(c+737,"thre_int_pnd", false,-1);
    tracep->declBit(c+738,"ms_int_pnd", false,-1);
    tracep->declBit(c+739,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+964,"Tp", false,-1, 31,0);
    tracep->declBus(c+964,"width", false,-1, 31,0);
    tracep->declBus(c+1016,"init_value", false,-1, 0,0);
    tracep->declBit(c+889,"rst_i", false,-1);
    tracep->declBit(c+888,"clk_i", false,-1);
    tracep->declBit(c+921,"stage1_rst_i", false,-1);
    tracep->declBit(c+925,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+890,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+658,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+740,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+888,"clk", false,-1);
    tracep->declBit(c+889,"wb_rst_i", false,-1);
    tracep->declBus(c+663,"lcr", false,-1, 7,0);
    tracep->declBit(c+703,"rf_pop", false,-1);
    tracep->declBit(c+715,"srx_pad_i", false,-1);
    tracep->declBit(c+657,"enable", false,-1);
    tracep->declBit(c+672,"rx_reset", false,-1);
    tracep->declBit(c+219,"lsr_mask", false,-1);
    tracep->declBus(c+710,"counter_t", false,-1, 9,0);
    tracep->declBus(c+706,"rf_count", false,-1, 4,0);
    tracep->declBus(c+913,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+682,"rf_overrun", false,-1);
    tracep->declBit(c+704,"rf_error_bit", false,-1);
    tracep->declBus(c+709,"rstate", false,-1, 3,0);
    tracep->declBit(c+705,"rf_push_pulse", false,-1);
    tracep->declBus(c+741,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+742,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+743,"rshift", false,-1, 7,0);
    tracep->declBit(c+744,"rparity", false,-1);
    tracep->declBit(c+745,"rparity_error", false,-1);
    tracep->declBit(c+746,"rframing_error", false,-1);
    tracep->declBit(c+747,"rbit_in", false,-1);
    tracep->declBit(c+748,"rparity_xor", false,-1);
    tracep->declBus(c+749,"counter_b", false,-1, 7,0);
    tracep->declBit(c+750,"rf_push_q", false,-1);
    tracep->declBus(c+751,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+752,"rf_push", false,-1);
    tracep->declBit(c+753,"break_error", false,-1);
    tracep->declBit(c+754,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+755,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+756,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+757,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+923,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1031,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1030,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1026,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1028,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1027,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1029,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1025,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1033,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1034,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1037,"sr_push", false,-1, 3,0);
    tracep->declBus(c+758,"toc_value", false,-1, 9,0);
    tracep->declBus(c+759,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+975,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1035,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1021,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+970,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+888,"clk", false,-1);
    tracep->declBit(c+889,"wb_rst_i", false,-1);
    tracep->declBit(c+705,"push", false,-1);
    tracep->declBit(c+703,"pop", false,-1);
    tracep->declBus(c+751,"data_in", false,-1, 10,0);
    tracep->declBit(c+672,"fifo_reset", false,-1);
    tracep->declBit(c+219,"reset_status", false,-1);
    tracep->declBus(c+913,"data_out", false,-1, 10,0);
    tracep->declBit(c+682,"overrun", false,-1);
    tracep->declBus(c+706,"count", false,-1, 4,0);
    tracep->declBit(c+704,"error_bit", false,-1);
    tracep->declBus(c+914,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+760+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+776,"top", false,-1, 3,0);
    tracep->declBus(c+777,"bottom", false,-1, 3,0);
    tracep->declBus(c+778,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+779,"word0", false,-1, 2,0);
    tracep->declBus(c+780,"word1", false,-1, 2,0);
    tracep->declBus(c+781,"word2", false,-1, 2,0);
    tracep->declBus(c+782,"word3", false,-1, 2,0);
    tracep->declBus(c+783,"word4", false,-1, 2,0);
    tracep->declBus(c+784,"word5", false,-1, 2,0);
    tracep->declBus(c+785,"word6", false,-1, 2,0);
    tracep->declBus(c+786,"word7", false,-1, 2,0);
    tracep->declBus(c+787,"word8", false,-1, 2,0);
    tracep->declBus(c+788,"word9", false,-1, 2,0);
    tracep->declBus(c+789,"word10", false,-1, 2,0);
    tracep->declBus(c+790,"word11", false,-1, 2,0);
    tracep->declBus(c+791,"word12", false,-1, 2,0);
    tracep->declBus(c+792,"word13", false,-1, 2,0);
    tracep->declBus(c+793,"word14", false,-1, 2,0);
    tracep->declBus(c+794,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1021,"addr_width", false,-1, 31,0);
    tracep->declBus(c+983,"data_width", false,-1, 31,0);
    tracep->declBus(c+1035,"depth", false,-1, 31,0);
    tracep->declBit(c+888,"clk", false,-1);
    tracep->declBit(c+705,"we", false,-1);
    tracep->declBus(c+776,"a", false,-1, 3,0);
    tracep->declBus(c+777,"dpra", false,-1, 3,0);
    tracep->declBus(c+795,"di", false,-1, 7,0);
    tracep->declBus(c+914,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+571+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+888,"clk", false,-1);
    tracep->declBit(c+889,"wb_rst_i", false,-1);
    tracep->declBus(c+663,"lcr", false,-1, 7,0);
    tracep->declBit(c+702,"tf_push", false,-1);
    tracep->declBus(c+876,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+657,"enable", false,-1);
    tracep->declBit(c+673,"tx_reset", false,-1);
    tracep->declBit(c+219,"lsr_mask", false,-1);
    tracep->declBit(c+714,"stx_pad_o", false,-1);
    tracep->declBus(c+708,"tstate", false,-1, 2,0);
    tracep->declBus(c+707,"tf_count", false,-1, 4,0);
    tracep->declBus(c+796,"counter", false,-1, 4,0);
    tracep->declBus(c+797,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+798,"shift_out", false,-1, 6,0);
    tracep->declBit(c+799,"stx_o_tmp", false,-1);
    tracep->declBit(c+800,"parity_xor", false,-1);
    tracep->declBit(c+801,"tf_pop", false,-1);
    tracep->declBit(c+802,"bit_out", false,-1);
    tracep->declBus(c+876,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+915,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+803,"tf_overrun", false,-1);
    tracep->declBus(c+927,"s_idle", false,-1, 2,0);
    tracep->declBus(c+920,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1038,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1039,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1040,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1041,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+983,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1035,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1021,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+970,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+888,"clk", false,-1);
    tracep->declBit(c+889,"wb_rst_i", false,-1);
    tracep->declBit(c+702,"push", false,-1);
    tracep->declBit(c+801,"pop", false,-1);
    tracep->declBus(c+876,"data_in", false,-1, 7,0);
    tracep->declBit(c+673,"fifo_reset", false,-1);
    tracep->declBit(c+219,"reset_status", false,-1);
    tracep->declBus(c+915,"data_out", false,-1, 7,0);
    tracep->declBit(c+803,"overrun", false,-1);
    tracep->declBus(c+707,"count", false,-1, 4,0);
    tracep->declBus(c+804,"top", false,-1, 3,0);
    tracep->declBus(c+805,"bottom", false,-1, 3,0);
    tracep->declBus(c+806,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1021,"addr_width", false,-1, 31,0);
    tracep->declBus(c+983,"data_width", false,-1, 31,0);
    tracep->declBus(c+1035,"depth", false,-1, 31,0);
    tracep->declBit(c+888,"clk", false,-1);
    tracep->declBit(c+702,"we", false,-1);
    tracep->declBus(c+804,"a", false,-1, 3,0);
    tracep->declBus(c+805,"dpra", false,-1, 3,0);
    tracep->declBus(c+876,"di", false,-1, 7,0);
    tracep->declBus(c+915,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+587+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(7);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+603,"sck", false,-1);
    tracep->declBit(c+807,"ss", false,-1);
    tracep->declBit(c+835,"mosi", false,-1);
    tracep->declBit(c+925,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+603,"sck", false,-1);
    tracep->declBit(c+808,"ss", false,-1);
    tracep->declBit(c+835,"mosi", false,-1);
    tracep->declBit(c+892,"miso", false,-1);
    tracep->declBit(c+808,"reset", false,-1);
    tracep->declBus(c+823,"state", false,-1, 2,0);
    tracep->declBus(c+824,"counter", false,-1, 7,0);
    tracep->declBus(c+825,"cmd", false,-1, 7,0);
    tracep->declBus(c+826,"addr", false,-1, 23,0);
    tracep->declBus(c+827,"data", false,-1, 31,0);
    tracep->declBit(c+828,"ren", false,-1);
    tracep->declBus(c+916,"rdata", false,-1, 31,0);
    tracep->declBus(c+917,"raddr", false,-1, 31,0);
    tracep->declBus(c+918,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+603,"clock", false,-1);
    tracep->declBit(c+828,"valid", false,-1);
    tracep->declBus(c+825,"cmd", false,-1, 7,0);
    tracep->declBus(c+917,"addr", false,-1, 31,0);
    tracep->declBus(c+916,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+893,"io_clk", false,-1);
    tracep->declBit(c+836,"io_cke", false,-1);
    tracep->declBit(c+837,"io_cs", false,-1);
    tracep->declBit(c+838,"io_ras", false,-1);
    tracep->declBit(c+839,"io_cas", false,-1);
    tracep->declBit(c+840,"io_we", false,-1);
    tracep->declBus(c+841,"io_a", false,-1, 12,0);
    tracep->declBus(c+842,"io_ba", false,-1, 1,0);
    tracep->declBus(c+843,"io_dqm", false,-1, 1,0);
    tracep->declBus(c+894,"io_dq", false,-1, 15,0);
    tracep->declBus(c+809,"word_remain_1", false,-1, 3,0);
    tracep->declBus(c+845,"cmd", false,-1, 3,0);
    tracep->declBus(c+810,"mode", false,-1, 12,0);
    tracep->declBus(c+811,"word_remain", false,-1, 3,0);
    tracep->declBus(c+812,"raddr_s1", false,-1, 23,0);
    tracep->declBus(c+813,"waddr_s1", false,-1, 23,0);
    tracep->declBit(c+814,"di_REG", false,-1);
    tracep->declBus(c+815,"REG", false,-1, 15,0);
    tracep->declBus(c+816,"r", false,-1, 1,0);
    tracep->pushNamePrefix("di_buf ");
    tracep->declBus(c+1035,"width", false,-1, 31,0);
    tracep->declBus(c+894,"dio", false,-1, 15,0);
    tracep->declBus(c+817,"dout", false,-1, 15,0);
    tracep->declBit(c+814,"out_en", false,-1);
    tracep->declBus(c+894,"din", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+812,"R0_addr", false,-1, 23,0);
    tracep->declBit(c+925,"R0_en", false,-1);
    tracep->declBit(c+893,"R0_clk", false,-1);
    tracep->declBus(c+817,"R0_data", false,-1, 15,0);
    tracep->declBus(c+813,"W0_addr", false,-1, 23,0);
    tracep->declBit(c+818,"W0_en", false,-1);
    tracep->declBit(c+893,"W0_clk", false,-1);
    tracep->declBus(c+815,"W0_data", false,-1, 15,0);
    tracep->declBus(c+816,"W0_mask", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rowReg_ext ");
    tracep->declBus(c+842,"R0_addr", false,-1, 1,0);
    tracep->declBit(c+925,"R0_en", false,-1);
    tracep->declBit(c+893,"R0_clk", false,-1);
    tracep->declBus(c+919,"R0_data", false,-1, 12,0);
    tracep->declBus(c+842,"W0_addr", false,-1, 1,0);
    tracep->declBit(c+852,"W0_en", false,-1);
    tracep->declBit(c+893,"W0_clk", false,-1);
    tracep->declBus(c+841,"W0_data", false,-1, 12,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+819+i*1,"Memory", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_hcfa051ba_0;
extern const VlWide<10>/*319:0*/ VysyxSoCFull__ConstPool__CONST_h2ac0b763_0;

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<9>/*287:0*/ __Vtemp_h1de30f8f__0;
    VlWide<5>/*159:0*/ __Vtemp_hd67b6bdc__0;
    VlWide<4>/*127:0*/ __Vtemp_hb716f3c3__0;
    VlWide<3>/*95:0*/ __Vtemp_h21d89b9f__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[0]),22);
    bufp->fullIData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[1]),22);
    bufp->fullIData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[2]),22);
    bufp->fullIData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[3]),22);
    bufp->fullIData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[4]),22);
    bufp->fullIData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[5]),22);
    bufp->fullIData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[6]),22);
    bufp->fullIData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[7]),22);
    bufp->fullIData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[8]),22);
    bufp->fullIData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[9]),22);
    bufp->fullIData(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[10]),22);
    bufp->fullIData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[11]),22);
    bufp->fullIData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[12]),22);
    bufp->fullIData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[13]),22);
    bufp->fullIData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[14]),22);
    bufp->fullIData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[15]),22);
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[16]),22);
    bufp->fullIData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[17]),22);
    bufp->fullIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[18]),22);
    bufp->fullIData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[19]),22);
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[20]),22);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[21]),22);
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[22]),22);
    bufp->fullIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__pair_list[23]),22);
    bufp->fullSData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[4]),10);
    bufp->fullSData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[5]),10);
    bufp->fullSData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[6]),10);
    bufp->fullSData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[7]),10);
    bufp->fullSData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[8]),10);
    bufp->fullSData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[9]),10);
    bufp->fullSData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[10]),10);
    bufp->fullSData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[11]),10);
    bufp->fullSData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[12]),10);
    bufp->fullSData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[13]),10);
    bufp->fullSData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[14]),10);
    bufp->fullSData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[15]),10);
    bufp->fullSData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[16]),10);
    bufp->fullSData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[17]),10);
    bufp->fullSData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[18]),10);
    bufp->fullSData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[19]),10);
    bufp->fullSData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[20]),10);
    bufp->fullSData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[21]),10);
    bufp->fullSData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[22]),10);
    bufp->fullSData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__key_list[23]),10);
    bufp->fullSData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[3]),12);
    bufp->fullSData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[4]),12);
    bufp->fullSData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[5]),12);
    bufp->fullSData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[6]),12);
    bufp->fullSData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[7]),12);
    bufp->fullSData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[8]),12);
    bufp->fullSData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[9]),12);
    bufp->fullSData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[10]),12);
    bufp->fullSData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[11]),12);
    bufp->fullSData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[12]),12);
    bufp->fullSData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[13]),12);
    bufp->fullSData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[14]),12);
    bufp->fullSData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[15]),12);
    bufp->fullSData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[16]),12);
    bufp->fullSData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[17]),12);
    bufp->fullSData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[18]),12);
    bufp->fullSData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[19]),12);
    bufp->fullSData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[20]),12);
    bufp->fullSData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[21]),12);
    bufp->fullSData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[22]),12);
    bufp->fullSData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__data_list[23]),12);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__data_list[4]),2);
    bufp->fullSData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[8]),13);
    bufp->fullSData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[9]),13);
    bufp->fullSData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[10]),13);
    bufp->fullSData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[7]),12);
    bufp->fullSData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[8]),12);
    bufp->fullSData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[9]),12);
    bufp->fullSData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[10]),12);
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[7]));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[8]));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[9]));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[10]));
    bufp->fullSData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[7]),12);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[7]));
    bufp->fullSData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__key_list[2]),12);
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__data_list[2]));
    bufp->fullIData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[0]),19);
    bufp->fullIData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[1]),19);
    bufp->fullIData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[2]),19);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[2]),7);
    bufp->fullSData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[2]),12);
    bufp->fullIData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[0]),29);
    bufp->fullIData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[1]),29);
    bufp->fullIData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[2]),29);
    bufp->fullIData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[3]),29);
    bufp->fullIData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[4]),29);
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[5]),29);
    bufp->fullIData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[6]),29);
    bufp->fullIData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[7]),29);
    bufp->fullIData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[8]),29);
    bufp->fullIData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[9]),29);
    bufp->fullIData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[10]),29);
    bufp->fullIData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[0]),17);
    bufp->fullIData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[1]),17);
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[2]),17);
    bufp->fullIData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[3]),17);
    bufp->fullIData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[4]),17);
    bufp->fullIData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[5]),17);
    bufp->fullIData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[6]),17);
    bufp->fullIData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[7]),17);
    bufp->fullIData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[8]),17);
    bufp->fullIData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[9]),17);
    bufp->fullIData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[10]),17);
    bufp->fullSData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[3]),12);
    bufp->fullSData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[4]),12);
    bufp->fullSData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[5]),12);
    bufp->fullSData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[6]),12);
    bufp->fullSData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[7]),12);
    bufp->fullSData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[8]),12);
    bufp->fullSData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[9]),12);
    bufp->fullSData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[10]),12);
    bufp->fullQData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullIData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__key_list[0]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__key_list[1]),32);
    bufp->fullSData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__data_list[1]),12);
    bufp->fullIData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[0]),24);
    bufp->fullIData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[1]),24);
    bufp->fullSData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[1]),12);
    bufp->fullIData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mvendorid),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__marchid),32);
    bufp->fullSData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[5]),12);
    bufp->fullIData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+226,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+230,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+231,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+232,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+233,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+234,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+236,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+237,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+238,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+243,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+244,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+245,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+246,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullBit(oldp+258,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT____VdfgTmp_h1913f1ad__0) 
                             | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD)) 
                                | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD))))));
    bufp->fullIData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_addr),32);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__lsu_size),3);
    bufp->fullBit(oldp+261,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT____VdfgTmp_h1913f1ad__0) 
                             | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD)))));
    bufp->fullIData(oldp+263,(((0x1fU >= ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0) 
                                          << 3U)) ? 
                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs2Data 
                                << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0) 
                                    << 3U)) : 0U)),32);
    bufp->fullCData(oldp+264,(((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__InstrNum))
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_reqValid) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0 
                                       >> 1U)) ? 0xcU
                                    : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__InstrNum))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__InstrNum))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0))
                                                     ? 4U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0))
                                                      ? 8U
                                                      : 0U))))
                                                  : 0U)))),4);
    bufp->fullBit(oldp+265,((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD))));
    bufp->fullBit(oldp+266,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+267,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1] 
                                       >> 2U))),4);
    bufp->fullCData(oldp+268,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1])),2);
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+270,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateI)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_reqValid)) 
                             | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateI)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)))));
    bufp->fullIData(oldp+271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_addr
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_addr)),32);
    bufp->fullCData(oldp+272,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__lsu_size)
                                : 2U)),3);
    bufp->fullBit(oldp+273,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateI)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD)))));
    bufp->fullBit(oldp+274,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+275,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+276,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+277,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+278,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1]),6);
    bufp->fullCData(oldp+286,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+312,((((QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_addr
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_addr))) 
                                << 0xbU) | (QData)((IData)(
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead)
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__lsu_size)
                                                             : 2U))))),47);
    bufp->fullQData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+328,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_addr)) 
                                << 0xbU) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__lsu_size)))),47);
    bufp->fullQData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+344,((((QData)((IData)(((0x1fU 
                                                  >= 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0) 
                                                   << 3U))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs2Data 
                                                  << 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0) 
                                                   << 3U))
                                                  : 0U))) 
                                << 4U) | (QData)((IData)(
                                                         ((0x10U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__InstrNum))
                                                           ? 
                                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_reqValid) 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0 
                                                               >> 1U))
                                                            ? 0xcU
                                                            : 3U)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__InstrNum))
                                                            ? 0xfU
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__InstrNum))
                                                             ? 
                                                            ((0U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0))
                                                              ? 1U
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0))
                                                               ? 2U
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0))
                                                                ? 4U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h498421c9__0))
                                                                 ? 8U
                                                                 : 0U))))
                                                             : 0U))))))),36);
    bufp->fullQData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_addr),32);
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_ifu_reqValid));
    bufp->fullIData(oldp+353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__instReturn)
                                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                           >> 3U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__io_ifu_rdata_r)),32);
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__instReturn));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_reqValid));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___bridge_io_lsu_respValid));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__lsu_size),2);
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__wen_ram));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__isValidLoad));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__isValidStore));
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateI),2);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__stateD),3);
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__lsuRead));
    bufp->fullIData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__bridge__DOT__io_ifu_rdata_r),32);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Imm),32);
    bufp->fullSData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__InstrNum),12);
    bufp->fullSData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__CsrNum),12);
    bufp->fullCData(oldp+369,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+370,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+371,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction 
                                        >> 7U))),5);
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__reqValid));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWen));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC_en));
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AluByteIdx),2);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ExuRes),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrData),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrExuData),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs1Data),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs2Data),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf
                              [0xaU]),32);
    bufp->fullCData(oldp+384,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT___cpu_io_lsu_reqValid) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0 
                                   >> 1U)) ? 0xcU : 3U)),4);
    bufp->fullCData(oldp+385,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+386,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+387,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction)),7);
    bufp->fullSData(oldp+388,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__B_imm),12);
    bufp->fullSData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__S_imm),12);
    bufp->fullIData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__J_imm),20);
    bufp->fullIData(oldp+392,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__I_ex),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__S_ex),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__J_ex),32);
    bufp->fullIData(oldp+396,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction)),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__B_ex),32);
    bufp->fullSData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Opcode_Funct3),10);
    bufp->fullIData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Opcode_Funct3_Funct7),17);
    bufp->fullSData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrFunct3),12);
    bufp->fullSData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrNoFunct),12);
    bufp->fullSData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrFunct7),12);
    bufp->fullSData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrCsr),12);
    bufp->fullBit(oldp+404,((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction))));
    bufp->fullBit(oldp+405,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Instruction))));
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__lsu_funct3_key),3);
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__reg_wen));
    bufp->fullSData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT____Vcellinp__i1__lut),1760);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i11__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i5__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__CurrentState));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__NextState));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__UpdatePC_en));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__o_IfuValid_next));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_LSU__DOT__CurrentState));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_LSU__DOT__NextState));
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcause),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mepc),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mstatus),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mtvec),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycle),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycleh),32);
    bufp->fullIData(oldp+496,(((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf
                                [0xfU]) ? ((IData)(4U) 
                                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC)
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC)),32);
    __Vtemp_h1de30f8f__0[0U] = (IData)((0x600000000ULL 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycleh))));
    __Vtemp_h1de30f8f__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycle 
                                 << 0xcU) | (IData)(
                                                    ((0x600000000ULL 
                                                      | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycleh))) 
                                                     >> 0x20U)));
    __Vtemp_h1de30f8f__0[2U] = (0x5000U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mtvec 
                                            << 0x18U) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycle 
                                              >> 0x14U)));
    __Vtemp_h1de30f8f__0[3U] = (0x4000000U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mtvec 
                                              >> 8U));
    __Vtemp_h1de30f8f__0[4U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mstatus 
                                << 4U);
    __Vtemp_h1de30f8f__0[5U] = (0x30U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcause 
                                          << 0x10U) 
                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mstatus 
                                            >> 0x1cU)));
    __Vtemp_h1de30f8f__0[6U] = (0x20000U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mepc 
                                             << 0x1cU) 
                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcause 
                                               >> 0x10U)));
    __Vtemp_h1de30f8f__0[7U] = (0x10000000U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mepc 
                                               >> 4U));
    __Vtemp_h1de30f8f__0[8U] = 0U;
    bufp->fullWData(oldp+497,(__Vtemp_h1de30f8f__0),264);
    bufp->fullQData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullQData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[4]),44);
    bufp->fullQData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[5]),44);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0]),32);
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[1]),32);
    bufp->fullIData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[2]),32);
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[3]),32);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[4]),32);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[5]),32);
    bufp->fullIData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[6]),32);
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[7]),32);
    bufp->fullIData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[8]),32);
    bufp->fullIData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[9]),32);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[10]),32);
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[11]),32);
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[12]),32);
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[13]),32);
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[14]),32);
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[15]),32);
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[16]),32);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[17]),32);
    bufp->fullIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[18]),32);
    bufp->fullIData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[19]),32);
    bufp->fullIData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[20]),32);
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[21]),32);
    bufp->fullIData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[22]),32);
    bufp->fullIData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[23]),32);
    bufp->fullIData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[24]),32);
    bufp->fullIData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[25]),32);
    bufp->fullIData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[26]),32);
    bufp->fullIData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[27]),32);
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[28]),32);
    bufp->fullIData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[29]),32);
    bufp->fullIData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[30]),32);
    bufp->fullIData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[31]),32);
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state),4);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+606,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+607,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullSData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready));
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata),32);
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out));
    bufp->fullSData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+634,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+635,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+636,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+637,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+638,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+639,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+640,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+644,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+646,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+647,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+649,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+653,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+654,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+656,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+674,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+675,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+676,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+677,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+678,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+679,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+680,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+683,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+684,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+685,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+704,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+711,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+730,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+731,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+732,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+733,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+734,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+753,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+754,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+755,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+756,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+757,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+759,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+778,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+795,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+806,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+807,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__word_remain_1),4);
    bufp->fullSData(oldp+810,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mode),13);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__word_remain),4);
    bufp->fullIData(oldp+812,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__raddr_s1),24);
    bufp->fullIData(oldp+813,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__waddr_s1),24);
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__di_REG));
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__REG),16);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__r),2);
    bufp->fullSData(oldp+817,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__mem_ext__DOT___R0_en_d0)
                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__mem_ext__DOT__Memory
                               [vlSelf->ysyxSoCFull__DOT__sdram__DOT__mem_ext__DOT___R0_addr_d0]
                                : 0U)),16);
    bufp->fullBit(oldp+818,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__word_remain_1))));
    bufp->fullSData(oldp+819,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rowReg_ext__DOT__Memory[0]),13);
    bufp->fullSData(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rowReg_ext__DOT__Memory[1]),13);
    bufp->fullSData(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rowReg_ext__DOT__Memory[2]),13);
    bufp->fullSData(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rowReg_ext__DOT__Memory[3]),13);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+828,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state),2);
    bufp->fullBit(oldp+831,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_state))));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwrite));
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb),4);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+837,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+838,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+839,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+840,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullBit(oldp+844,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+852,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))));
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullIData(oldp+856,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+857,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+858,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+866,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+867,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+868,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+869,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0) 
                               << 2U)),32);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata),32);
    bufp->fullCData(oldp+871,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0) 
                               << 2U)),5);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullIData(oldp+873,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+874,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+888,(vlSelf->clock));
    bufp->fullBit(oldp+889,(vlSelf->reset));
    bufp->fullBit(oldp+890,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+891,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+892,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+893,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+894,(vlSelf->ysyxSoCFull__DOT__sdram__DOT___di_buf_din),16);
    bufp->fullBit(oldp+895,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+896,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+897,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullBit(oldp+898,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+899,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+900,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state)) 
                              | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack))));
    bufp->fullIData(oldp+901,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__cmd_state))
                                ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                    << 0x18U) | ((0xff0000U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                     << 8U)) 
                                                 | ((0xff00U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                        >> 8U)) 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
                                                       >> 0x18U))))
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata)),32);
    bufp->fullIData(oldp+902,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+903,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                << 0x23U) | (((QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                              << 3U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                   << 1U))))))),39);
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_ack));
    bufp->fullBit(oldp+907,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0)))));
    bufp->fullBit(oldp+908,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0)))));
    bufp->fullCData(oldp+909,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0))))))),4);
    bufp->fullBit(oldp+910,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_hd1274b5a__0)))));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+913,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+917,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+918,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullSData(oldp+919,(vlSelf->ysyxSoCFull__DOT__sdram__DOT___rowReg_ext_R0_data),13);
    bufp->fullCData(oldp+920,(1U),3);
    bufp->fullBit(oldp+921,(0U));
    bufp->fullCData(oldp+922,(0U),2);
    bufp->fullCData(oldp+923,(0U),4);
    bufp->fullCData(oldp+924,(0U),8);
    bufp->fullBit(oldp+925,(1U));
    bufp->fullIData(oldp+926,(0U),32);
    bufp->fullCData(oldp+927,(0U),3);
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IfuValid));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__respValid));
    bufp->fullIData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IfuRdata),32);
    bufp->fullIData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IfuRaddr),32);
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MemWen));
    bufp->fullIData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__McauseData),32);
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MepcData),32);
    bufp->fullIData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MstatusData),32);
    bufp->fullIData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MtvecData),32);
    bufp->fullIData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LsuRaddr),32);
    bufp->fullIData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LsuWaddr),32);
    bufp->fullIData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LsuWdata),32);
    bufp->fullIData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LsuRData),32);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LsuWmask),8);
    bufp->fullIData(oldp+942,(0x20U),32);
    bufp->fullIData(oldp+943,(0x18U),32);
    bufp->fullIData(oldp+944,(0xaU),32);
    bufp->fullIData(oldp+945,(0xcU),32);
    bufp->fullSData(oldp+946,(0U),12);
    bufp->fullWData(oldp+947,(VysyxSoCFull__ConstPool__CONST_hcfa051ba_0),528);
    bufp->fullIData(oldp+964,(1U),32);
    bufp->fullIData(oldp+965,(0x16U),32);
    bufp->fullIData(oldp+966,(0x18U),32);
    bufp->fullIData(oldp+967,(0x28U),32);
    bufp->fullIData(oldp+968,(0x2cU),32);
    bufp->fullIData(oldp+969,(0x28U),32);
    bufp->fullIData(oldp+970,(5U),32);
    bufp->fullIData(oldp+971,(3U),32);
    bufp->fullIData(oldp+972,(2U),32);
    bufp->fullIData(oldp+973,(0x816aaU),25);
    bufp->fullIData(oldp+974,(5U),32);
    bufp->fullIData(oldp+975,(0xbU),32);
    __Vtemp_hd67b6bdc__0[0U] = 0xd8070048U;
    __Vtemp_hd67b6bdc__0[1U] = 0x2e01800U;
    __Vtemp_hd67b6bdc__0[2U] = 0xd0070040U;
    __Vtemp_hd67b6bdc__0[3U] = 0x1000e00U;
    __Vtemp_hd67b6bdc__0[4U] = 0x18U;
    bufp->fullWData(oldp+976,(__Vtemp_hd67b6bdc__0),143);
    bufp->fullIData(oldp+981,(0xdU),32);
    bufp->fullIData(oldp+982,(0xbU),32);
    bufp->fullIData(oldp+983,(8U),32);
    __Vtemp_hb716f3c3__0[0U] = 0xfc082047U;
    __Vtemp_hb716f3c3__0[1U] = 0xf01080U;
    __Vtemp_hb716f3c3__0[2U] = 0x2804400eU;
    __Vtemp_hb716f3c3__0[3U] = 0U;
    bufp->fullWData(oldp+984,(__Vtemp_hb716f3c3__0),104);
    bufp->fullIData(oldp+988,(8U),32);
    bufp->fullQData(oldp+989,(0x1c01e021ULL),39);
    bufp->fullIData(oldp+991,(3U),32);
    bufp->fullIData(oldp+992,(7U),32);
    bufp->fullQData(oldp+993,(0xdc018b804ef00aULL),57);
    bufp->fullIData(oldp+995,(0x13U),32);
    bufp->fullIData(oldp+996,(0x11U),32);
    bufp->fullWData(oldp+997,(VysyxSoCFull__ConstPool__CONST_h2ac0b763_0),319);
    bufp->fullIData(oldp+1007,(0x1dU),32);
    __Vtemp_h21d89b9f__0[0U] = 0x73027U;
    __Vtemp_h21d89b9f__0[1U] = 0x73024302U;
    __Vtemp_h21d89b9f__0[2U] = 0U;
    bufp->fullWData(oldp+1008,(__Vtemp_h21d89b9f__0),88);
    bufp->fullIData(oldp+1011,(2U),32);
    bufp->fullQData(oldp+1012,(0xb00005b80006ULL),48);
    bufp->fullIData(oldp+1014,(0x30000000U),32);
    bufp->fullBit(oldp+1015,(0U));
    bufp->fullBit(oldp+1016,(1U));
    bufp->fullIData(oldp+1017,(6U),32);
    bufp->fullIData(oldp+1018,(6U),32);
    bufp->fullIData(oldp+1019,(0x64U),32);
    bufp->fullIData(oldp+1020,(9U),32);
    bufp->fullIData(oldp+1021,(4U),32);
    bufp->fullIData(oldp+1022,(0x2000U),32);
    bufp->fullIData(oldp+1023,(0x2710U),32);
    bufp->fullIData(oldp+1024,(0x30cU),32);
    bufp->fullCData(oldp+1025,(7U),4);
    bufp->fullCData(oldp+1026,(3U),4);
    bufp->fullCData(oldp+1027,(5U),4);
    bufp->fullCData(oldp+1028,(4U),4);
    bufp->fullCData(oldp+1029,(6U),4);
    bufp->fullCData(oldp+1030,(2U),4);
    bufp->fullCData(oldp+1031,(1U),4);
    bufp->fullSData(oldp+1032,(0x21U),13);
    bufp->fullCData(oldp+1033,(8U),4);
    bufp->fullCData(oldp+1034,(9U),4);
    bufp->fullIData(oldp+1035,(0x10U),32);
    bufp->fullIData(oldp+1036,(0x3fffffffU),32);
    bufp->fullCData(oldp+1037,(0xaU),4);
    bufp->fullCData(oldp+1038,(2U),3);
    bufp->fullCData(oldp+1039,(3U),3);
    bufp->fullCData(oldp+1040,(4U),3);
    bufp->fullCData(oldp+1041,(5U),3);
}
