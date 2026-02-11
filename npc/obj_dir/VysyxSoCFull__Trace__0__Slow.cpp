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
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBus(c+1524,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1525,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1526,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1527,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1528,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1529,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1530,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1531,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1532,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1533,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1534,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1535,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1536,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1537,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1538,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1539,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1540,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1541,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1542,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1543,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBus(c+1524,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1525,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1526,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1527,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1528,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1529,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1530,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1531,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1532,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1533,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1534,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1535,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1536,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1537,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1538,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1539,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1540,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1541,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1542,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1543,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+810,"spi_sck", false,-1);
    tracep->declBus(c+811,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1418,"spi_mosi", false,-1);
    tracep->declBit(c+1544,"spi_miso", false,-1);
    tracep->declBit(c+1542,"uart_rx", false,-1);
    tracep->declBit(c+1543,"uart_tx", false,-1);
    tracep->declBit(c+1483,"psram_sck", false,-1);
    tracep->declBit(c+1484,"psram_ce_n", false,-1);
    tracep->declBus(c+1545,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1546,"sdram_clk", false,-1);
    tracep->declBit(c+1419,"sdram_cke", false,-1);
    tracep->declBit(c+812,"sdram_cs", false,-1);
    tracep->declBit(c+813,"sdram_ras", false,-1);
    tracep->declBit(c+814,"sdram_cas", false,-1);
    tracep->declBit(c+815,"sdram_we", false,-1);
    tracep->declBus(c+1547,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1420,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1421,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1433,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1524,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1525,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1526,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1527,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1528,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1529,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1530,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1531,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1532,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1533,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1534,"ps2_clk", false,-1);
    tracep->declBit(c+1535,"ps2_data", false,-1);
    tracep->declBus(c+1536,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1537,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1538,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1539,"vga_hsync", false,-1);
    tracep->declBit(c+1540,"vga_vsync", false,-1);
    tracep->declBit(c+1541,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBus(c+1448,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+231,"in_psel", false,-1);
    tracep->declBit(c+232,"in_penable", false,-1);
    tracep->declBus(c+1578,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+233,"in_pwrite", false,-1);
    tracep->declBus(c+1130,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1485,"in_pready", false,-1);
    tracep->declBus(c+1486,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1487,"in_pslverr", false,-1);
    tracep->declBus(c+1448,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+231,"out_psel", false,-1);
    tracep->declBit(c+232,"out_penable", false,-1);
    tracep->declBus(c+1578,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+233,"out_pwrite", false,-1);
    tracep->declBus(c+1130,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1485,"out_pready", false,-1);
    tracep->declBus(c+1486,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1487,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+231,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+232,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+233,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1448,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1485,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1487,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1486,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+794,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+795,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+233,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1448,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+816,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1579,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+817,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+796,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+797,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+233,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1449,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1578,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1580,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1581,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1582,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+798,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+799,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+233,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1450,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1578,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1583,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1584,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1585,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+800,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+801,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+233,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1450,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1578,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1586,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1587,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1588,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1451,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+802,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+233,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1448,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1548,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1579,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+235,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1452,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1453,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+233,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1450,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1578,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1454,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1579,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1549,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1455,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1456,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+233,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1449,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1578,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1550,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1551,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1552,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1457,"sel_0", false,-1);
    tracep->declBit(c+1458,"sel_1", false,-1);
    tracep->declBit(c+1459,"sel_2", false,-1);
    tracep->declBit(c+1460,"sel_3", false,-1);
    tracep->declBit(c+1461,"sel_4", false,-1);
    tracep->declBit(c+1462,"sel_5", false,-1);
    tracep->declBit(c+1463,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+236,"auto_in_awready", false,-1);
    tracep->declBit(c+237,"auto_in_awvalid", false,-1);
    tracep->declBus(c+238,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+239,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+240,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+241,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+236,"auto_in_wready", false,-1);
    tracep->declBit(c+242,"auto_in_wvalid", false,-1);
    tracep->declBus(c+243,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+244,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+245,"auto_in_bready", false,-1);
    tracep->declBit(c+1488,"auto_in_bvalid", false,-1);
    tracep->declBus(c+246,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1489,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+247,"auto_in_arready", false,-1);
    tracep->declBit(c+248,"auto_in_arvalid", false,-1);
    tracep->declBus(c+249,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+251,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+252,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+253,"auto_in_rready", false,-1);
    tracep->declBit(c+1490,"auto_in_rvalid", false,-1);
    tracep->declBus(c+254,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1553,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1489,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+231,"auto_out_psel", false,-1);
    tracep->declBit(c+232,"auto_out_penable", false,-1);
    tracep->declBit(c+233,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1448,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1130,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1485,"auto_out_pready", false,-1);
    tracep->declBit(c+1487,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1486,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+232,"nodeOut_penable", false,-1);
    tracep->declBus(c+255,"state", false,-1, 1,0);
    tracep->declBit(c+247,"accept_read", false,-1);
    tracep->declBit(c+236,"accept_write", false,-1);
    tracep->declBit(c+256,"is_write_r", false,-1);
    tracep->declBit(c+233,"is_write", false,-1);
    tracep->declBus(c+254,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+246,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+257,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+258,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+259,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+260,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1491,"resp", false,-1, 1,0);
    tracep->declBus(c+261,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1489,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1490,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+262,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1488,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+263,"auto_in_awready", false,-1);
    tracep->declBit(c+1143,"auto_in_awvalid", false,-1);
    tracep->declBus(c+264,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1144,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+265,"auto_in_wready", false,-1);
    tracep->declBit(c+1147,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1148,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1150,"auto_in_wlast", false,-1);
    tracep->declBit(c+740,"auto_in_bready", false,-1);
    tracep->declBit(c+266,"auto_in_bvalid", false,-1);
    tracep->declBus(c+267,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+268,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_in_arready", false,-1);
    tracep->declBit(c+1151,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1153,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+741,"auto_in_rready", false,-1);
    tracep->declBit(c+270,"auto_in_rvalid", false,-1);
    tracep->declBus(c+271,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+272,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+273,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+274,"auto_in_rlast", false,-1);
    tracep->declBit(c+236,"auto_out_awready", false,-1);
    tracep->declBit(c+237,"auto_out_awvalid", false,-1);
    tracep->declBus(c+238,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+239,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+240,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+241,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+236,"auto_out_wready", false,-1);
    tracep->declBit(c+242,"auto_out_wvalid", false,-1);
    tracep->declBus(c+243,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+244,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+245,"auto_out_bready", false,-1);
    tracep->declBit(c+1488,"auto_out_bvalid", false,-1);
    tracep->declBus(c+246,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1489,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+247,"auto_out_arready", false,-1);
    tracep->declBit(c+248,"auto_out_arvalid", false,-1);
    tracep->declBus(c+249,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+250,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+251,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+252,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+253,"auto_out_rready", false,-1);
    tracep->declBit(c+1490,"auto_out_rvalid", false,-1);
    tracep->declBus(c+254,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1553,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1489,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+1488,"io_enq_valid", false,-1);
    tracep->declBus(c+246,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1489,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+740,"io_deq_ready", false,-1);
    tracep->declBit(c+266,"io_deq_valid", false,-1);
    tracep->declBus(c+267,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+268,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+275,"wrap", false,-1);
    tracep->declBit(c+276,"wrap_1", false,-1);
    tracep->declBit(c+277,"maybe_full", false,-1);
    tracep->declBit(c+278,"ptr_match", false,-1);
    tracep->declBit(c+279,"empty", false,-1);
    tracep->declBit(c+280,"full", false,-1);
    tracep->declBit(c+1492,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+276,"R0_addr", false,-1);
    tracep->declBit(c+1589,"R0_en", false,-1);
    tracep->declBit(c+1522,"R0_clk", false,-1);
    tracep->declBus(c+281,"R0_data", false,-1, 5,0);
    tracep->declBit(c+275,"W0_addr", false,-1);
    tracep->declBit(c+1492,"W0_en", false,-1);
    tracep->declBit(c+1522,"W0_clk", false,-1);
    tracep->declBus(c+1554,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+282+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+1490,"io_enq_valid", false,-1);
    tracep->declBus(c+254,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1553,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1489,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+741,"io_deq_ready", false,-1);
    tracep->declBit(c+270,"io_deq_valid", false,-1);
    tracep->declBus(c+271,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+272,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+273,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+274,"io_deq_bits_last", false,-1);
    tracep->declBit(c+285,"wrap", false,-1);
    tracep->declBit(c+286,"wrap_1", false,-1);
    tracep->declBit(c+287,"maybe_full", false,-1);
    tracep->declBit(c+288,"ptr_match", false,-1);
    tracep->declBit(c+289,"empty", false,-1);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+1493,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+286,"R0_addr", false,-1);
    tracep->declBit(c+1589,"R0_en", false,-1);
    tracep->declBit(c+1522,"R0_clk", false,-1);
    tracep->declQuad(c+291,"R0_data", false,-1, 38,0);
    tracep->declBit(c+285,"W0_addr", false,-1);
    tracep->declBit(c+1493,"W0_en", false,-1);
    tracep->declBit(c+1522,"W0_clk", false,-1);
    tracep->declQuad(c+1555,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+293+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+297,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+1151,"io_enq_valid", false,-1);
    tracep->declBus(c+1152,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1153,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1154,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1155,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+247,"io_deq_ready", false,-1);
    tracep->declBit(c+248,"io_deq_valid", false,-1);
    tracep->declBus(c+249,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+250,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+251,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+252,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+298,"wrap", false,-1);
    tracep->declBit(c+299,"wrap_1", false,-1);
    tracep->declBit(c+300,"maybe_full", false,-1);
    tracep->declBit(c+301,"ptr_match", false,-1);
    tracep->declBit(c+302,"empty", false,-1);
    tracep->declBit(c+303,"full", false,-1);
    tracep->declBit(c+1156,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+299,"R0_addr", false,-1);
    tracep->declBit(c+1589,"R0_en", false,-1);
    tracep->declBit(c+1522,"R0_clk", false,-1);
    tracep->declQuad(c+304,"R0_data", false,-1, 46,0);
    tracep->declBit(c+298,"W0_addr", false,-1);
    tracep->declBit(c+1156,"W0_en", false,-1);
    tracep->declBit(c+1522,"W0_clk", false,-1);
    tracep->declQuad(c+1157,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+306+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+310,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+263,"io_enq_ready", false,-1);
    tracep->declBit(c+1143,"io_enq_valid", false,-1);
    tracep->declBus(c+264,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1144,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1145,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1146,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+236,"io_deq_ready", false,-1);
    tracep->declBit(c+237,"io_deq_valid", false,-1);
    tracep->declBus(c+238,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+239,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+240,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+241,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+311,"wrap", false,-1);
    tracep->declBit(c+312,"wrap_1", false,-1);
    tracep->declBit(c+313,"maybe_full", false,-1);
    tracep->declBit(c+314,"ptr_match", false,-1);
    tracep->declBit(c+315,"empty", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+1159,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+312,"R0_addr", false,-1);
    tracep->declBit(c+1589,"R0_en", false,-1);
    tracep->declBit(c+1522,"R0_clk", false,-1);
    tracep->declQuad(c+317,"R0_data", false,-1, 46,0);
    tracep->declBit(c+311,"W0_addr", false,-1);
    tracep->declBit(c+1159,"W0_en", false,-1);
    tracep->declBit(c+1522,"W0_clk", false,-1);
    tracep->declQuad(c+742,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+319+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+323,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+1147,"io_enq_valid", false,-1);
    tracep->declBus(c+1148,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1149,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1150,"io_enq_bits_last", false,-1);
    tracep->declBit(c+236,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBus(c+243,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+244,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+324,"wrap", false,-1);
    tracep->declBit(c+325,"wrap_1", false,-1);
    tracep->declBit(c+326,"maybe_full", false,-1);
    tracep->declBit(c+327,"ptr_match", false,-1);
    tracep->declBit(c+328,"empty", false,-1);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+1160,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+325,"R0_addr", false,-1);
    tracep->declBit(c+1589,"R0_en", false,-1);
    tracep->declBit(c+1522,"R0_clk", false,-1);
    tracep->declQuad(c+330,"R0_data", false,-1, 35,0);
    tracep->declBit(c+324,"W0_addr", false,-1);
    tracep->declBit(c+1160,"W0_en", false,-1);
    tracep->declBit(c+1522,"W0_clk", false,-1);
    tracep->declQuad(c+1161,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+332+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+337,"auto_in_awready", false,-1);
    tracep->declBit(c+1163,"auto_in_awvalid", false,-1);
    tracep->declBus(c+338,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1164,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1165,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1166,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1167,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+339,"auto_in_wready", false,-1);
    tracep->declBit(c+1168,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1169,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1170,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"auto_in_wlast", false,-1);
    tracep->declBit(c+1172,"auto_in_bready", false,-1);
    tracep->declBit(c+340,"auto_in_bvalid", false,-1);
    tracep->declBus(c+341,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+342,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+343,"auto_in_arready", false,-1);
    tracep->declBit(c+1173,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1174,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1175,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1176,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1177,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1179,"auto_in_rready", false,-1);
    tracep->declBit(c+344,"auto_in_rvalid", false,-1);
    tracep->declBus(c+345,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+346,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+348,"auto_in_rlast", false,-1);
    tracep->declBit(c+1180,"auto_out_awready", false,-1);
    tracep->declBit(c+1181,"auto_out_awvalid", false,-1);
    tracep->declBus(c+264,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1144,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1182,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1183,"auto_out_wready", false,-1);
    tracep->declBit(c+1184,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1148,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1150,"auto_out_wlast", false,-1);
    tracep->declBit(c+1185,"auto_out_bready", false,-1);
    tracep->declBit(c+349,"auto_out_bvalid", false,-1);
    tracep->declBus(c+341,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+350,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+351,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1186,"auto_out_arready", false,-1);
    tracep->declBit(c+1187,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1153,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1188,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1179,"auto_out_rready", false,-1);
    tracep->declBit(c+344,"auto_out_rvalid", false,-1);
    tracep->declBus(c+345,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+346,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+352,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+353,"auto_out_rlast", false,-1);
    tracep->declBit(c+1184,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+354,"w_idle", false,-1);
    tracep->declBit(c+1189,"in_awready", false,-1);
    tracep->declBit(c+355,"busy", false,-1);
    tracep->declBus(c+356,"r_addr", false,-1, 31,0);
    tracep->declBus(c+357,"r_len", false,-1, 7,0);
    tracep->declBus(c+1190,"len", false,-1, 7,0);
    tracep->declBus(c+1191,"addr", false,-1, 31,0);
    tracep->declBit(c+358,"busy_1", false,-1);
    tracep->declBus(c+359,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+360,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1192,"len_1", false,-1, 7,0);
    tracep->declBus(c+1193,"addr_1", false,-1, 31,0);
    tracep->declBit(c+361,"wbeats_latched", false,-1);
    tracep->declBit(c+1181,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1194,"wbeats_valid", false,-1);
    tracep->declBus(c+362,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1195,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1150,"w_last", false,-1);
    tracep->declBit(c+1185,"nodeOut_bready", false,-1);
    tracep->declBus(c+363,"error_0", false,-1, 1,0);
    tracep->declBus(c+364,"error_1", false,-1, 1,0);
    tracep->declBus(c+365,"error_2", false,-1, 1,0);
    tracep->declBus(c+366,"error_3", false,-1, 1,0);
    tracep->declBus(c+367,"error_4", false,-1, 1,0);
    tracep->declBus(c+368,"error_5", false,-1, 1,0);
    tracep->declBus(c+369,"error_6", false,-1, 1,0);
    tracep->declBus(c+370,"error_7", false,-1, 1,0);
    tracep->declBus(c+371,"error_8", false,-1, 1,0);
    tracep->declBus(c+372,"error_9", false,-1, 1,0);
    tracep->declBus(c+373,"error_10", false,-1, 1,0);
    tracep->declBus(c+374,"error_11", false,-1, 1,0);
    tracep->declBus(c+375,"error_12", false,-1, 1,0);
    tracep->declBus(c+376,"error_13", false,-1, 1,0);
    tracep->declBus(c+377,"error_14", false,-1, 1,0);
    tracep->declBus(c+378,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+343,"io_enq_ready", false,-1);
    tracep->declBit(c+1173,"io_enq_valid", false,-1);
    tracep->declBus(c+1174,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1175,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1176,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1177,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1178,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1196,"io_deq_ready", false,-1);
    tracep->declBit(c+1187,"io_deq_valid", false,-1);
    tracep->declBus(c+1152,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1197,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1198,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1154,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1155,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+379,"ram", false,-1, 48,0);
    tracep->declBit(c+381,"full", false,-1);
    tracep->declBit(c+1187,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1199,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1163,"io_enq_valid", false,-1);
    tracep->declBus(c+338,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1164,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1165,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1166,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1167,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1200,"io_deq_ready", false,-1);
    tracep->declBit(c+1201,"io_deq_valid", false,-1);
    tracep->declBus(c+264,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1202,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1203,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1145,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1146,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+382,"ram", false,-1, 48,0);
    tracep->declBit(c+384,"full", false,-1);
    tracep->declBit(c+1201,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1204,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+339,"io_enq_ready", false,-1);
    tracep->declBit(c+1168,"io_enq_valid", false,-1);
    tracep->declBus(c+1169,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1170,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1171,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1205,"io_deq_ready", false,-1);
    tracep->declBit(c+1206,"io_deq_valid", false,-1);
    tracep->declBus(c+1148,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1149,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+744,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+385,"ram", false,-1, 36,0);
    tracep->declBit(c+387,"full", false,-1);
    tracep->declBit(c+1206,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1207,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+1208,"auto_in_awready", false,-1);
    tracep->declBit(c+1209,"auto_in_awvalid", false,-1);
    tracep->declBus(c+264,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1210,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1211,"auto_in_wready", false,-1);
    tracep->declBit(c+1212,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1148,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1213,"auto_in_bready", false,-1);
    tracep->declBit(c+388,"auto_in_bvalid", false,-1);
    tracep->declBus(c+389,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+390,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1214,"auto_in_arready", false,-1);
    tracep->declBit(c+1215,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1216,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1217,"auto_in_rready", false,-1);
    tracep->declBit(c+391,"auto_in_rvalid", false,-1);
    tracep->declBus(c+392,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+393,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+394,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1214,"nodeIn_arready", false,-1);
    tracep->declBit(c+1208,"nodeIn_awready", false,-1);
    tracep->declBit(c+1218,"w_sel0", false,-1);
    tracep->declBit(c+388,"w_full", false,-1);
    tracep->declBus(c+389,"w_id", false,-1, 3,0);
    tracep->declBit(c+395,"r_sel1", false,-1);
    tracep->declBit(c+396,"w_sel1", false,-1);
    tracep->declBit(c+391,"r_full", false,-1);
    tracep->declBus(c+392,"r_id", false,-1, 3,0);
    tracep->declBit(c+1219,"ren", false,-1);
    tracep->declBit(c+397,"rdata_REG", false,-1);
    tracep->declBus(c+398,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+399,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+400,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+401,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1220,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1219,"R0_en", false,-1);
    tracep->declBit(c+1522,"R0_clk", false,-1);
    tracep->declBus(c+402,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1221,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1222,"W0_en", false,-1);
    tracep->declBit(c+1522,"W0_clk", false,-1);
    tracep->declBus(c+1148,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1149,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+337,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1163,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+338,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1164,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1165,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1166,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1167,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+339,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1168,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1169,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1170,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1172,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+340,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+341,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+342,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+343,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1173,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1174,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1175,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1176,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1177,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1179,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+344,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+345,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+346,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+348,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+337,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+1163,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+338,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+1164,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1165,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1166,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1167,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+339,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+1168,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+1169,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1170,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1172,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+340,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+341,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+342,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+343,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+1173,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1174,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+1175,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1176,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1177,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1179,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+344,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+345,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+346,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+348,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+1223,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1224,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+264,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1144,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1183,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1184,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1148,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1150,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1185,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+349,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+341,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+350,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1225,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1226,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1153,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1179,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+344,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+345,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+346,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+353,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1208,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1209,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+264,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1210,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1211,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1212,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1148,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1213,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+388,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+389,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+390,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1214,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1215,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1216,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1217,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+391,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+392,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+393,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+394,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1227,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1228,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+403,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1229,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1230,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+745,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+404,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+405,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+406,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+263,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1143,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+264,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1144,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+265,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1147,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1148,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1150,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+740,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+266,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+267,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+268,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+269,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1151,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1153,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+741,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+270,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+271,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+272,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+273,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+274,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+349,"in_0_bvalid", false,-1);
    tracep->declBit(c+344,"in_0_rvalid", false,-1);
    tracep->declBit(c+1231,"in_0_wready", false,-1);
    tracep->declBit(c+1232,"in_0_awready", false,-1);
    tracep->declBit(c+1225,"in_0_arready", false,-1);
    tracep->declBit(c+1223,"anonIn_awready", false,-1);
    tracep->declBit(c+1233,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1234,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1235,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1236,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1237,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1238,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1239,"arSel", false,-1, 15,0);
    tracep->declBus(c+407,"awSel", false,-1, 15,0);
    tracep->declBus(c+408,"rSel", false,-1, 15,0);
    tracep->declBus(c+409,"bSel", false,-1, 15,0);
    tracep->declBit(c+410,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+411,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+412,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+413,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+414,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+415,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+416,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+417,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+418,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+419,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+420,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+421,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+422,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+423,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+424,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+425,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+426,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+427,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+428,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+429,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+430,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+431,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+432,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+433,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+434,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+435,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+436,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+437,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+438,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+439,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+440,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+441,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+442,"latched", false,-1);
    tracep->declBit(c+1240,"in_0_awvalid", false,-1);
    tracep->declBit(c+1241,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1242,"in_0_wvalid", false,-1);
    tracep->declBit(c+443,"idle_3", false,-1);
    tracep->declBit(c+444,"anyValid", false,-1);
    tracep->declBus(c+445,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+446,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+447,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+448,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+449,"prefixOR_1", false,-1);
    tracep->declBit(c+450,"winner_3_1", false,-1);
    tracep->declBit(c+451,"winner_3_2", false,-1);
    tracep->declBit(c+452,"state_3_0", false,-1);
    tracep->declBit(c+453,"state_3_1", false,-1);
    tracep->declBit(c+454,"state_3_2", false,-1);
    tracep->declBit(c+455,"muxState_3_0", false,-1);
    tracep->declBit(c+456,"muxState_3_1", false,-1);
    tracep->declBit(c+457,"muxState_3_2", false,-1);
    tracep->declBit(c+458,"idle_4", false,-1);
    tracep->declBit(c+459,"anyValid_1", false,-1);
    tracep->declBus(c+460,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+461,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+462,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+463,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+464,"winner_4_0", false,-1);
    tracep->declBit(c+465,"winner_4_2", false,-1);
    tracep->declBit(c+466,"state_4_0", false,-1);
    tracep->declBit(c+467,"state_4_2", false,-1);
    tracep->declBit(c+468,"muxState_4_0", false,-1);
    tracep->declBit(c+469,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+470,"io_enq_ready", false,-1);
    tracep->declBit(c+1241,"io_enq_valid", false,-1);
    tracep->declBus(c+1243,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1244,"io_deq_ready", false,-1);
    tracep->declBit(c+1245,"io_deq_valid", false,-1);
    tracep->declBus(c+1246,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+471,"wrap", false,-1);
    tracep->declBit(c+472,"wrap_1", false,-1);
    tracep->declBit(c+473,"maybe_full", false,-1);
    tracep->declBit(c+474,"ptr_match", false,-1);
    tracep->declBit(c+475,"empty", false,-1);
    tracep->declBit(c+476,"full", false,-1);
    tracep->declBit(c+1245,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1247,"do_deq", false,-1);
    tracep->declBit(c+1248,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+472,"R0_addr", false,-1);
    tracep->declBit(c+1589,"R0_en", false,-1);
    tracep->declBit(c+1522,"R0_clk", false,-1);
    tracep->declBus(c+477,"R0_data", false,-1, 2,0);
    tracep->declBit(c+471,"W0_addr", false,-1);
    tracep->declBit(c+1248,"W0_en", false,-1);
    tracep->declBit(c+1522,"W0_clk", false,-1);
    tracep->declBus(c+1243,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+478+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+1180,"auto_in_awready", false,-1);
    tracep->declBit(c+1181,"auto_in_awvalid", false,-1);
    tracep->declBus(c+264,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1144,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1182,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1183,"auto_in_wready", false,-1);
    tracep->declBit(c+1184,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1148,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1150,"auto_in_wlast", false,-1);
    tracep->declBit(c+1185,"auto_in_bready", false,-1);
    tracep->declBit(c+349,"auto_in_bvalid", false,-1);
    tracep->declBus(c+341,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+350,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+351,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1186,"auto_in_arready", false,-1);
    tracep->declBit(c+1187,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1153,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1188,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1179,"auto_in_rready", false,-1);
    tracep->declBit(c+344,"auto_in_rvalid", false,-1);
    tracep->declBus(c+345,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+346,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+352,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+353,"auto_in_rlast", false,-1);
    tracep->declBit(c+1223,"auto_out_awready", false,-1);
    tracep->declBit(c+1224,"auto_out_awvalid", false,-1);
    tracep->declBus(c+264,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1144,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1145,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1146,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1183,"auto_out_wready", false,-1);
    tracep->declBit(c+1184,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1148,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1150,"auto_out_wlast", false,-1);
    tracep->declBit(c+1185,"auto_out_bready", false,-1);
    tracep->declBit(c+349,"auto_out_bvalid", false,-1);
    tracep->declBus(c+341,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+350,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1225,"auto_out_arready", false,-1);
    tracep->declBit(c+1226,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1153,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1154,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1155,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1179,"auto_out_rready", false,-1);
    tracep->declBit(c+344,"auto_out_rvalid", false,-1);
    tracep->declBus(c+345,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+346,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+353,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+480,"io_enq_ready", false,-1);
    tracep->declBit(c+1249,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+746,"io_deq_ready", false,-1);
    tracep->declBit(c+481,"io_deq_valid", false,-1);
    tracep->declBit(c+482,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+481,"full", false,-1);
    tracep->declBit(c+482,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+483,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+1250,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+747,"io_deq_ready", false,-1);
    tracep->declBit(c+485,"io_deq_valid", false,-1);
    tracep->declBit(c+486,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+485,"full", false,-1);
    tracep->declBit(c+486,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+487,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+488,"io_enq_ready", false,-1);
    tracep->declBit(c+1251,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+748,"io_deq_ready", false,-1);
    tracep->declBit(c+489,"io_deq_valid", false,-1);
    tracep->declBit(c+490,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+489,"full", false,-1);
    tracep->declBit(c+490,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+491,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+1252,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+749,"io_deq_ready", false,-1);
    tracep->declBit(c+493,"io_deq_valid", false,-1);
    tracep->declBit(c+494,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+493,"full", false,-1);
    tracep->declBit(c+494,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+495,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+496,"io_enq_ready", false,-1);
    tracep->declBit(c+1253,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+750,"io_deq_ready", false,-1);
    tracep->declBit(c+497,"io_deq_valid", false,-1);
    tracep->declBit(c+498,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+497,"full", false,-1);
    tracep->declBit(c+498,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+499,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+500,"io_enq_ready", false,-1);
    tracep->declBit(c+1254,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+751,"io_deq_ready", false,-1);
    tracep->declBit(c+501,"io_deq_valid", false,-1);
    tracep->declBit(c+502,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+501,"full", false,-1);
    tracep->declBit(c+502,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+503,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+1255,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+752,"io_deq_ready", false,-1);
    tracep->declBit(c+505,"io_deq_valid", false,-1);
    tracep->declBit(c+506,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+505,"full", false,-1);
    tracep->declBit(c+506,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+507,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+508,"io_enq_ready", false,-1);
    tracep->declBit(c+1256,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+753,"io_deq_ready", false,-1);
    tracep->declBit(c+509,"io_deq_valid", false,-1);
    tracep->declBit(c+510,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+509,"full", false,-1);
    tracep->declBit(c+510,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+511,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+512,"io_enq_ready", false,-1);
    tracep->declBit(c+754,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+755,"io_deq_ready", false,-1);
    tracep->declBit(c+513,"io_deq_valid", false,-1);
    tracep->declBit(c+514,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+513,"full", false,-1);
    tracep->declBit(c+514,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+515,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+516,"io_enq_ready", false,-1);
    tracep->declBit(c+756,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+757,"io_deq_ready", false,-1);
    tracep->declBit(c+517,"io_deq_valid", false,-1);
    tracep->declBit(c+518,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+517,"full", false,-1);
    tracep->declBit(c+518,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+519,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+520,"io_enq_ready", false,-1);
    tracep->declBit(c+758,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+759,"io_deq_ready", false,-1);
    tracep->declBit(c+521,"io_deq_valid", false,-1);
    tracep->declBit(c+522,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+521,"full", false,-1);
    tracep->declBit(c+522,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+523,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+524,"io_enq_ready", false,-1);
    tracep->declBit(c+760,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+761,"io_deq_ready", false,-1);
    tracep->declBit(c+525,"io_deq_valid", false,-1);
    tracep->declBit(c+526,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+525,"full", false,-1);
    tracep->declBit(c+526,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+527,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+528,"io_enq_ready", false,-1);
    tracep->declBit(c+1257,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+762,"io_deq_ready", false,-1);
    tracep->declBit(c+529,"io_deq_valid", false,-1);
    tracep->declBit(c+530,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+529,"full", false,-1);
    tracep->declBit(c+530,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+531,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+532,"io_enq_ready", false,-1);
    tracep->declBit(c+763,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+764,"io_deq_ready", false,-1);
    tracep->declBit(c+533,"io_deq_valid", false,-1);
    tracep->declBit(c+534,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+533,"full", false,-1);
    tracep->declBit(c+534,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+535,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+536,"io_enq_ready", false,-1);
    tracep->declBit(c+765,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+766,"io_deq_ready", false,-1);
    tracep->declBit(c+537,"io_deq_valid", false,-1);
    tracep->declBit(c+538,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+537,"full", false,-1);
    tracep->declBit(c+538,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+539,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+540,"io_enq_ready", false,-1);
    tracep->declBit(c+767,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+768,"io_deq_ready", false,-1);
    tracep->declBit(c+541,"io_deq_valid", false,-1);
    tracep->declBit(c+542,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+541,"full", false,-1);
    tracep->declBit(c+542,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+543,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+544,"io_enq_ready", false,-1);
    tracep->declBit(c+769,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+770,"io_deq_ready", false,-1);
    tracep->declBit(c+545,"io_deq_valid", false,-1);
    tracep->declBit(c+546,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+545,"full", false,-1);
    tracep->declBit(c+546,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+547,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+548,"io_enq_ready", false,-1);
    tracep->declBit(c+771,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+772,"io_deq_ready", false,-1);
    tracep->declBit(c+549,"io_deq_valid", false,-1);
    tracep->declBit(c+550,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+549,"full", false,-1);
    tracep->declBit(c+550,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+551,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+552,"io_enq_ready", false,-1);
    tracep->declBit(c+773,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+774,"io_deq_ready", false,-1);
    tracep->declBit(c+553,"io_deq_valid", false,-1);
    tracep->declBit(c+554,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+553,"full", false,-1);
    tracep->declBit(c+554,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+555,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+556,"io_enq_ready", false,-1);
    tracep->declBit(c+775,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+776,"io_deq_ready", false,-1);
    tracep->declBit(c+557,"io_deq_valid", false,-1);
    tracep->declBit(c+558,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+557,"full", false,-1);
    tracep->declBit(c+558,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+559,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+560,"io_enq_ready", false,-1);
    tracep->declBit(c+777,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+778,"io_deq_ready", false,-1);
    tracep->declBit(c+561,"io_deq_valid", false,-1);
    tracep->declBit(c+562,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+561,"full", false,-1);
    tracep->declBit(c+562,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+563,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+564,"io_enq_ready", false,-1);
    tracep->declBit(c+779,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+780,"io_deq_ready", false,-1);
    tracep->declBit(c+565,"io_deq_valid", false,-1);
    tracep->declBit(c+566,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+565,"full", false,-1);
    tracep->declBit(c+566,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+567,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+568,"io_enq_ready", false,-1);
    tracep->declBit(c+781,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+782,"io_deq_ready", false,-1);
    tracep->declBit(c+569,"io_deq_valid", false,-1);
    tracep->declBit(c+570,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+569,"full", false,-1);
    tracep->declBit(c+570,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+571,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+572,"io_enq_ready", false,-1);
    tracep->declBit(c+1258,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+783,"io_deq_ready", false,-1);
    tracep->declBit(c+573,"io_deq_valid", false,-1);
    tracep->declBit(c+574,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+573,"full", false,-1);
    tracep->declBit(c+574,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+575,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+576,"io_enq_ready", false,-1);
    tracep->declBit(c+784,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+785,"io_deq_ready", false,-1);
    tracep->declBit(c+577,"io_deq_valid", false,-1);
    tracep->declBit(c+578,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+577,"full", false,-1);
    tracep->declBit(c+578,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+579,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+580,"io_enq_ready", false,-1);
    tracep->declBit(c+786,"io_enq_valid", false,-1);
    tracep->declBit(c+1182,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+787,"io_deq_ready", false,-1);
    tracep->declBit(c+581,"io_deq_valid", false,-1);
    tracep->declBit(c+582,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+581,"full", false,-1);
    tracep->declBit(c+582,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+583,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+584,"io_enq_ready", false,-1);
    tracep->declBit(c+1259,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+788,"io_deq_ready", false,-1);
    tracep->declBit(c+585,"io_deq_valid", false,-1);
    tracep->declBit(c+586,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+585,"full", false,-1);
    tracep->declBit(c+586,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+587,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+588,"io_enq_ready", false,-1);
    tracep->declBit(c+1260,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+789,"io_deq_ready", false,-1);
    tracep->declBit(c+589,"io_deq_valid", false,-1);
    tracep->declBit(c+590,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+589,"full", false,-1);
    tracep->declBit(c+590,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+591,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+592,"io_enq_ready", false,-1);
    tracep->declBit(c+1261,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+790,"io_deq_ready", false,-1);
    tracep->declBit(c+593,"io_deq_valid", false,-1);
    tracep->declBit(c+594,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+593,"full", false,-1);
    tracep->declBit(c+594,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+595,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+596,"io_enq_ready", false,-1);
    tracep->declBit(c+1262,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+791,"io_deq_ready", false,-1);
    tracep->declBit(c+597,"io_deq_valid", false,-1);
    tracep->declBit(c+598,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+597,"full", false,-1);
    tracep->declBit(c+598,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+599,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+600,"io_enq_ready", false,-1);
    tracep->declBit(c+1263,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+792,"io_deq_ready", false,-1);
    tracep->declBit(c+601,"io_deq_valid", false,-1);
    tracep->declBit(c+602,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+601,"full", false,-1);
    tracep->declBit(c+602,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+603,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+604,"io_enq_ready", false,-1);
    tracep->declBit(c+1264,"io_enq_valid", false,-1);
    tracep->declBit(c+1188,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+793,"io_deq_ready", false,-1);
    tracep->declBit(c+605,"io_deq_valid", false,-1);
    tracep->declBit(c+606,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+605,"full", false,-1);
    tracep->declBit(c+606,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+607,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1557,"reset", false,-1);
    tracep->declBit(c+337,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1163,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+338,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1164,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1165,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1166,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1167,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+339,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1168,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1169,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1170,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1172,"auto_master_out_bready", false,-1);
    tracep->declBit(c+340,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+341,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+342,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+343,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1173,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1174,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1175,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1176,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1177,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1179,"auto_master_out_rready", false,-1);
    tracep->declBit(c+344,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+345,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+346,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+348,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1557,"reset", false,-1);
    tracep->declBit(c+1579,"io_interrupt", false,-1);
    tracep->declBit(c+1590,"io_slave_awready", false,-1);
    tracep->declBit(c+1579,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1591,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1592,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1593,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1594,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1595,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1596,"io_slave_wready", false,-1);
    tracep->declBit(c+1579,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1592,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1591,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1579,"io_slave_wlast", false,-1);
    tracep->declBit(c+1579,"io_slave_bready", false,-1);
    tracep->declBit(c+1597,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1598,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1599,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1600,"io_slave_arready", false,-1);
    tracep->declBit(c+1579,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1591,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1592,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1593,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1594,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1595,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1579,"io_slave_rready", false,-1);
    tracep->declBit(c+1601,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1602,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1603,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1604,"io_slave_rlast", false,-1);
    tracep->declBus(c+1605,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1173,"io_master_arvalid", false,-1);
    tracep->declBit(c+343,"io_master_arready", false,-1);
    tracep->declBus(c+1175,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1174,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1176,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1177,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+344,"io_master_rvalid", false,-1);
    tracep->declBit(c+1179,"io_master_rready", false,-1);
    tracep->declBus(c+346,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+348,"io_master_rlast", false,-1);
    tracep->declBus(c+345,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1163,"io_master_awvalid", false,-1);
    tracep->declBit(c+337,"io_master_awready", false,-1);
    tracep->declBus(c+1164,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+338,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1165,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1166,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1167,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1168,"io_master_wvalid", false,-1);
    tracep->declBit(c+339,"io_master_wready", false,-1);
    tracep->declBus(c+1169,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1170,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"io_master_wlast", false,-1);
    tracep->declBit(c+340,"io_master_bvalid", false,-1);
    tracep->declBit(c+1172,"io_master_bready", false,-1);
    tracep->declBus(c+342,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+341,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1606,"PC_START", false,-1, 31,0);
    tracep->declBit(c+608,"ifu_arvalid", false,-1);
    tracep->declBus(c+609,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+610,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+611,"ifu_arburst", false,-1, 1,0);
    tracep->declBus(c+612,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+613,"ifu_arlen", false,-1, 7,0);
    tracep->declBit(c+614,"ifu_arready", false,-1);
    tracep->declBit(c+1131,"ifu_rvalid", false,-1);
    tracep->declBit(c+615,"ifu_rready", false,-1);
    tracep->declBus(c+1132,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+616,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1133,"ifu_rlast", false,-1);
    tracep->declBus(c+617,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+803,"lsu_arvalid", false,-1);
    tracep->declBus(c+1265,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1266,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1267,"lsu_arburst", false,-1, 1,0);
    tracep->declBus(c+1268,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1269,"lsu_arlen", false,-1, 7,0);
    tracep->declBit(c+1134,"lsu_arready", false,-1);
    tracep->declBit(c+618,"lsu_rvalid", false,-1);
    tracep->declBit(c+804,"lsu_rready", false,-1);
    tracep->declBus(c+619,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+620,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+621,"lsu_rlast", false,-1);
    tracep->declBus(c+622,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+805,"lsu_awvalid", false,-1);
    tracep->declBus(c+1270,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1271,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1272,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+1607,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1273,"lsu_awlen", false,-1, 7,0);
    tracep->declBit(c+1135,"lsu_awready", false,-1);
    tracep->declBit(c+806,"lsu_wvalid", false,-1);
    tracep->declBus(c+1274,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1275,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1276,"lsu_wlast", false,-1);
    tracep->declBit(c+1136,"lsu_wready", false,-1);
    tracep->declBit(c+623,"lsu_bvalid", false,-1);
    tracep->declBit(c+807,"lsu_bready", false,-1);
    tracep->declBus(c+624,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+625,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+1277,"instruction", false,-1, 31,0);
    tracep->declBit(c+1278,"is_loadmemory", false,-1);
    tracep->declBit(c+1279,"is_storememory", false,-1);
    tracep->declBus(c+1280,"Imm", false,-1, 31,0);
    tracep->declBus(c+1281,"InstrNum", false,-1, 11,0);
    tracep->declBus(c+1282,"CsrNum", false,-1, 11,0);
    tracep->declBus(c+1283,"Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+1284,"Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+1285,"RdRaddr", false,-1, 4,0);
    tracep->declBit(c+1608,"reqValid", false,-1);
    tracep->declBit(c+1286,"RegWen", false,-1);
    tracep->declBit(c+1287,"JumpPC_en", false,-1);
    tracep->declBus(c+626,"AluByteIdx", false,-1, 1,0);
    tracep->declBus(c+1288,"JumpPC", false,-1, 31,0);
    tracep->declBus(c+1289,"ExuRes", false,-1, 31,0);
    tracep->declBus(c+627,"PC", false,-1, 31,0);
    tracep->declBus(c+1290,"CsrData", false,-1, 31,0);
    tracep->declBus(c+1291,"CsrExuData", false,-1, 31,0);
    tracep->declBus(c+1292,"Rs1Data", false,-1, 31,0);
    tracep->declBus(c+1293,"Rs2Data", false,-1, 31,0);
    tracep->declBus(c+628,"ReturnA0", false,-1, 31,0);
    tracep->declBus(c+1609,"WmaskSh", false,-1, 3,0);
    tracep->declBus(c+1294,"io_lsu_addr", false,-1, 31,0);
    tracep->pushNamePrefix("U_ALU ");
    tracep->declBus(c+1610,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1611,"PC_START", false,-1, 31,0);
    tracep->declBus(c+1292,"i_Rs1Data", false,-1, 31,0);
    tracep->declBus(c+1293,"i_Rs2Data", false,-1, 31,0);
    tracep->declBus(c+1280,"i_Imm", false,-1, 31,0);
    tracep->declBus(c+627,"i_PC", false,-1, 31,0);
    tracep->declBus(c+1290,"i_CsrData", false,-1, 31,0);
    tracep->declBus(c+1281,"i_InstrNum", false,-1, 11,0);
    tracep->declBus(c+1289,"o_ExuRes", false,-1, 31,0);
    tracep->declBus(c+1291,"o_CsrExuData", false,-1, 31,0);
    tracep->declBus(c+1288,"o_JumpPC", false,-1, 31,0);
    tracep->declBit(c+1287,"o_JumpPC_en", false,-1);
    tracep->declBus(c+619,"i_lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1265,"o_lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"o_lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1266,"o_lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1267,"o_lsu_arburst", false,-1, 1,0);
    tracep->declBus(c+1268,"o_lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"o_lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1273,"o_lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1271,"o_lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1272,"o_lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+1275,"o_lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1276,"o_lsu_wlast", false,-1);
    tracep->declBit(c+803,"i_lsu_arvalid", false,-1);
    tracep->declBit(c+1134,"i_lsu_arready", false,-1);
    tracep->declBit(c+805,"i_lsu_awvalid", false,-1);
    tracep->declBit(c+1135,"i_lsu_awready", false,-1);
    tracep->declBit(c+806,"i_lsu_wvalid", false,-1);
    tracep->declBit(c+1136,"i_lsu_wready", false,-1);
    tracep->declBit(c+621,"i_lsu_rlast", false,-1);
    tracep->declBus(c+626,"i_ByteIdx", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_Arbiter ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1557,"reset", false,-1);
    tracep->declBit(c+608,"i_arvalid_1", false,-1);
    tracep->declBit(c+614,"o_arready_1", false,-1);
    tracep->declBus(c+609,"i_araddr_1", false,-1, 31,0);
    tracep->declBus(c+610,"i_arsize_1", false,-1, 2,0);
    tracep->declBus(c+611,"i_arburst_1", false,-1, 1,0);
    tracep->declBus(c+612,"i_arid_1", false,-1, 3,0);
    tracep->declBus(c+613,"i_arlen_1", false,-1, 7,0);
    tracep->declBit(c+615,"i_rready_1", false,-1);
    tracep->declBit(c+1131,"o_rvalid_1", false,-1);
    tracep->declBus(c+616,"o_rresp_1", false,-1, 1,0);
    tracep->declBus(c+1132,"o_rdata_1", false,-1, 31,0);
    tracep->declBit(c+1133,"o_rlast_1", false,-1);
    tracep->declBus(c+617,"o_rid_1", false,-1, 3,0);
    tracep->declBit(c+803,"i_arvalid_2", false,-1);
    tracep->declBit(c+1134,"o_arready_2", false,-1);
    tracep->declBus(c+1265,"i_araddr_2", false,-1, 31,0);
    tracep->declBus(c+1266,"i_arsize_2", false,-1, 2,0);
    tracep->declBus(c+1267,"i_arburst_2", false,-1, 1,0);
    tracep->declBus(c+1268,"i_arid_2", false,-1, 3,0);
    tracep->declBus(c+1269,"i_arlen_2", false,-1, 7,0);
    tracep->declBit(c+804,"i_rready_2", false,-1);
    tracep->declBit(c+618,"o_rvalid_2", false,-1);
    tracep->declBus(c+620,"o_rresp_2", false,-1, 1,0);
    tracep->declBus(c+619,"o_rdata_2", false,-1, 31,0);
    tracep->declBit(c+621,"o_rlast_2", false,-1);
    tracep->declBus(c+622,"o_rid_2", false,-1, 3,0);
    tracep->declBit(c+1173,"o_master_arvalid", false,-1);
    tracep->declBit(c+343,"i_master_arready", false,-1);
    tracep->declBus(c+1175,"o_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1174,"o_master_arid", false,-1, 3,0);
    tracep->declBus(c+1176,"o_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1177,"o_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1178,"o_master_arburst", false,-1, 1,0);
    tracep->declBit(c+344,"i_master_rvalid", false,-1);
    tracep->declBit(c+1179,"o_master_rready", false,-1);
    tracep->declBus(c+346,"i_master_rdata", false,-1, 31,0);
    tracep->declBus(c+347,"i_master_rresp", false,-1, 1,0);
    tracep->declBit(c+348,"i_master_rlast", false,-1);
    tracep->declBus(c+345,"i_master_rid", false,-1, 3,0);
    tracep->declBit(c+805,"i_awvalid_1", false,-1);
    tracep->declBit(c+1135,"o_awready_1", false,-1);
    tracep->declBus(c+1270,"i_awaddr_1", false,-1, 31,0);
    tracep->declBus(c+1271,"i_awsize_1", false,-1, 2,0);
    tracep->declBus(c+1272,"i_awburst_1", false,-1, 1,0);
    tracep->declBus(c+1607,"i_awid_1", false,-1, 3,0);
    tracep->declBus(c+1273,"i_awlen_1", false,-1, 7,0);
    tracep->declBit(c+806,"i_wvalid_1", false,-1);
    tracep->declBit(c+1136,"o_wready_1", false,-1);
    tracep->declBus(c+1274,"i_wdata_1", false,-1, 31,0);
    tracep->declBus(c+1275,"i_wstrb_1", false,-1, 3,0);
    tracep->declBit(c+1276,"i_wlast_1", false,-1);
    tracep->declBit(c+623,"o_bvalid_1", false,-1);
    tracep->declBit(c+807,"i_bready_1", false,-1);
    tracep->declBus(c+624,"o_bresp_1", false,-1, 1,0);
    tracep->declBus(c+625,"o_bid_1", false,-1, 3,0);
    tracep->declBit(c+1163,"o_master_awvalid", false,-1);
    tracep->declBit(c+337,"i_master_awready", false,-1);
    tracep->declBus(c+1164,"o_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+338,"o_master_awid", false,-1, 3,0);
    tracep->declBus(c+1165,"o_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1166,"o_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1167,"o_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1168,"o_master_wvalid", false,-1);
    tracep->declBit(c+339,"i_master_wready", false,-1);
    tracep->declBus(c+1169,"o_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1170,"o_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"o_master_wlast", false,-1);
    tracep->declBit(c+340,"i_master_bvalid", false,-1);
    tracep->declBit(c+1172,"o_master_bready", false,-1);
    tracep->declBus(c+342,"i_master_bresp", false,-1, 1,0);
    tracep->declBus(c+341,"i_master_bid", false,-1, 3,0);
    tracep->declBus(c+1595,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1612,"AR1", false,-1, 1,0);
    tracep->declBus(c+1613,"AR2", false,-1, 1,0);
    tracep->declBus(c+1614,"AW", false,-1, 1,0);
    tracep->declBus(c+629,"CurrentState", false,-1, 1,0);
    tracep->declBus(c+1295,"NextState", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_IDU ");
    tracep->declBus(c+1277,"i_instr", false,-1, 31,0);
    tracep->declBit(c+1133,"i_ifu_rlast", false,-1);
    tracep->declBit(c+621,"i_lsu_rlast", false,-1);
    tracep->declBus(c+1283,"o_Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+1284,"o_Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+1285,"o_RdRaddr", false,-1, 4,0);
    tracep->declBus(c+1280,"o_Imm", false,-1, 31,0);
    tracep->declBus(c+1281,"o_InstrNum", false,-1, 11,0);
    tracep->declBus(c+1282,"o_CsrNum", false,-1, 11,0);
    tracep->declBit(c+1278,"o_is_loadmemory", false,-1);
    tracep->declBit(c+1279,"o_is_storememory", false,-1);
    tracep->declBit(c+1286,"o_RegWen", false,-1);
    tracep->declBus(c+1283,"Rs1", false,-1, 4,0);
    tracep->declBus(c+1284,"Rs2", false,-1, 4,0);
    tracep->declBus(c+1285,"Rd", false,-1, 4,0);
    tracep->declBus(c+1296,"Funct_3", false,-1, 2,0);
    tracep->declBus(c+1297,"Funct_7", false,-1, 6,0);
    tracep->declBus(c+1298,"Opcode", false,-1, 6,0);
    tracep->declBus(c+1299,"I_imm", false,-1, 11,0);
    tracep->declBus(c+1300,"B_imm", false,-1, 11,0);
    tracep->declBus(c+1301,"S_imm", false,-1, 11,0);
    tracep->declBus(c+1302,"J_imm", false,-1, 19,0);
    tracep->declBus(c+1303,"U_imm", false,-1, 19,0);
    tracep->declBit(c+1579,"R_imm", false,-1);
    tracep->declBus(c+1304,"I_ex", false,-1, 31,0);
    tracep->declBus(c+1305,"S_ex", false,-1, 31,0);
    tracep->declBus(c+1306,"J_ex", false,-1, 31,0);
    tracep->declBus(c+1307,"U_ex", false,-1, 31,0);
    tracep->declBus(c+1308,"B_ex", false,-1, 31,0);
    tracep->declBus(c+1592,"R_ex", false,-1, 31,0);
    tracep->declBus(c+1280,"Imm", false,-1, 31,0);
    tracep->declBus(c+1309,"CsrNum", false,-1, 11,0);
    tracep->declBus(c+1615,"lsu_size", false,-1, 1,0);
    tracep->declBus(c+1310,"Opcode_Funct3", false,-1, 9,0);
    tracep->declBus(c+1311,"Opcode_Funct3_Funct7", false,-1, 16,0);
    tracep->declBus(c+1312,"InstrFunct3", false,-1, 11,0);
    tracep->declBus(c+1313,"InstrNoFunct", false,-1, 11,0);
    tracep->declBus(c+1314,"InstrFunct7", false,-1, 11,0);
    tracep->declBus(c+1315,"InstrCsr", false,-1, 11,0);
    tracep->declBus(c+1281,"InstrType", false,-1, 11,0);
    tracep->declBit(c+1316,"is_load", false,-1);
    tracep->declBit(c+1317,"is_store", false,-1);
    tracep->declBit(c+1318,"reg_wen", false,-1);
    tracep->declBit(c+1278,"is_loadmemory", false,-1);
    tracep->declBit(c+1279,"is_storememory", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1616,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1617,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1312,"out", false,-1, 11,0);
    tracep->declBus(c+1310,"key", false,-1, 9,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declArray(c+1620,"lut", false,-1, 527,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1616,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1617,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1312,"out", false,-1, 11,0);
    tracep->declBus(c+1310,"key", false,-1, 9,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declArray(c+1620,"lut", false,-1, 527,0);
    tracep->declBus(c+1638,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 21,0);
    }
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+25+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+49+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1319,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1320,"hit", false,-1);
    tracep->declBus(c+1639,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+1640,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1610,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1280,"out", false,-1, 31,0);
    tracep->declBus(c+1281,"key", false,-1, 11,0);
    tracep->declBus(c+1592,"default_out", false,-1, 31,0);
    tracep->declArray(c+1321,"lut", false,-1, 1759,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1640,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1610,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1280,"out", false,-1, 31,0);
    tracep->declBus(c+1281,"key", false,-1, 11,0);
    tracep->declBus(c+1592,"default_out", false,-1, 31,0);
    tracep->declArray(c+1321,"lut", false,-1, 1759,0);
    tracep->declBus(c+1641,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+1376,"lut_out", false,-1, 31,0);
    tracep->declBit(c+1377,"hit", false,-1);
    tracep->declBus(c+1642,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i12 ");
    tracep->declBus(c+1643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1279,"out", false,-1, 0,0);
    tracep->declBus(c+1281,"key", false,-1, 11,0);
    tracep->declBus(c+1579,"default_out", false,-1, 0,0);
    tracep->declQuad(c+1644,"lut", false,-1, 38,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1279,"out", false,-1, 0,0);
    tracep->declBus(c+1281,"key", false,-1, 11,0);
    tracep->declBus(c+1579,"default_out", false,-1, 0,0);
    tracep->declQuad(c+1644,"lut", false,-1, 38,0);
    tracep->declBus(c+1646,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+73+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+76+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+79+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+1378,"lut_out", false,-1, 0,0);
    tracep->declBit(c+1379,"hit", false,-1);
    tracep->declBus(c+1647,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+1648,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1318,"out", false,-1, 0,0);
    tracep->declBus(c+1281,"key", false,-1, 11,0);
    tracep->declBus(c+1589,"default_out", false,-1, 0,0);
    tracep->declArray(c+1649,"lut", false,-1, 142,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1648,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1318,"out", false,-1, 0,0);
    tracep->declBus(c+1281,"key", false,-1, 11,0);
    tracep->declBus(c+1589,"default_out", false,-1, 0,0);
    tracep->declArray(c+1649,"lut", false,-1, 142,0);
    tracep->declBus(c+1646,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+82+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+93+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+104+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+1380,"lut_out", false,-1, 0,0);
    tracep->declBit(c+1381,"hit", false,-1);
    tracep->declBus(c+1654,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+1655,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1278,"out", false,-1, 0,0);
    tracep->declBus(c+1281,"key", false,-1, 11,0);
    tracep->declBus(c+1579,"default_out", false,-1, 0,0);
    tracep->declArray(c+1656,"lut", false,-1, 64,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1655,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1278,"out", false,-1, 0,0);
    tracep->declBus(c+1281,"key", false,-1, 11,0);
    tracep->declBus(c+1579,"default_out", false,-1, 0,0);
    tracep->declArray(c+1656,"lut", false,-1, 64,0);
    tracep->declBus(c+1646,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+115+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+120+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+125+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+1382,"lut_out", false,-1, 0,0);
    tracep->declBit(c+1383,"hit", false,-1);
    tracep->declBus(c+1659,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i6 ");
    tracep->declBus(c+1643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1660,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1313,"out", false,-1, 11,0);
    tracep->declBus(c+1298,"key", false,-1, 6,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declQuad(c+1661,"lut", false,-1, 56,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1660,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1313,"out", false,-1, 11,0);
    tracep->declBus(c+1298,"key", false,-1, 6,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declQuad(c+1661,"lut", false,-1, 56,0);
    tracep->declBus(c+1663,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+130+i*1,"pair_list", true,(i+0), 18,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+133+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+136+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1384,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1385,"hit", false,-1);
    tracep->declBus(c+1647,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i7 ");
    tracep->declBus(c+1648,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1664,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1314,"out", false,-1, 11,0);
    tracep->declBus(c+1311,"key", false,-1, 16,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declArray(c+1665,"lut", false,-1, 318,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1648,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1664,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1314,"out", false,-1, 11,0);
    tracep->declBus(c+1311,"key", false,-1, 16,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declArray(c+1665,"lut", false,-1, 318,0);
    tracep->declBus(c+1675,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+139+i*1,"pair_list", true,(i+0), 28,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+150+i*1,"key_list", true,(i+0), 16,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+161+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1386,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1387,"hit", false,-1);
    tracep->declBus(c+1654,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i8 ");
    tracep->declBus(c+1676,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1610,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1315,"out", false,-1, 11,0);
    tracep->declBus(c+1277,"key", false,-1, 31,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declArray(c+1677,"lut", false,-1, 87,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1676,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1610,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1315,"out", false,-1, 11,0);
    tracep->declBus(c+1277,"key", false,-1, 31,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declArray(c+1677,"lut", false,-1, 87,0);
    tracep->declBus(c+1641,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+172+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+176+i*1,"key_list", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+178+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1388,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1389,"hit", false,-1);
    tracep->declBus(c+1680,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i9 ");
    tracep->declBus(c+1681,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1309,"out", false,-1, 11,0);
    tracep->declBus(c+1299,"key", false,-1, 11,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declArray(c+1682,"lut", false,-1, 191,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1681,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1618,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1309,"out", false,-1, 11,0);
    tracep->declBus(c+1299,"key", false,-1, 11,0);
    tracep->declBus(c+1619,"default_out", false,-1, 11,0);
    tracep->declArray(c+1682,"lut", false,-1, 191,0);
    tracep->declBus(c+1616,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+180+i*1,"pair_list", true,(i+0), 23,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+188+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+196+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1390,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1391,"hit", false,-1);
    tracep->declBus(c+1688,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("U_IFU ");
    tracep->declBus(c+1606,"PC_START", false,-1, 31,0);
    tracep->declBit(c+1522,"i_clk", false,-1);
    tracep->declBit(c+1557,"i_rst", false,-1);
    tracep->declBus(c+1288,"i_JumpPC", false,-1, 31,0);
    tracep->declBit(c+1287,"i_JumpPC_en", false,-1);
    tracep->declBit(c+1278,"i_is_loadmemory", false,-1);
    tracep->declBit(c+1279,"i_is_storememory", false,-1);
    tracep->declBit(c+608,"o_ifu_arvalid", false,-1);
    tracep->declBit(c+614,"i_ifu_arready", false,-1);
    tracep->declBit(c+1131,"i_ifu_rvalid", false,-1);
    tracep->declBit(c+615,"o_ifu_rready", false,-1);
    tracep->declBit(c+1133,"i_ifu_rlast", false,-1);
    tracep->declBit(c+623,"i_lsu_bvalid", false,-1);
    tracep->declBit(c+621,"i_lsu_rlast", false,-1);
    tracep->declBus(c+609,"o_ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+610,"o_ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+611,"o_ifu_arburst", false,-1, 1,0);
    tracep->declBus(c+612,"o_ifu_arid", false,-1, 3,0);
    tracep->declBus(c+613,"o_ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+627,"o_PC", false,-1, 31,0);
    tracep->declBus(c+1132,"i_ifu_data", false,-1, 31,0);
    tracep->declBus(c+1277,"o_instruction", false,-1, 31,0);
    tracep->declBus(c+1595,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1612,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1613,"RESET", false,-1, 1,0);
    tracep->declBus(c+1137,"CurrentState", false,-1, 1,0);
    tracep->declBus(c+1558,"NextState", false,-1, 1,0);
    tracep->declBit(c+1392,"UpdatePC_en", false,-1);
    tracep->declBus(c+627,"PC", false,-1, 31,0);
    tracep->declBus(c+808,"instruction_r", false,-1, 31,0);
    tracep->declBus(c+1559,"npc", false,-1, 31,0);
    tracep->pushNamePrefix("U_PC ");
    tracep->declBus(c+1606,"PC_START", false,-1, 31,0);
    tracep->declBit(c+1522,"i_clk", false,-1);
    tracep->declBit(c+1557,"i_rst", false,-1);
    tracep->declBit(c+1392,"i_UpdatePC_en", false,-1);
    tracep->declBus(c+1288,"i_JumpPC", false,-1, 31,0);
    tracep->declBit(c+1287,"i_JumpPC_en", false,-1);
    tracep->declBus(c+627,"o_PC", false,-1, 31,0);
    tracep->declBus(c+627,"d_PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("U_LSU ");
    tracep->declBit(c+1522,"i_clk", false,-1);
    tracep->declBit(c+1557,"i_rst", false,-1);
    tracep->declBit(c+1133,"i_ifu_rlast", false,-1);
    tracep->declBit(c+803,"o_lsu_arvalid", false,-1);
    tracep->declBit(c+1134,"i_lsu_arready", false,-1);
    tracep->declBit(c+618,"i_lsu_rvalid", false,-1);
    tracep->declBit(c+804,"o_lsu_rready", false,-1);
    tracep->declBit(c+805,"o_lsu_awvalid", false,-1);
    tracep->declBit(c+1135,"i_lsu_awready", false,-1);
    tracep->declBit(c+806,"o_lsu_wvalid", false,-1);
    tracep->declBit(c+1136,"i_lsu_wready", false,-1);
    tracep->declBit(c+1278,"i_is_loadmemory", false,-1);
    tracep->declBit(c+1279,"i_is_storememory", false,-1);
    tracep->declBit(c+621,"i_lsu_rlast", false,-1);
    tracep->declBit(c+623,"i_lsu_bvalid", false,-1);
    tracep->declBit(c+807,"o_lsu_bready", false,-1);
    tracep->declBus(c+1595,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1612,"AR", false,-1, 1,0);
    tracep->declBus(c+1613,"AW", false,-1, 1,0);
    tracep->declBus(c+1614,"W", false,-1, 1,0);
    tracep->declBus(c+809,"CurrentState", false,-1, 1,0);
    tracep->declBus(c+1393,"NextState", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_WBU ");
    tracep->declBus(c+1655,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1610,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1522,"i_clk", false,-1);
    tracep->declBit(c+1286,"i_RegWen", false,-1);
    tracep->declBus(c+1281,"i_InstrNum", false,-1, 11,0);
    tracep->declBus(c+1282,"i_CsrNum", false,-1, 11,0);
    tracep->declBus(c+1283,"i_Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+1284,"i_Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+1285,"i_RdRaddr", false,-1, 4,0);
    tracep->declBus(c+1289,"i_ExuRes", false,-1, 31,0);
    tracep->declBus(c+627,"i_PC", false,-1, 31,0);
    tracep->declBus(c+1291,"i_CsrExuData", false,-1, 31,0);
    tracep->declBus(c+1292,"o_Rs1Data", false,-1, 31,0);
    tracep->declBus(c+1293,"o_Rs2Data", false,-1, 31,0);
    tracep->declBus(c+628,"o_ReturnA0", false,-1, 31,0);
    tracep->declBus(c+1290,"o_CsrData", false,-1, 31,0);
    tracep->declBit(c+1133,"i_ifu_rlast", false,-1);
    tracep->declBus(c+630,"A5Data", false,-1, 31,0);
    tracep->pushNamePrefix("U_CSR ");
    tracep->declBus(c+1618,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1610,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1522,"i_clk", false,-1);
    tracep->declBit(c+1286,"i_RegWen", false,-1);
    tracep->declBus(c+1281,"i_InstrNum", false,-1, 11,0);
    tracep->declBus(c+1282,"i_CsrNum", false,-1, 11,0);
    tracep->declBus(c+627,"i_PC", false,-1, 31,0);
    tracep->declBus(c+1289,"i_ExuRes", false,-1, 31,0);
    tracep->declBus(c+630,"i_A5Data", false,-1, 31,0);
    tracep->declBus(c+1291,"i_CsrExuData", false,-1, 31,0);
    tracep->declBus(c+1290,"o_CsrData", false,-1, 31,0);
    tracep->declBit(c+1133,"i_ifu_rlast", false,-1);
    tracep->declBus(c+631,"mcause", false,-1, 31,0);
    tracep->declBus(c+632,"mepc", false,-1, 31,0);
    tracep->declBus(c+633,"mstatus", false,-1, 31,0);
    tracep->declBus(c+634,"mtvec", false,-1, 31,0);
    tracep->declBus(c+635,"mcycle", false,-1, 31,0);
    tracep->declBus(c+636,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+637,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+638,"marchid", false,-1, 31,0);
    tracep->declBus(c+639,"EpcData", false,-1, 31,0);
    tracep->pushNamePrefix("i10 ");
    tracep->declBus(c+1681,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1610,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1290,"out", false,-1, 31,0);
    tracep->declBus(c+1282,"key", false,-1, 11,0);
    tracep->declBus(c+1592,"default_out", false,-1, 31,0);
    tracep->declArray(c+640,"lut", false,-1, 351,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1681,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1618,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1610,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1637,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1290,"out", false,-1, 31,0);
    tracep->declBus(c+1282,"key", false,-1, 11,0);
    tracep->declBus(c+1592,"default_out", false,-1, 31,0);
    tracep->declArray(c+640,"lut", false,-1, 351,0);
    tracep->declBus(c+1641,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+651+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+204+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+667+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+1394,"lut_out", false,-1, 31,0);
    tracep->declBit(c+1395,"hit", false,-1);
    tracep->declBus(c+1688,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("U_REG ");
    tracep->declBus(c+1655,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1610,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1522,"i_clk", false,-1);
    tracep->declBit(c+1286,"i_RegWen", false,-1);
    tracep->declBus(c+1283,"i_Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+1284,"i_Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+1285,"i_RdRaddr", false,-1, 4,0);
    tracep->declBus(c+1289,"i_ExuRes", false,-1, 31,0);
    tracep->declBus(c+1292,"o_Rs1Data", false,-1, 31,0);
    tracep->declBus(c+1293,"o_Rs2Data", false,-1, 31,0);
    tracep->declBus(c+628,"o_ReturnA0", false,-1, 31,0);
    tracep->declBus(c+630,"o_A5Data", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+675+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+212,"i", false,-1, 31,0);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"io_d", false,-1);
    tracep->declBit(c+691,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"io_d", false,-1);
    tracep->declBit(c+691,"io_q", false,-1);
    tracep->declBit(c+691,"sync_0", false,-1);
    tracep->declBit(c+692,"sync_1", false,-1);
    tracep->declBit(c+693,"sync_2", false,-1);
    tracep->declBit(c+694,"sync_3", false,-1);
    tracep->declBit(c+695,"sync_4", false,-1);
    tracep->declBit(c+696,"sync_5", false,-1);
    tracep->declBit(c+697,"sync_6", false,-1);
    tracep->declBit(c+698,"sync_7", false,-1);
    tracep->declBit(c+699,"sync_8", false,-1);
    tracep->declBit(c+700,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+800,"auto_in_psel", false,-1);
    tracep->declBit(c+801,"auto_in_penable", false,-1);
    tracep->declBit(c+233,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1450,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1578,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1586,"auto_in_pready", false,-1);
    tracep->declBit(c+1587,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1588,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1524,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1525,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1526,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1527,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1528,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1529,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1530,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1531,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1532,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1533,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBus(c+1464,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+800,"in_psel", false,-1);
    tracep->declBit(c+801,"in_penable", false,-1);
    tracep->declBus(c+1578,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+233,"in_pwrite", false,-1);
    tracep->declBus(c+1130,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1586,"in_pready", false,-1);
    tracep->declBus(c+1588,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1587,"in_pslverr", false,-1);
    tracep->declBus(c+1524,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1525,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1526,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1527,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1528,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1529,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1530,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1531,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1532,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1533,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+798,"auto_in_psel", false,-1);
    tracep->declBit(c+799,"auto_in_penable", false,-1);
    tracep->declBit(c+233,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1450,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1578,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1583,"auto_in_pready", false,-1);
    tracep->declBit(c+1584,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1585,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1534,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1535,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBus(c+1464,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+798,"in_psel", false,-1);
    tracep->declBit(c+799,"in_penable", false,-1);
    tracep->declBus(c+1578,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+233,"in_pwrite", false,-1);
    tracep->declBus(c+1130,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1583,"in_pready", false,-1);
    tracep->declBus(c+1585,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1584,"in_pslverr", false,-1);
    tracep->declBit(c+1534,"ps2_clk", false,-1);
    tracep->declBit(c+1535,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+1227,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1228,"auto_in_wvalid", false,-1);
    tracep->declBit(c+403,"auto_in_arready", false,-1);
    tracep->declBit(c+1229,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1152,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1230,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+745,"auto_in_rready", false,-1);
    tracep->declBit(c+404,"auto_in_rvalid", false,-1);
    tracep->declBus(c+405,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+406,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+404,"state", false,-1);
    tracep->declBus(c+406,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+405,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1396,"raddr", false,-1, 31,0);
    tracep->declBit(c+1397,"ren", false,-1);
    tracep->declBus(c+1398,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+1451,"auto_in_psel", false,-1);
    tracep->declBit(c+802,"auto_in_penable", false,-1);
    tracep->declBit(c+233,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1448,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1548,"auto_in_pready", false,-1);
    tracep->declBit(c+1579,"auto_in_pslverr", false,-1);
    tracep->declBus(c+235,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1483,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1484,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1545,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBus(c+1448,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1451,"in_psel", false,-1);
    tracep->declBit(c+802,"in_penable", false,-1);
    tracep->declBus(c+1578,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+233,"in_pwrite", false,-1);
    tracep->declBus(c+1130,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1548,"in_pready", false,-1);
    tracep->declBus(c+235,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1579,"in_pslverr", false,-1);
    tracep->declBit(c+1483,"qspi_sck", false,-1);
    tracep->declBit(c+1484,"qspi_ce_n", false,-1);
    tracep->declBus(c+1545,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1545,"din", false,-1, 3,0);
    tracep->declBus(c+1494,"dout", false,-1, 3,0);
    tracep->declBus(c+1495,"douten", false,-1, 3,0);
    tracep->declBit(c+1560,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1522,"clk_i", false,-1);
    tracep->declBit(c+1523,"rst_i", false,-1);
    tracep->declBus(c+1448,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1130,"dat_i", false,-1, 31,0);
    tracep->declBus(c+235,"dat_o", false,-1, 31,0);
    tracep->declBus(c+234,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1451,"cyc_i", false,-1);
    tracep->declBit(c+1451,"stb_i", false,-1);
    tracep->declBit(c+1560,"ack_o", false,-1);
    tracep->declBit(c+233,"we_i", false,-1);
    tracep->declBit(c+1483,"sck", false,-1);
    tracep->declBit(c+1484,"ce_n", false,-1);
    tracep->declBus(c+1545,"din", false,-1, 3,0);
    tracep->declBus(c+1494,"dout", false,-1, 3,0);
    tracep->declBus(c+1495,"douten", false,-1, 3,0);
    tracep->declBus(c+1595,"ST_QPI", false,-1, 1,0);
    tracep->declBus(c+1612,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1613,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+818,"mr_sck", false,-1);
    tracep->declBit(c+819,"mr_ce_n", false,-1);
    tracep->declBus(c+1545,"mr_din", false,-1, 3,0);
    tracep->declBus(c+820,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+821,"mr_doe", false,-1);
    tracep->declBit(c+822,"mw_sck", false,-1);
    tracep->declBit(c+823,"mw_ce_n", false,-1);
    tracep->declBus(c+1545,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1408,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+824,"mw_doe", false,-1);
    tracep->declBit(c+1496,"mr_rd", false,-1);
    tracep->declBit(c+825,"mr_done", false,-1);
    tracep->declBit(c+1497,"mw_wr", false,-1);
    tracep->declBit(c+1409,"mw_done", false,-1);
    tracep->declBit(c+1451,"wb_valid", false,-1);
    tracep->declBit(c+1465,"wb_we", false,-1);
    tracep->declBit(c+1466,"wb_re", false,-1);
    tracep->declBit(c+826,"qpi_cmd", false,-1);
    tracep->declBit(c+827,"qpi_sck", false,-1);
    tracep->declBit(c+828,"qpi_ce_n", false,-1);
    tracep->declBit(c+829,"qpi_done", false,-1);
    tracep->declBus(c+830,"qpi_dout", false,-1, 3,0);
    tracep->declBit(c+831,"qpi_doe", false,-1);
    tracep->declBit(c+832,"in_qpi", false,-1);
    tracep->declBus(c+833,"state", false,-1, 1,0);
    tracep->declBus(c+1561,"nstate", false,-1, 1,0);
    tracep->declBus(c+701,"size", false,-1, 2,0);
    tracep->declBus(c+1138,"byte0", false,-1, 7,0);
    tracep->declBus(c+1139,"byte1", false,-1, 7,0);
    tracep->declBus(c+1140,"byte2", false,-1, 7,0);
    tracep->declBus(c+1141,"byte3", false,-1, 7,0);
    tracep->declBus(c+1142,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+1562,"rst_n", false,-1);
    tracep->declBus(c+1467,"addr", false,-1, 23,0);
    tracep->declBit(c+1496,"rd", false,-1);
    tracep->declBus(c+1689,"size", false,-1, 2,0);
    tracep->declBit(c+825,"done", false,-1);
    tracep->declBus(c+235,"line", false,-1, 31,0);
    tracep->declBit(c+818,"sck", false,-1);
    tracep->declBit(c+819,"ce_n", false,-1);
    tracep->declBus(c+1545,"din", false,-1, 3,0);
    tracep->declBus(c+820,"dout", false,-1, 3,0);
    tracep->declBit(c+821,"douten", false,-1);
    tracep->declBit(c+832,"in_qpi", false,-1);
    tracep->declBus(c+1690,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1691,"READ", false,-1, 0,0);
    tracep->declBus(c+834,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+835,"state", false,-1);
    tracep->declBit(c+1498,"nstate", false,-1);
    tracep->declBus(c+836,"counter", false,-1, 7,0);
    tracep->declBus(c+837,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+702+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1692,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+838,"byte_index", false,-1, 1,0);
    tracep->declBus(c+839,"sample_start", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+1562,"rst_n", false,-1);
    tracep->declBus(c+1468,"addr", false,-1, 23,0);
    tracep->declBus(c+1142,"line", false,-1, 31,0);
    tracep->declBus(c+701,"size", false,-1, 2,0);
    tracep->declBit(c+1497,"wr", false,-1);
    tracep->declBit(c+1409,"done", false,-1);
    tracep->declBit(c+822,"sck", false,-1);
    tracep->declBit(c+823,"ce_n", false,-1);
    tracep->declBus(c+1545,"din", false,-1, 3,0);
    tracep->declBus(c+1408,"dout", false,-1, 3,0);
    tracep->declBit(c+824,"douten", false,-1);
    tracep->declBit(c+832,"in_qpi", false,-1);
    tracep->declBus(c+1690,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1691,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1563,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+840,"state", false,-1);
    tracep->declBit(c+1499,"nstate", false,-1);
    tracep->declBus(c+841,"counter", false,-1, 7,0);
    tracep->declBus(c+842,"saddr", false,-1, 23,0);
    tracep->declBus(c+1693,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("QPI ");
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+1562,"rst_n", false,-1);
    tracep->declBit(c+826,"cmd", false,-1);
    tracep->declBit(c+829,"done", false,-1);
    tracep->declBit(c+827,"sck", false,-1);
    tracep->declBit(c+828,"ce_n", false,-1);
    tracep->declBus(c+830,"dout", false,-1, 3,0);
    tracep->declBit(c+831,"douten", false,-1);
    tracep->declBus(c+1690,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1691,"CMD", false,-1, 0,0);
    tracep->declBus(c+1694,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+843,"state", false,-1);
    tracep->declBit(c+844,"nstate", false,-1);
    tracep->declBus(c+845,"counter", false,-1, 7,0);
    tracep->declBus(c+1695,"CMD_88H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+794,"auto_in_psel", false,-1);
    tracep->declBit(c+795,"auto_in_penable", false,-1);
    tracep->declBit(c+233,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1448,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1578,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+816,"auto_in_pready", false,-1);
    tracep->declBit(c+1579,"auto_in_pslverr", false,-1);
    tracep->declBus(c+817,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1546,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1419,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+812,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+813,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+814,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+815,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1547,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1420,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1421,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1433,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBus(c+1448,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+794,"in_psel", false,-1);
    tracep->declBit(c+795,"in_penable", false,-1);
    tracep->declBus(c+1578,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+233,"in_pwrite", false,-1);
    tracep->declBus(c+1130,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+816,"in_pready", false,-1);
    tracep->declBus(c+817,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1579,"in_pslverr", false,-1);
    tracep->declBit(c+1546,"sdram_clk", false,-1);
    tracep->declBit(c+1419,"sdram_cke", false,-1);
    tracep->declBit(c+812,"sdram_cs", false,-1);
    tracep->declBit(c+813,"sdram_ras", false,-1);
    tracep->declBit(c+814,"sdram_cas", false,-1);
    tracep->declBit(c+815,"sdram_we", false,-1);
    tracep->declBus(c+1547,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1420,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1421,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1433,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+846,"sdram_dout_en", false,-1);
    tracep->declBus(c+847,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+706,"state", false,-1, 1,0);
    tracep->declBit(c+1422,"req_accept", false,-1);
    tracep->declBit(c+1469,"is_read", false,-1);
    tracep->declBit(c+1470,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1522,"clk_i", false,-1);
    tracep->declBit(c+1523,"rst_i", false,-1);
    tracep->declBus(c+1471,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1469,"inport_rd_i", false,-1);
    tracep->declBus(c+1593,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1448,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1130,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1433,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1422,"inport_accept_o", false,-1);
    tracep->declBit(c+816,"inport_ack_o", false,-1);
    tracep->declBit(c+1579,"inport_error_o", false,-1);
    tracep->declBus(c+817,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1546,"sdram_clk_o", false,-1);
    tracep->declBit(c+1419,"sdram_cke_o", false,-1);
    tracep->declBit(c+812,"sdram_cs_o", false,-1);
    tracep->declBit(c+813,"sdram_ras_o", false,-1);
    tracep->declBit(c+814,"sdram_cas_o", false,-1);
    tracep->declBit(c+815,"sdram_we_o", false,-1);
    tracep->declBus(c+1421,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1547,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1420,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+847,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+846,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1696,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1616,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1697,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1676,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1676,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1698,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1698,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1646,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1699,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1700,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1701,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1698,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1702,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1703,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1704,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1705,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1706,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1707,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1708,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1591,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1709,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1698,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1591,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1708,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1707,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1703,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1705,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1710,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1704,"STATE_WRITE", false,-1, 3,0);
    tracep->declBus(c+1706,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1702,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1617,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1617,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1610,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1617,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1676,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1676,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1711,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBit(c+812,"cs", false,-1);
    tracep->declBit(c+813,"ras", false,-1);
    tracep->declBit(c+814,"cas", false,-1);
    tracep->declBit(c+815,"we", false,-1);
    tracep->declBit(c+848,"write_cmd", false,-1);
    tracep->declBit(c+849,"read_cmd", false,-1);
    tracep->declBus(c+1448,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1471,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1469,"ram_rd_w", false,-1);
    tracep->declBit(c+1422,"ram_accept_w", false,-1);
    tracep->declBus(c+1130,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+817,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+816,"ram_ack_w", false,-1);
    tracep->declBit(c+1472,"ram_req_w", false,-1);
    tracep->declBus(c+850,"command_q", false,-1, 3,0);
    tracep->declBus(c+1423,"addr_q", false,-1, 12,0);
    tracep->declBus(c+847,"data_q", false,-1, 31,0);
    tracep->declBit(c+851,"data_rd_en_q", false,-1);
    tracep->declBus(c+1421,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1419,"cke_q", false,-1);
    tracep->declBus(c+1420,"bank_q", false,-1, 1,0);
    tracep->declBit(c+852,"refresh_q", false,-1);
    tracep->declBus(c+853,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+854+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1424,"state_q", false,-1, 3,0);
    tracep->declBus(c+1500,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1501,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+858,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+859,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1473,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1474,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1475,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1698,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+860,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1425,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1664,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1426,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+861,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+817,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+862,"idx", false,-1, 31,0);
    tracep->declBus(c+863,"rd_q", false,-1, 3,0);
    tracep->declBit(c+816,"ack_q", false,-1);
    tracep->declBit(c+1476,"sdram_addr_msb_w", false,-1);
    tracep->declArray(c+1427,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+1455,"auto_in_psel", false,-1);
    tracep->declBit(c+1456,"auto_in_penable", false,-1);
    tracep->declBit(c+233,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1449,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1578,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1550,"auto_in_pready", false,-1);
    tracep->declBit(c+1551,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1552,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+810,"spi_bundle_sck", false,-1);
    tracep->declBus(c+811,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1418,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1544,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1606,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1712,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1681,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBus(c+1477,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1455,"in_psel", false,-1);
    tracep->declBit(c+1456,"in_penable", false,-1);
    tracep->declBus(c+1578,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+233,"in_pwrite", false,-1);
    tracep->declBus(c+1130,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1550,"in_pready", false,-1);
    tracep->declBus(c+1552,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1551,"in_pslverr", false,-1);
    tracep->declBit(c+810,"spi_sck", false,-1);
    tracep->declBus(c+811,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1418,"spi_mosi", false,-1);
    tracep->declBit(c+1544,"spi_miso", false,-1);
    tracep->declBit(c+1564,"spi_irq_out", false,-1);
    tracep->declBus(c+1713,"SPI_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1714,"SPI_ADDR_END", false,-1, 31,0);
    tracep->declBus(c+1715,"SPI_TX1_OFF", false,-1, 4,0);
    tracep->declBus(c+1716,"SPI_CTRL_OFF", false,-1, 4,0);
    tracep->declBus(c+1717,"SPI_DIV_OFF", false,-1, 4,0);
    tracep->declBus(c+1718,"SPI_SS_OFF", false,-1, 4,0);
    tracep->declBus(c+1719,"CTRL_GO_BSY", false,-1, 31,0);
    tracep->declBus(c+1720,"CTRL_BASE_CFG", false,-1, 31,0);
    tracep->declBus(c+1721,"CTRL_RUN_CFG", false,-1, 31,0);
    tracep->declBit(c+1478,"in_flash_xip", false,-1);
    tracep->declBus(c+1591,"IDLE", false,-1, 3,0);
    tracep->declBus(c+1708,"SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1707,"SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1703,"SET_SS", false,-1, 3,0);
    tracep->declBus(c+1705,"SET_TX1_ADDR", false,-1, 3,0);
    tracep->declBus(c+1704,"SET_BUSY", false,-1, 3,0);
    tracep->declBus(c+1706,"WAIT", false,-1, 3,0);
    tracep->declBus(c+1702,"RX", false,-1, 3,0);
    tracep->declBus(c+1710,"RX_WAIT", false,-1, 3,0);
    tracep->declBus(c+1722,"TX_CPU", false,-1, 3,0);
    tracep->declBus(c+864,"CurrentState", false,-1, 3,0);
    tracep->declBus(c+1502,"NextState", false,-1, 3,0);
    tracep->declBit(c+865,"spi_init_done", false,-1);
    tracep->declBus(c+866,"xip_flash_phy_addr", false,-1, 31,0);
    tracep->declBus(c+867,"xip_spi_adr", false,-1, 4,0);
    tracep->declBus(c+868,"xip_spi_wdata", false,-1, 31,0);
    tracep->declBit(c+869,"xip_spi_we", false,-1);
    tracep->declBit(c+870,"xip_spi_stb", false,-1);
    tracep->declBit(c+871,"xip_spi_cyc", false,-1);
    tracep->declBus(c+872,"xip_rx_data", false,-1, 31,0);
    tracep->declBit(c+1503,"xip_pready", false,-1);
    tracep->declBit(c+873,"xip_pslverr", false,-1);
    tracep->declBus(c+1723,"xip_sel", false,-1, 3,0);
    tracep->declBus(c+1504,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1505,"wb_dat_i", false,-1, 31,0);
    tracep->declBit(c+1506,"wb_we_i", false,-1);
    tracep->declBit(c+1507,"wb_stb_i", false,-1);
    tracep->declBit(c+1508,"wb_cyc_i", false,-1);
    tracep->declBus(c+1479,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+874,"wb_ack_o", false,-1);
    tracep->declBus(c+875,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+1579,"wb_err_o", false,-1);
    tracep->declBit(c+876,"wb_int_o", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1637,"Tp", false,-1, 31,0);
    tracep->declBit(c+1522,"wb_clk_i", false,-1);
    tracep->declBit(c+1523,"wb_rst_i", false,-1);
    tracep->declBus(c+1504,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1505,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+875,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1479,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1506,"wb_we_i", false,-1);
    tracep->declBit(c+1507,"wb_stb_i", false,-1);
    tracep->declBit(c+1508,"wb_cyc_i", false,-1);
    tracep->declBit(c+874,"wb_ack_o", false,-1);
    tracep->declBit(c+1579,"wb_err_o", false,-1);
    tracep->declBit(c+876,"wb_int_o", false,-1);
    tracep->declBus(c+811,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+810,"sclk_pad_o", false,-1);
    tracep->declBit(c+1418,"mosi_pad_o", false,-1);
    tracep->declBit(c+1544,"miso_pad_i", false,-1);
    tracep->declBus(c+877,"divider", false,-1, 15,0);
    tracep->declBus(c+878,"ctrl", false,-1, 13,0);
    tracep->declBus(c+879,"ss", false,-1, 7,0);
    tracep->declBus(c+1509,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+880,"rx", false,-1, 127,0);
    tracep->declBit(c+884,"rx_negedge", false,-1);
    tracep->declBit(c+885,"tx_negedge", false,-1);
    tracep->declBus(c+886,"char_len", false,-1, 6,0);
    tracep->declBit(c+887,"go", false,-1);
    tracep->declBit(c+888,"lsb", false,-1);
    tracep->declBit(c+889,"ie", false,-1);
    tracep->declBit(c+890,"ass", false,-1);
    tracep->declBit(c+1510,"spi_divider_sel", false,-1);
    tracep->declBit(c+1511,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1512,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1513,"spi_ss_sel", false,-1);
    tracep->declBit(c+891,"tip", false,-1);
    tracep->declBit(c+892,"pos_edge", false,-1);
    tracep->declBit(c+893,"neg_edge", false,-1);
    tracep->declBit(c+894,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1637,"Tp", false,-1, 31,0);
    tracep->declBit(c+1522,"clk_in", false,-1);
    tracep->declBit(c+1523,"rst", false,-1);
    tracep->declBit(c+891,"enable", false,-1);
    tracep->declBit(c+887,"go", false,-1);
    tracep->declBit(c+894,"last_clk", false,-1);
    tracep->declBus(c+877,"divider", false,-1, 15,0);
    tracep->declBit(c+810,"clk_out", false,-1);
    tracep->declBit(c+892,"pos_edge", false,-1);
    tracep->declBit(c+893,"neg_edge", false,-1);
    tracep->declBus(c+895,"cnt", false,-1, 15,0);
    tracep->declBit(c+896,"cnt_zero", false,-1);
    tracep->declBit(c+897,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1637,"Tp", false,-1, 31,0);
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+1523,"rst", false,-1);
    tracep->declBus(c+1514,"latch", false,-1, 3,0);
    tracep->declBus(c+1479,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+886,"len", false,-1, 6,0);
    tracep->declBit(c+888,"lsb", false,-1);
    tracep->declBit(c+887,"go", false,-1);
    tracep->declBit(c+892,"pos_edge", false,-1);
    tracep->declBit(c+893,"neg_edge", false,-1);
    tracep->declBit(c+884,"rx_negedge", false,-1);
    tracep->declBit(c+885,"tx_negedge", false,-1);
    tracep->declBit(c+891,"tip", false,-1);
    tracep->declBit(c+894,"last", false,-1);
    tracep->declBus(c+1505,"p_in", false,-1, 31,0);
    tracep->declArray(c+880,"p_out", false,-1, 127,0);
    tracep->declBit(c+810,"s_clk", false,-1);
    tracep->declBit(c+1544,"s_in", false,-1);
    tracep->declBit(c+1418,"s_out", false,-1);
    tracep->declBus(c+898,"cnt", false,-1, 7,0);
    tracep->declArray(c+880,"data", false,-1, 127,0);
    tracep->declBus(c+899,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+900,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+901,"rx_clk", false,-1);
    tracep->declBit(c+902,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+1452,"auto_in_psel", false,-1);
    tracep->declBit(c+1453,"auto_in_penable", false,-1);
    tracep->declBit(c+233,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1450,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1578,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1454,"auto_in_pready", false,-1);
    tracep->declBit(c+1579,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1549,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1542,"uart_rx", false,-1);
    tracep->declBit(c+1543,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1452,"in_psel", false,-1);
    tracep->declBit(c+1453,"in_penable", false,-1);
    tracep->declBus(c+1578,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1454,"in_pready", false,-1);
    tracep->declBit(c+1579,"in_pslverr", false,-1);
    tracep->declBus(c+1464,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+233,"in_pwrite", false,-1);
    tracep->declBus(c+1549,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1130,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1542,"uart_rx", false,-1);
    tracep->declBit(c+1543,"uart_tx", false,-1);
    tracep->declBit(c+903,"rtsn", false,-1);
    tracep->declBit(c+1579,"ctsn", false,-1);
    tracep->declBit(c+904,"dtr_pad_o", false,-1);
    tracep->declBit(c+1579,"dsr_pad_i", false,-1);
    tracep->declBit(c+1579,"ri_pad_i", false,-1);
    tracep->declBit(c+1579,"dcd_pad_i", false,-1);
    tracep->declBit(c+905,"interrupt", false,-1);
    tracep->declBit(c+1565,"reg_we", false,-1);
    tracep->declBit(c+1566,"reg_re", false,-1);
    tracep->declBus(c+1480,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1481,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+707,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1515,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+906,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+1523,"wb_rst_i", false,-1);
    tracep->declBus(c+1480,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1482,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1515,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1565,"wb_we_i", false,-1);
    tracep->declBit(c+1566,"wb_re_i", false,-1);
    tracep->declBit(c+1543,"stx_pad_o", false,-1);
    tracep->declBit(c+1542,"srx_pad_i", false,-1);
    tracep->declBus(c+1710,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+906,"rts_pad_o", false,-1);
    tracep->declBit(c+904,"dtr_pad_o", false,-1);
    tracep->declBit(c+905,"int_o", false,-1);
    tracep->declBit(c+907,"enable", false,-1);
    tracep->declBit(c+908,"srx_pad", false,-1);
    tracep->declBus(c+909,"ier", false,-1, 3,0);
    tracep->declBus(c+910,"iir", false,-1, 3,0);
    tracep->declBus(c+911,"fcr", false,-1, 1,0);
    tracep->declBus(c+912,"mcr", false,-1, 4,0);
    tracep->declBus(c+913,"lcr", false,-1, 7,0);
    tracep->declBus(c+914,"msr", false,-1, 7,0);
    tracep->declBus(c+915,"dl", false,-1, 15,0);
    tracep->declBus(c+916,"scratch", false,-1, 7,0);
    tracep->declBit(c+917,"start_dlc", false,-1);
    tracep->declBit(c+918,"lsr_mask_d", false,-1);
    tracep->declBit(c+919,"msi_reset", false,-1);
    tracep->declBus(c+920,"dlc", false,-1, 15,0);
    tracep->declBus(c+921,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+922,"rx_reset", false,-1);
    tracep->declBit(c+923,"tx_reset", false,-1);
    tracep->declBit(c+924,"dlab", false,-1);
    tracep->declBit(c+1589,"cts_pad_i", false,-1);
    tracep->declBit(c+1579,"dsr_pad_i", false,-1);
    tracep->declBit(c+1579,"ri_pad_i", false,-1);
    tracep->declBit(c+1579,"dcd_pad_i", false,-1);
    tracep->declBit(c+925,"loopback", false,-1);
    tracep->declBit(c+1579,"cts", false,-1);
    tracep->declBit(c+1589,"dsr", false,-1);
    tracep->declBit(c+1589,"ri", false,-1);
    tracep->declBit(c+1589,"dcd", false,-1);
    tracep->declBit(c+926,"cts_c", false,-1);
    tracep->declBit(c+927,"dsr_c", false,-1);
    tracep->declBit(c+928,"ri_c", false,-1);
    tracep->declBit(c+929,"dcd_c", false,-1);
    tracep->declBus(c+930,"lsr", false,-1, 7,0);
    tracep->declBit(c+931,"lsr0", false,-1);
    tracep->declBit(c+932,"lsr1", false,-1);
    tracep->declBit(c+933,"lsr2", false,-1);
    tracep->declBit(c+934,"lsr3", false,-1);
    tracep->declBit(c+935,"lsr4", false,-1);
    tracep->declBit(c+936,"lsr5", false,-1);
    tracep->declBit(c+937,"lsr6", false,-1);
    tracep->declBit(c+938,"lsr7", false,-1);
    tracep->declBit(c+939,"lsr0r", false,-1);
    tracep->declBit(c+940,"lsr1r", false,-1);
    tracep->declBit(c+941,"lsr2r", false,-1);
    tracep->declBit(c+942,"lsr3r", false,-1);
    tracep->declBit(c+943,"lsr4r", false,-1);
    tracep->declBit(c+944,"lsr5r", false,-1);
    tracep->declBit(c+945,"lsr6r", false,-1);
    tracep->declBit(c+946,"lsr7r", false,-1);
    tracep->declBit(c+225,"lsr_mask", false,-1);
    tracep->declBit(c+947,"rls_int", false,-1);
    tracep->declBit(c+948,"rda_int", false,-1);
    tracep->declBit(c+949,"ti_int", false,-1);
    tracep->declBit(c+950,"thre_int", false,-1);
    tracep->declBit(c+951,"ms_int", false,-1);
    tracep->declBit(c+952,"tf_push", false,-1);
    tracep->declBit(c+953,"rf_pop", false,-1);
    tracep->declBus(c+1567,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+954,"rf_error_bit", false,-1);
    tracep->declBit(c+932,"rf_overrun", false,-1);
    tracep->declBit(c+955,"rf_push_pulse", false,-1);
    tracep->declBus(c+956,"rf_count", false,-1, 4,0);
    tracep->declBus(c+957,"tf_count", false,-1, 4,0);
    tracep->declBus(c+958,"tstate", false,-1, 2,0);
    tracep->declBus(c+959,"rstate", false,-1, 3,0);
    tracep->declBus(c+960,"counter_t", false,-1, 9,0);
    tracep->declBit(c+961,"thre_set_en", false,-1);
    tracep->declBus(c+962,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+963,"block_value", false,-1, 7,0);
    tracep->declBit(c+964,"serial_out", false,-1);
    tracep->declBit(c+965,"serial_in", false,-1);
    tracep->declBit(c+226,"lsr_mask_condition", false,-1);
    tracep->declBit(c+227,"iir_read", false,-1);
    tracep->declBit(c+228,"msr_read", false,-1);
    tracep->declBit(c+229,"fifo_read", false,-1);
    tracep->declBit(c+230,"fifo_write", false,-1);
    tracep->declBus(c+966,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+967,"lsr0_d", false,-1);
    tracep->declBit(c+968,"lsr1_d", false,-1);
    tracep->declBit(c+969,"lsr2_d", false,-1);
    tracep->declBit(c+970,"lsr3_d", false,-1);
    tracep->declBit(c+971,"lsr4_d", false,-1);
    tracep->declBit(c+972,"lsr5_d", false,-1);
    tracep->declBit(c+973,"lsr6_d", false,-1);
    tracep->declBit(c+974,"lsr7_d", false,-1);
    tracep->declBit(c+975,"rls_int_d", false,-1);
    tracep->declBit(c+976,"thre_int_d", false,-1);
    tracep->declBit(c+977,"ms_int_d", false,-1);
    tracep->declBit(c+978,"ti_int_d", false,-1);
    tracep->declBit(c+979,"rda_int_d", false,-1);
    tracep->declBit(c+980,"rls_int_rise", false,-1);
    tracep->declBit(c+981,"thre_int_rise", false,-1);
    tracep->declBit(c+982,"ms_int_rise", false,-1);
    tracep->declBit(c+983,"ti_int_rise", false,-1);
    tracep->declBit(c+984,"rda_int_rise", false,-1);
    tracep->declBit(c+985,"rls_int_pnd", false,-1);
    tracep->declBit(c+986,"rda_int_pnd", false,-1);
    tracep->declBit(c+987,"thre_int_pnd", false,-1);
    tracep->declBit(c+988,"ms_int_pnd", false,-1);
    tracep->declBit(c+989,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1637,"Tp", false,-1, 31,0);
    tracep->declBus(c+1637,"width", false,-1, 31,0);
    tracep->declBus(c+1691,"init_value", false,-1, 0,0);
    tracep->declBit(c+1523,"rst_i", false,-1);
    tracep->declBit(c+1522,"clk_i", false,-1);
    tracep->declBit(c+1579,"stage1_rst_i", false,-1);
    tracep->declBit(c+1589,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1542,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+908,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+990,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+1523,"wb_rst_i", false,-1);
    tracep->declBus(c+913,"lcr", false,-1, 7,0);
    tracep->declBit(c+953,"rf_pop", false,-1);
    tracep->declBit(c+965,"srx_pad_i", false,-1);
    tracep->declBit(c+907,"enable", false,-1);
    tracep->declBit(c+922,"rx_reset", false,-1);
    tracep->declBit(c+225,"lsr_mask", false,-1);
    tracep->declBus(c+960,"counter_t", false,-1, 9,0);
    tracep->declBus(c+956,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1567,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+932,"rf_overrun", false,-1);
    tracep->declBit(c+954,"rf_error_bit", false,-1);
    tracep->declBus(c+959,"rstate", false,-1, 3,0);
    tracep->declBit(c+955,"rf_push_pulse", false,-1);
    tracep->declBus(c+991,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+992,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+993,"rshift", false,-1, 7,0);
    tracep->declBit(c+994,"rparity", false,-1);
    tracep->declBit(c+995,"rparity_error", false,-1);
    tracep->declBit(c+996,"rframing_error", false,-1);
    tracep->declBit(c+997,"rbit_in", false,-1);
    tracep->declBit(c+998,"rparity_xor", false,-1);
    tracep->declBus(c+999,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1000,"rf_push_q", false,-1);
    tracep->declBus(c+1001,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1002,"rf_push", false,-1);
    tracep->declBit(c+1003,"break_error", false,-1);
    tracep->declBit(c+1004,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1005,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1006,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1007,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1591,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1708,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1707,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1703,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1705,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1704,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1706,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1702,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1710,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1722,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1724,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1008,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1009,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1648,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1725,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1698,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1655,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+1523,"wb_rst_i", false,-1);
    tracep->declBit(c+955,"push", false,-1);
    tracep->declBit(c+953,"pop", false,-1);
    tracep->declBus(c+1001,"data_in", false,-1, 10,0);
    tracep->declBit(c+922,"fifo_reset", false,-1);
    tracep->declBit(c+225,"reset_status", false,-1);
    tracep->declBus(c+1567,"data_out", false,-1, 10,0);
    tracep->declBit(c+932,"overrun", false,-1);
    tracep->declBus(c+956,"count", false,-1, 4,0);
    tracep->declBit(c+954,"error_bit", false,-1);
    tracep->declBus(c+1568,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1010+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1026,"top", false,-1, 3,0);
    tracep->declBus(c+1027,"bottom", false,-1, 3,0);
    tracep->declBus(c+1028,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1029,"word0", false,-1, 2,0);
    tracep->declBus(c+1030,"word1", false,-1, 2,0);
    tracep->declBus(c+1031,"word2", false,-1, 2,0);
    tracep->declBus(c+1032,"word3", false,-1, 2,0);
    tracep->declBus(c+1033,"word4", false,-1, 2,0);
    tracep->declBus(c+1034,"word5", false,-1, 2,0);
    tracep->declBus(c+1035,"word6", false,-1, 2,0);
    tracep->declBus(c+1036,"word7", false,-1, 2,0);
    tracep->declBus(c+1037,"word8", false,-1, 2,0);
    tracep->declBus(c+1038,"word9", false,-1, 2,0);
    tracep->declBus(c+1039,"word10", false,-1, 2,0);
    tracep->declBus(c+1040,"word11", false,-1, 2,0);
    tracep->declBus(c+1041,"word12", false,-1, 2,0);
    tracep->declBus(c+1042,"word13", false,-1, 2,0);
    tracep->declBus(c+1043,"word14", false,-1, 2,0);
    tracep->declBus(c+1044,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1698,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1681,"data_width", false,-1, 31,0);
    tracep->declBus(c+1725,"depth", false,-1, 31,0);
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+955,"we", false,-1);
    tracep->declBus(c+1026,"a", false,-1, 3,0);
    tracep->declBus(c+1027,"dpra", false,-1, 3,0);
    tracep->declBus(c+1045,"di", false,-1, 7,0);
    tracep->declBus(c+1568,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+708+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+1523,"wb_rst_i", false,-1);
    tracep->declBus(c+913,"lcr", false,-1, 7,0);
    tracep->declBit(c+952,"tf_push", false,-1);
    tracep->declBus(c+1482,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+907,"enable", false,-1);
    tracep->declBit(c+923,"tx_reset", false,-1);
    tracep->declBit(c+225,"lsr_mask", false,-1);
    tracep->declBit(c+964,"stx_pad_o", false,-1);
    tracep->declBus(c+958,"tstate", false,-1, 2,0);
    tracep->declBus(c+957,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1046,"counter", false,-1, 4,0);
    tracep->declBus(c+1047,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1048,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1049,"stx_o_tmp", false,-1);
    tracep->declBit(c+1050,"parity_xor", false,-1);
    tracep->declBit(c+1051,"tf_pop", false,-1);
    tracep->declBit(c+1052,"bit_out", false,-1);
    tracep->declBus(c+1482,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1410,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1053,"tf_overrun", false,-1);
    tracep->declBus(c+1594,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1578,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1726,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1727,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1689,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1728,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1681,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1725,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1698,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1655,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+1523,"wb_rst_i", false,-1);
    tracep->declBit(c+952,"push", false,-1);
    tracep->declBit(c+1051,"pop", false,-1);
    tracep->declBus(c+1482,"data_in", false,-1, 7,0);
    tracep->declBit(c+923,"fifo_reset", false,-1);
    tracep->declBit(c+225,"reset_status", false,-1);
    tracep->declBus(c+1410,"data_out", false,-1, 7,0);
    tracep->declBit(c+1053,"overrun", false,-1);
    tracep->declBus(c+957,"count", false,-1, 4,0);
    tracep->declBus(c+1054,"top", false,-1, 3,0);
    tracep->declBus(c+1055,"bottom", false,-1, 3,0);
    tracep->declBus(c+1056,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1698,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1681,"data_width", false,-1, 31,0);
    tracep->declBus(c+1725,"depth", false,-1, 31,0);
    tracep->declBit(c+1522,"clk", false,-1);
    tracep->declBit(c+952,"we", false,-1);
    tracep->declBus(c+1054,"a", false,-1, 3,0);
    tracep->declBus(c+1055,"dpra", false,-1, 3,0);
    tracep->declBus(c+1482,"di", false,-1, 7,0);
    tracep->declBus(c+1410,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+724+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBit(c+796,"auto_in_psel", false,-1);
    tracep->declBit(c+797,"auto_in_penable", false,-1);
    tracep->declBit(c+233,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1449,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1578,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1130,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1580,"auto_in_pready", false,-1);
    tracep->declBit(c+1581,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1582,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1536,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1537,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1538,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1539,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1540,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1541,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1522,"clock", false,-1);
    tracep->declBit(c+1523,"reset", false,-1);
    tracep->declBus(c+1477,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+796,"in_psel", false,-1);
    tracep->declBit(c+797,"in_penable", false,-1);
    tracep->declBus(c+1578,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+233,"in_pwrite", false,-1);
    tracep->declBus(c+1130,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+234,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1580,"in_pready", false,-1);
    tracep->declBus(c+1582,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1581,"in_pslverr", false,-1);
    tracep->declBus(c+1536,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1537,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1538,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1539,"vga_hsync", false,-1);
    tracep->declBit(c+1540,"vga_vsync", false,-1);
    tracep->declBit(c+1541,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+810,"sck", false,-1);
    tracep->declBit(c+1430,"ss", false,-1);
    tracep->declBit(c+1418,"mosi", false,-1);
    tracep->declBit(c+1405,"miso", false,-1);
    tracep->declBus(c+1569,"rx_data", false,-1, 7,0);
    tracep->declBus(c+1406,"tx_data", false,-1, 7,0);
    tracep->declBus(c+1407,"cnt", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+810,"sck", false,-1);
    tracep->declBit(c+1057,"ss", false,-1);
    tracep->declBit(c+1418,"mosi", false,-1);
    tracep->declBit(c+1570,"miso", false,-1);
    tracep->declBit(c+1057,"reset", false,-1);
    tracep->declBus(c+1399,"state", false,-1, 2,0);
    tracep->declBus(c+1400,"counter", false,-1, 7,0);
    tracep->declBus(c+1401,"cmd", false,-1, 7,0);
    tracep->declBus(c+1402,"addr", false,-1, 23,0);
    tracep->declBus(c+1403,"data", false,-1, 31,0);
    tracep->declBit(c+1404,"ren", false,-1);
    tracep->declBus(c+1571,"rdata", false,-1, 31,0);
    tracep->declBus(c+1572,"raddr", false,-1, 31,0);
    tracep->declBus(c+1573,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+810,"clock", false,-1);
    tracep->declBit(c+1404,"valid", false,-1);
    tracep->declBus(c+1401,"cmd", false,-1, 7,0);
    tracep->declBus(c+1572,"addr", false,-1, 31,0);
    tracep->declBus(c+1571,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1483,"sck", false,-1);
    tracep->declBit(c+1484,"ce_n", false,-1);
    tracep->declBus(c+1545,"dio", false,-1, 3,0);
    tracep->declBit(c+1484,"reset", false,-1);
    tracep->declBus(c+1574,"state", false,-1, 2,0);
    tracep->declBus(c+1411,"counter", false,-1, 7,0);
    tracep->declBus(c+1575,"counter_wr", false,-1, 7,0);
    tracep->declBus(c+1412,"cmd", false,-1, 7,0);
    tracep->declBus(c+1576,"addr", false,-1, 23,0);
    tracep->declBus(c+1413,"data", false,-1, 31,0);
    tracep->declBus(c+1577,"rdata", false,-1, 31,0);
    tracep->declBus(c+1414,"raddr", false,-1, 31,0);
    tracep->declBit(c+1415,"ren", false,-1);
    tracep->declBit(c+1416,"in_qpi", false,-1);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1483,"clock", false,-1);
    tracep->declBit(c+1415,"valid", false,-1);
    tracep->declBus(c+1412,"cmd", false,-1, 7,0);
    tracep->declBus(c+1414,"addr", false,-1, 31,0);
    tracep->declBus(c+1417,"data_in", false,-1, 7,0);
    tracep->declBus(c+1577,"data_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1419,"cke", false,-1);
    tracep->declBit(c+812,"cs", false,-1);
    tracep->declBit(c+813,"ras", false,-1);
    tracep->declBit(c+814,"cas", false,-1);
    tracep->declBit(c+815,"we", false,-1);
    tracep->declBus(c+1547,"a", false,-1, 13,0);
    tracep->declBus(c+1420,"ba", false,-1, 1,0);
    tracep->declBus(c+1421,"dqm", false,-1, 3,0);
    tracep->declBus(c+1433,"dq", false,-1, 31,0);
    tracep->declBit(c+1476,"sdram_sel", false,-1);
    tracep->declBus(c+1729,"dq_low_1", false,-1, 15,0);
    tracep->declBus(c+1730,"dq_high_1", false,-1, 15,0);
    tracep->declBit(c+1516,"cs_grp1", false,-1);
    tracep->declBus(c+1731,"dq_low_2", false,-1, 15,0);
    tracep->declBus(c+1732,"dq_high_2", false,-1, 15,0);
    tracep->declBit(c+1517,"cs_grp2", false,-1);
    tracep->pushNamePrefix("sdram_1 ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1419,"cke", false,-1);
    tracep->declBit(c+1518,"cs", false,-1);
    tracep->declBit(c+813,"ras", false,-1);
    tracep->declBit(c+814,"cas", false,-1);
    tracep->declBit(c+815,"we", false,-1);
    tracep->declBus(c+1423,"a", false,-1, 12,0);
    tracep->declBus(c+1420,"ba", false,-1, 1,0);
    tracep->declBus(c+1431,"dqm", false,-1, 1,0);
    tracep->declBus(c+1434,"dq", false,-1, 15,0);
    tracep->declBus(c+1733,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1727,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1728,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1689,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1726,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1578,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1594,"CMD_MODE", false,-1, 2,0);
    tracep->declBus(c+1058,"r_active_row", false,-1, 12,0);
    tracep->declBus(c+1435,"w_active_row", false,-1, 12,0);
    tracep->declBus(c+1059,"active_bank", false,-1, 1,0);
    tracep->declBus(c+1060,"curr_col", false,-1, 8,0);
    tracep->declBus(c+1061,"burst_cnt", false,-1, 8,0);
    tracep->declBus(c+1062,"burst_len", false,-1, 8,0);
    tracep->declBus(c+1063,"cas_latency", false,-1, 8,0);
    tracep->declBit(c+1064,"read_en", false,-1);
    tracep->declBit(c+1065,"write_en", false,-1);
    tracep->declBus(c+1066,"cas_cnt", false,-1, 8,0);
    tracep->declBus(c+1067,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1068,"row_active", false,-1);
    tracep->declBus(c+1519,"cmd", false,-1, 2,0);
    tracep->declBit(c+1069,"cas_done", false,-1);
    tracep->declBit(c+1070,"burst_done", false,-1);
    tracep->declBus(c+1436,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1437,"wdata", false,-1, 15,0);
    tracep->declBit(c+1071,"r_done", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1072+i*1,"bank_row", true,(i+0), 12,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+213,"b", false,-1, 31,0);
    tracep->declBus(c+214,"r", false,-1, 31,0);
    tracep->declBus(c+215,"c", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_2 ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1419,"cke", false,-1);
    tracep->declBit(c+1518,"cs", false,-1);
    tracep->declBit(c+813,"ras", false,-1);
    tracep->declBit(c+814,"cas", false,-1);
    tracep->declBit(c+815,"we", false,-1);
    tracep->declBus(c+1423,"a", false,-1, 12,0);
    tracep->declBus(c+1420,"ba", false,-1, 1,0);
    tracep->declBus(c+1432,"dqm", false,-1, 1,0);
    tracep->declBus(c+1438,"dq", false,-1, 15,0);
    tracep->declBus(c+1733,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1727,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1728,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1689,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1726,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1578,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1594,"CMD_MODE", false,-1, 2,0);
    tracep->declBus(c+1076,"r_active_row", false,-1, 12,0);
    tracep->declBus(c+1439,"w_active_row", false,-1, 12,0);
    tracep->declBus(c+1077,"active_bank", false,-1, 1,0);
    tracep->declBus(c+1078,"curr_col", false,-1, 8,0);
    tracep->declBus(c+1079,"burst_cnt", false,-1, 8,0);
    tracep->declBus(c+1080,"burst_len", false,-1, 8,0);
    tracep->declBus(c+1081,"cas_latency", false,-1, 8,0);
    tracep->declBit(c+1082,"read_en", false,-1);
    tracep->declBit(c+1083,"write_en", false,-1);
    tracep->declBus(c+1084,"cas_cnt", false,-1, 8,0);
    tracep->declBus(c+1085,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1086,"row_active", false,-1);
    tracep->declBus(c+1519,"cmd", false,-1, 2,0);
    tracep->declBit(c+1087,"cas_done", false,-1);
    tracep->declBit(c+1088,"burst_done", false,-1);
    tracep->declBus(c+1440,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1441,"wdata", false,-1, 15,0);
    tracep->declBit(c+1089,"r_done", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1090+i*1,"bank_row", true,(i+0), 12,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+216,"b", false,-1, 31,0);
    tracep->declBus(c+217,"r", false,-1, 31,0);
    tracep->declBus(c+218,"c", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_3 ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1419,"cke", false,-1);
    tracep->declBit(c+1520,"cs", false,-1);
    tracep->declBit(c+813,"ras", false,-1);
    tracep->declBit(c+814,"cas", false,-1);
    tracep->declBit(c+815,"we", false,-1);
    tracep->declBus(c+1423,"a", false,-1, 12,0);
    tracep->declBus(c+1420,"ba", false,-1, 1,0);
    tracep->declBus(c+1431,"dqm", false,-1, 1,0);
    tracep->declBus(c+1434,"dq", false,-1, 15,0);
    tracep->declBus(c+1733,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1727,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1728,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1689,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1726,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1578,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1594,"CMD_MODE", false,-1, 2,0);
    tracep->declBus(c+1094,"r_active_row", false,-1, 12,0);
    tracep->declBus(c+1442,"w_active_row", false,-1, 12,0);
    tracep->declBus(c+1095,"active_bank", false,-1, 1,0);
    tracep->declBus(c+1096,"curr_col", false,-1, 8,0);
    tracep->declBus(c+1097,"burst_cnt", false,-1, 8,0);
    tracep->declBus(c+1098,"burst_len", false,-1, 8,0);
    tracep->declBus(c+1099,"cas_latency", false,-1, 8,0);
    tracep->declBit(c+1100,"read_en", false,-1);
    tracep->declBit(c+1101,"write_en", false,-1);
    tracep->declBus(c+1102,"cas_cnt", false,-1, 8,0);
    tracep->declBus(c+1103,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1104,"row_active", false,-1);
    tracep->declBus(c+1521,"cmd", false,-1, 2,0);
    tracep->declBit(c+1105,"cas_done", false,-1);
    tracep->declBit(c+1106,"burst_done", false,-1);
    tracep->declBus(c+1443,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1444,"wdata", false,-1, 15,0);
    tracep->declBit(c+1107,"r_done", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1108+i*1,"bank_row", true,(i+0), 12,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+219,"b", false,-1, 31,0);
    tracep->declBus(c+220,"r", false,-1, 31,0);
    tracep->declBus(c+221,"c", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_4 ");
    tracep->declBit(c+1546,"clk", false,-1);
    tracep->declBit(c+1419,"cke", false,-1);
    tracep->declBit(c+1520,"cs", false,-1);
    tracep->declBit(c+813,"ras", false,-1);
    tracep->declBit(c+814,"cas", false,-1);
    tracep->declBit(c+815,"we", false,-1);
    tracep->declBus(c+1423,"a", false,-1, 12,0);
    tracep->declBus(c+1420,"ba", false,-1, 1,0);
    tracep->declBus(c+1432,"dqm", false,-1, 1,0);
    tracep->declBus(c+1438,"dq", false,-1, 15,0);
    tracep->declBus(c+1733,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1727,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1728,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1689,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1726,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1578,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1594,"CMD_MODE", false,-1, 2,0);
    tracep->declBus(c+1112,"r_active_row", false,-1, 12,0);
    tracep->declBus(c+1445,"w_active_row", false,-1, 12,0);
    tracep->declBus(c+1113,"active_bank", false,-1, 1,0);
    tracep->declBus(c+1114,"curr_col", false,-1, 8,0);
    tracep->declBus(c+1115,"burst_cnt", false,-1, 8,0);
    tracep->declBus(c+1116,"burst_len", false,-1, 8,0);
    tracep->declBus(c+1117,"cas_latency", false,-1, 8,0);
    tracep->declBit(c+1118,"read_en", false,-1);
    tracep->declBit(c+1119,"write_en", false,-1);
    tracep->declBus(c+1120,"cas_cnt", false,-1, 8,0);
    tracep->declBus(c+1121,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1122,"row_active", false,-1);
    tracep->declBus(c+1521,"cmd", false,-1, 2,0);
    tracep->declBit(c+1123,"cas_done", false,-1);
    tracep->declBit(c+1124,"burst_done", false,-1);
    tracep->declBus(c+1446,"col_addr", false,-1, 8,0);
    tracep->declBus(c+1447,"wdata", false,-1, 15,0);
    tracep->declBit(c+1125,"r_done", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1126+i*1,"bank_row", true,(i+0), 12,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+222,"b", false,-1, 31,0);
    tracep->declBus(c+223,"r", false,-1, 31,0);
    tracep->declBus(c+224,"c", false,-1, 31,0);
    tracep->popNamePrefix(4);
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
    VlWide<11>/*351:0*/ __Vtemp_hd646914f__0;
    VlWide<5>/*159:0*/ __Vtemp_hd67b6bdc__0;
    VlWide<3>/*95:0*/ __Vtemp_h7a7f51fb__0;
    VlWide<3>/*95:0*/ __Vtemp_h21d89b9f__0;
    VlWide<6>/*191:0*/ __Vtemp_h9508d738__0;
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
    bufp->fullSData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__key_list[2]),12);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__data_list[2]));
    bufp->fullSData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[5]),13);
    bufp->fullSData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[6]),13);
    bufp->fullSData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[7]),13);
    bufp->fullSData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[8]),13);
    bufp->fullSData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[9]),13);
    bufp->fullSData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__pair_list[10]),13);
    bufp->fullSData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[7]),12);
    bufp->fullSData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[8]),12);
    bufp->fullSData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[9]),12);
    bufp->fullSData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__key_list[10]),12);
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[7]));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[8]));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[9]));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__data_list[10]));
    bufp->fullSData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[0]),13);
    bufp->fullSData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[1]),13);
    bufp->fullSData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[2]),13);
    bufp->fullSData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[3]),13);
    bufp->fullSData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__pair_list[4]),13);
    bufp->fullSData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__key_list[4]),12);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__data_list[4]));
    bufp->fullIData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[0]),19);
    bufp->fullIData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[1]),19);
    bufp->fullIData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__pair_list[2]),19);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__key_list[2]),7);
    bufp->fullSData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__data_list[2]),12);
    bufp->fullIData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[0]),29);
    bufp->fullIData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[1]),29);
    bufp->fullIData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[2]),29);
    bufp->fullIData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[3]),29);
    bufp->fullIData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[4]),29);
    bufp->fullIData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[5]),29);
    bufp->fullIData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[6]),29);
    bufp->fullIData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[7]),29);
    bufp->fullIData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[8]),29);
    bufp->fullIData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[9]),29);
    bufp->fullIData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__pair_list[10]),29);
    bufp->fullIData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[0]),17);
    bufp->fullIData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[1]),17);
    bufp->fullIData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[2]),17);
    bufp->fullIData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[3]),17);
    bufp->fullIData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[4]),17);
    bufp->fullIData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[5]),17);
    bufp->fullIData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[6]),17);
    bufp->fullIData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[7]),17);
    bufp->fullIData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[8]),17);
    bufp->fullIData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[9]),17);
    bufp->fullIData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__key_list[10]),17);
    bufp->fullSData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[3]),12);
    bufp->fullSData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[4]),12);
    bufp->fullSData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[5]),12);
    bufp->fullSData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[6]),12);
    bufp->fullSData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[7]),12);
    bufp->fullSData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[8]),12);
    bufp->fullSData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[9]),12);
    bufp->fullSData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__data_list[10]),12);
    bufp->fullQData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__key_list[0]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__key_list[1]),32);
    bufp->fullSData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__data_list[1]),12);
    bufp->fullIData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[0]),24);
    bufp->fullIData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[1]),24);
    bufp->fullIData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[2]),24);
    bufp->fullIData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[3]),24);
    bufp->fullIData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[4]),24);
    bufp->fullIData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[5]),24);
    bufp->fullIData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[6]),24);
    bufp->fullIData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__pair_list[7]),24);
    bufp->fullSData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__key_list[7]),12);
    bufp->fullSData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[0]),12);
    bufp->fullSData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[1]),12);
    bufp->fullSData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[2]),12);
    bufp->fullSData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[3]),12);
    bufp->fullSData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[4]),12);
    bufp->fullSData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[5]),12);
    bufp->fullSData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[6]),12);
    bufp->fullSData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__data_list[7]),12);
    bufp->fullSData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[3]),12);
    bufp->fullSData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[4]),12);
    bufp->fullSData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[5]),12);
    bufp->fullSData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[6]),12);
    bufp->fullSData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__key_list[7]),12);
    bufp->fullIData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__b),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__r),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__unnamedblk1__DOT__c),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__b),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__r),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__unnamedblk1__DOT__c),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__b),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__r),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__unnamedblk1__DOT__c),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__b),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__r),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__unnamedblk1__DOT__c),32);
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+232,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+235,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+238,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+239,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+240,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+241,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+243,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+244,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+249,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+250,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+251,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+252,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+253,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullBit(oldp+265,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+266,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+267,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+268,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+270,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+271,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+272,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+273,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+274,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+337,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullBit(oldp+339,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+342,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+352,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+354,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+390,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+393,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+394,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+407,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+408,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+409,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+480,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+496,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+508,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+512,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+516,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+528,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+544,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+556,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+560,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+564,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+568,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+588,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+592,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+596,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+600,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+604,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arsize),3);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arburst),2);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arid),4);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arlen),8);
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AluByteIdx),2);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC),32);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf
                              [0xaU]),32);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_Arbiter__DOT__CurrentState),2);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcause),32);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mepc),32);
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mstatus),32);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mtvec),32);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycle),32);
    bufp->fullIData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycleh),32);
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mvendorid),32);
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__marchid),32);
    bufp->fullIData(oldp+639,(((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf
                                [0xfU]) ? ((IData)(4U) 
                                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC)
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC)),32);
    __Vtemp_hd646914f__0[0U] = (IData)((0x800000000ULL 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__marchid))));
    __Vtemp_hd646914f__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mvendorid 
                                 << 0xcU) | (IData)(
                                                    ((0x800000000ULL 
                                                      | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__marchid))) 
                                                     >> 0x20U)));
    __Vtemp_hd646914f__0[2U] = (0x7000U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycleh 
                                            << 0x18U) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mvendorid 
                                              >> 0x14U)));
    __Vtemp_hd646914f__0[3U] = (0x6000000U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycleh 
                                              >> 8U));
    __Vtemp_hd646914f__0[4U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycle 
                                << 4U);
    __Vtemp_hd646914f__0[5U] = (0x50U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mtvec 
                                          << 0x10U) 
                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycle 
                                            >> 0x1cU)));
    __Vtemp_hd646914f__0[6U] = (0x40000U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mstatus 
                                             << 0x1cU) 
                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mtvec 
                                               >> 0x10U)));
    __Vtemp_hd646914f__0[7U] = (0x30000000U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mstatus 
                                               >> 4U));
    __Vtemp_hd646914f__0[8U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcause 
                                << 8U);
    __Vtemp_hd646914f__0[9U] = (0x200U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mepc 
                                           << 0x14U) 
                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcause 
                                             >> 0x18U)));
    __Vtemp_hd646914f__0[0xaU] = (0x100000U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mepc 
                                               >> 0xcU));
    bufp->fullWData(oldp+640,(__Vtemp_hd646914f__0),352);
    bufp->fullQData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullQData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[4]),44);
    bufp->fullQData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[5]),44);
    bufp->fullQData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[6]),44);
    bufp->fullQData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[7]),44);
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0]),32);
    bufp->fullIData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[1]),32);
    bufp->fullIData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[2]),32);
    bufp->fullIData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[3]),32);
    bufp->fullIData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[4]),32);
    bufp->fullIData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[5]),32);
    bufp->fullIData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[6]),32);
    bufp->fullIData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[7]),32);
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[8]),32);
    bufp->fullIData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[9]),32);
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[10]),32);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[11]),32);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[12]),32);
    bufp->fullIData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[13]),32);
    bufp->fullIData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[14]),32);
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[15]),32);
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+740,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+741,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+742,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+744,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullBit(oldp+745,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+746,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+747,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+748,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+749,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+750,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+751,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+752,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+753,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+754,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+755,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+756,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+757,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+758,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+759,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+760,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+761,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+762,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+763,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+764,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+765,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+766,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+767,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+768,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+769,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+770,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+771,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+772,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+773,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+774,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+775,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+776,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+777,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+778,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+779,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+780,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+781,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+782,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+783,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+784,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+785,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+786,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+787,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+788,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+789,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+790,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+791,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+792,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+793,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+794,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+795,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+796,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+797,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+798,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+799,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+800,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+801,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+802,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready));
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__instruction_r),32);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_LSU__DOT__CurrentState),2);
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+812,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+813,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+814,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+815,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout),4);
    bufp->fullBit(oldp+821,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi)
                              ? (8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                              : (0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+824,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_cmd));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullBit(oldp+829,((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))));
    bufp->fullCData(oldp+830,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                ? (1U & (0x88U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+831,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)))));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi));
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+834,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi)
                                ? 0x15U : 0x1bU)),8);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index),2);
    bufp->fullCData(oldp+839,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi)
                                ? 0xeU : 0x14U)),8);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__nstate));
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter),8);
    bufp->fullBit(oldp+846,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+848,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT____VdfgTmp_h54d0e926__0))));
    bufp->fullBit(oldp+849,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT____VdfgTmp_h54d0e926__0) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__CurrentState),4);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_init_done));
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_phy_addr),32);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_adr),5);
    bufp->fullIData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_wdata),32);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_we));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_stb));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_cyc));
    bufp->fullIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rx_data),32);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pslverr));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullSData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+884,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+885,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+886,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+887,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+888,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+889,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+890,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+894,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+896,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+897,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+899,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+903,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+904,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+906,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+924,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+925,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+926,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+927,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+928,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+929,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+930,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+933,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+934,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+935,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+954,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+961,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+980,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+981,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+982,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+983,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+984,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1003,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1004,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1005,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1006,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1007,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1009,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1028,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1045,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1056,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__r_active_row),13);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__active_bank),2);
    bufp->fullSData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__curr_col),9);
    bufp->fullSData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__burst_cnt),9);
    bufp->fullSData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__burst_len),9);
    bufp->fullSData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cas_latency),9);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__read_en));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__write_en));
    bufp->fullSData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cas_cnt),9);
    bufp->fullSData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__dq_out),16);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__row_active));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cas_done));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__burst_done));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__r_done));
    bufp->fullSData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__bank_row[0]),13);
    bufp->fullSData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__bank_row[1]),13);
    bufp->fullSData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__bank_row[2]),13);
    bufp->fullSData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__bank_row[3]),13);
    bufp->fullSData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__r_active_row),13);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__active_bank),2);
    bufp->fullSData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__curr_col),9);
    bufp->fullSData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__burst_cnt),9);
    bufp->fullSData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__burst_len),9);
    bufp->fullSData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__cas_latency),9);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__read_en));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__write_en));
    bufp->fullSData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__cas_cnt),9);
    bufp->fullSData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__dq_out),16);
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__row_active));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__cas_done));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__burst_done));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__r_done));
    bufp->fullSData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__bank_row[0]),13);
    bufp->fullSData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__bank_row[1]),13);
    bufp->fullSData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__bank_row[2]),13);
    bufp->fullSData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__bank_row[3]),13);
    bufp->fullSData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__r_active_row),13);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__active_bank),2);
    bufp->fullSData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__curr_col),9);
    bufp->fullSData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__burst_cnt),9);
    bufp->fullSData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__burst_len),9);
    bufp->fullSData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cas_latency),9);
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__read_en));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__write_en));
    bufp->fullSData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cas_cnt),9);
    bufp->fullSData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__dq_out),16);
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__row_active));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cas_done));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__burst_done));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__r_done));
    bufp->fullSData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__bank_row[0]),13);
    bufp->fullSData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__bank_row[1]),13);
    bufp->fullSData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__bank_row[2]),13);
    bufp->fullSData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__bank_row[3]),13);
    bufp->fullSData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__r_active_row),13);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__active_bank),2);
    bufp->fullSData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__curr_col),9);
    bufp->fullSData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__burst_cnt),9);
    bufp->fullSData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__burst_len),9);
    bufp->fullSData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__cas_latency),9);
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__read_en));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__write_en));
    bufp->fullSData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__cas_cnt),9);
    bufp->fullSData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__dq_out),16);
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__row_active));
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__cas_done));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__burst_done));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__r_done));
    bufp->fullSData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__bank_row[0]),13);
    bufp->fullSData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__bank_row[1]),13);
    bufp->fullSData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__bank_row[2]),13);
    bufp->fullSData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__bank_row[3]),13);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__CurrentState),2);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1140,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1141,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1142,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullBit(oldp+1143,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1150,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1151,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1157,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1161,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1182,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1188,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1210,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1211,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1212,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1215,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1216,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1218,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1220,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1221,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1227,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1228,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1229,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1230,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1237,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1239,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1249,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1250,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1251,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1252,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1253,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1254,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1255,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1257,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1258,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1259,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1260,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1261,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1262,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1263,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1264,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr),32);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst),2);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid),4);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen),8);
    bufp->fullIData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr),32);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awburst),2);
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awlen),8);
    bufp->fullIData(oldp+1274,(((0x1fU >= (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf1fac965__0)
                                             ? (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0)
                                             : 0U) 
                                           << 3U)) ? 
                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ExuRes 
                                 << (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf1fac965__0)
                                       ? (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0)
                                       : 0U) << 3U))
                                 : 0U)),32);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction),32);
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__is_loadmemory));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__is_storememory));
    bufp->fullIData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Imm),32);
    bufp->fullSData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__InstrNum),12);
    bufp->fullSData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrNum),12);
    bufp->fullCData(oldp+1283,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1284,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1285,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWen));
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC_en));
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC),32);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ExuRes),32);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrData),32);
    bufp->fullIData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrExuData),32);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs1Data),32);
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs2Data),32);
    bufp->fullIData(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf1fac965__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0
                                 : 0x30000000U)),32);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_Arbiter__DOT__NextState),2);
    bufp->fullCData(oldp+1296,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1297,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+1298,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction)),7);
    bufp->fullSData(oldp+1299,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                >> 0x14U)),12);
    bufp->fullSData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__B_imm),12);
    bufp->fullSData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__S_imm),12);
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__J_imm),20);
    bufp->fullIData(oldp+1303,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                >> 0xcU)),20);
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__I_ex),32);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__S_ex),32);
    bufp->fullIData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__J_ex),32);
    bufp->fullIData(oldp+1307,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction)),32);
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__B_ex),32);
    bufp->fullSData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__CsrNum),12);
    bufp->fullSData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Opcode_Funct3),10);
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Opcode_Funct3_Funct7),17);
    bufp->fullSData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrFunct3),12);
    bufp->fullSData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrNoFunct),12);
    bufp->fullSData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrFunct7),12);
    bufp->fullSData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrCsr),12);
    bufp->fullBit(oldp+1316,((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction))));
    bufp->fullBit(oldp+1317,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction))));
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__reg_wen));
    bufp->fullSData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT____Vcellinp__i1__lut),1760);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__UpdatePC_en));
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_LSU__DOT__NextState),2);
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+1396,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1404,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_data),8);
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__cnt),3);
    bufp->fullCData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__psram__DOT__raddr),32);
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__psram__DOT__in_qpi));
    bufp->fullCData(oldp+1417,((0xffU & vlSelf->ysyxSoCFull__DOT__psram__DOT__data)),8);
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullCData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+1422,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullSData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+1431,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1432,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1433,(vlSelf->ysyxSoCFull__DOT___dq_wire),32);
    bufp->fullSData(oldp+1434,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),16);
    bufp->fullSData(oldp+1435,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__w_active_row),13);
    bufp->fullSData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__col_addr),9);
    bufp->fullSData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__wdata),16);
    bufp->fullSData(oldp+1438,((vlSelf->ysyxSoCFull__DOT___dq_wire 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__w_active_row),13);
    bufp->fullSData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__col_addr),9);
    bufp->fullSData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__wdata),16);
    bufp->fullSData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__w_active_row),13);
    bufp->fullSData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__col_addr),9);
    bufp->fullSData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__wdata),16);
    bufp->fullSData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__w_active_row),13);
    bufp->fullSData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__col_addr),9);
    bufp->fullSData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__wdata),16);
    bufp->fullIData(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullIData(oldp+1449,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1450,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1454,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1464,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1467,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1468,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1473,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1474,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1475,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),2);
    bufp->fullBit(oldp+1476,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                    >> 0x1bU))));
    bufp->fullIData(oldp+1477,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip));
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullCData(oldp+1480,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1491,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__NextState),4);
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pready));
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1510,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1513,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_grp1));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_grp2));
    bufp->fullBit(oldp+1518,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_grp1)))));
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__cmd),3);
    bufp->fullBit(oldp+1520,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_grp2)))));
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__cmd),3);
    bufp->fullBit(oldp+1522,(vlSelf->clock));
    bufp->fullBit(oldp+1523,(vlSelf->reset));
    bufp->fullSData(oldp+1524,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1525,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1526,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1527,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1528,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1529,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1530,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1531,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1532,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1533,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1534,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1535,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1536,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1537,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1538,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1539,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1540,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1541,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1542,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1543,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1544,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1546,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1547,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                            >> 0xeU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),14);
    bufp->fullBit(oldp+1548,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pready)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o))));
    bufp->fullBit(oldp+1551,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pslverr))));
    bufp->fullIData(oldp+1552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rx_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o)),32);
    bufp->fullIData(oldp+1553,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1554,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1555,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__NextState),2);
    bufp->fullIData(oldp+1559,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC_en)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC
                                     : ((IData)(4U) 
                                        + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC)))),32);
    bufp->fullBit(oldp+1560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done))));
    bufp->fullCData(oldp+1561,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                 ? ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                     ? 
                                                    ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))
                                                      ? 1U
                                                      : 2U)
                                                     : 0U)))),2);
    bufp->fullBit(oldp+1562,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1563,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi)
                                          ? ((IData)(7U) 
                                             + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                                << 1U))
                                          : ((IData)(0xdU) 
                                             + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                                << 1U))))),8);
    bufp->fullBit(oldp+1564,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o))));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1567,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_data),8);
    bufp->fullBit(oldp+1570,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1572,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter_wr),8);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1578,(1U),3);
    bufp->fullBit(oldp+1579,(0U));
    bufp->fullBit(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1589,(1U));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1591,(0U),4);
    bufp->fullIData(oldp+1592,(0U),32);
    bufp->fullCData(oldp+1593,(0U),8);
    bufp->fullCData(oldp+1594,(0U),3);
    bufp->fullCData(oldp+1595,(0U),2);
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1606,(0x30000000U),32);
    bufp->fullCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awid),4);
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reqValid));
    bufp->fullCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WmaskSh),4);
    bufp->fullIData(oldp+1610,(0x20U),32);
    bufp->fullIData(oldp+1611,(0x20000000U),32);
    bufp->fullCData(oldp+1612,(1U),2);
    bufp->fullCData(oldp+1613,(2U),2);
    bufp->fullCData(oldp+1614,(3U),2);
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__lsu_size),2);
    bufp->fullIData(oldp+1616,(0x18U),32);
    bufp->fullIData(oldp+1617,(0xaU),32);
    bufp->fullIData(oldp+1618,(0xcU),32);
    bufp->fullSData(oldp+1619,(0U),12);
    bufp->fullWData(oldp+1620,(VysyxSoCFull__ConstPool__CONST_hcfa051ba_0),528);
    bufp->fullIData(oldp+1637,(1U),32);
    bufp->fullIData(oldp+1638,(0x16U),32);
    bufp->fullIData(oldp+1639,(0x18U),32);
    bufp->fullIData(oldp+1640,(0x28U),32);
    bufp->fullIData(oldp+1641,(0x2cU),32);
    bufp->fullIData(oldp+1642,(0x28U),32);
    bufp->fullIData(oldp+1643,(3U),32);
    bufp->fullQData(oldp+1644,(0x1c01e021ULL),39);
    bufp->fullIData(oldp+1646,(0xdU),32);
    bufp->fullIData(oldp+1647,(3U),32);
    bufp->fullIData(oldp+1648,(0xbU),32);
    __Vtemp_hd67b6bdc__0[0U] = 0xd8070048U;
    __Vtemp_hd67b6bdc__0[1U] = 0x2e01800U;
    __Vtemp_hd67b6bdc__0[2U] = 0xd0070040U;
    __Vtemp_hd67b6bdc__0[3U] = 0x1000e00U;
    __Vtemp_hd67b6bdc__0[4U] = 0x18U;
    bufp->fullWData(oldp+1649,(__Vtemp_hd67b6bdc__0),143);
    bufp->fullIData(oldp+1654,(0xbU),32);
    bufp->fullIData(oldp+1655,(5U),32);
    __Vtemp_h7a7f51fb__0[0U] = 0xfc082047U;
    __Vtemp_h7a7f51fb__0[1U] = 0x500880U;
    __Vtemp_h7a7f51fb__0[2U] = 0U;
    bufp->fullWData(oldp+1656,(__Vtemp_h7a7f51fb__0),65);
    bufp->fullIData(oldp+1659,(5U),32);
    bufp->fullIData(oldp+1660,(7U),32);
    bufp->fullQData(oldp+1661,(0xdc018b804ef00aULL),57);
    bufp->fullIData(oldp+1663,(0x13U),32);
    bufp->fullIData(oldp+1664,(0x11U),32);
    bufp->fullWData(oldp+1665,(VysyxSoCFull__ConstPool__CONST_h2ac0b763_0),319);
    bufp->fullIData(oldp+1675,(0x1dU),32);
    bufp->fullIData(oldp+1676,(2U),32);
    __Vtemp_h21d89b9f__0[0U] = 0x73027U;
    __Vtemp_h21d89b9f__0[1U] = 0x73024302U;
    __Vtemp_h21d89b9f__0[2U] = 0U;
    bufp->fullWData(oldp+1677,(__Vtemp_h21d89b9f__0),88);
    bufp->fullIData(oldp+1680,(2U),32);
    bufp->fullIData(oldp+1681,(8U),32);
    __Vtemp_h9508d738__0[0U] = 0x7f12008U;
    __Vtemp_h9508d738__0[1U] = 0x6f110U;
    __Vtemp_h9508d738__0[2U] = 0xb00005b8U;
    __Vtemp_h9508d738__0[3U] = 0x3305004U;
    __Vtemp_h9508d738__0[4U] = 0x20023000U;
    __Vtemp_h9508d738__0[5U] = 0x34100134U;
    bufp->fullWData(oldp+1682,(__Vtemp_h9508d738__0),192);
    bufp->fullIData(oldp+1688,(8U),32);
    bufp->fullCData(oldp+1689,(4U),3);
    bufp->fullBit(oldp+1690,(0U));
    bufp->fullBit(oldp+1691,(1U));
    bufp->fullCData(oldp+1692,(0xebU),8);
    bufp->fullCData(oldp+1693,(0x38U),8);
    bufp->fullCData(oldp+1694,(8U),8);
    bufp->fullCData(oldp+1695,(0x88U),8);
    bufp->fullIData(oldp+1696,(0x64U),32);
    bufp->fullIData(oldp+1697,(9U),32);
    bufp->fullIData(oldp+1698,(4U),32);
    bufp->fullIData(oldp+1699,(0x2000U),32);
    bufp->fullIData(oldp+1700,(0x2710U),32);
    bufp->fullIData(oldp+1701,(0x30cU),32);
    bufp->fullCData(oldp+1702,(7U),4);
    bufp->fullCData(oldp+1703,(3U),4);
    bufp->fullCData(oldp+1704,(5U),4);
    bufp->fullCData(oldp+1705,(4U),4);
    bufp->fullCData(oldp+1706,(6U),4);
    bufp->fullCData(oldp+1707,(2U),4);
    bufp->fullCData(oldp+1708,(1U),4);
    bufp->fullSData(oldp+1709,(0x10U),13);
    bufp->fullCData(oldp+1710,(8U),4);
    bufp->fullIData(oldp+1711,(6U),32);
    bufp->fullIData(oldp+1712,(0x3fffffffU),32);
    bufp->fullIData(oldp+1713,(0x10001000U),32);
    bufp->fullIData(oldp+1714,(0x10001fffU),32);
    bufp->fullCData(oldp+1715,(4U),5);
    bufp->fullCData(oldp+1716,(0x10U),5);
    bufp->fullCData(oldp+1717,(0x14U),5);
    bufp->fullCData(oldp+1718,(0x18U),5);
    bufp->fullIData(oldp+1719,(0x100U),32);
    bufp->fullIData(oldp+1720,(0x2440U),32);
    bufp->fullIData(oldp+1721,(0x2540U),32);
    bufp->fullCData(oldp+1722,(9U),4);
    bufp->fullCData(oldp+1723,(0xfU),4);
    bufp->fullCData(oldp+1724,(0xaU),4);
    bufp->fullIData(oldp+1725,(0x10U),32);
    bufp->fullCData(oldp+1726,(2U),3);
    bufp->fullCData(oldp+1727,(3U),3);
    bufp->fullCData(oldp+1728,(5U),3);
    bufp->fullSData(oldp+1729,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_low_1),16);
    bufp->fullSData(oldp+1730,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_high_1),16);
    bufp->fullSData(oldp+1731,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_low_2),16);
    bufp->fullSData(oldp+1732,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq_high_2),16);
    bufp->fullCData(oldp+1733,(7U),3);
}
