module ysyx(
  input         clock,
  input         reset,
   // 1. 添加例化时用到的 io_interrupt 端口（未使用则定义为输入）
  input         io_interrupt,  // 新增：匹配例化时的绑定
  // ------------------------ 写地址通道 ------------------------
  output        io_slave_awready,   // slave输出（对应master输入）
  input         io_slave_awvalid,   // slave输入（对应master输出）
  input  [3:0]  io_slave_awid,      // slave输入（对应master输出）
  input  [31:0] io_slave_awaddr,    // slave输入（对应master输出）
  input  [7:0]  io_slave_awlen,     // slave输入（对应master输出）
  input  [2:0]  io_slave_awsize,    // slave输入（对应master输出）
  input  [1:0]  io_slave_awburst,   // slave输入（对应master输出）
  
  // ------------------------ 写数据通道 ------------------------
  output        io_slave_wready,    // slave输出（对应master输入）
  input         io_slave_wvalid,    // slave输入（对应master输出）
  input  [31:0] io_slave_wdata,     // slave输入（对应master输出）
  input  [3:0]  io_slave_wstrb,     // slave输入（对应master输出）
  input         io_slave_wlast,     // slave输入（对应master输出）
  
  // ------------------------ 写响应通道 ------------------------
  input         io_slave_bready,    // slave输入（对应master输出）
  output        io_slave_bvalid,    // slave输出（对应master输入）
  output [3:0]  io_slave_bid,       // slave输出（对应master输入）
  output [1:0]  io_slave_bresp,     // slave输出（对应master输入）
  
  // ------------------------ 读地址通道 ------------------------
  output        io_slave_arready,   // slave输出（对应master输入）
  input         io_slave_arvalid,   // slave输入（对应master输出）
  input  [3:0]  io_slave_arid,      // slave输入（对应master输出）
  input  [31:0] io_slave_araddr,    // slave输入（对应master输出）
  input  [7:0]  io_slave_arlen,     // slave输入（对应master输出）
  input  [2:0]  io_slave_arsize,    // slave输入（对应master输出）
  input  [1:0]  io_slave_arburst,   // slave输入（对应master输出）
  
  // ------------------------ 读数据通道 ------------------------
  input         io_slave_rready,    // slave输入（对应master输出）
  output        io_slave_rvalid,    // slave输出（对应master输入）
  output [1:0]  io_slave_rresp,     // slave输出（对应master输入）
  output [31:0] io_slave_rdata,     // slave输出（对应master输入）
  output        io_slave_rlast,     // slave输出（对应master输入）
  output [3:0]  io_slave_rid,       // slave输出（对应master输入

//读地址通道 
  output        io_master_arvalid, //   io_ifu_reqValid/io_lsu_reqValid-->
  input         io_master_arready, //   -->存储器准备好接受读地址
  output [31:0] io_master_araddr, //    io_ifu_raddr/io_lsu_raddr-->
  output [ 3:0] io_master_arid,   //    -->读地址ID
  output [ 7:0] io_master_arlen,  //    -->读地址长度
  output [ 2:0] io_master_arsize, //    -->读地址大小
  output [ 1:0] io_master_arburst, //   -->读地址突发类型
//读数据通道
  input         io_master_rvalid, //    -->存储器准备好返回数据
  output        io_master_rready, //    准备好读取存储器返回的数据-->
  input  [31:0] io_master_rdata, //     -->io_ifu_rdata/io_lsu_rdata
  input  [ 1:0] io_master_rresp, //     -->存储器返回的数据响应状态
  input          io_master_rlast, //    -->存储器返回的数据是否是最后一个
  input  [ 3:0]  io_master_rid, //      -->存储器返回的数据ID
//写地址通道 
  output         io_master_awvalid, //   准备好接受写地址-->
  input         io_master_awready, //   -->存储器准备好接受写地址
  output [31:0] io_master_awaddr, //    -->写地址
  output [ 3:0] io_master_awid,   //    -->写地址ID
  output [ 7:0] io_master_awlen,  //    -->写地址长度
  output [ 2:0] io_master_awsize, //    -->写地址大小
  output [ 1:0] io_master_awburst, //   -->写地址突发类型
//写数据通道
  output        io_master_wvalid, //    准备好接受写数据-->
  input         io_master_wready, //    -->存储器准备好接受写数据
  output [31:0] io_master_wdata, //     -->写数据
  output [ 3:0] io_master_wstrb,  //     -->写数据字节选通
  output        io_master_wlast,  //     -->写数据是否是最后一个
//写响应通道
  input         io_master_bvalid, //    -->存储器准备好返回写响应
  output        io_master_bready, //    准备好接受写响应-->
  input  [ 1:0] io_master_bresp,  //     -->写响应状态
  input  [ 3:0] io_master_bid    //     -->写响应ID
);

parameter PC_START = 32'h30000000;

`ifdef verilator
import "DPI-C" function void ebreak(input int a0_val, input int exit_pc);
always @(posedge clock) begin
      if(instruction == 32'h00100073)begin
        ebreak(ReturnA0,PC);
      end
      // if(icache_rlast)begin
      //   $display("pc = %x",PC);
      // end
  end
`endif
// 将这些由 reg 改为 wire（因为它们由 IFU 模块输出驱动）
  wire         ifu_arvalid;
  wire [31:0]  ifu_araddr;
  wire [2:0]   ifu_arsize;
  wire [1:0]   ifu_arburst;
  wire [3:0]   ifu_arid;
  wire [7:0]   ifu_arlen;
  wire         ifu_arready;
  // mem 到 IFU 的 AXI 读数据通道信号
  wire         ifu_rvalid;
  wire         ifu_rready;
  wire [31:0]  ifu_rdata;
  wire [1:0]   ifu_rresp;
  wire         ifu_rlast;
  wire [ 3:0]  ifu_rid;

  wire         lsu_arvalid;
  wire [31:0]  lsu_araddr;
  wire [2:0]   lsu_arsize;
  wire [1:0]   lsu_arburst;
  wire [3:0]   lsu_arid;
  wire [7:0]   lsu_arlen;
  wire         lsu_arready;
  // mem 到 LSU 的 AXI 读数据通道信号
  wire         lsu_rvalid;
  wire         lsu_rready;
  wire [31:0]  lsu_rdata;
  wire [1:0]   lsu_rresp;
  wire         lsu_rlast;
  wire [3:0]   lsu_rid;

  wire         lsu_awvalid;
  wire [31:0]  lsu_awaddr;
  wire [2:0]   lsu_awsize;  
  wire [1:0]   lsu_awburst;
  wire [3:0]   lsu_awid;
  wire [7:0]   lsu_awlen;
  wire         lsu_awready;
  // mem 到 LSU 的 AXI 写数据通道信号
  wire         lsu_wvalid;
  wire [31:0]  lsu_wdata; 
  wire [3:0]   lsu_wstrb;  
  wire         lsu_wlast;
  wire         lsu_wready;
  wire         lsu_bvalid;
  wire         lsu_bready;
  wire [1:0]   lsu_bresp;
  wire [3:0]   lsu_bid;

  reg  [31:0]       instruction;
  wire              icache_rlast;
  wire              icache_arvalid;
  wire              icache_wash;

  assign icache_wash = (InstrNum == 12'd40)?1'b1:1'b0;

icache #(
    .PC_START(PC_START)
  ) u_icache (
    .i_clk      (clock),
    .i_rst      (reset),
    .i_JumpPC   (JumpPC),
    .i_JumpPC_en(JumpPC_en),
    .o_PC       (PC),
    .i_is_loadmemory(is_loadmemory),
    .i_is_storememory(is_storememory),
    .o_icache_arvalid(ifu_arvalid),
    .i_icache_arready(ifu_arready),
    .i_icache_rvalid (ifu_rvalid),
    .o_icache_rready (ifu_rready),
    .i_icache_rlast  (ifu_rlast),
    .o_icache_araddr (ifu_araddr),
    .o_icache_arsize (ifu_arsize),
    .o_icache_arburst(ifu_arburst), //   -->读地址突发类型
    .o_icache_arlen  (ifu_arlen),  //   -->读地址突发长度
    .o_icache_arid   (ifu_arid),   //   -->读地址ID
    .i_lsu_bvalid (lsu_bvalid),
    .i_lsu_rlast  (lsu_rlast),
    .i_icache_data   (ifu_rdata),
    .o_instruction(instruction),
    .o_icache_rlast (icache_rlast),
    .o_ifu_arvalid (icache_arvalid),
    .i_icache_wash (icache_wash)
  );

  wire         is_loadmemory;
  wire         is_storememory;
  wire  [31:0] Imm;
  wire  [11:0] InstrNum;
  wire  [11:0] CsrNum;
  wire  [4:0]  Rs1Raddr;
  wire  [4:0]  Rs2Raddr;
  wire  [4:0]  RdRaddr; 
  wire         reqValid;
  wire         RegWen;
  wire         JumpPC_en;
  reg  [ 1:0]  AluByteIdx;
  wire [31:0]  JumpPC;
  wire [31:0]  ExuRes;       // ALU结果（暂接0，实际需连接EXU输出）
  wire [31:0]  PC;           // PC值（暂接IfuRaddr，实际需按流水线传递）
  wire [31:0]  CsrData;      // CSR写数据（暂接0，实际需连接CSR相关逻辑输出）
  wire [31:0]  CsrExuData; 
  wire [31:0]  Rs1Data;      // 寄存器堆Rs1读数据（WBU输出）
  wire [31:0]  Rs2Data;      // 寄存器堆Rs2读数据（WBU输出）
  wire [31:0]  ReturnA0;     // A0寄存器返回值（WBU输出）
  wire [ 3:0]  WmaskSh;

ysyx_25010028_IDU U_IDU (
    .i_instr    (instruction),
    .i_ifu_rlast (icache_rlast),
    .i_lsu_rlast(lsu_rlast),
    .o_Rs1Raddr (Rs1Raddr),
    .o_Rs2Raddr (Rs2Raddr),
    .o_RdRaddr  (RdRaddr),
    .o_Imm      (Imm),
    .o_InstrNum (InstrNum),
    .o_is_loadmemory (is_loadmemory),
    .o_is_storememory(is_storememory),
    .o_RegWen   (RegWen),
    .o_CsrNum   (CsrNum)
  );

  wire [31:0]  io_lsu_addr;
  assign io_lsu_addr = (is_loadmemory || is_storememory) ? Rs1Data+Imm : PC_START;
  always @(posedge clock) begin
    if(reset) begin
      AluByteIdx <= 2'b00;
    end
    else if (is_loadmemory || is_storememory) begin
      AluByteIdx <= io_lsu_addr[1:0];
    end
    else begin
      AluByteIdx <= AluByteIdx;
    end
  end
  assign lsu_wdata = ExuRes << io_lsu_addr[1:0]*8;
   ysyx_25010028_ALU #(
    .DATA_WIDTH(32)  
  ) U_ALU (
    .i_Rs1Data   (Rs1Data),    
    .i_Rs2Data   (Rs2Data),    
    .i_Imm       (Imm),        
    .i_PC        (PC),   
    .i_CsrData   (CsrData),
    .i_InstrNum  (InstrNum),   // 输入：指令编号（来自IDU，控制ALU运算类型）
    .o_ExuRes    (ExuRes),      // 输出：ALU结果（传至WBU用于寄存器写回）
    .o_CsrExuData(CsrExuData),
    .o_JumpPC_en (JumpPC_en),
    .o_JumpPC    (JumpPC),
    .o_lsu_araddr(lsu_araddr),
    .o_lsu_arlen (lsu_arlen),
    .o_lsu_arsize(lsu_arsize),
    .o_lsu_arburst(lsu_arburst),
    .o_lsu_arid  (lsu_arid),
    .i_lsu_rdata (lsu_rdata),
    .o_lsu_awaddr(lsu_awaddr),
    .o_lsu_awlen (lsu_awlen),
    .o_lsu_awsize(lsu_awsize),
    .o_lsu_awburst(lsu_awburst),
    .o_lsu_wstrb (lsu_wstrb),
    .o_lsu_wlast  (lsu_wlast),
    .i_ByteIdx   (AluByteIdx),
    .i_lsu_rlast (lsu_rlast),
    .i_lsu_arvalid(lsu_arvalid),
    .i_lsu_arready(lsu_arready),
    .i_lsu_awvalid(lsu_awvalid),
    .i_lsu_awready(lsu_awready),
    .i_lsu_wvalid(lsu_wvalid),
    .i_lsu_wready(lsu_wready)
    
  );

    ysyx_25010028_WBU #(
    .ADDR_WIDTH(5),   // 5位地址→32个通用寄存器（RISC-V标准）
    .DATA_WIDTH(32)   // 32位数据宽度（RISC-V标准）
  ) U_WBU (
    .i_clk         (clock),          // 时钟信号
    .i_RegWen      (RegWen),       // 寄存器写使能（来自IDU）t_Data
    .i_InstrNum    (InstrNum),     // 指令编号（来自IDU）
    .i_CsrNum      (CsrNum),       // CSR编号（来自IDU）
    .i_Rs1Raddr    (Rs1Raddr),     // Rs1读地址（来自IDU）
    .i_Rs2Raddr    (Rs2Raddr),     // Rs2读地址（来自IDU）
    .i_RdRaddr     (RdRaddr),      // Rd写地址（来自IDU）
    .i_ExuRes      (ExuRes),       // ALU结果（暂接0，需连EXU）
    .i_PC          (PC),           // PC值（暂接IfuRaddr，需按流水线调整）
    .i_CsrExuData  (CsrExuData),
    .o_Rs1Data     (Rs1Data),      // Rs1读数据（输出至EXU/LSU等）
    .o_Rs2Data     (Rs2Data),      // Rs2读数据（输出至EXU/LSU等）
    .o_CsrData     (CsrData),      // CSR写数据（暂接0，需连相关逻辑）
    .o_ReturnA0    (ReturnA0),     // A0返回值（输出至系统调用等）
    .i_ifu_rlast   (icache_rlast)
    
  );

  ysyx_25010028_LSU U_LSU (
    .i_clk          (clock),                // 时钟
    .i_rst          (reset),                // 复位
    .i_ifu_rlast    (icache_rlast),            // IFU最后一拍信号 → LSU
    .o_lsu_arvalid  (lsu_arvalid),          // LSU读地址有效 → Arbiter
    .i_lsu_arready  (lsu_arready),          // Arbiter读地址就绪 → LSU
    .i_lsu_rvalid   (lsu_rvalid),           // Arbiter读数据有效 → LSU
    .o_lsu_rready   (lsu_rready),           // LSU读数据就绪 → Arbiter
    .o_lsu_awvalid  (lsu_awvalid),          // LSU写地址有效 → Arbiter（暂接0，需扩展Arbiter写通道）
    .i_lsu_awready  (lsu_awready),          // Arbiter写地址就绪 → LSU（暂接0）
    .o_lsu_wvalid   (lsu_wvalid),           // LSU写数据有效 → Arbiter（暂接0）
    .i_lsu_wready   (lsu_wready),           // Arbiter写数据就绪 → LSU（暂接0）
    .i_is_loadmemory(is_loadmemory),        // IDU加载指令标志 → LSU
    .i_is_storememory(is_storememory),      // IDU存储指令标志 → LSU
    .i_lsu_rlast    (lsu_rlast),            // Arbiter读最后一拍 → LSU
    .o_lsu_bready   (lsu_bready),           // LSU写响应就绪 → Arbiter（暂接0）
    .i_lsu_bvalid   (lsu_bvalid)            // LSU写响应有效 → Arbiter（暂接0）
  );


 Arbiter U_Arbiter (
    .clock(clock),
    .reset(reset),
    //读通道1(ifu)
    .i_arvalid_1(ifu_arvalid),  
    .o_arready_1(ifu_arready),
    .i_araddr_1(ifu_araddr),
    .i_arsize_1(ifu_arsize),
    .i_arburst_1(ifu_arburst),
    .i_arid_1(ifu_arid),
    .i_arlen_1(ifu_arlen),
    .i_rready_1(ifu_rready),
    .o_rvalid_1(ifu_rvalid),
    .o_rresp_1(ifu_rresp),
    .o_rdata_1(ifu_rdata),
    .o_rlast_1(ifu_rlast),
    .o_rid_1(ifu_rid),
    //读通道2(lsu)
    .i_arvalid_2(lsu_arvalid),  
    .o_arready_2(lsu_arready),
    .i_araddr_2(lsu_araddr),
    .i_arsize_2(lsu_arsize),
    .i_arburst_2(lsu_arburst),
    .i_arid_2(lsu_arid),
    .i_arlen_2(lsu_arlen),
    .i_rready_2(lsu_rready),
    .o_rvalid_2(lsu_rvalid),
    .o_rresp_2(lsu_rresp),
    .o_rdata_2(lsu_rdata),
    .o_rlast_2(lsu_rlast),
    .o_rid_2(lsu_rid),
    //读通道输出到存储器
    .o_master_arvalid(io_master_arvalid), 
    .i_master_arready(io_master_arready), 
    .o_master_araddr(io_master_araddr), 
    .o_master_arid(io_master_arid),   
    .o_master_arlen(io_master_arlen),  
    .o_master_arsize(io_master_arsize), 
    .o_master_arburst(io_master_arburst), 
    .i_master_rvalid(io_master_rvalid), 
    .o_master_rready(io_master_rready), 
    .i_master_rdata(io_master_rdata), 
    .i_master_rresp(io_master_rresp), 
    .i_master_rlast(io_master_rlast), 
    .i_master_rid(io_master_rid),
    //写通道1(lsu)
    .i_awvalid_1(lsu_awvalid),  
    .o_awready_1(lsu_awready),    
    .i_awaddr_1(lsu_awaddr),
    .i_awsize_1(lsu_awsize),
    .i_awburst_1(lsu_awburst),
    .i_awid_1(lsu_awid),
    .i_awlen_1(lsu_awlen),
    .i_wvalid_1(lsu_wvalid),
    .o_wready_1(lsu_wready),
    .i_wdata_1(lsu_wdata),
    .i_wstrb_1(lsu_wstrb),
    .i_wlast_1(lsu_wlast),
    .o_bvalid_1(lsu_bvalid),
    .i_bready_1(lsu_bready),
    .o_bresp_1(lsu_bresp),
    .o_bid_1(lsu_bid),
    //写通道输出到存储器
    .o_master_awvalid(io_master_awvalid),
    .i_master_awready(io_master_awready),
    .o_master_awaddr(io_master_awaddr),
    .o_master_awid(io_master_awid),
    .o_master_awlen(io_master_awlen),
    .o_master_awsize(io_master_awsize),
    .o_master_awburst(io_master_awburst),
    .o_master_wvalid(io_master_wvalid),
    .i_master_wready(io_master_wready),
    .o_master_wdata(io_master_wdata),
    .o_master_wstrb(io_master_wstrb),
    .o_master_wlast(io_master_wlast),
    .i_master_bvalid(io_master_bvalid),
    .o_master_bready(io_master_bready),
    .i_master_bresp(io_master_bresp),
    .i_master_bid(io_master_bid)
  );

perfomance U_perfomance (
    .clock(clock),
    .reset(reset),
    .icache_rlast(icache_rlast),
    .ifu_rlast(ifu_rlast),
    .ifu_rready(ifu_rready),
    .lsu_rlast(lsu_rlast),
    .lsu_rready(lsu_rready),
    .InstrNum(InstrNum),
    .ExuRes(ExuRes),
    .ifu_arvalid(icache_arvalid),
    .lsu_arvalid(lsu_arvalid),
    .lsu_awvalid(lsu_awvalid)
  );

  endmodule