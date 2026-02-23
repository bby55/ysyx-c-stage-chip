module soc(
    input clock,
    input reset
);

  // ==============================================
  // 第一步：定义所有 AXI 通道的中间桥接信号
  // 命名规则：axi_<通道>_<信号>，区分方向
  // ==============================================
  // ---------------- 写地址通道（AW） ----------------
  wire        axi_awvalid;  // CPU → Mem
  wire [31:0] axi_awaddr;   // CPU → Mem
  wire        axi_awready;  // Mem → CPU
  // ---------------- 写数据通道（W） -----------------
  wire        axi_wvalid;   // CPU → Mem
  wire [31:0] axi_wdata;    // CPU → Mem
  wire [3:0]  axi_wstrb;    // CPU → Mem
  wire        axi_wready;   // Mem → CPU
  // ---------------- 写响应通道（B） -----------------
  wire        axi_bvalid;   // Mem → CPU
  wire [1:0]  axi_bresp;    // Mem → CPU
  wire        axi_bready;   // CPU → Mem
  // ---------------- 读地址通道（AR） ----------------
  wire        axi_arvalid;  // CPU → Mem
  wire [31:0] axi_araddr;   // CPU → Mem
  wire        axi_arready;  // Mem → CPU
  // ---------------- 读数据通道（R） -----------------
  wire        axi_rvalid;   // Mem → CPU
  wire [31:0] axi_rdata;    // Mem → CPU
  wire [1:0]  axi_rresp;    // Mem → CPU
  wire        axi_rready;   // CPU → Mem
  wire        axi_rlast;
  // ==============================================
  // 第二步：定义 CPU 多余 AXI 信号的悬空 dummy 信号
  // ==============================================
  wire [3:0]  dummy_arid;
  wire [7:0]  dummy_arlen;
  wire [2:0]  dummy_arsize;
  wire [1:0]  dummy_arburst;
  wire [3:0]  dummy_rid;
  wire [3:0]  dummy_awid;
  wire [7:0]  dummy_awlen;
  wire [2:0]  dummy_awsize;
  wire [1:0]  dummy_awburst;
  wire        dummy_wlast;
  wire [3:0]  dummy_bid;

  // ==============================================
  // 第三步：实例化 CPU 模块 → 只连接中间信号
  // 核心规则：CPU 输出 → 中间信号；中间信号 → CPU 输入
  // ==============================================
  ysyx cpu (
    .clock                  (clock),
    .reset                  (reset),
    .io_interrupt            (1'h0),

    // ---------------- 写地址通道 ----------------
    .io_master_awready      (axi_awready),    // 中间信号 → CPU 输入（Mem 响应）
    .io_master_awvalid      (axi_awvalid),    // CPU 输出 → 中间信号（发起请求）
    .io_master_awid         (dummy_awid),     // 多余信号 → dummy
    .io_master_awaddr       (axi_awaddr),     // CPU 输出 → 中间信号（写地址）
    .io_master_awlen        (dummy_awlen),    // 多余信号 → dummy
    .io_master_awsize       (dummy_awsize),   // 多余信号 → dummy
    .io_master_awburst      (dummy_awburst),  // 多余信号 → dummy

    // ---------------- 写数据通道 ----------------
    .io_master_wready       (axi_wready),     // 中间信号 → CPU 输入（Mem 响应）
    .io_master_wvalid       (axi_wvalid),     // CPU 输出 → 中间信号（发起请求）
    .io_master_wdata        (axi_wdata),      // CPU 输出 → 中间信号（写数据）
    .io_master_wstrb        (axi_wstrb),      // CPU 输出 → 中间信号（写选通）
    .io_master_wlast        (dummy_wlast),    // 多余信号 → dummy

    // ---------------- 写响应通道 ----------------
    .io_master_bready       (axi_bready),     // CPU 输出 → 中间信号（接收就绪）
    .io_master_bvalid       (axi_bvalid),     // 中间信号 → CPU 输入（Mem 响应）
    .io_master_bid          (dummy_bid),      // 多余信号 → dummy
    .io_master_bresp        (axi_bresp),      // 中间信号 → CPU 输入（响应状态）

    // ---------------- 读地址通道 ----------------
    .io_master_arready      (axi_arready),    // 中间信号 → CPU 输入（Mem 响应）
    .io_master_arvalid      (axi_arvalid),    // CPU 输出 → 中间信号（发起请求）
    .io_master_arid         (dummy_arid),     // 多余信号 → dummy
    .io_master_araddr       (axi_araddr),     // CPU 输出 → 中间信号（读地址）
    .io_master_arlen        (dummy_arlen),    // 多余信号 → dummy
    .io_master_arsize       (dummy_arsize),   // 多余信号 → dummy
    .io_master_arburst      (dummy_arburst),  // 多余信号 → dummy

    // ---------------- 读数据通道 ----------------
    .io_master_rready       (axi_rready),     // CPU 输出 → 中间信号（接收就绪）
    .io_master_rvalid       (axi_rvalid),     // 中间信号 → CPU 输入（Mem 响应）
    .io_master_rid          (dummy_rid),      // 多余信号 → dummy
    .io_master_rdata        (axi_rdata),      // 中间信号 → CPU 输入（读数据）
    .io_master_rresp        (axi_rresp),      // 中间信号 → CPU 输入（响应状态）
    .io_master_rlast        (axi_rlast),    // 多余信号 → dummy

    // ---------------- CPU Slave 端口（默认） ----------------
    .io_slave_awready       (/* unused */),
    .io_slave_awvalid       (1'h0),
    .io_slave_awid          (4'h0),
    .io_slave_awaddr        (32'h0),
    .io_slave_awlen         (8'h0),
    .io_slave_awsize        (3'h0),
    .io_slave_awburst       (2'h0),
    .io_slave_wready        (/* unused */),
    .io_slave_wvalid        (1'h0),
    .io_slave_wdata         (32'h0),
    .io_slave_wstrb         (4'h0),
    .io_slave_wlast         (1'h0),
    .io_slave_bready        (1'h0),
    .io_slave_bvalid        (/* unused */),
    .io_slave_bid           (/* unused */),
    .io_slave_bresp         (/* unused */),
    .io_slave_arready       (/* unused */),
    .io_slave_arvalid       (1'h0),
    .io_slave_arid          (4'h0),
    .io_slave_araddr        (32'h0),
    .io_slave_arlen         (8'h0),
    .io_slave_arsize        (3'h0),
    .io_slave_arburst       (2'h0),
    .io_slave_rready        (1'h0),
    .io_slave_rvalid        (/* unused */),
    .io_slave_rid           (/* unused */),
    .io_slave_rdata         (/* unused */),
    .io_slave_rresp         (/* unused */),
    .io_slave_rlast         (/* unused */)
  );

  // ==============================================
  // 第四步：实例化 Mem 模块 → 只连接中间信号
  // 核心规则：中间信号 → Mem 输入；Mem 输出 → 中间信号
  // ==============================================
  ysyx_25020042_mem U_mem (
    .clock(clock),

    // ---------------- 读地址通道 ----------------
    .slave_araddr(axi_araddr),    // 中间信号 → Mem 输入（CPU 地址）
    .slave_arvalid(axi_arvalid),  // 中间信号 → Mem 输入（CPU 请求）
    .slave_arready(axi_arready),  // Mem 输出 → 中间信号（Mem 就绪）

    // ---------------- 读数据通道 ----------------
    .slave_rdata(axi_rdata),      // Mem 输出 → 中间信号（Mem 数据）
    .slave_rvalid(axi_rvalid),    // Mem 输出 → 中间信号（Mem 响应）
    .slave_rresp(axi_rresp),      // Mem 输出 → 中间信号（响应状态）
    .slave_rready(axi_rready),    // 中间信号 → Mem 输入（CPU 就绪）
    .slave_rlast(axi_rlast),    // 多余信号 ← dummy

    // ---------------- 写地址通道 ----------------
    .slave_awaddr(axi_awaddr),    // 中间信号 → Mem 输入（CPU 地址）
    .slave_awvalid(axi_awvalid),  // 中间信号 → Mem 输入（CPU 请求）
    .slave_awready(axi_awready),  // Mem 输出 → 中间信号（Mem 就绪）

    // ---------------- 写数据通道 ----------------
    .slave_wdata(axi_wdata),      // 中间信号 → Mem 输入（CPU 数据）
    .slave_wstrb(axi_wstrb),      // 中间信号 → Mem 输入（CPU 选通）
    .slave_wvalid(axi_wvalid),    // 中间信号 → Mem 输入（CPU 请求）
    .slave_wready(axi_wready),    // Mem 输出 → 中间信号（Mem 就绪）

    // ---------------- 写响应通道 ----------------
    .slave_bvalid(axi_bvalid),    // Mem 输出 → 中间信号（Mem 响应）
    .slave_bready(axi_bready),    // 中间信号 → Mem 输入（CPU 就绪）
    .slave_bresp(axi_bresp)       // Mem 输出 → 中间信号（响应状态）
  );

endmodule