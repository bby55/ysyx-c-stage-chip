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
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1579,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1580,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1581,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1582,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1583,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1584,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1586,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1587,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1588,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1589,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1590,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1591,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1592,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1593,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1594,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1595,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1596,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1597,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1598,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1579,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1580,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1581,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1582,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1583,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1584,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1585,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1586,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1587,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1588,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1589,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1590,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1591,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1592,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1593,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1594,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1595,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1596,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1597,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1598,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+862,"spi_sck", false,-1);
    tracep->declBus(c+863,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1486,"spi_mosi", false,-1);
    tracep->declBit(c+1599,"spi_miso", false,-1);
    tracep->declBit(c+1597,"uart_rx", false,-1);
    tracep->declBit(c+1598,"uart_tx", false,-1);
    tracep->declBit(c+1535,"psram_sck", false,-1);
    tracep->declBit(c+1536,"psram_ce_n", false,-1);
    tracep->declBus(c+1600,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1601,"sdram_clk", false,-1);
    tracep->declBit(c+1487,"sdram_cke", false,-1);
    tracep->declBit(c+1488,"sdram_cs", false,-1);
    tracep->declBit(c+1489,"sdram_ras", false,-1);
    tracep->declBit(c+1490,"sdram_cas", false,-1);
    tracep->declBit(c+1491,"sdram_we", false,-1);
    tracep->declBus(c+1602,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1492,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1493,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1506,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1579,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1580,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1581,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1586,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1587,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1588,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1589,"ps2_clk", false,-1);
    tracep->declBit(c+1590,"ps2_data", false,-1);
    tracep->declBus(c+1591,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1592,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1593,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1594,"vga_hsync", false,-1);
    tracep->declBit(c+1595,"vga_vsync", false,-1);
    tracep->declBit(c+1596,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1509,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+237,"in_psel", false,-1);
    tracep->declBit(c+238,"in_penable", false,-1);
    tracep->declBus(c+1636,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1189,"in_pwrite", false,-1);
    tracep->declBus(c+1190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+239,"in_pready", false,-1);
    tracep->declBus(c+240,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+241,"in_pslverr", false,-1);
    tracep->declBus(c+1509,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1475,"out_psel", false,-1);
    tracep->declBit(c+238,"out_penable", false,-1);
    tracep->declBus(c+1636,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1189,"out_pwrite", false,-1);
    tracep->declBus(c+1190,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1537,"out_pready", false,-1);
    tracep->declBus(c+1603,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1604,"out_pslverr", false,-1);
    tracep->declBus(c+1637,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1638,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1639,"DELAY", false,-1, 1,0);
    tracep->declDouble(c+1640,"r", false,-1);
    tracep->declBus(c+1642,"s", false,-1, 31,0);
    tracep->declBus(c+1643,"r_s", false,-1, 31,0);
    tracep->declBus(c+864,"state", false,-1, 1,0);
    tracep->declBus(c+1538,"next_state", false,-1, 1,0);
    tracep->declBus(c+242,"delay_cnt", false,-1, 31,0);
    tracep->declBit(c+243,"delay_done", false,-1);
    tracep->declBus(c+1644,"r_paddr", false,-1, 31,0);
    tracep->declBit(c+1645,"r_psel", false,-1);
    tracep->declBit(c+1646,"r_penable", false,-1);
    tracep->declBus(c+1647,"r_pprot", false,-1, 2,0);
    tracep->declBit(c+1648,"r_pwrite", false,-1);
    tracep->declBus(c+1649,"r_pwdata", false,-1, 31,0);
    tracep->declBus(c+1650,"r_pstrb", false,-1, 3,0);
    tracep->declBit(c+244,"r_pready", false,-1);
    tracep->declBus(c+245,"r_prdata", false,-1, 31,0);
    tracep->declBit(c+246,"r_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1475,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+238,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1189,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1509,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1636,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1537,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1604,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1603,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1605,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1606,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1189,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1509,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1636,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+865,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+866,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1607,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1510,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1189,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1511,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1636,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+247,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1652,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1608,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1609,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1189,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1512,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1636,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+867,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1610,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1539,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1513,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1189,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1512,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1636,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1653,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+868,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1540,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1611,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1189,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1509,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1636,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1612,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+248,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1541,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1514,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1189,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1512,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1636,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1613,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1542,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1543,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1515,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1189,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1511,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1636,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1614,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1615,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1616,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1516,"sel_0", false,-1);
    tracep->declBit(c+1517,"sel_1", false,-1);
    tracep->declBit(c+1518,"sel_2", false,-1);
    tracep->declBit(c+1519,"sel_3", false,-1);
    tracep->declBit(c+1520,"sel_4", false,-1);
    tracep->declBit(c+1521,"sel_5", false,-1);
    tracep->declBit(c+1522,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+249,"auto_in_awready", false,-1);
    tracep->declBit(c+250,"auto_in_awvalid", false,-1);
    tracep->declBus(c+251,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+252,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+253,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+254,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+249,"auto_in_wready", false,-1);
    tracep->declBit(c+255,"auto_in_wvalid", false,-1);
    tracep->declBus(c+256,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+257,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+258,"auto_in_bready", false,-1);
    tracep->declBit(c+1192,"auto_in_bvalid", false,-1);
    tracep->declBus(c+259,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_in_arready", false,-1);
    tracep->declBit(c+262,"auto_in_arvalid", false,-1);
    tracep->declBus(c+263,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+265,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+266,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+267,"auto_in_rready", false,-1);
    tracep->declBit(c+1193,"auto_in_rvalid", false,-1);
    tracep->declBus(c+268,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+237,"auto_out_psel", false,-1);
    tracep->declBit(c+238,"auto_out_penable", false,-1);
    tracep->declBit(c+1189,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1509,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1190,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+239,"auto_out_pready", false,-1);
    tracep->declBit(c+241,"auto_out_pslverr", false,-1);
    tracep->declBus(c+240,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+238,"nodeOut_penable", false,-1);
    tracep->declBus(c+270,"state", false,-1, 1,0);
    tracep->declBit(c+261,"accept_read", false,-1);
    tracep->declBit(c+249,"accept_write", false,-1);
    tracep->declBit(c+271,"is_write_r", false,-1);
    tracep->declBit(c+1189,"is_write", false,-1);
    tracep->declBus(c+268,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+259,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+272,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+273,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+274,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+275,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+276,"resp", false,-1, 1,0);
    tracep->declBus(c+277,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+260,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1193,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+278,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1192,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+279,"auto_in_awready", false,-1);
    tracep->declBit(c+1209,"auto_in_awvalid", false,-1);
    tracep->declBus(c+280,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1210,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1211,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1212,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+281,"auto_in_wready", false,-1);
    tracep->declBit(c+1213,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1216,"auto_in_wlast", false,-1);
    tracep->declBit(c+801,"auto_in_bready", false,-1);
    tracep->declBit(c+282,"auto_in_bvalid", false,-1);
    tracep->declBus(c+283,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+284,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+285,"auto_in_arready", false,-1);
    tracep->declBit(c+1217,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+802,"auto_in_rready", false,-1);
    tracep->declBit(c+286,"auto_in_rvalid", false,-1);
    tracep->declBus(c+287,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+288,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+289,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+290,"auto_in_rlast", false,-1);
    tracep->declBit(c+249,"auto_out_awready", false,-1);
    tracep->declBit(c+250,"auto_out_awvalid", false,-1);
    tracep->declBus(c+251,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+252,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+253,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+254,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+249,"auto_out_wready", false,-1);
    tracep->declBit(c+255,"auto_out_wvalid", false,-1);
    tracep->declBus(c+256,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+257,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+258,"auto_out_bready", false,-1);
    tracep->declBit(c+1192,"auto_out_bvalid", false,-1);
    tracep->declBus(c+259,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+260,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+261,"auto_out_arready", false,-1);
    tracep->declBit(c+262,"auto_out_arvalid", false,-1);
    tracep->declBus(c+263,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+264,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+265,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+266,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+267,"auto_out_rready", false,-1);
    tracep->declBit(c+1193,"auto_out_rvalid", false,-1);
    tracep->declBus(c+268,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+260,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+1192,"io_enq_valid", false,-1);
    tracep->declBus(c+259,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+260,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+801,"io_deq_ready", false,-1);
    tracep->declBit(c+282,"io_deq_valid", false,-1);
    tracep->declBus(c+283,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+284,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+291,"wrap", false,-1);
    tracep->declBit(c+292,"wrap_1", false,-1);
    tracep->declBit(c+293,"maybe_full", false,-1);
    tracep->declBit(c+294,"ptr_match", false,-1);
    tracep->declBit(c+295,"empty", false,-1);
    tracep->declBit(c+296,"full", false,-1);
    tracep->declBit(c+1194,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+292,"R0_addr", false,-1);
    tracep->declBit(c+1653,"R0_en", false,-1);
    tracep->declBit(c+1577,"R0_clk", false,-1);
    tracep->declBus(c+297,"R0_data", false,-1, 5,0);
    tracep->declBit(c+291,"W0_addr", false,-1);
    tracep->declBit(c+1194,"W0_en", false,-1);
    tracep->declBit(c+1577,"W0_clk", false,-1);
    tracep->declBus(c+298,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+299+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+301,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+267,"io_enq_ready", false,-1);
    tracep->declBit(c+1193,"io_enq_valid", false,-1);
    tracep->declBus(c+268,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+269,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+260,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+802,"io_deq_ready", false,-1);
    tracep->declBit(c+286,"io_deq_valid", false,-1);
    tracep->declBus(c+287,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+288,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+289,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+290,"io_deq_bits_last", false,-1);
    tracep->declBit(c+302,"wrap", false,-1);
    tracep->declBit(c+303,"wrap_1", false,-1);
    tracep->declBit(c+304,"maybe_full", false,-1);
    tracep->declBit(c+305,"ptr_match", false,-1);
    tracep->declBit(c+306,"empty", false,-1);
    tracep->declBit(c+307,"full", false,-1);
    tracep->declBit(c+1195,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+303,"R0_addr", false,-1);
    tracep->declBit(c+1653,"R0_en", false,-1);
    tracep->declBit(c+1577,"R0_clk", false,-1);
    tracep->declQuad(c+308,"R0_data", false,-1, 38,0);
    tracep->declBit(c+302,"W0_addr", false,-1);
    tracep->declBit(c+1195,"W0_en", false,-1);
    tracep->declBit(c+1577,"W0_clk", false,-1);
    tracep->declQuad(c+310,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+312+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+316,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1217,"io_enq_valid", false,-1);
    tracep->declBus(c+1218,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1219,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1220,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1221,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+261,"io_deq_ready", false,-1);
    tracep->declBit(c+262,"io_deq_valid", false,-1);
    tracep->declBus(c+263,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+264,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+265,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+266,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+317,"wrap", false,-1);
    tracep->declBit(c+318,"wrap_1", false,-1);
    tracep->declBit(c+319,"maybe_full", false,-1);
    tracep->declBit(c+320,"ptr_match", false,-1);
    tracep->declBit(c+321,"empty", false,-1);
    tracep->declBit(c+322,"full", false,-1);
    tracep->declBit(c+1222,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+318,"R0_addr", false,-1);
    tracep->declBit(c+1653,"R0_en", false,-1);
    tracep->declBit(c+1577,"R0_clk", false,-1);
    tracep->declQuad(c+323,"R0_data", false,-1, 46,0);
    tracep->declBit(c+317,"W0_addr", false,-1);
    tracep->declBit(c+1222,"W0_en", false,-1);
    tracep->declBit(c+1577,"W0_clk", false,-1);
    tracep->declQuad(c+1223,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+325+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+329,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+279,"io_enq_ready", false,-1);
    tracep->declBit(c+1209,"io_enq_valid", false,-1);
    tracep->declBus(c+280,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1210,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1211,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1212,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+249,"io_deq_ready", false,-1);
    tracep->declBit(c+250,"io_deq_valid", false,-1);
    tracep->declBus(c+251,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+252,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+253,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+254,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+330,"wrap", false,-1);
    tracep->declBit(c+331,"wrap_1", false,-1);
    tracep->declBit(c+332,"maybe_full", false,-1);
    tracep->declBit(c+333,"ptr_match", false,-1);
    tracep->declBit(c+334,"empty", false,-1);
    tracep->declBit(c+335,"full", false,-1);
    tracep->declBit(c+1225,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+331,"R0_addr", false,-1);
    tracep->declBit(c+1653,"R0_en", false,-1);
    tracep->declBit(c+1577,"R0_clk", false,-1);
    tracep->declQuad(c+336,"R0_data", false,-1, 46,0);
    tracep->declBit(c+330,"W0_addr", false,-1);
    tracep->declBit(c+1225,"W0_en", false,-1);
    tracep->declBit(c+1577,"W0_clk", false,-1);
    tracep->declQuad(c+803,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+338+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+342,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+1213,"io_enq_valid", false,-1);
    tracep->declBus(c+1214,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1215,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1216,"io_enq_bits_last", false,-1);
    tracep->declBit(c+249,"io_deq_ready", false,-1);
    tracep->declBit(c+255,"io_deq_valid", false,-1);
    tracep->declBus(c+256,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+257,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+343,"wrap", false,-1);
    tracep->declBit(c+344,"wrap_1", false,-1);
    tracep->declBit(c+345,"maybe_full", false,-1);
    tracep->declBit(c+346,"ptr_match", false,-1);
    tracep->declBit(c+347,"empty", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+1226,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+344,"R0_addr", false,-1);
    tracep->declBit(c+1653,"R0_en", false,-1);
    tracep->declBit(c+1577,"R0_clk", false,-1);
    tracep->declQuad(c+349,"R0_data", false,-1, 35,0);
    tracep->declBit(c+343,"W0_addr", false,-1);
    tracep->declBit(c+1226,"W0_en", false,-1);
    tracep->declBit(c+1577,"W0_clk", false,-1);
    tracep->declQuad(c+1227,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+351+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+355,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+356,"auto_in_awready", false,-1);
    tracep->declBit(c+1229,"auto_in_awvalid", false,-1);
    tracep->declBus(c+357,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1230,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1231,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1232,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1233,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+358,"auto_in_wready", false,-1);
    tracep->declBit(c+1234,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1235,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1236,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1237,"auto_in_wlast", false,-1);
    tracep->declBit(c+1238,"auto_in_bready", false,-1);
    tracep->declBit(c+359,"auto_in_bvalid", false,-1);
    tracep->declBus(c+360,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+362,"auto_in_arready", false,-1);
    tracep->declBit(c+1239,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1240,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1244,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1245,"auto_in_rready", false,-1);
    tracep->declBit(c+363,"auto_in_rvalid", false,-1);
    tracep->declBus(c+364,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+365,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+367,"auto_in_rlast", false,-1);
    tracep->declBit(c+1246,"auto_out_awready", false,-1);
    tracep->declBit(c+1247,"auto_out_awvalid", false,-1);
    tracep->declBus(c+280,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1210,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1211,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1212,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1248,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1249,"auto_out_wready", false,-1);
    tracep->declBit(c+1250,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1216,"auto_out_wlast", false,-1);
    tracep->declBit(c+1251,"auto_out_bready", false,-1);
    tracep->declBit(c+368,"auto_out_bvalid", false,-1);
    tracep->declBus(c+360,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+369,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+370,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1252,"auto_out_arready", false,-1);
    tracep->declBit(c+1253,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1254,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1245,"auto_out_rready", false,-1);
    tracep->declBit(c+363,"auto_out_rvalid", false,-1);
    tracep->declBus(c+364,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+365,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+371,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+372,"auto_out_rlast", false,-1);
    tracep->declBit(c+1250,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+373,"w_idle", false,-1);
    tracep->declBit(c+1255,"in_awready", false,-1);
    tracep->declBit(c+374,"busy", false,-1);
    tracep->declBus(c+375,"r_addr", false,-1, 31,0);
    tracep->declBus(c+376,"r_len", false,-1, 7,0);
    tracep->declBus(c+1256,"len", false,-1, 7,0);
    tracep->declBus(c+1257,"addr", false,-1, 31,0);
    tracep->declBit(c+377,"busy_1", false,-1);
    tracep->declBus(c+378,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+379,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+1258,"len_1", false,-1, 7,0);
    tracep->declBus(c+1259,"addr_1", false,-1, 31,0);
    tracep->declBit(c+380,"wbeats_latched", false,-1);
    tracep->declBit(c+1247,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1260,"wbeats_valid", false,-1);
    tracep->declBus(c+381,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1261,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1216,"w_last", false,-1);
    tracep->declBit(c+1251,"nodeOut_bready", false,-1);
    tracep->declBus(c+382,"error_0", false,-1, 1,0);
    tracep->declBus(c+383,"error_1", false,-1, 1,0);
    tracep->declBus(c+384,"error_2", false,-1, 1,0);
    tracep->declBus(c+385,"error_3", false,-1, 1,0);
    tracep->declBus(c+386,"error_4", false,-1, 1,0);
    tracep->declBus(c+387,"error_5", false,-1, 1,0);
    tracep->declBus(c+388,"error_6", false,-1, 1,0);
    tracep->declBus(c+389,"error_7", false,-1, 1,0);
    tracep->declBus(c+390,"error_8", false,-1, 1,0);
    tracep->declBus(c+391,"error_9", false,-1, 1,0);
    tracep->declBus(c+392,"error_10", false,-1, 1,0);
    tracep->declBus(c+393,"error_11", false,-1, 1,0);
    tracep->declBus(c+394,"error_12", false,-1, 1,0);
    tracep->declBus(c+395,"error_13", false,-1, 1,0);
    tracep->declBus(c+396,"error_14", false,-1, 1,0);
    tracep->declBus(c+397,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+362,"io_enq_ready", false,-1);
    tracep->declBit(c+1239,"io_enq_valid", false,-1);
    tracep->declBus(c+1240,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1241,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1242,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1243,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1244,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1262,"io_deq_ready", false,-1);
    tracep->declBit(c+1253,"io_deq_valid", false,-1);
    tracep->declBus(c+1218,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1263,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1264,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1220,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1221,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+398,"ram", false,-1, 48,0);
    tracep->declBit(c+400,"full", false,-1);
    tracep->declBit(c+1253,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1265,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+356,"io_enq_ready", false,-1);
    tracep->declBit(c+1229,"io_enq_valid", false,-1);
    tracep->declBus(c+357,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1230,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1231,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1232,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1233,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1266,"io_deq_ready", false,-1);
    tracep->declBit(c+1267,"io_deq_valid", false,-1);
    tracep->declBus(c+280,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1268,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1269,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1211,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1212,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+401,"ram", false,-1, 48,0);
    tracep->declBit(c+403,"full", false,-1);
    tracep->declBit(c+1267,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1270,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+358,"io_enq_ready", false,-1);
    tracep->declBit(c+1234,"io_enq_valid", false,-1);
    tracep->declBus(c+1235,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1236,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1237,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1271,"io_deq_ready", false,-1);
    tracep->declBit(c+1272,"io_deq_valid", false,-1);
    tracep->declBus(c+1214,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1215,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+805,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+404,"ram", false,-1, 36,0);
    tracep->declBit(c+406,"full", false,-1);
    tracep->declBit(c+1272,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1273,"do_enq", false,-1);
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
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1274,"auto_in_awready", false,-1);
    tracep->declBit(c+1275,"auto_in_awvalid", false,-1);
    tracep->declBus(c+280,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1276,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1277,"auto_in_wready", false,-1);
    tracep->declBit(c+1278,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1279,"auto_in_bready", false,-1);
    tracep->declBit(c+407,"auto_in_bvalid", false,-1);
    tracep->declBus(c+408,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+409,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1280,"auto_in_arready", false,-1);
    tracep->declBit(c+1281,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1282,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1283,"auto_in_rready", false,-1);
    tracep->declBit(c+410,"auto_in_rvalid", false,-1);
    tracep->declBus(c+411,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+412,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+413,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1280,"nodeIn_arready", false,-1);
    tracep->declBit(c+1274,"nodeIn_awready", false,-1);
    tracep->declBit(c+1284,"w_sel0", false,-1);
    tracep->declBit(c+407,"w_full", false,-1);
    tracep->declBus(c+408,"w_id", false,-1, 3,0);
    tracep->declBit(c+414,"r_sel1", false,-1);
    tracep->declBit(c+415,"w_sel1", false,-1);
    tracep->declBit(c+410,"r_full", false,-1);
    tracep->declBus(c+411,"r_id", false,-1, 3,0);
    tracep->declBit(c+1285,"ren", false,-1);
    tracep->declBit(c+416,"rdata_REG", false,-1);
    tracep->declBus(c+417,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+418,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+419,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+420,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1286,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1285,"R0_en", false,-1);
    tracep->declBit(c+1577,"R0_clk", false,-1);
    tracep->declBus(c+421,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1287,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1288,"W0_en", false,-1);
    tracep->declBit(c+1577,"W0_clk", false,-1);
    tracep->declBus(c+1214,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1215,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+356,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1229,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+357,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1230,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1231,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1232,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1233,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+358,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1234,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1235,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1236,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1237,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1238,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+359,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+360,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+362,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1239,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1240,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1244,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1245,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+363,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+364,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+365,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+367,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+356,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+1229,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+357,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+1230,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1231,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1232,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1233,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+358,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+1234,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+1235,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1236,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1237,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1238,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+359,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+360,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+362,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+1239,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1240,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1244,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1245,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+363,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+364,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+365,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+367,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1289,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1290,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+280,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1210,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1211,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1212,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1249,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1250,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1216,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1251,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+368,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+360,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+369,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1291,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1292,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1245,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+363,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+364,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+365,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+372,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1274,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1275,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+280,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1276,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1277,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1278,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1279,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+407,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+408,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+409,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1280,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1281,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1282,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1283,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+410,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+411,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+412,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+413,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1293,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1294,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+422,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1295,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1296,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+806,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+423,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+424,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+425,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+279,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1209,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+280,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1210,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1211,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1212,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+281,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1213,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1216,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+801,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+282,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+283,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+284,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+285,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1217,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+802,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+286,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+287,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+288,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+289,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+290,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+368,"in_0_bvalid", false,-1);
    tracep->declBit(c+363,"in_0_rvalid", false,-1);
    tracep->declBit(c+1297,"in_0_wready", false,-1);
    tracep->declBit(c+1298,"in_0_awready", false,-1);
    tracep->declBit(c+1291,"in_0_arready", false,-1);
    tracep->declBit(c+1289,"anonIn_awready", false,-1);
    tracep->declBit(c+1299,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1300,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1301,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1302,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1303,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1304,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+1305,"arSel", false,-1, 15,0);
    tracep->declBus(c+426,"awSel", false,-1, 15,0);
    tracep->declBus(c+427,"rSel", false,-1, 15,0);
    tracep->declBus(c+428,"bSel", false,-1, 15,0);
    tracep->declBit(c+429,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+430,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+431,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+432,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+433,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+434,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+435,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+436,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+437,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+438,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+439,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+440,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+441,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+442,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+443,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+444,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+445,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+446,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+447,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+448,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+449,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+450,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+451,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+452,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+453,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+454,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+455,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+456,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+457,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+458,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+459,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+460,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+461,"latched", false,-1);
    tracep->declBit(c+1306,"in_0_awvalid", false,-1);
    tracep->declBit(c+1307,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1308,"in_0_wvalid", false,-1);
    tracep->declBit(c+462,"idle_3", false,-1);
    tracep->declBit(c+463,"anyValid", false,-1);
    tracep->declBus(c+464,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+465,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+466,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+467,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+468,"prefixOR_1", false,-1);
    tracep->declBit(c+469,"winner_3_1", false,-1);
    tracep->declBit(c+470,"winner_3_2", false,-1);
    tracep->declBit(c+471,"state_3_0", false,-1);
    tracep->declBit(c+472,"state_3_1", false,-1);
    tracep->declBit(c+473,"state_3_2", false,-1);
    tracep->declBit(c+474,"muxState_3_0", false,-1);
    tracep->declBit(c+475,"muxState_3_1", false,-1);
    tracep->declBit(c+476,"muxState_3_2", false,-1);
    tracep->declBit(c+477,"idle_4", false,-1);
    tracep->declBit(c+478,"anyValid_1", false,-1);
    tracep->declBus(c+479,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+480,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+481,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+482,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+483,"winner_4_0", false,-1);
    tracep->declBit(c+484,"winner_4_2", false,-1);
    tracep->declBit(c+485,"state_4_0", false,-1);
    tracep->declBit(c+486,"state_4_2", false,-1);
    tracep->declBit(c+487,"muxState_4_0", false,-1);
    tracep->declBit(c+488,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+489,"io_enq_ready", false,-1);
    tracep->declBit(c+1307,"io_enq_valid", false,-1);
    tracep->declBus(c+1309,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1310,"io_deq_ready", false,-1);
    tracep->declBit(c+1311,"io_deq_valid", false,-1);
    tracep->declBus(c+1312,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+490,"wrap", false,-1);
    tracep->declBit(c+491,"wrap_1", false,-1);
    tracep->declBit(c+492,"maybe_full", false,-1);
    tracep->declBit(c+493,"ptr_match", false,-1);
    tracep->declBit(c+494,"empty", false,-1);
    tracep->declBit(c+495,"full", false,-1);
    tracep->declBit(c+1311,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1313,"do_deq", false,-1);
    tracep->declBit(c+1314,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+491,"R0_addr", false,-1);
    tracep->declBit(c+1653,"R0_en", false,-1);
    tracep->declBit(c+1577,"R0_clk", false,-1);
    tracep->declBus(c+496,"R0_data", false,-1, 2,0);
    tracep->declBit(c+490,"W0_addr", false,-1);
    tracep->declBit(c+1314,"W0_en", false,-1);
    tracep->declBit(c+1577,"W0_clk", false,-1);
    tracep->declBus(c+1309,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+497+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1246,"auto_in_awready", false,-1);
    tracep->declBit(c+1247,"auto_in_awvalid", false,-1);
    tracep->declBus(c+280,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1210,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1211,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1212,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1248,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1249,"auto_in_wready", false,-1);
    tracep->declBit(c+1250,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1216,"auto_in_wlast", false,-1);
    tracep->declBit(c+1251,"auto_in_bready", false,-1);
    tracep->declBit(c+368,"auto_in_bvalid", false,-1);
    tracep->declBus(c+360,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+369,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+370,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1252,"auto_in_arready", false,-1);
    tracep->declBit(c+1253,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1254,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1245,"auto_in_rready", false,-1);
    tracep->declBit(c+363,"auto_in_rvalid", false,-1);
    tracep->declBus(c+364,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+365,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+371,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+372,"auto_in_rlast", false,-1);
    tracep->declBit(c+1289,"auto_out_awready", false,-1);
    tracep->declBit(c+1290,"auto_out_awvalid", false,-1);
    tracep->declBus(c+280,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1210,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1211,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1212,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1249,"auto_out_wready", false,-1);
    tracep->declBit(c+1250,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1214,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1215,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1216,"auto_out_wlast", false,-1);
    tracep->declBit(c+1251,"auto_out_bready", false,-1);
    tracep->declBit(c+368,"auto_out_bvalid", false,-1);
    tracep->declBus(c+360,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+369,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1291,"auto_out_arready", false,-1);
    tracep->declBit(c+1292,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1220,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1245,"auto_out_rready", false,-1);
    tracep->declBit(c+363,"auto_out_rvalid", false,-1);
    tracep->declBus(c+364,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+365,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+372,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+499,"io_enq_ready", false,-1);
    tracep->declBit(c+1315,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+807,"io_deq_ready", false,-1);
    tracep->declBit(c+500,"io_deq_valid", false,-1);
    tracep->declBit(c+501,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+500,"full", false,-1);
    tracep->declBit(c+501,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+502,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+503,"io_enq_ready", false,-1);
    tracep->declBit(c+1316,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+808,"io_deq_ready", false,-1);
    tracep->declBit(c+504,"io_deq_valid", false,-1);
    tracep->declBit(c+505,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+504,"full", false,-1);
    tracep->declBit(c+505,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+506,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+507,"io_enq_ready", false,-1);
    tracep->declBit(c+1317,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+809,"io_deq_ready", false,-1);
    tracep->declBit(c+508,"io_deq_valid", false,-1);
    tracep->declBit(c+509,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+508,"full", false,-1);
    tracep->declBit(c+509,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+510,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+511,"io_enq_ready", false,-1);
    tracep->declBit(c+1318,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+810,"io_deq_ready", false,-1);
    tracep->declBit(c+512,"io_deq_valid", false,-1);
    tracep->declBit(c+513,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+512,"full", false,-1);
    tracep->declBit(c+513,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+514,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+515,"io_enq_ready", false,-1);
    tracep->declBit(c+1319,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+811,"io_deq_ready", false,-1);
    tracep->declBit(c+516,"io_deq_valid", false,-1);
    tracep->declBit(c+517,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+516,"full", false,-1);
    tracep->declBit(c+517,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+518,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+519,"io_enq_ready", false,-1);
    tracep->declBit(c+1320,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+812,"io_deq_ready", false,-1);
    tracep->declBit(c+520,"io_deq_valid", false,-1);
    tracep->declBit(c+521,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+520,"full", false,-1);
    tracep->declBit(c+521,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+522,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+523,"io_enq_ready", false,-1);
    tracep->declBit(c+1321,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+813,"io_deq_ready", false,-1);
    tracep->declBit(c+524,"io_deq_valid", false,-1);
    tracep->declBit(c+525,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+524,"full", false,-1);
    tracep->declBit(c+525,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+526,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+527,"io_enq_ready", false,-1);
    tracep->declBit(c+1322,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+814,"io_deq_ready", false,-1);
    tracep->declBit(c+528,"io_deq_valid", false,-1);
    tracep->declBit(c+529,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+528,"full", false,-1);
    tracep->declBit(c+529,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+530,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+531,"io_enq_ready", false,-1);
    tracep->declBit(c+815,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+816,"io_deq_ready", false,-1);
    tracep->declBit(c+532,"io_deq_valid", false,-1);
    tracep->declBit(c+533,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+532,"full", false,-1);
    tracep->declBit(c+533,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+534,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+535,"io_enq_ready", false,-1);
    tracep->declBit(c+817,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+818,"io_deq_ready", false,-1);
    tracep->declBit(c+536,"io_deq_valid", false,-1);
    tracep->declBit(c+537,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+536,"full", false,-1);
    tracep->declBit(c+537,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+538,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+539,"io_enq_ready", false,-1);
    tracep->declBit(c+819,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+820,"io_deq_ready", false,-1);
    tracep->declBit(c+540,"io_deq_valid", false,-1);
    tracep->declBit(c+541,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+540,"full", false,-1);
    tracep->declBit(c+541,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+542,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+543,"io_enq_ready", false,-1);
    tracep->declBit(c+821,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+822,"io_deq_ready", false,-1);
    tracep->declBit(c+544,"io_deq_valid", false,-1);
    tracep->declBit(c+545,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+544,"full", false,-1);
    tracep->declBit(c+545,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+546,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+547,"io_enq_ready", false,-1);
    tracep->declBit(c+1323,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+823,"io_deq_ready", false,-1);
    tracep->declBit(c+548,"io_deq_valid", false,-1);
    tracep->declBit(c+549,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+548,"full", false,-1);
    tracep->declBit(c+549,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+550,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+551,"io_enq_ready", false,-1);
    tracep->declBit(c+824,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+825,"io_deq_ready", false,-1);
    tracep->declBit(c+552,"io_deq_valid", false,-1);
    tracep->declBit(c+553,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+552,"full", false,-1);
    tracep->declBit(c+553,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+554,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+555,"io_enq_ready", false,-1);
    tracep->declBit(c+826,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+827,"io_deq_ready", false,-1);
    tracep->declBit(c+556,"io_deq_valid", false,-1);
    tracep->declBit(c+557,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+556,"full", false,-1);
    tracep->declBit(c+557,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+558,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+559,"io_enq_ready", false,-1);
    tracep->declBit(c+828,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+829,"io_deq_ready", false,-1);
    tracep->declBit(c+560,"io_deq_valid", false,-1);
    tracep->declBit(c+561,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+560,"full", false,-1);
    tracep->declBit(c+561,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+562,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+563,"io_enq_ready", false,-1);
    tracep->declBit(c+830,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+831,"io_deq_ready", false,-1);
    tracep->declBit(c+564,"io_deq_valid", false,-1);
    tracep->declBit(c+565,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+564,"full", false,-1);
    tracep->declBit(c+565,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+566,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+567,"io_enq_ready", false,-1);
    tracep->declBit(c+832,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+833,"io_deq_ready", false,-1);
    tracep->declBit(c+568,"io_deq_valid", false,-1);
    tracep->declBit(c+569,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+568,"full", false,-1);
    tracep->declBit(c+569,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+570,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+571,"io_enq_ready", false,-1);
    tracep->declBit(c+834,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+835,"io_deq_ready", false,-1);
    tracep->declBit(c+572,"io_deq_valid", false,-1);
    tracep->declBit(c+573,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+572,"full", false,-1);
    tracep->declBit(c+573,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+574,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+575,"io_enq_ready", false,-1);
    tracep->declBit(c+836,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+837,"io_deq_ready", false,-1);
    tracep->declBit(c+576,"io_deq_valid", false,-1);
    tracep->declBit(c+577,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+576,"full", false,-1);
    tracep->declBit(c+577,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+578,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+579,"io_enq_ready", false,-1);
    tracep->declBit(c+838,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+839,"io_deq_ready", false,-1);
    tracep->declBit(c+580,"io_deq_valid", false,-1);
    tracep->declBit(c+581,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+580,"full", false,-1);
    tracep->declBit(c+581,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+582,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+583,"io_enq_ready", false,-1);
    tracep->declBit(c+840,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+841,"io_deq_ready", false,-1);
    tracep->declBit(c+584,"io_deq_valid", false,-1);
    tracep->declBit(c+585,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+584,"full", false,-1);
    tracep->declBit(c+585,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+586,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+587,"io_enq_ready", false,-1);
    tracep->declBit(c+842,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+843,"io_deq_ready", false,-1);
    tracep->declBit(c+588,"io_deq_valid", false,-1);
    tracep->declBit(c+589,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+588,"full", false,-1);
    tracep->declBit(c+589,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+590,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+591,"io_enq_ready", false,-1);
    tracep->declBit(c+1324,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+844,"io_deq_ready", false,-1);
    tracep->declBit(c+592,"io_deq_valid", false,-1);
    tracep->declBit(c+593,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+592,"full", false,-1);
    tracep->declBit(c+593,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+594,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+595,"io_enq_ready", false,-1);
    tracep->declBit(c+845,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+846,"io_deq_ready", false,-1);
    tracep->declBit(c+596,"io_deq_valid", false,-1);
    tracep->declBit(c+597,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+596,"full", false,-1);
    tracep->declBit(c+597,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+598,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+599,"io_enq_ready", false,-1);
    tracep->declBit(c+847,"io_enq_valid", false,-1);
    tracep->declBit(c+1248,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+848,"io_deq_ready", false,-1);
    tracep->declBit(c+600,"io_deq_valid", false,-1);
    tracep->declBit(c+601,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+600,"full", false,-1);
    tracep->declBit(c+601,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+602,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+603,"io_enq_ready", false,-1);
    tracep->declBit(c+1325,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+849,"io_deq_ready", false,-1);
    tracep->declBit(c+604,"io_deq_valid", false,-1);
    tracep->declBit(c+605,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+604,"full", false,-1);
    tracep->declBit(c+605,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+606,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+607,"io_enq_ready", false,-1);
    tracep->declBit(c+1326,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+850,"io_deq_ready", false,-1);
    tracep->declBit(c+608,"io_deq_valid", false,-1);
    tracep->declBit(c+609,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+608,"full", false,-1);
    tracep->declBit(c+609,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+610,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+611,"io_enq_ready", false,-1);
    tracep->declBit(c+1327,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+851,"io_deq_ready", false,-1);
    tracep->declBit(c+612,"io_deq_valid", false,-1);
    tracep->declBit(c+613,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+612,"full", false,-1);
    tracep->declBit(c+613,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+614,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+615,"io_enq_ready", false,-1);
    tracep->declBit(c+1328,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+852,"io_deq_ready", false,-1);
    tracep->declBit(c+616,"io_deq_valid", false,-1);
    tracep->declBit(c+617,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+616,"full", false,-1);
    tracep->declBit(c+617,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+618,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+619,"io_enq_ready", false,-1);
    tracep->declBit(c+1329,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+853,"io_deq_ready", false,-1);
    tracep->declBit(c+620,"io_deq_valid", false,-1);
    tracep->declBit(c+621,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+620,"full", false,-1);
    tracep->declBit(c+621,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+622,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+623,"io_enq_ready", false,-1);
    tracep->declBit(c+1330,"io_enq_valid", false,-1);
    tracep->declBit(c+1254,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+854,"io_deq_ready", false,-1);
    tracep->declBit(c+624,"io_deq_valid", false,-1);
    tracep->declBit(c+625,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+624,"full", false,-1);
    tracep->declBit(c+625,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+626,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1617,"reset", false,-1);
    tracep->declBit(c+356,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1229,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+357,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1230,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1231,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1232,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1233,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+358,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1234,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1235,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1236,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1237,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1238,"auto_master_out_bready", false,-1);
    tracep->declBit(c+359,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+360,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+361,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+362,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1239,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1240,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1244,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1245,"auto_master_out_rready", false,-1);
    tracep->declBit(c+363,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+364,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+365,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+367,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1617,"reset", false,-1);
    tracep->declBit(c+1651,"io_interrupt", false,-1);
    tracep->declBit(c+1654,"io_slave_awready", false,-1);
    tracep->declBit(c+1651,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1655,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1656,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1657,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1658,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1637,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1659,"io_slave_wready", false,-1);
    tracep->declBit(c+1651,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1656,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1655,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1651,"io_slave_wlast", false,-1);
    tracep->declBit(c+1651,"io_slave_bready", false,-1);
    tracep->declBit(c+1660,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1661,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1662,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1663,"io_slave_arready", false,-1);
    tracep->declBit(c+1651,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1655,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1656,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1657,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1658,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1637,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1651,"io_slave_rready", false,-1);
    tracep->declBit(c+1664,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1665,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1666,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1667,"io_slave_rlast", false,-1);
    tracep->declBus(c+1668,"io_slave_rid", false,-1, 3,0);
    tracep->declBit(c+1239,"io_master_arvalid", false,-1);
    tracep->declBit(c+362,"io_master_arready", false,-1);
    tracep->declBus(c+1241,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1240,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1242,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1244,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+363,"io_master_rvalid", false,-1);
    tracep->declBit(c+1245,"io_master_rready", false,-1);
    tracep->declBus(c+365,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+367,"io_master_rlast", false,-1);
    tracep->declBus(c+364,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1229,"io_master_awvalid", false,-1);
    tracep->declBit(c+356,"io_master_awready", false,-1);
    tracep->declBus(c+1230,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+357,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1231,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1232,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1233,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1234,"io_master_wvalid", false,-1);
    tracep->declBit(c+358,"io_master_wready", false,-1);
    tracep->declBus(c+1235,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1236,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1237,"io_master_wlast", false,-1);
    tracep->declBit(c+359,"io_master_bvalid", false,-1);
    tracep->declBit(c+1238,"io_master_bready", false,-1);
    tracep->declBus(c+361,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+360,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1669,"PC_START", false,-1, 31,0);
    tracep->declBit(c+627,"ifu_arvalid", false,-1);
    tracep->declBus(c+628,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+629,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+630,"ifu_arburst", false,-1, 1,0);
    tracep->declBus(c+631,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+632,"ifu_arlen", false,-1, 7,0);
    tracep->declBit(c+633,"ifu_arready", false,-1);
    tracep->declBit(c+1196,"ifu_rvalid", false,-1);
    tracep->declBit(c+634,"ifu_rready", false,-1);
    tracep->declBus(c+1197,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+635,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1198,"ifu_rlast", false,-1);
    tracep->declBus(c+636,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+855,"lsu_arvalid", false,-1);
    tracep->declBus(c+1331,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1332,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1333,"lsu_arburst", false,-1, 1,0);
    tracep->declBus(c+1334,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1335,"lsu_arlen", false,-1, 7,0);
    tracep->declBit(c+1199,"lsu_arready", false,-1);
    tracep->declBit(c+637,"lsu_rvalid", false,-1);
    tracep->declBit(c+856,"lsu_rready", false,-1);
    tracep->declBus(c+638,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+639,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+640,"lsu_rlast", false,-1);
    tracep->declBus(c+641,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+857,"lsu_awvalid", false,-1);
    tracep->declBus(c+1336,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1337,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1338,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+1670,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1339,"lsu_awlen", false,-1, 7,0);
    tracep->declBit(c+1200,"lsu_awready", false,-1);
    tracep->declBit(c+858,"lsu_wvalid", false,-1);
    tracep->declBus(c+1340,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1341,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1342,"lsu_wlast", false,-1);
    tracep->declBit(c+1201,"lsu_wready", false,-1);
    tracep->declBit(c+642,"lsu_bvalid", false,-1);
    tracep->declBit(c+859,"lsu_bready", false,-1);
    tracep->declBus(c+643,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+644,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+1343,"instruction", false,-1, 31,0);
    tracep->declBit(c+1344,"is_loadmemory", false,-1);
    tracep->declBit(c+1345,"is_storememory", false,-1);
    tracep->declBus(c+1346,"Imm", false,-1, 31,0);
    tracep->declBus(c+1347,"InstrNum", false,-1, 11,0);
    tracep->declBus(c+1348,"CsrNum", false,-1, 11,0);
    tracep->declBus(c+1349,"Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+1350,"Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+1351,"RdRaddr", false,-1, 4,0);
    tracep->declBit(c+1671,"reqValid", false,-1);
    tracep->declBit(c+1352,"RegWen", false,-1);
    tracep->declBit(c+1353,"JumpPC_en", false,-1);
    tracep->declBus(c+645,"AluByteIdx", false,-1, 1,0);
    tracep->declBus(c+1354,"JumpPC", false,-1, 31,0);
    tracep->declBus(c+1355,"ExuRes", false,-1, 31,0);
    tracep->declBus(c+646,"PC", false,-1, 31,0);
    tracep->declBus(c+1356,"CsrData", false,-1, 31,0);
    tracep->declBus(c+1357,"CsrExuData", false,-1, 31,0);
    tracep->declBus(c+1358,"Rs1Data", false,-1, 31,0);
    tracep->declBus(c+1359,"Rs2Data", false,-1, 31,0);
    tracep->declBus(c+647,"ReturnA0", false,-1, 31,0);
    tracep->declBus(c+1672,"WmaskSh", false,-1, 3,0);
    tracep->declBus(c+1360,"io_lsu_addr", false,-1, 31,0);
    tracep->pushNamePrefix("U_ALU ");
    tracep->declBus(c+1673,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1674,"PC_START", false,-1, 31,0);
    tracep->declBus(c+1358,"i_Rs1Data", false,-1, 31,0);
    tracep->declBus(c+1359,"i_Rs2Data", false,-1, 31,0);
    tracep->declBus(c+1346,"i_Imm", false,-1, 31,0);
    tracep->declBus(c+646,"i_PC", false,-1, 31,0);
    tracep->declBus(c+1356,"i_CsrData", false,-1, 31,0);
    tracep->declBus(c+1347,"i_InstrNum", false,-1, 11,0);
    tracep->declBus(c+1355,"o_ExuRes", false,-1, 31,0);
    tracep->declBus(c+1357,"o_CsrExuData", false,-1, 31,0);
    tracep->declBus(c+1354,"o_JumpPC", false,-1, 31,0);
    tracep->declBit(c+1353,"o_JumpPC_en", false,-1);
    tracep->declBus(c+638,"i_lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1331,"o_lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1335,"o_lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1332,"o_lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1333,"o_lsu_arburst", false,-1, 1,0);
    tracep->declBus(c+1334,"o_lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1336,"o_lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1339,"o_lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1337,"o_lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1338,"o_lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+1341,"o_lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1342,"o_lsu_wlast", false,-1);
    tracep->declBit(c+855,"i_lsu_arvalid", false,-1);
    tracep->declBit(c+1199,"i_lsu_arready", false,-1);
    tracep->declBit(c+857,"i_lsu_awvalid", false,-1);
    tracep->declBit(c+1200,"i_lsu_awready", false,-1);
    tracep->declBit(c+858,"i_lsu_wvalid", false,-1);
    tracep->declBit(c+1201,"i_lsu_wready", false,-1);
    tracep->declBit(c+640,"i_lsu_rlast", false,-1);
    tracep->declBus(c+645,"i_ByteIdx", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_Arbiter ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1617,"reset", false,-1);
    tracep->declBit(c+627,"i_arvalid_1", false,-1);
    tracep->declBit(c+633,"o_arready_1", false,-1);
    tracep->declBus(c+628,"i_araddr_1", false,-1, 31,0);
    tracep->declBus(c+629,"i_arsize_1", false,-1, 2,0);
    tracep->declBus(c+630,"i_arburst_1", false,-1, 1,0);
    tracep->declBus(c+631,"i_arid_1", false,-1, 3,0);
    tracep->declBus(c+632,"i_arlen_1", false,-1, 7,0);
    tracep->declBit(c+634,"i_rready_1", false,-1);
    tracep->declBit(c+1196,"o_rvalid_1", false,-1);
    tracep->declBus(c+635,"o_rresp_1", false,-1, 1,0);
    tracep->declBus(c+1197,"o_rdata_1", false,-1, 31,0);
    tracep->declBit(c+1198,"o_rlast_1", false,-1);
    tracep->declBus(c+636,"o_rid_1", false,-1, 3,0);
    tracep->declBit(c+855,"i_arvalid_2", false,-1);
    tracep->declBit(c+1199,"o_arready_2", false,-1);
    tracep->declBus(c+1331,"i_araddr_2", false,-1, 31,0);
    tracep->declBus(c+1332,"i_arsize_2", false,-1, 2,0);
    tracep->declBus(c+1333,"i_arburst_2", false,-1, 1,0);
    tracep->declBus(c+1334,"i_arid_2", false,-1, 3,0);
    tracep->declBus(c+1335,"i_arlen_2", false,-1, 7,0);
    tracep->declBit(c+856,"i_rready_2", false,-1);
    tracep->declBit(c+637,"o_rvalid_2", false,-1);
    tracep->declBus(c+639,"o_rresp_2", false,-1, 1,0);
    tracep->declBus(c+638,"o_rdata_2", false,-1, 31,0);
    tracep->declBit(c+640,"o_rlast_2", false,-1);
    tracep->declBus(c+641,"o_rid_2", false,-1, 3,0);
    tracep->declBit(c+1239,"o_master_arvalid", false,-1);
    tracep->declBit(c+362,"i_master_arready", false,-1);
    tracep->declBus(c+1241,"o_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1240,"o_master_arid", false,-1, 3,0);
    tracep->declBus(c+1242,"o_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1243,"o_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1244,"o_master_arburst", false,-1, 1,0);
    tracep->declBit(c+363,"i_master_rvalid", false,-1);
    tracep->declBit(c+1245,"o_master_rready", false,-1);
    tracep->declBus(c+365,"i_master_rdata", false,-1, 31,0);
    tracep->declBus(c+366,"i_master_rresp", false,-1, 1,0);
    tracep->declBit(c+367,"i_master_rlast", false,-1);
    tracep->declBus(c+364,"i_master_rid", false,-1, 3,0);
    tracep->declBit(c+857,"i_awvalid_1", false,-1);
    tracep->declBit(c+1200,"o_awready_1", false,-1);
    tracep->declBus(c+1336,"i_awaddr_1", false,-1, 31,0);
    tracep->declBus(c+1337,"i_awsize_1", false,-1, 2,0);
    tracep->declBus(c+1338,"i_awburst_1", false,-1, 1,0);
    tracep->declBus(c+1670,"i_awid_1", false,-1, 3,0);
    tracep->declBus(c+1339,"i_awlen_1", false,-1, 7,0);
    tracep->declBit(c+858,"i_wvalid_1", false,-1);
    tracep->declBit(c+1201,"o_wready_1", false,-1);
    tracep->declBus(c+1340,"i_wdata_1", false,-1, 31,0);
    tracep->declBus(c+1341,"i_wstrb_1", false,-1, 3,0);
    tracep->declBit(c+1342,"i_wlast_1", false,-1);
    tracep->declBit(c+642,"o_bvalid_1", false,-1);
    tracep->declBit(c+859,"i_bready_1", false,-1);
    tracep->declBus(c+643,"o_bresp_1", false,-1, 1,0);
    tracep->declBus(c+644,"o_bid_1", false,-1, 3,0);
    tracep->declBit(c+1229,"o_master_awvalid", false,-1);
    tracep->declBit(c+356,"i_master_awready", false,-1);
    tracep->declBus(c+1230,"o_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+357,"o_master_awid", false,-1, 3,0);
    tracep->declBus(c+1231,"o_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1232,"o_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1233,"o_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1234,"o_master_wvalid", false,-1);
    tracep->declBit(c+358,"i_master_wready", false,-1);
    tracep->declBus(c+1235,"o_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1236,"o_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1237,"o_master_wlast", false,-1);
    tracep->declBit(c+359,"i_master_bvalid", false,-1);
    tracep->declBit(c+1238,"o_master_bready", false,-1);
    tracep->declBus(c+361,"i_master_bresp", false,-1, 1,0);
    tracep->declBus(c+360,"i_master_bid", false,-1, 3,0);
    tracep->declBus(c+1637,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1638,"AR1", false,-1, 1,0);
    tracep->declBus(c+1639,"AR2", false,-1, 1,0);
    tracep->declBus(c+1675,"AW", false,-1, 1,0);
    tracep->declBus(c+648,"CurrentState", false,-1, 1,0);
    tracep->declBus(c+1361,"NextState", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_IDU ");
    tracep->declBus(c+1343,"i_instr", false,-1, 31,0);
    tracep->declBit(c+1198,"i_ifu_rlast", false,-1);
    tracep->declBit(c+640,"i_lsu_rlast", false,-1);
    tracep->declBus(c+1349,"o_Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+1350,"o_Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+1351,"o_RdRaddr", false,-1, 4,0);
    tracep->declBus(c+1346,"o_Imm", false,-1, 31,0);
    tracep->declBus(c+1347,"o_InstrNum", false,-1, 11,0);
    tracep->declBus(c+1348,"o_CsrNum", false,-1, 11,0);
    tracep->declBit(c+1344,"o_is_loadmemory", false,-1);
    tracep->declBit(c+1345,"o_is_storememory", false,-1);
    tracep->declBit(c+1352,"o_RegWen", false,-1);
    tracep->declBus(c+1349,"Rs1", false,-1, 4,0);
    tracep->declBus(c+1350,"Rs2", false,-1, 4,0);
    tracep->declBus(c+1351,"Rd", false,-1, 4,0);
    tracep->declBus(c+1362,"Funct_3", false,-1, 2,0);
    tracep->declBus(c+1363,"Funct_7", false,-1, 6,0);
    tracep->declBus(c+1364,"Opcode", false,-1, 6,0);
    tracep->declBus(c+1365,"I_imm", false,-1, 11,0);
    tracep->declBus(c+1366,"B_imm", false,-1, 11,0);
    tracep->declBus(c+1367,"S_imm", false,-1, 11,0);
    tracep->declBus(c+1368,"J_imm", false,-1, 19,0);
    tracep->declBus(c+1369,"U_imm", false,-1, 19,0);
    tracep->declBit(c+1651,"R_imm", false,-1);
    tracep->declBus(c+1370,"I_ex", false,-1, 31,0);
    tracep->declBus(c+1371,"S_ex", false,-1, 31,0);
    tracep->declBus(c+1372,"J_ex", false,-1, 31,0);
    tracep->declBus(c+1373,"U_ex", false,-1, 31,0);
    tracep->declBus(c+1374,"B_ex", false,-1, 31,0);
    tracep->declBus(c+1656,"R_ex", false,-1, 31,0);
    tracep->declBus(c+1346,"Imm", false,-1, 31,0);
    tracep->declBus(c+1375,"CsrNum", false,-1, 11,0);
    tracep->declBus(c+1676,"lsu_size", false,-1, 1,0);
    tracep->declBus(c+1376,"Opcode_Funct3", false,-1, 9,0);
    tracep->declBus(c+1377,"Opcode_Funct3_Funct7", false,-1, 16,0);
    tracep->declBus(c+1378,"InstrFunct3", false,-1, 11,0);
    tracep->declBus(c+1379,"InstrNoFunct", false,-1, 11,0);
    tracep->declBus(c+1380,"InstrFunct7", false,-1, 11,0);
    tracep->declBus(c+1381,"InstrCsr", false,-1, 11,0);
    tracep->declBus(c+1347,"InstrType", false,-1, 11,0);
    tracep->declBit(c+1382,"is_load", false,-1);
    tracep->declBit(c+1383,"is_store", false,-1);
    tracep->declBit(c+1384,"reg_wen", false,-1);
    tracep->declBit(c+1344,"is_loadmemory", false,-1);
    tracep->declBit(c+1345,"is_storememory", false,-1);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1677,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1678,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1378,"out", false,-1, 11,0);
    tracep->declBus(c+1376,"key", false,-1, 9,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declArray(c+1681,"lut", false,-1, 527,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1677,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1678,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1378,"out", false,-1, 11,0);
    tracep->declBus(c+1376,"key", false,-1, 9,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declArray(c+1681,"lut", false,-1, 527,0);
    tracep->declBus(c+1699,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 21,0);
    }
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+25+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+49+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1385,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1386,"hit", false,-1);
    tracep->declBus(c+1700,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+1701,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1673,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1346,"out", false,-1, 31,0);
    tracep->declBus(c+1347,"key", false,-1, 11,0);
    tracep->declBus(c+1656,"default_out", false,-1, 31,0);
    tracep->declArray(c+1387,"lut", false,-1, 1759,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1701,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1673,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1346,"out", false,-1, 31,0);
    tracep->declBus(c+1347,"key", false,-1, 11,0);
    tracep->declBus(c+1656,"default_out", false,-1, 31,0);
    tracep->declArray(c+1387,"lut", false,-1, 1759,0);
    tracep->declBus(c+1702,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+1442,"lut_out", false,-1, 31,0);
    tracep->declBit(c+1443,"hit", false,-1);
    tracep->declBus(c+1703,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i12 ");
    tracep->declBus(c+1704,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1345,"out", false,-1, 0,0);
    tracep->declBus(c+1347,"key", false,-1, 11,0);
    tracep->declBus(c+1651,"default_out", false,-1, 0,0);
    tracep->declQuad(c+1705,"lut", false,-1, 38,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1704,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1345,"out", false,-1, 0,0);
    tracep->declBus(c+1347,"key", false,-1, 11,0);
    tracep->declBus(c+1651,"default_out", false,-1, 0,0);
    tracep->declQuad(c+1705,"lut", false,-1, 38,0);
    tracep->declBus(c+1707,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+73+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+76+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+79+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+1444,"lut_out", false,-1, 0,0);
    tracep->declBit(c+1445,"hit", false,-1);
    tracep->declBus(c+1708,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+1709,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1384,"out", false,-1, 0,0);
    tracep->declBus(c+1347,"key", false,-1, 11,0);
    tracep->declBus(c+1653,"default_out", false,-1, 0,0);
    tracep->declArray(c+1710,"lut", false,-1, 142,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1709,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1384,"out", false,-1, 0,0);
    tracep->declBus(c+1347,"key", false,-1, 11,0);
    tracep->declBus(c+1653,"default_out", false,-1, 0,0);
    tracep->declArray(c+1710,"lut", false,-1, 142,0);
    tracep->declBus(c+1707,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+82+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+93+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+104+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+1446,"lut_out", false,-1, 0,0);
    tracep->declBit(c+1447,"hit", false,-1);
    tracep->declBus(c+1715,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+1716,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1344,"out", false,-1, 0,0);
    tracep->declBus(c+1347,"key", false,-1, 11,0);
    tracep->declBus(c+1651,"default_out", false,-1, 0,0);
    tracep->declArray(c+1717,"lut", false,-1, 64,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1716,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1344,"out", false,-1, 0,0);
    tracep->declBus(c+1347,"key", false,-1, 11,0);
    tracep->declBus(c+1651,"default_out", false,-1, 0,0);
    tracep->declArray(c+1717,"lut", false,-1, 64,0);
    tracep->declBus(c+1707,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+115+i*1,"pair_list", true,(i+0), 12,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+120+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+125+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+1448,"lut_out", false,-1, 0,0);
    tracep->declBit(c+1449,"hit", false,-1);
    tracep->declBus(c+1720,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i6 ");
    tracep->declBus(c+1704,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1721,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1379,"out", false,-1, 11,0);
    tracep->declBus(c+1364,"key", false,-1, 6,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declQuad(c+1722,"lut", false,-1, 56,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1704,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1721,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1379,"out", false,-1, 11,0);
    tracep->declBus(c+1364,"key", false,-1, 6,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declQuad(c+1722,"lut", false,-1, 56,0);
    tracep->declBus(c+1724,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+130+i*1,"pair_list", true,(i+0), 18,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+133+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+136+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1450,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1451,"hit", false,-1);
    tracep->declBus(c+1708,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i7 ");
    tracep->declBus(c+1709,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1725,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1380,"out", false,-1, 11,0);
    tracep->declBus(c+1377,"key", false,-1, 16,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declArray(c+1726,"lut", false,-1, 318,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1709,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1725,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1380,"out", false,-1, 11,0);
    tracep->declBus(c+1377,"key", false,-1, 16,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declArray(c+1726,"lut", false,-1, 318,0);
    tracep->declBus(c+1736,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+139+i*1,"pair_list", true,(i+0), 28,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+150+i*1,"key_list", true,(i+0), 16,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+161+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1452,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1453,"hit", false,-1);
    tracep->declBus(c+1715,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i8 ");
    tracep->declBus(c+1737,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1673,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1381,"out", false,-1, 11,0);
    tracep->declBus(c+1343,"key", false,-1, 31,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declArray(c+1738,"lut", false,-1, 87,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1737,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1673,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1381,"out", false,-1, 11,0);
    tracep->declBus(c+1343,"key", false,-1, 31,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declArray(c+1738,"lut", false,-1, 87,0);
    tracep->declBus(c+1702,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+172+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+176+i*1,"key_list", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+178+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1454,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1455,"hit", false,-1);
    tracep->declBus(c+1741,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i9 ");
    tracep->declBus(c+1742,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1375,"out", false,-1, 11,0);
    tracep->declBus(c+1365,"key", false,-1, 11,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declArray(c+1743,"lut", false,-1, 191,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1742,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1679,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1375,"out", false,-1, 11,0);
    tracep->declBus(c+1365,"key", false,-1, 11,0);
    tracep->declBus(c+1680,"default_out", false,-1, 11,0);
    tracep->declArray(c+1743,"lut", false,-1, 191,0);
    tracep->declBus(c+1677,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+180+i*1,"pair_list", true,(i+0), 23,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+188+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+196+i*1,"data_list", true,(i+0), 11,0);
    }
    tracep->declBus(c+1456,"lut_out", false,-1, 11,0);
    tracep->declBit(c+1457,"hit", false,-1);
    tracep->declBus(c+1749,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("U_IFU ");
    tracep->declBus(c+1669,"PC_START", false,-1, 31,0);
    tracep->declBit(c+1577,"i_clk", false,-1);
    tracep->declBit(c+1617,"i_rst", false,-1);
    tracep->declBus(c+1354,"i_JumpPC", false,-1, 31,0);
    tracep->declBit(c+1353,"i_JumpPC_en", false,-1);
    tracep->declBit(c+1344,"i_is_loadmemory", false,-1);
    tracep->declBit(c+1345,"i_is_storememory", false,-1);
    tracep->declBit(c+627,"o_ifu_arvalid", false,-1);
    tracep->declBit(c+633,"i_ifu_arready", false,-1);
    tracep->declBit(c+1196,"i_ifu_rvalid", false,-1);
    tracep->declBit(c+634,"o_ifu_rready", false,-1);
    tracep->declBit(c+1198,"i_ifu_rlast", false,-1);
    tracep->declBit(c+642,"i_lsu_bvalid", false,-1);
    tracep->declBit(c+640,"i_lsu_rlast", false,-1);
    tracep->declBus(c+628,"o_ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+629,"o_ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+630,"o_ifu_arburst", false,-1, 1,0);
    tracep->declBus(c+631,"o_ifu_arid", false,-1, 3,0);
    tracep->declBus(c+632,"o_ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+646,"o_PC", false,-1, 31,0);
    tracep->declBus(c+1197,"i_ifu_data", false,-1, 31,0);
    tracep->declBus(c+1343,"o_instruction", false,-1, 31,0);
    tracep->declBus(c+1637,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1638,"WAIT", false,-1, 1,0);
    tracep->declBus(c+1639,"RESET", false,-1, 1,0);
    tracep->declBus(c+1202,"CurrentState", false,-1, 1,0);
    tracep->declBus(c+1618,"NextState", false,-1, 1,0);
    tracep->declBit(c+1458,"UpdatePC_en", false,-1);
    tracep->declBus(c+646,"PC", false,-1, 31,0);
    tracep->declBus(c+860,"instruction_r", false,-1, 31,0);
    tracep->declBus(c+1619,"npc", false,-1, 31,0);
    tracep->pushNamePrefix("U_PC ");
    tracep->declBus(c+1669,"PC_START", false,-1, 31,0);
    tracep->declBit(c+1577,"i_clk", false,-1);
    tracep->declBit(c+1617,"i_rst", false,-1);
    tracep->declBit(c+1458,"i_UpdatePC_en", false,-1);
    tracep->declBus(c+1354,"i_JumpPC", false,-1, 31,0);
    tracep->declBit(c+1353,"i_JumpPC_en", false,-1);
    tracep->declBus(c+646,"o_PC", false,-1, 31,0);
    tracep->declBus(c+646,"d_PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("U_LSU ");
    tracep->declBit(c+1577,"i_clk", false,-1);
    tracep->declBit(c+1617,"i_rst", false,-1);
    tracep->declBit(c+1198,"i_ifu_rlast", false,-1);
    tracep->declBit(c+855,"o_lsu_arvalid", false,-1);
    tracep->declBit(c+1199,"i_lsu_arready", false,-1);
    tracep->declBit(c+637,"i_lsu_rvalid", false,-1);
    tracep->declBit(c+856,"o_lsu_rready", false,-1);
    tracep->declBit(c+857,"o_lsu_awvalid", false,-1);
    tracep->declBit(c+1200,"i_lsu_awready", false,-1);
    tracep->declBit(c+858,"o_lsu_wvalid", false,-1);
    tracep->declBit(c+1201,"i_lsu_wready", false,-1);
    tracep->declBit(c+1344,"i_is_loadmemory", false,-1);
    tracep->declBit(c+1345,"i_is_storememory", false,-1);
    tracep->declBit(c+640,"i_lsu_rlast", false,-1);
    tracep->declBit(c+642,"i_lsu_bvalid", false,-1);
    tracep->declBit(c+859,"o_lsu_bready", false,-1);
    tracep->declBus(c+1637,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1638,"AR", false,-1, 1,0);
    tracep->declBus(c+1639,"AW", false,-1, 1,0);
    tracep->declBus(c+1675,"W", false,-1, 1,0);
    tracep->declBus(c+861,"CurrentState", false,-1, 1,0);
    tracep->declBus(c+1459,"NextState", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("U_WBU ");
    tracep->declBus(c+1716,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1673,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1577,"i_clk", false,-1);
    tracep->declBit(c+1352,"i_RegWen", false,-1);
    tracep->declBus(c+1347,"i_InstrNum", false,-1, 11,0);
    tracep->declBus(c+1348,"i_CsrNum", false,-1, 11,0);
    tracep->declBus(c+1349,"i_Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+1350,"i_Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+1351,"i_RdRaddr", false,-1, 4,0);
    tracep->declBus(c+1355,"i_ExuRes", false,-1, 31,0);
    tracep->declBus(c+646,"i_PC", false,-1, 31,0);
    tracep->declBus(c+1357,"i_CsrExuData", false,-1, 31,0);
    tracep->declBus(c+1358,"o_Rs1Data", false,-1, 31,0);
    tracep->declBus(c+1359,"o_Rs2Data", false,-1, 31,0);
    tracep->declBus(c+647,"o_ReturnA0", false,-1, 31,0);
    tracep->declBus(c+1356,"o_CsrData", false,-1, 31,0);
    tracep->declBit(c+1198,"i_ifu_rlast", false,-1);
    tracep->declBus(c+649,"A5Data", false,-1, 31,0);
    tracep->pushNamePrefix("U_CSR ");
    tracep->declBus(c+1679,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1673,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1577,"i_clk", false,-1);
    tracep->declBit(c+1352,"i_RegWen", false,-1);
    tracep->declBus(c+1347,"i_InstrNum", false,-1, 11,0);
    tracep->declBus(c+1348,"i_CsrNum", false,-1, 11,0);
    tracep->declBus(c+646,"i_PC", false,-1, 31,0);
    tracep->declBus(c+1355,"i_ExuRes", false,-1, 31,0);
    tracep->declBus(c+649,"i_A5Data", false,-1, 31,0);
    tracep->declBus(c+1357,"i_CsrExuData", false,-1, 31,0);
    tracep->declBus(c+1356,"o_CsrData", false,-1, 31,0);
    tracep->declBit(c+1198,"i_ifu_rlast", false,-1);
    tracep->declBus(c+650,"mcause", false,-1, 31,0);
    tracep->declBus(c+651,"mepc", false,-1, 31,0);
    tracep->declBus(c+652,"mstatus", false,-1, 31,0);
    tracep->declBus(c+653,"mtvec", false,-1, 31,0);
    tracep->declBus(c+654,"mcycle", false,-1, 31,0);
    tracep->declBus(c+655,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+656,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+657,"marchid", false,-1, 31,0);
    tracep->declBus(c+658,"EpcData", false,-1, 31,0);
    tracep->pushNamePrefix("i10 ");
    tracep->declBus(c+1742,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1673,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1356,"out", false,-1, 31,0);
    tracep->declBus(c+1348,"key", false,-1, 11,0);
    tracep->declBus(c+1656,"default_out", false,-1, 31,0);
    tracep->declArray(c+659,"lut", false,-1, 351,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1742,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1679,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1673,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1698,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1356,"out", false,-1, 31,0);
    tracep->declBus(c+1348,"key", false,-1, 11,0);
    tracep->declBus(c+1656,"default_out", false,-1, 31,0);
    tracep->declArray(c+659,"lut", false,-1, 351,0);
    tracep->declBus(c+1702,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+670+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+204+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+686+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+1460,"lut_out", false,-1, 31,0);
    tracep->declBit(c+1461,"hit", false,-1);
    tracep->declBus(c+1749,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("U_REG ");
    tracep->declBus(c+1716,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1673,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1577,"i_clk", false,-1);
    tracep->declBit(c+1352,"i_RegWen", false,-1);
    tracep->declBus(c+1349,"i_Rs1Raddr", false,-1, 4,0);
    tracep->declBus(c+1350,"i_Rs2Raddr", false,-1, 4,0);
    tracep->declBus(c+1351,"i_RdRaddr", false,-1, 4,0);
    tracep->declBus(c+1355,"i_ExuRes", false,-1, 31,0);
    tracep->declBus(c+1358,"o_Rs1Data", false,-1, 31,0);
    tracep->declBus(c+1359,"o_Rs2Data", false,-1, 31,0);
    tracep->declBus(c+647,"o_ReturnA0", false,-1, 31,0);
    tracep->declBus(c+649,"o_A5Data", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+694+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+212,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("U_perfomance ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1617,"reset", false,-1);
    tracep->declBit(c+627,"ifu_arvalid", false,-1);
    tracep->declBit(c+855,"lsu_arvalid", false,-1);
    tracep->declBit(c+857,"lsu_awvalid", false,-1);
    tracep->declBit(c+1198,"ifu_rlast", false,-1);
    tracep->declBit(c+634,"ifu_rready", false,-1);
    tracep->declBit(c+640,"lsu_rlast", false,-1);
    tracep->declBit(c+856,"lsu_rready", false,-1);
    tracep->declBus(c+1355,"ExuRes", false,-1, 31,0);
    tracep->declBus(c+1347,"InstrNum", false,-1, 11,0);
    tracep->declBus(c+710,"ifu_count", false,-1, 31,0);
    tracep->declBus(c+711,"lsu_count", false,-1, 31,0);
    tracep->declBus(c+712,"compute_count", false,-1, 31,0);
    tracep->declBus(c+713,"csr_count", false,-1, 31,0);
    tracep->declBus(c+714,"jump_count", false,-1, 31,0);
    tracep->declBus(c+715,"mem_count", false,-1, 31,0);
    tracep->declBus(c+716,"exu_count", false,-1, 31,0);
    tracep->declBus(c+717,"prev_ExuRes", false,-1, 31,0);
    tracep->declBus(c+718,"ifu_cycles", false,-1, 31,0);
    tracep->declBus(c+719,"lsu_cycles", false,-1, 31,0);
    tracep->declBus(c+1637,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1638,"ifu_start", false,-1, 1,0);
    tracep->declBus(c+1639,"lsu_start", false,-1, 1,0);
    tracep->declBus(c+720,"state", false,-1, 1,0);
    tracep->declBus(c+1462,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"io_d", false,-1);
    tracep->declBit(c+721,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"io_d", false,-1);
    tracep->declBit(c+721,"io_q", false,-1);
    tracep->declBit(c+721,"sync_0", false,-1);
    tracep->declBit(c+722,"sync_1", false,-1);
    tracep->declBit(c+723,"sync_2", false,-1);
    tracep->declBit(c+724,"sync_3", false,-1);
    tracep->declBit(c+725,"sync_4", false,-1);
    tracep->declBit(c+726,"sync_5", false,-1);
    tracep->declBit(c+727,"sync_6", false,-1);
    tracep->declBit(c+728,"sync_7", false,-1);
    tracep->declBit(c+729,"sync_8", false,-1);
    tracep->declBit(c+730,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1539,"auto_in_psel", false,-1);
    tracep->declBit(c+1513,"auto_in_penable", false,-1);
    tracep->declBit(c+1189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1512,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1636,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1653,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+868,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1579,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1580,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1581,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1586,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1587,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1588,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1523,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1539,"in_psel", false,-1);
    tracep->declBit(c+1513,"in_penable", false,-1);
    tracep->declBus(c+1636,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1189,"in_pwrite", false,-1);
    tracep->declBus(c+1190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1653,"in_pready", false,-1);
    tracep->declBus(c+868,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBus(c+1579,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1580,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1581,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1582,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1583,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1584,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1585,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1586,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1587,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1588,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+869,"gpio_out_reg", false,-1, 15,0);
    tracep->declBus(c+868,"in_prdata_reg", false,-1, 31,0);
    tracep->declBus(c+870,"seg_data_reg", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+213+i*1,"seg_code", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1608,"auto_in_psel", false,-1);
    tracep->declBit(c+1609,"auto_in_penable", false,-1);
    tracep->declBit(c+1189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1512,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1636,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+867,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1610,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1589,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1590,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1523,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1608,"in_psel", false,-1);
    tracep->declBit(c+1609,"in_penable", false,-1);
    tracep->declBus(c+1636,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1189,"in_pwrite", false,-1);
    tracep->declBus(c+1190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+867,"in_pready", false,-1);
    tracep->declBus(c+1610,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBit(c+1589,"ps2_clk", false,-1);
    tracep->declBit(c+1590,"ps2_data", false,-1);
    tracep->declBus(c+871,"ps2_state", false,-1, 1,0);
    tracep->declBus(c+1652,"PS2_IDLE", false,-1, 31,0);
    tracep->declBus(c+1698,"PS2_READ", false,-1, 31,0);
    tracep->declBus(c+731,"buffer", false,-1, 9,0);
    tracep->declBus(c+732,"counter", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+733+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+749,"w_ptr", false,-1, 3,0);
    tracep->declBus(c+750,"r_ptr", false,-1, 3,0);
    tracep->declBit(c+751,"isn_empty", false,-1);
    tracep->declBus(c+752,"i", false,-1, 31,0);
    tracep->declBus(c+753,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+754,"sampling", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1293,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1294,"auto_in_wvalid", false,-1);
    tracep->declBit(c+422,"auto_in_arready", false,-1);
    tracep->declBit(c+1295,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1218,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1296,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+806,"auto_in_rready", false,-1);
    tracep->declBit(c+423,"auto_in_rvalid", false,-1);
    tracep->declBus(c+424,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+425,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+423,"state", false,-1);
    tracep->declBus(c+425,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+424,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1463,"raddr", false,-1, 31,0);
    tracep->declBit(c+1464,"ren", false,-1);
    tracep->declBus(c+1465,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1540,"auto_in_psel", false,-1);
    tracep->declBit(c+1611,"auto_in_penable", false,-1);
    tracep->declBit(c+1189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1509,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1636,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1612,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+248,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1535,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1536,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1600,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1509,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1540,"in_psel", false,-1);
    tracep->declBit(c+1611,"in_penable", false,-1);
    tracep->declBus(c+1636,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1189,"in_pwrite", false,-1);
    tracep->declBus(c+1190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1612,"in_pready", false,-1);
    tracep->declBus(c+248,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBit(c+1535,"qspi_sck", false,-1);
    tracep->declBit(c+1536,"qspi_ce_n", false,-1);
    tracep->declBus(c+1600,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1600,"din", false,-1, 3,0);
    tracep->declBus(c+1544,"dout", false,-1, 3,0);
    tracep->declBus(c+1545,"douten", false,-1, 3,0);
    tracep->declBit(c+1620,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1577,"clk_i", false,-1);
    tracep->declBit(c+1578,"rst_i", false,-1);
    tracep->declBus(c+1509,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1190,"dat_i", false,-1, 31,0);
    tracep->declBus(c+248,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1191,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1540,"cyc_i", false,-1);
    tracep->declBit(c+1540,"stb_i", false,-1);
    tracep->declBit(c+1620,"ack_o", false,-1);
    tracep->declBit(c+1189,"we_i", false,-1);
    tracep->declBit(c+1535,"sck", false,-1);
    tracep->declBit(c+1536,"ce_n", false,-1);
    tracep->declBus(c+1600,"din", false,-1, 3,0);
    tracep->declBus(c+1544,"dout", false,-1, 3,0);
    tracep->declBus(c+1545,"douten", false,-1, 3,0);
    tracep->declBus(c+1637,"ST_QPI", false,-1, 1,0);
    tracep->declBus(c+1638,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1639,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+872,"mr_sck", false,-1);
    tracep->declBit(c+873,"mr_ce_n", false,-1);
    tracep->declBus(c+1600,"mr_din", false,-1, 3,0);
    tracep->declBus(c+874,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+875,"mr_doe", false,-1);
    tracep->declBit(c+876,"mw_sck", false,-1);
    tracep->declBit(c+877,"mw_ce_n", false,-1);
    tracep->declBus(c+1600,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1476,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+878,"mw_doe", false,-1);
    tracep->declBit(c+1546,"mr_rd", false,-1);
    tracep->declBit(c+879,"mr_done", false,-1);
    tracep->declBit(c+1547,"mw_wr", false,-1);
    tracep->declBit(c+1477,"mw_done", false,-1);
    tracep->declBit(c+1540,"wb_valid", false,-1);
    tracep->declBit(c+1548,"wb_we", false,-1);
    tracep->declBit(c+1549,"wb_re", false,-1);
    tracep->declBit(c+880,"qpi_cmd", false,-1);
    tracep->declBit(c+881,"qpi_sck", false,-1);
    tracep->declBit(c+882,"qpi_ce_n", false,-1);
    tracep->declBit(c+883,"qpi_done", false,-1);
    tracep->declBus(c+884,"qpi_dout", false,-1, 3,0);
    tracep->declBit(c+885,"qpi_doe", false,-1);
    tracep->declBit(c+886,"in_qpi", false,-1);
    tracep->declBus(c+887,"state", false,-1, 1,0);
    tracep->declBus(c+1621,"nstate", false,-1, 1,0);
    tracep->declBus(c+1203,"size", false,-1, 2,0);
    tracep->declBus(c+1204,"byte0", false,-1, 7,0);
    tracep->declBus(c+1205,"byte1", false,-1, 7,0);
    tracep->declBus(c+1206,"byte2", false,-1, 7,0);
    tracep->declBus(c+1207,"byte3", false,-1, 7,0);
    tracep->declBus(c+1208,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1622,"rst_n", false,-1);
    tracep->declBus(c+1524,"addr", false,-1, 23,0);
    tracep->declBit(c+1546,"rd", false,-1);
    tracep->declBus(c+1750,"size", false,-1, 2,0);
    tracep->declBit(c+879,"done", false,-1);
    tracep->declBus(c+248,"line", false,-1, 31,0);
    tracep->declBit(c+872,"sck", false,-1);
    tracep->declBit(c+873,"ce_n", false,-1);
    tracep->declBus(c+1600,"din", false,-1, 3,0);
    tracep->declBus(c+874,"dout", false,-1, 3,0);
    tracep->declBit(c+875,"douten", false,-1);
    tracep->declBit(c+886,"in_qpi", false,-1);
    tracep->declBus(c+1751,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1752,"READ", false,-1, 0,0);
    tracep->declBus(c+888,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+889,"state", false,-1);
    tracep->declBit(c+1550,"nstate", false,-1);
    tracep->declBus(c+890,"counter", false,-1, 7,0);
    tracep->declBus(c+891,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+755+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1753,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+892,"byte_index", false,-1, 1,0);
    tracep->declBus(c+893,"sample_start", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1622,"rst_n", false,-1);
    tracep->declBus(c+1525,"addr", false,-1, 23,0);
    tracep->declBus(c+1208,"line", false,-1, 31,0);
    tracep->declBus(c+1203,"size", false,-1, 2,0);
    tracep->declBit(c+1547,"wr", false,-1);
    tracep->declBit(c+1477,"done", false,-1);
    tracep->declBit(c+876,"sck", false,-1);
    tracep->declBit(c+877,"ce_n", false,-1);
    tracep->declBus(c+1600,"din", false,-1, 3,0);
    tracep->declBus(c+1476,"dout", false,-1, 3,0);
    tracep->declBit(c+878,"douten", false,-1);
    tracep->declBit(c+886,"in_qpi", false,-1);
    tracep->declBus(c+1751,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1752,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1623,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+894,"state", false,-1);
    tracep->declBit(c+1551,"nstate", false,-1);
    tracep->declBus(c+895,"counter", false,-1, 7,0);
    tracep->declBus(c+896,"saddr", false,-1, 23,0);
    tracep->declBus(c+1754,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("QPI ");
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1622,"rst_n", false,-1);
    tracep->declBit(c+880,"cmd", false,-1);
    tracep->declBit(c+883,"done", false,-1);
    tracep->declBit(c+881,"sck", false,-1);
    tracep->declBit(c+882,"ce_n", false,-1);
    tracep->declBus(c+884,"dout", false,-1, 3,0);
    tracep->declBit(c+885,"douten", false,-1);
    tracep->declBus(c+1751,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1752,"CMD", false,-1, 0,0);
    tracep->declBus(c+1755,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+897,"state", false,-1);
    tracep->declBit(c+898,"nstate", false,-1);
    tracep->declBus(c+899,"counter", false,-1, 7,0);
    tracep->declBus(c+1756,"CMD_88H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1605,"auto_in_psel", false,-1);
    tracep->declBit(c+1606,"auto_in_penable", false,-1);
    tracep->declBit(c+1189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1509,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1636,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+865,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+866,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1601,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1487,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1488,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1489,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1490,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1491,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1602,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1492,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1493,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1506,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1509,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1605,"in_psel", false,-1);
    tracep->declBit(c+1606,"in_penable", false,-1);
    tracep->declBus(c+1636,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1189,"in_pwrite", false,-1);
    tracep->declBus(c+1190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+865,"in_pready", false,-1);
    tracep->declBus(c+866,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBit(c+1601,"sdram_clk", false,-1);
    tracep->declBit(c+1487,"sdram_cke", false,-1);
    tracep->declBit(c+1488,"sdram_cs", false,-1);
    tracep->declBit(c+1489,"sdram_ras", false,-1);
    tracep->declBit(c+1490,"sdram_cas", false,-1);
    tracep->declBit(c+1491,"sdram_we", false,-1);
    tracep->declBus(c+1602,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1492,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1493,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1506,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+900,"sdram_dout_en", false,-1);
    tracep->declBus(c+901,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+759,"state", false,-1, 1,0);
    tracep->declBit(c+1494,"req_accept", false,-1);
    tracep->declBit(c+1552,"is_read", false,-1);
    tracep->declBit(c+1553,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1577,"clk_i", false,-1);
    tracep->declBit(c+1578,"rst_i", false,-1);
    tracep->declBus(c+1554,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1552,"inport_rd_i", false,-1);
    tracep->declBus(c+1657,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1509,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1190,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1506,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1494,"inport_accept_o", false,-1);
    tracep->declBit(c+865,"inport_ack_o", false,-1);
    tracep->declBit(c+1651,"inport_error_o", false,-1);
    tracep->declBus(c+866,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1601,"sdram_clk_o", false,-1);
    tracep->declBit(c+1487,"sdram_cke_o", false,-1);
    tracep->declBit(c+1488,"sdram_cs_o", false,-1);
    tracep->declBit(c+1489,"sdram_ras_o", false,-1);
    tracep->declBit(c+1490,"sdram_cas_o", false,-1);
    tracep->declBit(c+1491,"sdram_we_o", false,-1);
    tracep->declBus(c+1493,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1602,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1492,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+901,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+900,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1642,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1677,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1757,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1737,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1737,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1758,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1742,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1707,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1759,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1760,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1761,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1758,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1762,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1763,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1764,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1765,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1766,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1767,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1768,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1655,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1769,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1758,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1655,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1768,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1767,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1763,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1765,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1764,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1766,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1762,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1770,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1771,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1678,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1678,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1673,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1678,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1737,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1737,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1772,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1509,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1554,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1552,"ram_rd_w", false,-1);
    tracep->declBit(c+1494,"ram_accept_w", false,-1);
    tracep->declBus(c+1190,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+866,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+865,"ram_ack_w", false,-1);
    tracep->declBit(c+1555,"ram_req_w", false,-1);
    tracep->declBus(c+1495,"command_q", false,-1, 3,0);
    tracep->declBus(c+1496,"addr_q", false,-1, 12,0);
    tracep->declBus(c+901,"data_q", false,-1, 31,0);
    tracep->declBit(c+902,"data_rd_en_q", false,-1);
    tracep->declBus(c+1493,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1487,"cke_q", false,-1);
    tracep->declBus(c+1492,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1506,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+903,"refresh_q", false,-1);
    tracep->declBus(c+904,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+905+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1497,"state_q", false,-1, 3,0);
    tracep->declBus(c+1556,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1557,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+913,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+914,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1526,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1527,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1528,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1529,"addr_bank_double", false,-1, 2,0);
    tracep->declBus(c+1758,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+915,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1558,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1725,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1498,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+916,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+866,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+917,"idx", false,-1, 31,0);
    tracep->declBus(c+918,"rd_q", false,-1, 3,0);
    tracep->declBit(c+865,"ack_q", false,-1);
    tracep->declArray(c+1499,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1543,"auto_in_psel", false,-1);
    tracep->declBit(c+1515,"auto_in_penable", false,-1);
    tracep->declBit(c+1189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1511,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1636,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1614,"auto_in_pready", false,-1);
    tracep->declBit(c+1615,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1616,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+862,"spi_bundle_sck", false,-1);
    tracep->declBus(c+863,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1486,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1599,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1669,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1773,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1742,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1530,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1543,"in_psel", false,-1);
    tracep->declBit(c+1515,"in_penable", false,-1);
    tracep->declBus(c+1636,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1189,"in_pwrite", false,-1);
    tracep->declBus(c+1190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1614,"in_pready", false,-1);
    tracep->declBus(c+1616,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1615,"in_pslverr", false,-1);
    tracep->declBit(c+862,"spi_sck", false,-1);
    tracep->declBus(c+863,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1486,"spi_mosi", false,-1);
    tracep->declBit(c+1599,"spi_miso", false,-1);
    tracep->declBit(c+1624,"spi_irq_out", false,-1);
    tracep->declBus(c+1774,"SPI_ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1775,"SPI_ADDR_END", false,-1, 31,0);
    tracep->declBus(c+1776,"SPI_TX1_OFF", false,-1, 4,0);
    tracep->declBus(c+1777,"SPI_CTRL_OFF", false,-1, 4,0);
    tracep->declBus(c+1778,"SPI_DIV_OFF", false,-1, 4,0);
    tracep->declBus(c+1779,"SPI_SS_OFF", false,-1, 4,0);
    tracep->declBus(c+1780,"CTRL_GO_BSY", false,-1, 31,0);
    tracep->declBus(c+1781,"CTRL_BASE_CFG", false,-1, 31,0);
    tracep->declBus(c+1782,"CTRL_RUN_CFG", false,-1, 31,0);
    tracep->declBit(c+1559,"in_flash_xip", false,-1);
    tracep->declBus(c+1655,"IDLE", false,-1, 3,0);
    tracep->declBus(c+1768,"SET_DIV", false,-1, 3,0);
    tracep->declBus(c+1767,"SET_CTRL", false,-1, 3,0);
    tracep->declBus(c+1763,"SET_SS", false,-1, 3,0);
    tracep->declBus(c+1765,"SET_TX1_ADDR", false,-1, 3,0);
    tracep->declBus(c+1764,"SET_BUSY", false,-1, 3,0);
    tracep->declBus(c+1766,"WAIT", false,-1, 3,0);
    tracep->declBus(c+1762,"RX", false,-1, 3,0);
    tracep->declBus(c+1770,"RX_WAIT", false,-1, 3,0);
    tracep->declBus(c+1771,"TX_CPU", false,-1, 3,0);
    tracep->declBus(c+919,"CurrentState", false,-1, 3,0);
    tracep->declBus(c+1560,"NextState", false,-1, 3,0);
    tracep->declBit(c+920,"spi_init_done", false,-1);
    tracep->declBus(c+921,"xip_flash_phy_addr", false,-1, 31,0);
    tracep->declBus(c+922,"xip_spi_adr", false,-1, 4,0);
    tracep->declBus(c+923,"xip_spi_wdata", false,-1, 31,0);
    tracep->declBit(c+924,"xip_spi_we", false,-1);
    tracep->declBit(c+925,"xip_spi_stb", false,-1);
    tracep->declBit(c+926,"xip_spi_cyc", false,-1);
    tracep->declBus(c+927,"xip_rx_data", false,-1, 31,0);
    tracep->declBit(c+1561,"xip_pready", false,-1);
    tracep->declBit(c+928,"xip_pslverr", false,-1);
    tracep->declBus(c+1783,"xip_sel", false,-1, 3,0);
    tracep->declBus(c+1562,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1563,"wb_dat_i", false,-1, 31,0);
    tracep->declBit(c+1564,"wb_we_i", false,-1);
    tracep->declBit(c+1565,"wb_stb_i", false,-1);
    tracep->declBit(c+1566,"wb_cyc_i", false,-1);
    tracep->declBus(c+1567,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+929,"wb_ack_o", false,-1);
    tracep->declBus(c+930,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+1651,"wb_err_o", false,-1);
    tracep->declBit(c+931,"wb_int_o", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1698,"Tp", false,-1, 31,0);
    tracep->declBit(c+1577,"wb_clk_i", false,-1);
    tracep->declBit(c+1578,"wb_rst_i", false,-1);
    tracep->declBus(c+1562,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1563,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+930,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1567,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1564,"wb_we_i", false,-1);
    tracep->declBit(c+1565,"wb_stb_i", false,-1);
    tracep->declBit(c+1566,"wb_cyc_i", false,-1);
    tracep->declBit(c+929,"wb_ack_o", false,-1);
    tracep->declBit(c+1651,"wb_err_o", false,-1);
    tracep->declBit(c+931,"wb_int_o", false,-1);
    tracep->declBus(c+863,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+862,"sclk_pad_o", false,-1);
    tracep->declBit(c+1486,"mosi_pad_o", false,-1);
    tracep->declBit(c+1599,"miso_pad_i", false,-1);
    tracep->declBus(c+932,"divider", false,-1, 15,0);
    tracep->declBus(c+933,"ctrl", false,-1, 13,0);
    tracep->declBus(c+934,"ss", false,-1, 7,0);
    tracep->declBus(c+1568,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+935,"rx", false,-1, 127,0);
    tracep->declBit(c+939,"rx_negedge", false,-1);
    tracep->declBit(c+940,"tx_negedge", false,-1);
    tracep->declBus(c+941,"char_len", false,-1, 6,0);
    tracep->declBit(c+942,"go", false,-1);
    tracep->declBit(c+943,"lsb", false,-1);
    tracep->declBit(c+944,"ie", false,-1);
    tracep->declBit(c+945,"ass", false,-1);
    tracep->declBit(c+1569,"spi_divider_sel", false,-1);
    tracep->declBit(c+1570,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1571,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1572,"spi_ss_sel", false,-1);
    tracep->declBit(c+946,"tip", false,-1);
    tracep->declBit(c+947,"pos_edge", false,-1);
    tracep->declBit(c+948,"neg_edge", false,-1);
    tracep->declBit(c+949,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1698,"Tp", false,-1, 31,0);
    tracep->declBit(c+1577,"clk_in", false,-1);
    tracep->declBit(c+1578,"rst", false,-1);
    tracep->declBit(c+946,"enable", false,-1);
    tracep->declBit(c+942,"go", false,-1);
    tracep->declBit(c+949,"last_clk", false,-1);
    tracep->declBus(c+932,"divider", false,-1, 15,0);
    tracep->declBit(c+862,"clk_out", false,-1);
    tracep->declBit(c+947,"pos_edge", false,-1);
    tracep->declBit(c+948,"neg_edge", false,-1);
    tracep->declBus(c+950,"cnt", false,-1, 15,0);
    tracep->declBit(c+951,"cnt_zero", false,-1);
    tracep->declBit(c+952,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1698,"Tp", false,-1, 31,0);
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1578,"rst", false,-1);
    tracep->declBus(c+1573,"latch", false,-1, 3,0);
    tracep->declBus(c+1567,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+941,"len", false,-1, 6,0);
    tracep->declBit(c+943,"lsb", false,-1);
    tracep->declBit(c+942,"go", false,-1);
    tracep->declBit(c+947,"pos_edge", false,-1);
    tracep->declBit(c+948,"neg_edge", false,-1);
    tracep->declBit(c+939,"rx_negedge", false,-1);
    tracep->declBit(c+940,"tx_negedge", false,-1);
    tracep->declBit(c+946,"tip", false,-1);
    tracep->declBit(c+949,"last", false,-1);
    tracep->declBus(c+1563,"p_in", false,-1, 31,0);
    tracep->declArray(c+935,"p_out", false,-1, 127,0);
    tracep->declBit(c+862,"s_clk", false,-1);
    tracep->declBit(c+1599,"s_in", false,-1);
    tracep->declBit(c+1486,"s_out", false,-1);
    tracep->declBus(c+953,"cnt", false,-1, 7,0);
    tracep->declArray(c+935,"data", false,-1, 127,0);
    tracep->declBus(c+954,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+955,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+956,"rx_clk", false,-1);
    tracep->declBit(c+957,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1541,"auto_in_psel", false,-1);
    tracep->declBit(c+1514,"auto_in_penable", false,-1);
    tracep->declBit(c+1189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1512,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1636,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1613,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1542,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1597,"uart_rx", false,-1);
    tracep->declBit(c+1598,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1541,"in_psel", false,-1);
    tracep->declBit(c+1514,"in_penable", false,-1);
    tracep->declBus(c+1636,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1613,"in_pready", false,-1);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBus(c+1523,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1189,"in_pwrite", false,-1);
    tracep->declBus(c+1542,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1597,"uart_rx", false,-1);
    tracep->declBit(c+1598,"uart_tx", false,-1);
    tracep->declBit(c+958,"rtsn", false,-1);
    tracep->declBit(c+1651,"ctsn", false,-1);
    tracep->declBit(c+959,"dtr_pad_o", false,-1);
    tracep->declBit(c+1651,"dsr_pad_i", false,-1);
    tracep->declBit(c+1651,"ri_pad_i", false,-1);
    tracep->declBit(c+1651,"dcd_pad_i", false,-1);
    tracep->declBit(c+960,"interrupt", false,-1);
    tracep->declBit(c+229,"reg_we", false,-1);
    tracep->declBit(c+230,"reg_re", false,-1);
    tracep->declBus(c+1531,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1532,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+760,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1574,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+961,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1578,"wb_rst_i", false,-1);
    tracep->declBus(c+1531,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1533,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1574,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+229,"wb_we_i", false,-1);
    tracep->declBit(c+230,"wb_re_i", false,-1);
    tracep->declBit(c+1598,"stx_pad_o", false,-1);
    tracep->declBit(c+1597,"srx_pad_i", false,-1);
    tracep->declBus(c+1770,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+961,"rts_pad_o", false,-1);
    tracep->declBit(c+959,"dtr_pad_o", false,-1);
    tracep->declBit(c+960,"int_o", false,-1);
    tracep->declBit(c+962,"enable", false,-1);
    tracep->declBit(c+963,"srx_pad", false,-1);
    tracep->declBus(c+964,"ier", false,-1, 3,0);
    tracep->declBus(c+965,"iir", false,-1, 3,0);
    tracep->declBus(c+966,"fcr", false,-1, 1,0);
    tracep->declBus(c+967,"mcr", false,-1, 4,0);
    tracep->declBus(c+968,"lcr", false,-1, 7,0);
    tracep->declBus(c+969,"msr", false,-1, 7,0);
    tracep->declBus(c+970,"dl", false,-1, 15,0);
    tracep->declBus(c+971,"scratch", false,-1, 7,0);
    tracep->declBit(c+972,"start_dlc", false,-1);
    tracep->declBit(c+973,"lsr_mask_d", false,-1);
    tracep->declBit(c+974,"msi_reset", false,-1);
    tracep->declBus(c+975,"dlc", false,-1, 15,0);
    tracep->declBus(c+976,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+977,"rx_reset", false,-1);
    tracep->declBit(c+978,"tx_reset", false,-1);
    tracep->declBit(c+979,"dlab", false,-1);
    tracep->declBit(c+1653,"cts_pad_i", false,-1);
    tracep->declBit(c+1651,"dsr_pad_i", false,-1);
    tracep->declBit(c+1651,"ri_pad_i", false,-1);
    tracep->declBit(c+1651,"dcd_pad_i", false,-1);
    tracep->declBit(c+980,"loopback", false,-1);
    tracep->declBit(c+1651,"cts", false,-1);
    tracep->declBit(c+1653,"dsr", false,-1);
    tracep->declBit(c+1653,"ri", false,-1);
    tracep->declBit(c+1653,"dcd", false,-1);
    tracep->declBit(c+981,"cts_c", false,-1);
    tracep->declBit(c+982,"dsr_c", false,-1);
    tracep->declBit(c+983,"ri_c", false,-1);
    tracep->declBit(c+984,"dcd_c", false,-1);
    tracep->declBus(c+985,"lsr", false,-1, 7,0);
    tracep->declBit(c+986,"lsr0", false,-1);
    tracep->declBit(c+987,"lsr1", false,-1);
    tracep->declBit(c+988,"lsr2", false,-1);
    tracep->declBit(c+989,"lsr3", false,-1);
    tracep->declBit(c+990,"lsr4", false,-1);
    tracep->declBit(c+991,"lsr5", false,-1);
    tracep->declBit(c+992,"lsr6", false,-1);
    tracep->declBit(c+993,"lsr7", false,-1);
    tracep->declBit(c+994,"lsr0r", false,-1);
    tracep->declBit(c+995,"lsr1r", false,-1);
    tracep->declBit(c+996,"lsr2r", false,-1);
    tracep->declBit(c+997,"lsr3r", false,-1);
    tracep->declBit(c+998,"lsr4r", false,-1);
    tracep->declBit(c+999,"lsr5r", false,-1);
    tracep->declBit(c+1000,"lsr6r", false,-1);
    tracep->declBit(c+1001,"lsr7r", false,-1);
    tracep->declBit(c+231,"lsr_mask", false,-1);
    tracep->declBit(c+1002,"rls_int", false,-1);
    tracep->declBit(c+1003,"rda_int", false,-1);
    tracep->declBit(c+1004,"ti_int", false,-1);
    tracep->declBit(c+1005,"thre_int", false,-1);
    tracep->declBit(c+1006,"ms_int", false,-1);
    tracep->declBit(c+1007,"tf_push", false,-1);
    tracep->declBit(c+1008,"rf_pop", false,-1);
    tracep->declBus(c+1625,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1009,"rf_error_bit", false,-1);
    tracep->declBit(c+987,"rf_overrun", false,-1);
    tracep->declBit(c+1010,"rf_push_pulse", false,-1);
    tracep->declBus(c+1011,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1012,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1013,"tstate", false,-1, 2,0);
    tracep->declBus(c+1014,"rstate", false,-1, 3,0);
    tracep->declBus(c+1015,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1016,"thre_set_en", false,-1);
    tracep->declBus(c+1017,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1018,"block_value", false,-1, 7,0);
    tracep->declBit(c+1019,"serial_out", false,-1);
    tracep->declBit(c+1020,"serial_in", false,-1);
    tracep->declBit(c+232,"lsr_mask_condition", false,-1);
    tracep->declBit(c+233,"iir_read", false,-1);
    tracep->declBit(c+234,"msr_read", false,-1);
    tracep->declBit(c+235,"fifo_read", false,-1);
    tracep->declBit(c+236,"fifo_write", false,-1);
    tracep->declBus(c+1021,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1022,"lsr0_d", false,-1);
    tracep->declBit(c+1023,"lsr1_d", false,-1);
    tracep->declBit(c+1024,"lsr2_d", false,-1);
    tracep->declBit(c+1025,"lsr3_d", false,-1);
    tracep->declBit(c+1026,"lsr4_d", false,-1);
    tracep->declBit(c+1027,"lsr5_d", false,-1);
    tracep->declBit(c+1028,"lsr6_d", false,-1);
    tracep->declBit(c+1029,"lsr7_d", false,-1);
    tracep->declBit(c+1030,"rls_int_d", false,-1);
    tracep->declBit(c+1031,"thre_int_d", false,-1);
    tracep->declBit(c+1032,"ms_int_d", false,-1);
    tracep->declBit(c+1033,"ti_int_d", false,-1);
    tracep->declBit(c+1034,"rda_int_d", false,-1);
    tracep->declBit(c+1035,"rls_int_rise", false,-1);
    tracep->declBit(c+1036,"thre_int_rise", false,-1);
    tracep->declBit(c+1037,"ms_int_rise", false,-1);
    tracep->declBit(c+1038,"ti_int_rise", false,-1);
    tracep->declBit(c+1039,"rda_int_rise", false,-1);
    tracep->declBit(c+1040,"rls_int_pnd", false,-1);
    tracep->declBit(c+1041,"rda_int_pnd", false,-1);
    tracep->declBit(c+1042,"thre_int_pnd", false,-1);
    tracep->declBit(c+1043,"ms_int_pnd", false,-1);
    tracep->declBit(c+1044,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1698,"Tp", false,-1, 31,0);
    tracep->declBus(c+1698,"width", false,-1, 31,0);
    tracep->declBus(c+1752,"init_value", false,-1, 0,0);
    tracep->declBit(c+1578,"rst_i", false,-1);
    tracep->declBit(c+1577,"clk_i", false,-1);
    tracep->declBit(c+1651,"stage1_rst_i", false,-1);
    tracep->declBit(c+1653,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1597,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+963,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1045,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1578,"wb_rst_i", false,-1);
    tracep->declBus(c+968,"lcr", false,-1, 7,0);
    tracep->declBit(c+1008,"rf_pop", false,-1);
    tracep->declBit(c+1020,"srx_pad_i", false,-1);
    tracep->declBit(c+962,"enable", false,-1);
    tracep->declBit(c+977,"rx_reset", false,-1);
    tracep->declBit(c+231,"lsr_mask", false,-1);
    tracep->declBus(c+1015,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1011,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1625,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+987,"rf_overrun", false,-1);
    tracep->declBit(c+1009,"rf_error_bit", false,-1);
    tracep->declBus(c+1014,"rstate", false,-1, 3,0);
    tracep->declBit(c+1010,"rf_push_pulse", false,-1);
    tracep->declBus(c+1046,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1047,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1048,"rshift", false,-1, 7,0);
    tracep->declBit(c+1049,"rparity", false,-1);
    tracep->declBit(c+1050,"rparity_error", false,-1);
    tracep->declBit(c+1051,"rframing_error", false,-1);
    tracep->declBit(c+1052,"rbit_in", false,-1);
    tracep->declBit(c+1053,"rparity_xor", false,-1);
    tracep->declBus(c+1054,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1055,"rf_push_q", false,-1);
    tracep->declBus(c+1056,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1057,"rf_push", false,-1);
    tracep->declBit(c+1058,"break_error", false,-1);
    tracep->declBit(c+1059,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1060,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1061,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1062,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1655,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1768,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1767,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1763,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1765,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1764,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1766,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1762,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1770,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1771,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1784,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1063,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1064,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1709,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1785,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1758,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1716,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1578,"wb_rst_i", false,-1);
    tracep->declBit(c+1010,"push", false,-1);
    tracep->declBit(c+1008,"pop", false,-1);
    tracep->declBus(c+1056,"data_in", false,-1, 10,0);
    tracep->declBit(c+977,"fifo_reset", false,-1);
    tracep->declBit(c+231,"reset_status", false,-1);
    tracep->declBus(c+1625,"data_out", false,-1, 10,0);
    tracep->declBit(c+987,"overrun", false,-1);
    tracep->declBus(c+1011,"count", false,-1, 4,0);
    tracep->declBit(c+1009,"error_bit", false,-1);
    tracep->declBus(c+1626,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1065+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1081,"top", false,-1, 3,0);
    tracep->declBus(c+1082,"bottom", false,-1, 3,0);
    tracep->declBus(c+1083,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1084,"word0", false,-1, 2,0);
    tracep->declBus(c+1085,"word1", false,-1, 2,0);
    tracep->declBus(c+1086,"word2", false,-1, 2,0);
    tracep->declBus(c+1087,"word3", false,-1, 2,0);
    tracep->declBus(c+1088,"word4", false,-1, 2,0);
    tracep->declBus(c+1089,"word5", false,-1, 2,0);
    tracep->declBus(c+1090,"word6", false,-1, 2,0);
    tracep->declBus(c+1091,"word7", false,-1, 2,0);
    tracep->declBus(c+1092,"word8", false,-1, 2,0);
    tracep->declBus(c+1093,"word9", false,-1, 2,0);
    tracep->declBus(c+1094,"word10", false,-1, 2,0);
    tracep->declBus(c+1095,"word11", false,-1, 2,0);
    tracep->declBus(c+1096,"word12", false,-1, 2,0);
    tracep->declBus(c+1097,"word13", false,-1, 2,0);
    tracep->declBus(c+1098,"word14", false,-1, 2,0);
    tracep->declBus(c+1099,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1758,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1742,"data_width", false,-1, 31,0);
    tracep->declBus(c+1785,"depth", false,-1, 31,0);
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1010,"we", false,-1);
    tracep->declBus(c+1081,"a", false,-1, 3,0);
    tracep->declBus(c+1082,"dpra", false,-1, 3,0);
    tracep->declBus(c+1100,"di", false,-1, 7,0);
    tracep->declBus(c+1626,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+761+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1578,"wb_rst_i", false,-1);
    tracep->declBus(c+968,"lcr", false,-1, 7,0);
    tracep->declBit(c+1007,"tf_push", false,-1);
    tracep->declBus(c+1533,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+962,"enable", false,-1);
    tracep->declBit(c+978,"tx_reset", false,-1);
    tracep->declBit(c+231,"lsr_mask", false,-1);
    tracep->declBit(c+1019,"stx_pad_o", false,-1);
    tracep->declBus(c+1013,"tstate", false,-1, 2,0);
    tracep->declBus(c+1012,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1101,"counter", false,-1, 4,0);
    tracep->declBus(c+1102,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1103,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1104,"stx_o_tmp", false,-1);
    tracep->declBit(c+1105,"parity_xor", false,-1);
    tracep->declBit(c+1106,"tf_pop", false,-1);
    tracep->declBit(c+1107,"bit_out", false,-1);
    tracep->declBus(c+1533,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1478,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1108,"tf_overrun", false,-1);
    tracep->declBus(c+1658,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1636,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1786,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1787,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1750,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1788,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1742,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1785,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1758,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1716,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1578,"wb_rst_i", false,-1);
    tracep->declBit(c+1007,"push", false,-1);
    tracep->declBit(c+1106,"pop", false,-1);
    tracep->declBus(c+1533,"data_in", false,-1, 7,0);
    tracep->declBit(c+978,"fifo_reset", false,-1);
    tracep->declBit(c+231,"reset_status", false,-1);
    tracep->declBus(c+1478,"data_out", false,-1, 7,0);
    tracep->declBit(c+1108,"overrun", false,-1);
    tracep->declBus(c+1012,"count", false,-1, 4,0);
    tracep->declBus(c+1109,"top", false,-1, 3,0);
    tracep->declBus(c+1110,"bottom", false,-1, 3,0);
    tracep->declBus(c+1111,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1758,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1742,"data_width", false,-1, 31,0);
    tracep->declBus(c+1785,"depth", false,-1, 31,0);
    tracep->declBit(c+1577,"clk", false,-1);
    tracep->declBit(c+1007,"we", false,-1);
    tracep->declBus(c+1109,"a", false,-1, 3,0);
    tracep->declBus(c+1110,"dpra", false,-1, 3,0);
    tracep->declBus(c+1533,"di", false,-1, 7,0);
    tracep->declBus(c+1478,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+777+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBit(c+1607,"auto_in_psel", false,-1);
    tracep->declBit(c+1510,"auto_in_penable", false,-1);
    tracep->declBit(c+1189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1511,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1636,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+247,"auto_in_pready", false,-1);
    tracep->declBit(c+1651,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1652,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1591,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1592,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1593,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1594,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1595,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1596,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1577,"clock", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1530,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1607,"in_psel", false,-1);
    tracep->declBit(c+1510,"in_penable", false,-1);
    tracep->declBus(c+1636,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1189,"in_pwrite", false,-1);
    tracep->declBus(c+1190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+247,"in_pready", false,-1);
    tracep->declBus(c+1652,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1651,"in_pslverr", false,-1);
    tracep->declBus(c+1591,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1592,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1593,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1594,"vga_hsync", false,-1);
    tracep->declBit(c+1595,"vga_vsync", false,-1);
    tracep->declBit(c+1596,"vga_valid", false,-1);
    tracep->declBus(c+1789,"NUM", false,-1, 31,0);
    tracep->declBit(c+793,"sync_reg", false,-1);
    tracep->declBus(c+1790,"H_FRONT", false,-1, 31,0);
    tracep->declBus(c+1791,"H_ACT", false,-1, 31,0);
    tracep->declBus(c+1792,"H_BACK", false,-1, 31,0);
    tracep->declBus(c+1793,"H_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1737,"V_FRONT", false,-1, 31,0);
    tracep->declBus(c+1794,"V_ACT", false,-1, 31,0);
    tracep->declBus(c+1795,"V_BACK", false,-1, 31,0);
    tracep->declBus(c+1796,"V_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1797,"VGA_SYNC", false,-1, 31,0);
    tracep->declBus(c+794,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+795,"y_cnt", false,-1, 9,0);
    tracep->declBus(c+796,"cnt", false,-1, 20,0);
    tracep->declBit(c+797,"h_valid", false,-1);
    tracep->declBit(c+798,"v_valid", false,-1);
    tracep->declBus(c+1652,"VGA_IDLE", false,-1, 31,0);
    tracep->declBus(c+1698,"VGA_WRITE", false,-1, 31,0);
    tracep->declBus(c+799,"vga_state", false,-1, 1,0);
    tracep->declBus(c+800,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+862,"sck", false,-1);
    tracep->declBit(c+1502,"ss", false,-1);
    tracep->declBit(c+1486,"mosi", false,-1);
    tracep->declBit(c+1472,"miso", false,-1);
    tracep->declBus(c+1627,"rx_data", false,-1, 7,0);
    tracep->declBus(c+1473,"tx_data", false,-1, 7,0);
    tracep->declBus(c+1474,"cnt", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+862,"sck", false,-1);
    tracep->declBit(c+1112,"ss", false,-1);
    tracep->declBit(c+1486,"mosi", false,-1);
    tracep->declBit(c+1628,"miso", false,-1);
    tracep->declBit(c+1112,"reset", false,-1);
    tracep->declBus(c+1466,"state", false,-1, 2,0);
    tracep->declBus(c+1467,"counter", false,-1, 7,0);
    tracep->declBus(c+1468,"cmd", false,-1, 7,0);
    tracep->declBus(c+1469,"addr", false,-1, 23,0);
    tracep->declBus(c+1470,"data", false,-1, 31,0);
    tracep->declBit(c+1471,"ren", false,-1);
    tracep->declBus(c+1629,"rdata", false,-1, 31,0);
    tracep->declBus(c+1630,"raddr", false,-1, 31,0);
    tracep->declBus(c+1631,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+862,"clock", false,-1);
    tracep->declBit(c+1471,"valid", false,-1);
    tracep->declBus(c+1468,"cmd", false,-1, 7,0);
    tracep->declBus(c+1630,"addr", false,-1, 31,0);
    tracep->declBus(c+1629,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1535,"sck", false,-1);
    tracep->declBit(c+1536,"ce_n", false,-1);
    tracep->declBus(c+1600,"dio", false,-1, 3,0);
    tracep->declBit(c+1536,"reset", false,-1);
    tracep->declBus(c+1632,"state", false,-1, 2,0);
    tracep->declBus(c+1479,"counter", false,-1, 7,0);
    tracep->declBus(c+1633,"counter_wr", false,-1, 7,0);
    tracep->declBus(c+1480,"cmd", false,-1, 7,0);
    tracep->declBus(c+1634,"addr", false,-1, 23,0);
    tracep->declBus(c+1481,"data", false,-1, 31,0);
    tracep->declBus(c+1635,"rdata", false,-1, 31,0);
    tracep->declBus(c+1482,"raddr", false,-1, 31,0);
    tracep->declBit(c+1483,"ren", false,-1);
    tracep->declBit(c+1484,"in_qpi", false,-1);
    tracep->pushNamePrefix("psram_cmd_i ");
    tracep->declBit(c+1535,"clock", false,-1);
    tracep->declBit(c+1483,"valid", false,-1);
    tracep->declBus(c+1480,"cmd", false,-1, 7,0);
    tracep->declBus(c+1482,"addr", false,-1, 31,0);
    tracep->declBus(c+1485,"data_in", false,-1, 7,0);
    tracep->declBus(c+1635,"data_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1601,"clk", false,-1);
    tracep->declBit(c+1487,"cke", false,-1);
    tracep->declBit(c+1488,"cs", false,-1);
    tracep->declBit(c+1489,"ras", false,-1);
    tracep->declBit(c+1490,"cas", false,-1);
    tracep->declBit(c+1491,"we", false,-1);
    tracep->declBus(c+1602,"a", false,-1, 13,0);
    tracep->declBus(c+1492,"ba", false,-1, 1,0);
    tracep->declBus(c+1493,"dqm", false,-1, 3,0);
    tracep->declBus(c+1506,"dq", false,-1, 31,0);
    tracep->declBit(c+1534,"sdram_sel", false,-1);
    tracep->declBit(c+1575,"cs_grp1", false,-1);
    tracep->declBit(c+1576,"cs_grp2", false,-1);
    tracep->pushNamePrefix("sdram_1 ");
    tracep->declBit(c+1601,"clk", false,-1);
    tracep->declBit(c+1487,"cke", false,-1);
    tracep->declBit(c+1575,"cs", false,-1);
    tracep->declBit(c+1489,"ras", false,-1);
    tracep->declBit(c+1490,"cas", false,-1);
    tracep->declBit(c+1491,"we", false,-1);
    tracep->declBus(c+1496,"a", false,-1, 12,0);
    tracep->declBus(c+1492,"ba", false,-1, 1,0);
    tracep->declBus(c+1503,"dqm", false,-1, 1,0);
    tracep->declBus(c+1507,"dq", false,-1, 15,0);
    tracep->declBus(c+1504,"cmd", false,-1, 2,0);
    tracep->declBus(c+1798,"NOP", false,-1, 2,0);
    tracep->declBus(c+1787,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1788,"READ", false,-1, 2,0);
    tracep->declBus(c+1750,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1799,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1786,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1636,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1658,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1800,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1113+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1117,"den", false,-1, 15,0);
    tracep->declBus(c+1507,"din", false,-1, 15,0);
    tracep->declBus(c+1118,"dout", false,-1, 15,0);
    tracep->declBus(c+1119,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1120,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1121,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1122,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1123,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1124,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1125,"read_flag", false,-1);
    tracep->declBus(c+1126,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1127,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1128,"w_data", false,-1, 15,0);
    tracep->declBus(c+1129,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1130,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1131,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_2 ");
    tracep->declBit(c+1601,"clk", false,-1);
    tracep->declBit(c+1487,"cke", false,-1);
    tracep->declBit(c+1575,"cs", false,-1);
    tracep->declBit(c+1489,"ras", false,-1);
    tracep->declBit(c+1490,"cas", false,-1);
    tracep->declBit(c+1491,"we", false,-1);
    tracep->declBus(c+1496,"a", false,-1, 12,0);
    tracep->declBus(c+1492,"ba", false,-1, 1,0);
    tracep->declBus(c+1505,"dqm", false,-1, 1,0);
    tracep->declBus(c+1508,"dq", false,-1, 15,0);
    tracep->declBus(c+1504,"cmd", false,-1, 2,0);
    tracep->declBus(c+1798,"NOP", false,-1, 2,0);
    tracep->declBus(c+1787,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1788,"READ", false,-1, 2,0);
    tracep->declBus(c+1750,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1799,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1786,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1636,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1658,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1800,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1132+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1136,"den", false,-1, 15,0);
    tracep->declBus(c+1508,"din", false,-1, 15,0);
    tracep->declBus(c+1137,"dout", false,-1, 15,0);
    tracep->declBus(c+1138,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1139,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1140,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1141,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1142,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1143,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1144,"read_flag", false,-1);
    tracep->declBus(c+1145,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1146,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1147,"w_data", false,-1, 15,0);
    tracep->declBus(c+1148,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1149,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1150,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_3 ");
    tracep->declBit(c+1601,"clk", false,-1);
    tracep->declBit(c+1487,"cke", false,-1);
    tracep->declBit(c+1576,"cs", false,-1);
    tracep->declBit(c+1489,"ras", false,-1);
    tracep->declBit(c+1490,"cas", false,-1);
    tracep->declBit(c+1491,"we", false,-1);
    tracep->declBus(c+1496,"a", false,-1, 12,0);
    tracep->declBus(c+1492,"ba", false,-1, 1,0);
    tracep->declBus(c+1503,"dqm", false,-1, 1,0);
    tracep->declBus(c+1507,"dq", false,-1, 15,0);
    tracep->declBus(c+1504,"cmd", false,-1, 2,0);
    tracep->declBus(c+1798,"NOP", false,-1, 2,0);
    tracep->declBus(c+1787,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1788,"READ", false,-1, 2,0);
    tracep->declBus(c+1750,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1799,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1786,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1636,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1658,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1800,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1151+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1155,"den", false,-1, 15,0);
    tracep->declBus(c+1507,"din", false,-1, 15,0);
    tracep->declBus(c+1156,"dout", false,-1, 15,0);
    tracep->declBus(c+1157,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1158,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1159,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1160,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1161,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1162,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1163,"read_flag", false,-1);
    tracep->declBus(c+1164,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1165,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1166,"w_data", false,-1, 15,0);
    tracep->declBus(c+1167,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1168,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1169,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_4 ");
    tracep->declBit(c+1601,"clk", false,-1);
    tracep->declBit(c+1487,"cke", false,-1);
    tracep->declBit(c+1576,"cs", false,-1);
    tracep->declBit(c+1489,"ras", false,-1);
    tracep->declBit(c+1490,"cas", false,-1);
    tracep->declBit(c+1491,"we", false,-1);
    tracep->declBus(c+1496,"a", false,-1, 12,0);
    tracep->declBus(c+1492,"ba", false,-1, 1,0);
    tracep->declBus(c+1505,"dqm", false,-1, 1,0);
    tracep->declBus(c+1508,"dq", false,-1, 15,0);
    tracep->declBus(c+1504,"cmd", false,-1, 2,0);
    tracep->declBus(c+1798,"NOP", false,-1, 2,0);
    tracep->declBus(c+1787,"ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1788,"READ", false,-1, 2,0);
    tracep->declBus(c+1750,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1799,"TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1786,"PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1636,"REFRESH", false,-1, 2,0);
    tracep->declBus(c+1658,"LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1800,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1170+i*1,"line_address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1174,"den", false,-1, 15,0);
    tracep->declBus(c+1508,"din", false,-1, 15,0);
    tracep->declBus(c+1175,"dout", false,-1, 15,0);
    tracep->declBus(c+1176,"CAS_latency", false,-1, 2,0);
    tracep->declBus(c+1177,"brust_len", false,-1, 2,0);
    tracep->declBus(c+1178,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1179,"dqm_buf", false,-1, 1,0);
    tracep->declBus(c+1180,"r_cnt", false,-1, 3,0);
    tracep->declBus(c+1181,"w_cnt", false,-1, 3,0);
    tracep->declBit(c+1182,"read_flag", false,-1);
    tracep->declBus(c+1183,"r_addr", false,-1, 8,0);
    tracep->declBus(c+1184,"w_addr", false,-1, 8,0);
    tracep->declBus(c+1185,"w_data", false,-1, 15,0);
    tracep->declBus(c+1186,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1187,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1188,"Length", false,-1, 3,0);
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
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[0]),8);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[1]),8);
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[2]),8);
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[3]),8);
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[4]),8);
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[5]),8);
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[6]),8);
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[7]),8);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[8]),8);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[9]),8);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[10]),8);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[11]),8);
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[12]),8);
    bufp->fullCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[13]),8);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[14]),8);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_code[15]),8);
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+238,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_cnt),32);
    bufp->fullBit(oldp+243,((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_cnt)));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_pready));
    bufp->fullIData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_prdata),32);
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_pslverr));
    bufp->fullBit(oldp+247,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_state))));
    bufp->fullIData(oldp+248,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+250,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+251,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+252,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+253,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+254,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+256,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+257,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+258,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+262,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+263,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+264,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+265,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+266,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullIData(oldp+269,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+276,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullBit(oldp+281,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+282,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+283,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+284,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullBit(oldp+286,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+287,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+288,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+289,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+290,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+298,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+310,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullBit(oldp+358,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+361,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+362,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+371,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+373,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullQData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+409,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+412,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+413,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+426,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+427,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+428,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+499,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+503,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+507,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+511,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+515,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+519,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+523,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+527,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+535,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+539,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+543,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+547,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+551,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+555,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+559,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+563,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+567,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+579,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+583,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+587,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+591,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+595,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+599,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+603,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+607,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+611,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+615,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+619,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+623,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_araddr),32);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arsize),3);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arburst),2);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arid),4);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arlen),8);
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__AluByteIdx),2);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC),32);
    bufp->fullIData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf
                              [0xaU]),32);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_Arbiter__DOT__CurrentState),2);
    bufp->fullIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcause),32);
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mepc),32);
    bufp->fullIData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mstatus),32);
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mtvec),32);
    bufp->fullIData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycle),32);
    bufp->fullIData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mcycleh),32);
    bufp->fullIData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__mvendorid),32);
    bufp->fullIData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__marchid),32);
    bufp->fullIData(oldp+658,(((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf
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
    bufp->fullWData(oldp+659,(__Vtemp_hd646914f__0),352);
    bufp->fullQData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullQData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[4]),44);
    bufp->fullQData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[5]),44);
    bufp->fullQData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[6]),44);
    bufp->fullQData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__pair_list[7]),44);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[0]),32);
    bufp->fullIData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[1]),32);
    bufp->fullIData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[2]),32);
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[3]),32);
    bufp->fullIData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[4]),32);
    bufp->fullIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[5]),32);
    bufp->fullIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[6]),32);
    bufp->fullIData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[7]),32);
    bufp->fullIData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[8]),32);
    bufp->fullIData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[9]),32);
    bufp->fullIData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[10]),32);
    bufp->fullIData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[11]),32);
    bufp->fullIData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[12]),32);
    bufp->fullIData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[13]),32);
    bufp->fullIData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[14]),32);
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_REG__DOT__rf[15]),32);
    bufp->fullIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__ifu_count),32);
    bufp->fullIData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__lsu_count),32);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__compute_count),32);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__csr_count),32);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__jump_count),32);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__mem_count),32);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__exu_count),32);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__prev_ExuRes),32);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__ifu_cycles),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__lsu_cycles),32);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__state),2);
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullSData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),10);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__counter),4);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[0]),8);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[1]),8);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[2]),8);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[3]),8);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[4]),8);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[5]),8);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[6]),8);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[7]),8);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[8]),8);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[9]),8);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[10]),8);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[11]),8);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[12]),8);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[13]),8);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[14]),8);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo[15]),8);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__w_ptr),4);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr),4);
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty));
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__i),32);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+754,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync_reg));
    bufp->fullSData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullIData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__cnt),21);
    bufp->fullBit(oldp+797,(((0x90U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)) 
                             & (0x310U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)))));
    bufp->fullBit(oldp+798,(((0x23U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)) 
                             & (0x203U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)))));
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_state),2);
    bufp->fullIData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__i),32);
    bufp->fullBit(oldp+801,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+802,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+803,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+805,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullBit(oldp+806,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+807,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+808,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+809,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+810,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+811,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+812,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+813,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+814,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+815,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+816,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+817,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+818,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+819,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+820,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+821,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+822,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+823,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+824,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+825,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+826,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+827,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+828,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+829,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+830,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+831,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+832,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+833,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+834,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+835,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+836,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+837,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+838,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+839,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+840,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+841,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+842,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+843,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+844,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+845,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+846,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+847,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+848,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+849,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+850,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+851,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+852,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+853,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+854,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready));
    bufp->fullIData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__instruction_r),32);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_LSU__DOT__CurrentState),2);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+867,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))));
    bufp->fullIData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_prdata_reg),32);
    bufp->fullSData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_data_reg),32);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state),2);
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout),4);
    bufp->fullBit(oldp+875,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi)
                              ? (8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                              : (0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+878,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_cmd));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullBit(oldp+883,((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))));
    bufp->fullCData(oldp+884,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                ? (1U & (0x88U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+885,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)))));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi));
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+888,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi)
                                ? 0x15U : 0x1bU)),8);
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index),2);
    bufp->fullCData(oldp+893,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi)
                                ? 0xeU : 0x14U)),8);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__nstate));
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter),8);
    bufp->fullBit(oldp+900,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__CurrentState),4);
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_init_done));
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_phy_addr),32);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_adr),5);
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_wdata),32);
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_we));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_stb));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_cyc));
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rx_data),32);
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pslverr));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullIData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+939,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+940,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+941,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+942,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+943,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+944,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+945,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+949,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+951,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+952,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+954,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+958,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+959,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+961,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+979,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+980,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+981,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+982,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+983,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+984,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+985,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+988,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+989,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+990,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1009,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1016,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1035,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1036,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1037,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1038,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1039,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1058,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1059,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1060,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1061,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1062,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1064,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1083,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1100,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1111,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1117,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__dout),16);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__brust_len),3);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__r_cnt),4);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__w_cnt),4);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__read_flag));
    bufp->fullSData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__r_addr),9);
    bufp->fullSData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__w_addr),9);
    bufp->fullSData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__w_data),16);
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_1__DOT__Length),4);
    bufp->fullSData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1136,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__dout),16);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__brust_len),3);
    bufp->fullCData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__L_Bank),2);
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__r_cnt),4);
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__w_cnt),4);
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__read_flag));
    bufp->fullSData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__r_addr),9);
    bufp->fullSData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__w_addr),9);
    bufp->fullSData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__w_data),16);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_2__DOT__Length),4);
    bufp->fullSData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1155,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__dout),16);
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__brust_len),3);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__L_Bank),2);
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__r_cnt),4);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__w_cnt),4);
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__read_flag));
    bufp->fullSData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__r_addr),9);
    bufp->fullSData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__w_addr),9);
    bufp->fullSData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__w_data),16);
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_3__DOT__Length),4);
    bufp->fullSData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__line_address[0]),13);
    bufp->fullSData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__line_address[1]),13);
    bufp->fullSData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__line_address[2]),13);
    bufp->fullSData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__line_address[3]),13);
    bufp->fullSData(oldp+1174,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__dout),16);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__CAS_latency),3);
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__brust_len),3);
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__L_Bank),2);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__dqm_buf),2);
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__r_cnt),4);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__w_cnt),4);
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__read_flag));
    bufp->fullSData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__r_addr),9);
    bufp->fullSData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__w_addr),9);
    bufp->fullSData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__w_data),16);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_4__DOT__Length),4);
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__CurrentState),2);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1206,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1207,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1208,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullBit(oldp+1209,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1213,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1216,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1217,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullCData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1223,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1227,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1248,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1254,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1276,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1281,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1282,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1284,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1286,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1287,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1295,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1296,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1303,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
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
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+1305,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1315,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+1316,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1317,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1318,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1319,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1320,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1321,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1322,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1323,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1324,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1325,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1326,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1327,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1328,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1329,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1330,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 9U)))));
    bufp->fullIData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr),32);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst),2);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid),4);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen),8);
    bufp->fullIData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr),32);
    bufp->fullCData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awburst),2);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awlen),8);
    bufp->fullIData(oldp+1340,(((0x1fU >= (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf1fac965__0)
                                             ? (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0)
                                             : 0U) 
                                           << 3U)) ? 
                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ExuRes 
                                 << (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf1fac965__0)
                                       ? (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0)
                                       : 0U) << 3U))
                                 : 0U)),32);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction),32);
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__is_loadmemory));
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__is_storememory));
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Imm),32);
    bufp->fullSData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrType),12);
    bufp->fullSData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrNum),12);
    bufp->fullCData(oldp+1349,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1350,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1351,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                         >> 7U))),5);
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RegWen));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC_en));
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC),32);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ExuRes),32);
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrData),32);
    bufp->fullIData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CsrExuData),32);
    bufp->fullIData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs1Data),32);
    bufp->fullIData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rs2Data),32);
    bufp->fullIData(oldp+1360,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf1fac965__0)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h87a7f3f1__0
                                 : 0x30000000U)),32);
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_Arbiter__DOT__NextState),2);
    bufp->fullCData(oldp+1362,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1363,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+1364,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction)),7);
    bufp->fullSData(oldp+1365,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                >> 0x14U)),12);
    bufp->fullSData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__B_imm),12);
    bufp->fullSData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__S_imm),12);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__J_imm),20);
    bufp->fullIData(oldp+1369,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction 
                                >> 0xcU)),20);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__I_ex),32);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__S_ex),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__J_ex),32);
    bufp->fullIData(oldp+1373,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction)),32);
    bufp->fullIData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__B_ex),32);
    bufp->fullSData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__CsrNum),12);
    bufp->fullSData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Opcode_Funct3),10);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__Opcode_Funct3_Funct7),17);
    bufp->fullSData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrFunct3),12);
    bufp->fullSData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrNoFunct),12);
    bufp->fullSData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrFunct7),12);
    bufp->fullSData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__InstrCsr),12);
    bufp->fullBit(oldp+1382,((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction))));
    bufp->fullBit(oldp+1383,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instruction))));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__reg_wen));
    bufp->fullSData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT____Vcellinp__i1__lut),1760);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i12__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i4__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i6__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i7__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i8__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__lut_out),12);
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__i9__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__UpdatePC_en));
    bufp->fullCData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_LSU__DOT__NextState),2);
    bufp->fullIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_WBU__DOT__U_CSR__DOT__i10__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_perfomance__DOT__next_state),2);
    bufp->fullIData(oldp+1463,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1471,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1473,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_data),8);
    bufp->fullCData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__cnt),3);
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullCData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1480,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__psram__DOT__raddr),32);
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ren));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__psram__DOT__in_qpi));
    bufp->fullCData(oldp+1485,((0xffU & vlSelf->ysyxSoCFull__DOT__psram__DOT__data)),8);
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+1488,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1489,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1490,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1491,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+1494,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullSData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullCData(oldp+1503,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1504,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+1505,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1506,(vlSelf->ysyxSoCFull__DOT___dq_wire),32);
    bufp->fullSData(oldp+1507,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),16);
    bufp->fullSData(oldp+1508,((vlSelf->ysyxSoCFull__DOT___dq_wire 
                                >> 0x10U)),16);
    bufp->fullIData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1511,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1512,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1523,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+1524,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1525,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullSData(oldp+1526,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1527,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1528,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double),3);
    bufp->fullIData(oldp+1530,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullCData(oldp+1531,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1534,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next_state),2);
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullIData(oldp+1542,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullCData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullCData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullBit(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip));
    bufp->fullCData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__NextState),4);
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pready));
    bufp->fullCData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),5);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullBit(oldp+1570,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1572,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))));
    bufp->fullCData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_grp1));
    bufp->fullBit(oldp+1576,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__cs_grp2));
    bufp->fullBit(oldp+1577,(vlSelf->clock));
    bufp->fullBit(oldp+1578,(vlSelf->reset));
    bufp->fullSData(oldp+1579,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1580,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1581,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1582,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1583,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1584,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1585,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1586,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1587,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1588,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1589,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1590,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1591,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1592,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1593,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1594,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1595,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1596,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1597,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1598,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1599,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1601,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1602,(((0x2000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                            >> 0xdU)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q))),14);
    bufp->fullIData(oldp+1603,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip)
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rx_data
                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o)
                                  : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                 : 0U)
                                             : 0U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                                ? (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [3U] 
                                                    << 0x18U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [2U] 
                                                       << 0x10U) 
                                                      | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                          [1U] 
                                                          << 8U) 
                                                         | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                         [0U])))
                                                : 0U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__in_prdata_reg
                                                   : 0U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty)
                                                        ? 
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo
                                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                                        : 0U)
                                                       : 0U)
                                                      : 0U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                         ? 0U
                                                         : 0U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q
                                                           : 0U)))))))),32);
    bufp->fullBit(oldp+1604,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pslverr)))));
    bufp->fullBit(oldp+1605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1607,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1608,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1609,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+1610,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__isn_empty)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo
                                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__r_ptr]
                                     : 0U) : 0U)),32);
    bufp->fullBit(oldp+1611,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1612,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1613,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1614,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pready)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o))));
    bufp->fullBit(oldp+1615,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_pslverr))));
    bufp->fullIData(oldp+1616,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rx_data
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o)),32);
    bufp->fullBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__NextState),2);
    bufp->fullIData(oldp+1619,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC_en)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__JumpPC
                                     : ((IData)(4U) 
                                        + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IFU__DOT__U_PC__DOT__d_PC)))),32);
    bufp->fullBit(oldp+1620,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done))));
    bufp->fullCData(oldp+1621,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
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
    bufp->fullBit(oldp+1622,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1623,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__in_qpi)
                                          ? ((IData)(7U) 
                                             + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                                << 1U))
                                          : ((IData)(0xdU) 
                                             + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                                << 1U))))),8);
    bufp->fullBit(oldp+1624,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_flash_xip)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o))));
    bufp->fullSData(oldp+1625,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_data),8);
    bufp->fullBit(oldp+1628,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1630,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter_wr),8);
    bufp->fullIData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullIData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullCData(oldp+1636,(1U),3);
    bufp->fullCData(oldp+1637,(0U),2);
    bufp->fullCData(oldp+1638,(1U),2);
    bufp->fullCData(oldp+1639,(2U),2);
    bufp->fullDouble(oldp+1640,(5.16000000000000014e+00));
    bufp->fullIData(oldp+1642,(0x64U),32);
    bufp->fullIData(oldp+1643,(0x204U),32);
    bufp->fullIData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_paddr),32);
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_psel));
    bufp->fullBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_penable));
    bufp->fullCData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_pprot),3);
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_pwrite));
    bufp->fullIData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_pwdata),32);
    bufp->fullCData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_pstrb),4);
    bufp->fullBit(oldp+1651,(0U));
    bufp->fullIData(oldp+1652,(0U),32);
    bufp->fullBit(oldp+1653,(1U));
    bufp->fullBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullCData(oldp+1655,(0U),4);
    bufp->fullIData(oldp+1656,(0U),32);
    bufp->fullCData(oldp+1657,(0U),8);
    bufp->fullCData(oldp+1658,(0U),3);
    bufp->fullBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullCData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1669,(0x30000000U),32);
    bufp->fullCData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awid),4);
    bufp->fullBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reqValid));
    bufp->fullCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WmaskSh),4);
    bufp->fullIData(oldp+1673,(0x20U),32);
    bufp->fullIData(oldp+1674,(0x20000000U),32);
    bufp->fullCData(oldp+1675,(3U),2);
    bufp->fullCData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__U_IDU__DOT__lsu_size),2);
    bufp->fullIData(oldp+1677,(0x18U),32);
    bufp->fullIData(oldp+1678,(0xaU),32);
    bufp->fullIData(oldp+1679,(0xcU),32);
    bufp->fullSData(oldp+1680,(0U),12);
    bufp->fullWData(oldp+1681,(VysyxSoCFull__ConstPool__CONST_hcfa051ba_0),528);
    bufp->fullIData(oldp+1698,(1U),32);
    bufp->fullIData(oldp+1699,(0x16U),32);
    bufp->fullIData(oldp+1700,(0x18U),32);
    bufp->fullIData(oldp+1701,(0x28U),32);
    bufp->fullIData(oldp+1702,(0x2cU),32);
    bufp->fullIData(oldp+1703,(0x28U),32);
    bufp->fullIData(oldp+1704,(3U),32);
    bufp->fullQData(oldp+1705,(0x1c01e021ULL),39);
    bufp->fullIData(oldp+1707,(0xdU),32);
    bufp->fullIData(oldp+1708,(3U),32);
    bufp->fullIData(oldp+1709,(0xbU),32);
    __Vtemp_hd67b6bdc__0[0U] = 0xd8070048U;
    __Vtemp_hd67b6bdc__0[1U] = 0x2e01800U;
    __Vtemp_hd67b6bdc__0[2U] = 0xd0070040U;
    __Vtemp_hd67b6bdc__0[3U] = 0x1000e00U;
    __Vtemp_hd67b6bdc__0[4U] = 0x18U;
    bufp->fullWData(oldp+1710,(__Vtemp_hd67b6bdc__0),143);
    bufp->fullIData(oldp+1715,(0xbU),32);
    bufp->fullIData(oldp+1716,(5U),32);
    __Vtemp_h7a7f51fb__0[0U] = 0xfc082047U;
    __Vtemp_h7a7f51fb__0[1U] = 0x500880U;
    __Vtemp_h7a7f51fb__0[2U] = 0U;
    bufp->fullWData(oldp+1717,(__Vtemp_h7a7f51fb__0),65);
    bufp->fullIData(oldp+1720,(5U),32);
    bufp->fullIData(oldp+1721,(7U),32);
    bufp->fullQData(oldp+1722,(0xdc018b804ef00aULL),57);
    bufp->fullIData(oldp+1724,(0x13U),32);
    bufp->fullIData(oldp+1725,(0x11U),32);
    bufp->fullWData(oldp+1726,(VysyxSoCFull__ConstPool__CONST_h2ac0b763_0),319);
    bufp->fullIData(oldp+1736,(0x1dU),32);
    bufp->fullIData(oldp+1737,(2U),32);
    __Vtemp_h21d89b9f__0[0U] = 0x73027U;
    __Vtemp_h21d89b9f__0[1U] = 0x73024302U;
    __Vtemp_h21d89b9f__0[2U] = 0U;
    bufp->fullWData(oldp+1738,(__Vtemp_h21d89b9f__0),88);
    bufp->fullIData(oldp+1741,(2U),32);
    bufp->fullIData(oldp+1742,(8U),32);
    __Vtemp_h9508d738__0[0U] = 0x7f12008U;
    __Vtemp_h9508d738__0[1U] = 0x6f110U;
    __Vtemp_h9508d738__0[2U] = 0xb00005b8U;
    __Vtemp_h9508d738__0[3U] = 0x3305004U;
    __Vtemp_h9508d738__0[4U] = 0x20023000U;
    __Vtemp_h9508d738__0[5U] = 0x34100134U;
    bufp->fullWData(oldp+1743,(__Vtemp_h9508d738__0),192);
    bufp->fullIData(oldp+1749,(8U),32);
    bufp->fullCData(oldp+1750,(4U),3);
    bufp->fullBit(oldp+1751,(0U));
    bufp->fullBit(oldp+1752,(1U));
    bufp->fullCData(oldp+1753,(0xebU),8);
    bufp->fullCData(oldp+1754,(0x38U),8);
    bufp->fullCData(oldp+1755,(8U),8);
    bufp->fullCData(oldp+1756,(0x88U),8);
    bufp->fullIData(oldp+1757,(9U),32);
    bufp->fullIData(oldp+1758,(4U),32);
    bufp->fullIData(oldp+1759,(0x2000U),32);
    bufp->fullIData(oldp+1760,(0x2710U),32);
    bufp->fullIData(oldp+1761,(0x30cU),32);
    bufp->fullCData(oldp+1762,(7U),4);
    bufp->fullCData(oldp+1763,(3U),4);
    bufp->fullCData(oldp+1764,(5U),4);
    bufp->fullCData(oldp+1765,(4U),4);
    bufp->fullCData(oldp+1766,(6U),4);
    bufp->fullCData(oldp+1767,(2U),4);
    bufp->fullCData(oldp+1768,(1U),4);
    bufp->fullSData(oldp+1769,(0x20U),13);
    bufp->fullCData(oldp+1770,(8U),4);
    bufp->fullCData(oldp+1771,(9U),4);
    bufp->fullIData(oldp+1772,(6U),32);
    bufp->fullIData(oldp+1773,(0x3fffffffU),32);
    bufp->fullIData(oldp+1774,(0x10001000U),32);
    bufp->fullIData(oldp+1775,(0x10001fffU),32);
    bufp->fullCData(oldp+1776,(4U),5);
    bufp->fullCData(oldp+1777,(0x10U),5);
    bufp->fullCData(oldp+1778,(0x14U),5);
    bufp->fullCData(oldp+1779,(0x18U),5);
    bufp->fullIData(oldp+1780,(0x100U),32);
    bufp->fullIData(oldp+1781,(0x2440U),32);
    bufp->fullIData(oldp+1782,(0x2540U),32);
    bufp->fullCData(oldp+1783,(0xfU),4);
    bufp->fullCData(oldp+1784,(0xaU),4);
    bufp->fullIData(oldp+1785,(0x10U),32);
    bufp->fullCData(oldp+1786,(2U),3);
    bufp->fullCData(oldp+1787,(3U),3);
    bufp->fullCData(oldp+1788,(5U),3);
    bufp->fullIData(oldp+1789,(0x200000U),32);
    bufp->fullIData(oldp+1790,(0x60U),32);
    bufp->fullIData(oldp+1791,(0x90U),32);
    bufp->fullIData(oldp+1792,(0x310U),32);
    bufp->fullIData(oldp+1793,(0x320U),32);
    bufp->fullIData(oldp+1794,(0x23U),32);
    bufp->fullIData(oldp+1795,(0x203U),32);
    bufp->fullIData(oldp+1796,(0x20dU),32);
    bufp->fullIData(oldp+1797,(0x211ffff4U),32);
    bufp->fullCData(oldp+1798,(7U),3);
    bufp->fullCData(oldp+1799,(6U),3);
    bufp->fullIData(oldp+1800,(0x400000U),32);
}
