import "DPI-C" function void ebreak(input int a0_val, input int exit_pc);
module ysyx_25010028(
  input         clock,
  input         reset,
  input         io_ifu_respValid,//
  input  [31:0] io_ifu_rdata,//
  input         io_lsu_respValid,
  input  [31:0] io_lsu_rdata,
  output        io_lsu_reqValid,
  output [31:0] io_lsu_addr,
  output [1:0]  io_lsu_size,
  output        io_lsu_wen,
  output [31:0] io_lsu_wdata,
  output [3:0]  io_lsu_wmask,
  output        io_ifu_reqValid, //
  output [31:0] io_ifu_addr //

);

  wire  [31:0] Instruction;
  wire         IfuValid;
  wire         respValid;
  wire  [31:0] IfuRdata;
  wire  [31:0] IfuRaddr;
  wire  [31:0] Imm;
  wire  [11:0] InstrNum;
  wire  [11:0] CsrNum;
  wire  [4:0]  Rs1Raddr;
  wire  [4:0]  Rs2Raddr;
  wire  [4:0]  RdRaddr; 
  wire         reqValid;
  wire         MemWen;
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
  wire [31:0]  McauseData;   // CSR mcause数据（WBU输出）
  wire [31:0]  MepcData;     // CSR mepc数据（WBU输出）
  wire [31:0]  MstatusData;  // CSR mstatus数据（WBU输出）
  wire [31:0]  MtvecData;    // CSR mtvec数据（WBU输出）
  wire [31:0]  LsuRaddr;
  wire [31:0]  LsuWaddr;
  wire [31:0]  LsuWdata;
  wire [31:0]  LsuRData;
  wire [ 7:0]  LsuWmask;
  wire [ 3:0]  WmaskSh;
  // wire         IfuReady;
  // wire         IDU_valid;
  // wire         LSU_valid;
  // wire         EXU_valid;
  // wire         WB_valid;
  // wire         IDU_ready;
  // wire         LSU_ready;
  // wire         EXU_ready;
  // wire         WB_ready;

// initial begin
//     $monitor("PC=%h instr=%h raddr=%h", PC,Instruction,LsuRaddr);
//   end
  always @(posedge clock) begin
      if(Instruction == 32'h00100073)begin
        ebreak(ReturnA0,PC);
      end
  end

  // ysyx_25010028_IFU #(
  //   .PC_START(32'h80000000)
  // ) U_IFU (
  //   .i_clk      (clock),
  //   .i_rst      (reset),
  //   .i_IfuRdata (IfuRdata),
  //   .i_JumpPC   (JumpPC),
  //   .i_JumpPC_en(JumpPC_en),
  //   .i_respValid(respValid),
  //   .i_reqValid (reqValid),
  //   .o_PC       (PC),
  //   .o_IfuValid (IfuValid),
  //   .o_IfuRaddr (IfuRaddr),
  //   .o_instr    (Instruction)
  // );
    ysyx_25010028_IFU #(
    .PC_START(32'h30000000)
  ) U_IFU (
    .i_clk      (clock),
    .i_rst      (reset),
    .i_IfuRdata (io_ifu_rdata),
    .i_JumpPC   (JumpPC),
    .i_JumpPC_en(JumpPC_en),
    .io_ifu_respValid(io_ifu_respValid),
    .i_respValid(io_lsu_respValid),
    .i_reqValid (io_lsu_reqValid),
    .o_PC       (PC),
    .o_IfuValid (io_ifu_reqValid),
    .o_IfuRaddr (io_ifu_addr),
    .o_instr    (Instruction)
  );

  // ysyx_25010028_Mem U_Mem (
  //   .i_clk    (clock),
  //   .i_Raddr  (IfuRaddr),
  //   .o_Rdata  (IfuRdata)
  // );

  // ysyx_25010028_IDU U_IDU (
  //   .i_instr    (Instruction),
  //   .i_IfuValid (io_ifu_respValid),
  //   .i_respValid(respValid),
  //   .o_Rs1Raddr (Rs1Raddr),
  //   .o_Rs2Raddr (Rs2Raddr),
  //   .o_RdRaddr  (RdRaddr),
  //   .o_Imm      (Imm),
  //   .o_InstrNum (InstrNum),
  //   .o_reqValid (io_lsu_reqValid),
  //   .o_MemWen   (MemWen),
  //   .o_RegWen   (RegWen),
  //   .o_CsrNum   (CsrNum),
  //   .o_lsu_size (io_lsu_size)
  // );
    ysyx_25010028_IDU U_IDU (
    .i_instr    (Instruction),
    .i_IfuValid (io_ifu_respValid),
    .i_respValid(io_lsu_respValid),
    .o_Rs1Raddr (Rs1Raddr),
    .o_Rs2Raddr (Rs2Raddr),
    .o_RdRaddr  (RdRaddr),
    .o_Imm      (Imm),
    .o_InstrNum (InstrNum),
    .o_reqValid (reqValid),
    .o_MemWen   (io_lsu_wen),
    .o_RegWen   (RegWen),
    .o_CsrNum   (CsrNum),
    .o_lsu_size (io_lsu_size)
  );

  // assign LsuRaddr = (reqValid) ? Rs1Data+Imm : 32'h80000000;
  // assign LsuWaddr = (MemWen)   ? Rs1Data+Imm : 32'h80000000;
  // assign AluByteIdx = LsuRaddr[1:0];
  // assign LsuWdata = (InstrNum == 12'd3)  ? Rs2Data :  // SW：32位数据（用Rs2Data，原rd_data→修正）
  //                   (InstrNum == 12'd16) ? (LsuWaddr[1] == 1'd0) ? {16'd0, Rs2Data[15:0]} : {Rs2Data[15:0], 16'b0} :  // SH：16位数据
  //                   (InstrNum == 12'd7)  ? (LsuWaddr[1:0] == 2'd0) ? {24'd0, Rs2Data[7:0]} :  // SB：8位数据
  //                                          (LsuWaddr[1:0] == 2'd1) ? {16'd0, Rs2Data[7:0], 8'd0} :
  //                                          (LsuWaddr[1:0] == 2'd2) ? {8'd0, Rs2Data[7:0], 16'd0} :
  //                                                                     {Rs2Data[7:0], 24'd0} :
  //                   32'd0;
  // assign WmaskSh =  (LsuWaddr[1] == 1'b0)? 8'h03 : 8'h0C;  // SH：低2字节/高2字节
  // assign LsuWmask = (InstrNum == 12'd16) ? WmaskSh :       // SH用半字掩码
  //                   (InstrNum == 12'd3)  ? 8'h0F :          // SW用4字节掩码
  //                   (InstrNum == 12'd7)  ? (LsuWaddr[1:0] == 2'd0) ? 8'h01 :  // SB用对应字节掩码
  //                                          (LsuWaddr[1:0] == 2'd1) ? 8'h02 :
  //                                          (LsuWaddr[1:0] == 2'd2) ? 8'h04 :
  //                                          (LsuWaddr[1:0] == 2'd3) ? 8'h08 :
  //                                          8'h00 :
  //                   8'h00;

  assign io_lsu_addr = (io_lsu_reqValid) ? Rs1Data+Imm : 32'h30000000;
  // assign io_lsu_rdata = (io_lsu_wen)   ? Rs1Data+Imm : 32'h80000000;
  always @(posedge clock) begin
    if(reset) begin
      AluByteIdx <= 2'b00;
    end
    else if (io_lsu_reqValid) begin
      AluByteIdx <= io_lsu_addr[1:0];
    end
    else begin
      AluByteIdx <= AluByteIdx;
    end
  end
  // assign io_lsu_wdata = (InstrNum == 12'd3)  ? Rs2Data :  // SW：32位数据（用Rs2Data，原rd_data→修正）
  //                       (InstrNum == 12'd16) ? (io_lsu_addr[1] == 1'd0) ? {16'd0, Rs2Data[15:0]} : {Rs2Data[15:0], 16'b0} :  // SH：16位数据
  //                       (InstrNum == 12'd7)  ? (io_lsu_addr[1:0] == 2'd0) ? {24'd0, Rs2Data[7:0]} :  // SB：8位数据
  //                                              (io_lsu_addr[1:0] == 2'd1) ? {16'd0, Rs2Data[7:0], 8'd0} :
  //                                              (io_lsu_addr[1:0] == 2'd2) ? {8'd0, Rs2Data[7:0], 16'd0} :
  //                                                                           {Rs2Data[7:0], 24'd0} :
  assign io_lsu_wdata = Rs2Data << io_lsu_addr[1:0]*8;
  assign WmaskSh =  (io_lsu_addr[1] == 1'b0)? 4'h03 : 4'h0C;  // SH：低2字节/高2字节
  assign io_lsu_wmask = (InstrNum == 12'd16) ? WmaskSh :       // SH用半字掩码
                        (InstrNum == 12'd3)  ? 4'h0F :          // SW用4字节掩码
                        (InstrNum == 12'd7)  ? (io_lsu_addr[1:0] == 2'd0) ? 4'h01 :  // SB用对应字节掩码
                                               (io_lsu_addr[1:0] == 2'd1) ? 4'h02 :
                                               (io_lsu_addr[1:0] == 2'd2) ? 4'h04 :
                                               (io_lsu_addr[1:0] == 2'd3) ? 4'h08 :
                                               4'h00 :
                    4'h00;

  //   ysyx_25010028_LSU U_LSU (
  //   .i_clk      (clock),                  // 输入：时钟信号
  //   .i_rst      (reset),
  //   .i_LsuRaddr (LsuRaddr),            // 输入：LSU读地址（来自地址计算）
  //   .i_LsuWaddr (LsuWaddr),            // 输入：LSU写地址（来自地址计算）
  //   .i_LsuWdata (LsuWdata),            // 输入：LSU写数据（来自数据生成）
  //   .i_LsuWmask (LsuWmask),            // 输入：LSU写掩码（来自掩码生成，4位适配接口）
  //   .i_reqValid (),            // 输入：存储器访问有效（来自IDU）
  //   .i_MemWen   (MemWen),              // 输入：存储器写使能（来自IDU，冗余保留适配接口）
  //   .i_PC       (PC),
  //   .i_InstrNum (InstrNum),
  //   .i_IfuValid (io_ifu_respValid),
  //   .o_respValid(respValid),
  //   .o_LsuRData (LsuRData)             // 输出：LSU读数据（供ALU加载指令使用）
  // );
   ysyx_25010028_LSU U_LSU (
    .i_clk      (clock),                  // 输入：时钟信号
    .i_rst      (reset),
    .i_reqValid (reqValid),            // 输入：存储器访问有效（来自IDU）   
    .i_IfuValid (io_ifu_respValid),
    .io_lsu_respValid(io_lsu_respValid),
    .io_lsu_reqValid (io_lsu_reqValid)
  );

   ysyx_25010028_ALU #(
    .DATA_WIDTH(32)  // 适配32位RISC-V架构，与其他模块数据宽度一致
  ) U_ALU (
    .i_Rs1Data   (Rs1Data),    // 输入：Rs1数据（来自WBU寄存器堆）
    .i_Rs2Data   (Rs2Data),    // 输入：Rs2数据（来自WBU寄存器堆）
    .i_Imm       (Imm),        // 输入：立即数（来自IDU译码结果）
    .i_PC        (PC),   // 输入：PC值（暂接IFU当前地址，流水线需传拍）
    .i_LsuRData  (io_lsu_rdata), // 输入：LSU加载数据（暂接0，需连LSU）
    .i_CsrData   (CsrData),
    .i_InstrNum  (InstrNum),   // 输入：指令编号（来自IDU，控制ALU运算类型）
    .i_ByteIdx   (AluByteIdx), // 输入：字节索引（暂接0，需连地址计算模块）
    .o_ExuRes    (ExuRes),      // 输出：ALU结果（传至WBU用于寄存器写回）
    .o_CsrExuData(CsrExuData),
    .o_JumpPC_en (JumpPC_en),
    .o_JumpPC    (JumpPC)
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
    .o_ReturnA0    (ReturnA0)     // A0返回值（输出至系统调用等）
    
  );

endmodule