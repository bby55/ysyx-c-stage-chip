module ysyx(
  input         clock,
  input         reset,

  input         io_interrupt,
  // ------------------------ 写地址通道 ------------------------
  output        io_slave_awready,
  input         io_slave_awvalid,
  input  [3:0]  io_slave_awid,
  input  [31:0] io_slave_awaddr,
  input  [7:0]  io_slave_awlen,
  input  [2:0]  io_slave_awsize,
  input  [1:0]  io_slave_awburst,
  
  // ------------------------ 写数据通道 ------------------------
  output        io_slave_wready,
  input         io_slave_wvalid,
  input  [31:0] io_slave_wdata,
  input  [3:0]  io_slave_wstrb,
  input         io_slave_wlast,
  
  // ------------------------ 写响应通道 ------------------------
  input         io_slave_bready,
  output        io_slave_bvalid,
  output [3:0]  io_slave_bid,
  output [1:0]  io_slave_bresp,
  
  // ------------------------ 读地址通道 ------------------------
  output        io_slave_arready,
  input         io_slave_arvalid,
  input  [3:0]  io_slave_arid,
  input  [31:0] io_slave_araddr,
  input  [7:0]  io_slave_arlen,
  input  [2:0]  io_slave_arsize,
  input  [1:0]  io_slave_arburst,
  
  // ------------------------ 读数据通道 ------------------------
  input         io_slave_rready,
  output        io_slave_rvalid,
  output [1:0]  io_slave_rresp,
  output [31:0] io_slave_rdata,
  output        io_slave_rlast,
  output [3:0]  io_slave_rid,

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

// `ifdef verilator
// import "DPI-C" function void ebreak(input int a0_val, input int exit_pc);
// always @(posedge clock) begin
//       if(instruction == 32'h00100073)begin
//         ebreak(ReturnA0,PC);
//       end
//       // if(icache_rlast)begin
//       //   $display("pc = %x",PC);
//       // end
//   end
// `endif


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


  wire [4:0]   Rs1;
  wire [4:0]   Rs2;
  wire [31:0]  Rs1Data;
  wire [31:0]  Rs2Data;
  wire [31:0]  LS_Rs1Data;
  wire [31:0]  RAW_Rs1Data;
  wire [31:0]  RAW_Rs2Data;
  wire         Load_Use;


//==========IF/ID==========
  wire         IF_ID_Valid;
  wire         ID_IF_Ready;
  wire [31:0]  IF_ID_PC;
  wire [31:0]  IF_ID_Instr;


//=========ID/EX===========
  wire          ID_EX_Valid;
  wire          EX_ID_Ready;
  wire  [4:0]   ID_EX_Rs1;
  wire  [4:0]   ID_EX_Rs2;
  wire  [4:0]   ID_EX_Rd;
  wire  [31:0]  ID_EX_Imm;
  wire          ID_EX_RegWen;
  wire  [11:0]  ID_EX_InstrNum;
  wire  [11:0]  ID_EX_CsrNum;
  wire          ID_EX_IsLoad;
  wire          ID_EX_IsStore;
  wire  [31:0]  ID_EX_PC;
  wire  [31:0]  ID_EX_Instr;
  wire  [31:0]  ID_EX_PC_w;


// ========EX/LS=============
  wire          EX_LS_Valid;
  wire          LS_EX_Ready;
  wire  [31:0]  EX_LS_PC;
  wire  [31:0]  EX_LS_Instr;
  wire  [11:0]  EX_LS_InstrNum;
  wire  [31:0]  EX_LS_ExuRes;
  wire  [31:0]  EX_LS_CsrExuData;
  wire  [31:0]  EX_LS_JumpPC;
  wire          EX_LS_JumpPC_en;
  wire  [4:0]   EX_LS_Rs1;
  wire  [4:0]   EX_LS_Rs2;
  wire  [4:0]   EX_LS_Rd;
  wire  [31:0]  EX_LS_Imm;
  wire          EX_LS_RegWen;
  wire  [11:0]  EX_LS_CsrNum;
  wire          EX_LS_IsLoad;
  wire          EX_LS_IsStore;
  wire          EX_LS_IsLoad_w;
  wire          EX_LS_IsStore_w;
  wire  [31:0]  EX_LS_Rs1Data;

//=========LS/WB=============
  wire          LS_WB_Valid;
  wire          WB_LS_Ready;
  wire  [31:0]  LS_WB_PC;
  wire  [31:0]  LS_WB_Instr;
  wire  [11:0]  LS_WB_InstrNum;
  wire  [31:0]  LS_WB_ExuRes;
  wire  [31:0]  LS_WB_CsrExuData;
  wire  [31:0]  LS_WB_JumpPC;
  wire          LS_WB_JumpPC_en;
  wire  [4:0]   LS_WB_Rs1;
  wire  [4:0]   LS_WB_Rs2;
  wire  [4:0]   LS_WB_Rd;
  wire  [31:0]  LS_WB_Imm;
  wire          LS_WB_RegWen;
  wire  [11:0]  LS_WB_CsrNum;
  wire          LS_WB_IsLoad;
  wire          LS_WB_IsStore;
  wire  [31:0]  LS_WB_LData;

  //========WB==============
  wire  [4:0]   WB_Rd;
  wire  [31:0]  WB_Data;
  wire          WB_RegWen;
  wire          WB_Done;
  wire  [31:0]  ReturnA0;
// ysyx_25010028_IFU #(
//     .PC_START(PC_START)
//   ) U_IFU (
//     .clock        (clock),
//     .reset        (reset),
//     .i_JumpPC     (EX_LS_JumpPC),
//     .i_JumpPC_en  (EX_LS_JumpPC_en),

//     .o_ifu_arvalid(ifu_arvalid),
//     .i_ifu_arready(ifu_arready),
//     .i_ifu_rvalid (ifu_rvalid),
//     .o_ifu_rready (ifu_rready),
//     .i_ifu_rlast  (ifu_rlast),
//     .o_ifu_araddr (ifu_araddr),
//     .o_ifu_arsize (ifu_arsize),
//     .o_ifu_arburst(ifu_arburst),
//     .o_ifu_arlen  (ifu_arlen),
//     .o_ifu_arid   (ifu_arid), 
//     .i_ifu_rdata  (ifu_rdata),

//     .IF_ID_Valid  (IF_ID_Valid),
//     .ID_IF_Ready  (ID_IF_Ready),
//     .IF_ID_PC     (IF_ID_PC),
//     .IF_ID_Instr  (IF_ID_Instr)
//   );

  icache #(
    .PC_START(PC_START)
  ) u_icache (
    .clock      (clock),
    .reset      (reset),
    .i_JumpPC   (EX_LS_JumpPC),
    .i_JumpPC_en(EX_LS_JumpPC_en),
    
    .o_icache_arvalid(ifu_arvalid),
    .i_icache_arready(ifu_arready),
    .i_icache_rvalid (ifu_rvalid),
    .o_icache_rready (ifu_rready),
    .i_icache_rlast  (ifu_rlast),
    .o_icache_araddr (ifu_araddr),
    .o_icache_arsize (ifu_arsize),
    .o_icache_arburst(ifu_arburst),
    .o_icache_arlen  (ifu_arlen),
    .o_icache_arid   (ifu_arid),
    .i_icache_data   (ifu_rdata),

    .IF_ID_Valid     (IF_ID_Valid),
    .ID_IF_Ready     (ID_IF_Ready),
    .IF_ID_PC        (IF_ID_PC),
    .IF_ID_Instr     (IF_ID_Instr),

    .i_icache_wash   ()
  );


ysyx_25010028_IDU U_IDU(
  .clock          (clock),
  .reset          (reset),
  .IF_ID_Instr    (IF_ID_Instr),
  .IF_ID_PC       (IF_ID_PC),
  .IF_ID_Valid    (IF_ID_Valid),
  .ID_IF_Ready    (ID_IF_Ready),

  .ID_EX_Valid    (ID_EX_Valid),
  .EX_ID_Ready    (EX_ID_Ready),
  .ID_EX_Rs1      (ID_EX_Rs1),
  .ID_EX_Rs2      (ID_EX_Rs2),
  .ID_EX_Rd       (ID_EX_Rd),
  .ID_EX_Imm      (ID_EX_Imm),
  .ID_EX_RegWen   (ID_EX_RegWen),
  .ID_EX_InstrNum (ID_EX_InstrNum),
  .ID_EX_CsrNum   (ID_EX_CsrNum),
  .ID_EX_IsLoad   (ID_EX_IsLoad),
  .ID_EX_IsStore  (ID_EX_IsStore),
  .ID_EX_PC       (ID_EX_PC),
  .ID_EX_Instr    (ID_EX_Instr),

  .EX_LS_Rd       (EX_LS_Rd),
  .LS_WB_Rd       (LS_WB_Rd),
  .EX_LS_ExuRes   (EX_LS_ExuRes),
  .LS_WB_ExuRes   (LS_WB_ExuRes),
  .LS_WB_LData    (LS_WB_LData),
  .EX_LS_Valid    (EX_LS_Valid),
  .LS_EX_Ready    (LS_EX_Ready),
  .EX_LS_RegWen   (EX_LS_RegWen),
  .LS_WB_RegWen   (LS_WB_RegWen),
  .EX_LS_IsLoad   (EX_LS_IsLoad),
  .LS_WB_IsLoad   (LS_WB_IsLoad),

  .RAW_Rs1Data    (RAW_Rs1Data),
  .RAW_Rs2Data    (RAW_Rs2Data),
  .Rs1            (Rs1),
  .Rs2            (Rs2),
  .Rs1Data        (Rs1Data),    
  .Rs2Data        (Rs2Data),

  .ID_EX_PC_w     (ID_EX_PC_w),
  .Load_Use       (Load_Use)
  
);



 ysyx_25010028_ALU #(
    .DATA_WIDTH(32)  
  ) U_ALU (
    .clock           (clock),
    .reset           (reset),
    .i_CsrData       (),    

    .ID_EX_Valid     (ID_EX_Valid),
    .EX_ID_Ready     (EX_ID_Ready),
    .ID_EX_Imm       (ID_EX_Imm),        
    .ID_EX_PC        (ID_EX_PC),   
    .ID_EX_Instr     (ID_EX_Instr),
    .ID_EX_InstrNum  (ID_EX_InstrNum),
    .ID_EX_Rs1       (ID_EX_Rs1),        
    .ID_EX_Rs2       (ID_EX_Rs2),   
    .ID_EX_Rd        (ID_EX_Rd),
    .ID_EX_CsrNum    (ID_EX_CsrNum),
    .ID_EX_RegWen    (ID_EX_RegWen),
    .ID_EX_IsLoad    (ID_EX_IsLoad),
    .ID_EX_IsStore   (ID_EX_IsStore),

    .EX_LS_Valid     (EX_LS_Valid),
    .LS_EX_Ready     (LS_EX_Ready),
    .EX_LS_PC        (EX_LS_PC),
    .EX_LS_Instr     (EX_LS_Instr),
    .EX_LS_InstrNum  (EX_LS_InstrNum),
    .EX_LS_ExuRes    (EX_LS_ExuRes),
    .EX_LS_CsrExuData(EX_LS_CsrExuData),
    .EX_LS_JumpPC    (EX_LS_JumpPC),
    .EX_LS_JumpPC_en (EX_LS_JumpPC_en),
    .EX_LS_Rs1       (EX_LS_Rs1),        
    .EX_LS_Rs2       (EX_LS_Rs2),   
    .EX_LS_Rd        (EX_LS_Rd),
    .EX_LS_Imm       (EX_LS_Imm),
    .EX_LS_CsrNum    (EX_LS_CsrNum),
    .EX_LS_RegWen    (EX_LS_RegWen),
    .EX_LS_IsLoad    (EX_LS_IsLoad),
    .EX_LS_IsStore   (EX_LS_IsStore),
    .EX_LS_IsLoad_w  (EX_LS_IsLoad_w),
    .EX_LS_IsStore_w (EX_LS_IsStore_w),
    .EX_LS_Rs1Data   (EX_LS_Rs1Data),


    .RAW_Rs1Data     (RAW_Rs1Data),
    .RAW_Rs2Data     (RAW_Rs2Data),

    .ID_EX_PC_w      (ID_EX_PC_w),
    .Load_Use        (Load_Use)


  );


  ysyx_25010028_RegisterFile #(
    .ADDR_WIDTH(5),  
    .DATA_WIDTH(32)
) U_REG (
    .i_clk(clock),
    .i_RegWen(WB_RegWen),
    .i_Rs1Raddr(Rs1),
    .i_Rs2Raddr(Rs2),
    .i_RdRaddr(WB_Rd),
    .i_ExuRes(WB_Data),
    .o_Rs1Data(Rs1Data),
    .o_Rs2Data(Rs2Data),
    .o_ReturnA0(ReturnA0),
    .o_A5Data()
);

  ysyx_25010028_LSU U_LSU (
    .clock           (clock),
    .reset           (reset),

    .EX_LS_Valid     (EX_LS_Valid),
    .LS_EX_Ready     (LS_EX_Ready),

    .EX_LS_ExuRes    (EX_LS_ExuRes),
    .EX_LS_CsrExuData(EX_LS_CsrExuData),
    .EX_LS_JumpPC    (EX_LS_JumpPC),
    .EX_LS_JumpPC_en (EX_LS_JumpPC_en),
    .EX_LS_PC        (EX_LS_PC),
    .EX_LS_Instr     (EX_LS_Instr),
    .EX_LS_InstrNum  (EX_LS_InstrNum),
    .EX_LS_Rs1       (EX_LS_Rs1),
    .EX_LS_Rs2       (EX_LS_Rs2),
    .EX_LS_Rd        (EX_LS_Rd),
    .EX_LS_Imm       (EX_LS_Imm),
    .EX_LS_RegWen    (EX_LS_RegWen),
    .EX_LS_CsrNum    (EX_LS_CsrNum),
    .EX_LS_IsLoad    (EX_LS_IsLoad),
    .EX_LS_IsStore   (EX_LS_IsStore),
    .EX_LS_IsLoad_w  (EX_LS_IsLoad_w),
    .EX_LS_IsStore_w (EX_LS_IsStore_w),
    .EX_LS_Rs1Data   (EX_LS_Rs1Data),

    .WB_LS_Ready     (WB_LS_Ready),
    .LS_WB_Valid     (LS_WB_Valid),

    .LS_WB_ExuRes    (LS_WB_ExuRes),
    .LS_WB_CsrExuData(LS_WB_CsrExuData),
    .LS_WB_JumpPC    (LS_WB_JumpPC),
    .LS_WB_JumpPC_en (LS_WB_JumpPC_en),
    .LS_WB_PC        (LS_WB_PC),
    .LS_WB_Instr     (LS_WB_Instr),
    .LS_WB_InstrNum  (LS_WB_InstrNum),
    .LS_WB_Rs1       (LS_WB_Rs1),
    .LS_WB_Rs2       (LS_WB_Rs2),
    .LS_WB_Rd        (LS_WB_Rd),
    .LS_WB_Imm       (LS_WB_Imm),
    .LS_WB_RegWen    (LS_WB_RegWen),
    .LS_WB_CsrNum    (LS_WB_CsrNum),
    .LS_WB_IsLoad    (LS_WB_IsLoad),
    .LS_WB_IsStore   (LS_WB_IsStore),
    .LS_WB_LData     (LS_WB_LData),

    .o_lsu_arvalid   (lsu_arvalid),
    .i_lsu_arready   (lsu_arready),
    .i_lsu_rvalid    (lsu_rvalid),
    .o_lsu_rready    (lsu_rready),
    .o_lsu_awvalid   (lsu_awvalid),
    .i_lsu_awready   (lsu_awready),
    .o_lsu_wvalid    (lsu_wvalid),
    .i_lsu_wready    (lsu_wready),
    .i_lsu_rlast     (lsu_rlast),
    .o_lsu_bready    (lsu_bready),
    .i_lsu_bvalid    (lsu_bvalid),
    .i_lsu_rdata     (lsu_rdata),
    .o_lsu_araddr    (lsu_araddr),
    .o_lsu_arlen     (lsu_arlen),
    .o_lsu_arsize    (lsu_arsize),
    .o_lsu_arburst   (lsu_arburst),
    .o_lsu_arid      (lsu_arid),
    .o_lsu_awaddr    (lsu_awaddr),
    .o_lsu_awlen     (lsu_awlen),
    .o_lsu_awsize    (lsu_awsize),
    .o_lsu_awburst   (lsu_awburst),
    .o_lsu_wdata     (lsu_wdata),
    .o_lsu_wstrb     (lsu_wstrb),
    .o_lsu_wlast     (lsu_wlast)

  );

  ysyx_25010028_WBU #(
    .ADDR_WIDTH(5),
    .DATA_WIDTH(32)
  ) U_WBU(
    .clock           (clock),
    .reset           (reset),
    
    .WB_LS_Ready     (WB_LS_Ready),
    .LS_WB_Valid     (LS_WB_Valid),

    .LS_WB_ExuRes    (LS_WB_ExuRes),
    .LS_WB_CsrExuData(LS_WB_CsrExuData),
    .LS_WB_JumpPC    (LS_WB_JumpPC),
    .LS_WB_JumpPC_en (LS_WB_JumpPC_en),
    .LS_WB_PC        (LS_WB_PC),
    .LS_WB_Instr     (LS_WB_Instr),
    .LS_WB_InstrNum  (LS_WB_InstrNum),
    .LS_WB_Rs1       (LS_WB_Rs1),
    .LS_WB_Rs2       (LS_WB_Rs2),
    .LS_WB_Rd        (LS_WB_Rd),
    .LS_WB_Imm       (LS_WB_Imm),
    .LS_WB_RegWen    (LS_WB_RegWen),
    .LS_WB_CsrNum    (LS_WB_CsrNum),
    .LS_WB_IsLoad    (LS_WB_IsLoad),
    .LS_WB_IsStore   (LS_WB_IsStore),
    .LS_WB_LData     (LS_WB_LData),

    .WB_Rd           (WB_Rd),
    .WB_Data         (WB_Data),
    .WB_RegWen       (WB_RegWen),
    .WB_Done         (WB_Done)
  );

`ifdef verilator
import "DPI-C" function void ebreak(input int a0_val, input int exit_pc);
always @(posedge clock) begin
      if(LS_WB_Instr == 32'h00100073)begin
        ebreak(ReturnA0,LS_WB_PC);
      end
  end
`endif

`ifdef verilator
import "DPI-C" function void display(input int instr, input int pc, input int npc, input int update_en);
always @(posedge clock)begin
  if(WB_Done) begin
  display(LS_WB_Instr, pc, npc, {31'd0, 1'b1});
  end
  end
  reg [31:0] npc;
  reg [31:0] pc;
always @(posedge clock) begin
  if(WB_Done)begin
  npc <= (!reset) ? (LS_WB_JumpPC_en) ? LS_WB_JumpPC: LS_WB_PC + 32'h4 : LS_WB_PC;
  pc  <= LS_WB_PC;
end
end


`endif



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


  endmodule