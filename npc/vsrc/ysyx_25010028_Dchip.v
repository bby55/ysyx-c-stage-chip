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

  wire [ 3:0]  WmaskSh;


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


  assign io_lsu_addr = (io_lsu_reqValid) ? Rs1Data+Imm : 32'h30000000;
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

  assign io_lsu_wdata = Rs2Data << io_lsu_addr[1:0]*8;
  assign WmaskSh =  (io_lsu_addr[1] == 1'b0) ? 4'h3 : 4'hC;  // 去掉前导0：03→3，0C→C
  assign io_lsu_wmask = (InstrNum == 12'd16) ? WmaskSh :       // SH用半字掩码
                      (InstrNum == 12'd3)  ? 4'hF :          // 去掉前导0：0F→F
                      (InstrNum == 12'd7)  ? (io_lsu_addr[1:0] == 2'd0) ? 4'h1 :  // 01→1
                                             (io_lsu_addr[1:0] == 2'd1) ? 4'h2 :  // 02→2
                                             (io_lsu_addr[1:0] == 2'd2) ? 4'h4 :  // 04→4
                                             (io_lsu_addr[1:0] == 2'd3) ? 4'h8 :  // 08→8
                                             4'h0 :             // 00→0
                  4'h0;                                        // 00→0

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
    .i_reset       (reset),
    .i_RegWen      (RegWen),       // 寄存器写使能（来自IDU）t_Data
    .i_InstrNum    (InstrNum),     // 指令编号（来自IDU）
    .i_CsrNum      (CsrNum),       // CSR编号（来自IDU）
    .i_Rs1Raddr    (Rs1Raddr),     // Rs1读地址（来自IDU）
    .i_Rs2Raddr    (Rs2Raddr),     // Rs2读地址（来自IDU）
    .i_RdRaddr     (RdRaddr),      // Rd写地址（来自IDU）
    .i_ExuRes      (ExuRes),       // ALU结果（暂接0，需连EXU）
    .i_CsrExuData  (CsrExuData),
    .o_Rs1Data     (Rs1Data),      // Rs1读数据（输出至EXU/LSU等）
    .o_Rs2Data     (Rs2Data),      // Rs2读数据（输出至EXU/LSU等）
    .o_CsrData     (CsrData)      // CSR写数据（暂接0，需连相关逻辑）
    
  );

endmodule

module ysyx_25010028_IFU #(parameter PC_START = 32'h30000000) (
  input               i_clk,
  input               i_rst,
  input       [31:0]  i_IfuRdata,
  input       [31:0]  i_JumpPC,
  input               i_JumpPC_en,
  input               io_ifu_respValid,
  input               i_respValid,
  input               i_reqValid,
  output reg  [31:0]  o_IfuRaddr,
  output reg  [31:0]  o_instr,
  output reg          o_IfuValid,
  output      [31:0]  o_PC
);

  parameter IDLE = 1'b0;
  parameter WAIT = 1'b1;

  reg                 CurrentState;
  reg                 NextState;
  reg                 UpdatePC_en;
  reg                 o_IfuValid_next;  // 新增：用于组合逻辑中的下一状态值
  wire        [31:0]  PC;
  
  ysyx_25010028_PC #(
    .PC_START(PC_START)
  ) U_PC (
    .i_clk(i_clk),
    .i_rst(i_rst),
    .i_JumpPC(i_JumpPC),
    .i_JumpPC_en(i_JumpPC_en),
    .i_UpdatePC_en(UpdatePC_en),
    .o_PC(PC)
  );

  // 状态寄存器更新
  always @(posedge i_clk) begin
    if (i_rst) begin
      CurrentState <= IDLE;
    end else begin
      CurrentState <= NextState;
    end
  end

  // 新增：单独处理o_IfuValid的时序逻辑，确保复位时为0
  always @(posedge i_clk) begin
    if (i_rst) begin
      o_IfuValid <= 1'b0;  // 复位时置0
    end else begin
      o_IfuValid <= o_IfuValid_next;  // 否则使用组合逻辑计算的值
    end
  end

  // 组合逻辑：计算下一状态和控制信号（已补充默认值）
always @(*) begin
    // 所有输出信号默认值
    o_IfuRaddr = 32'h0;
    o_instr = 32'h0;
    o_IfuValid_next = 1'b0;
    UpdatePC_en = 1'b0;
    NextState = IDLE;

    case(CurrentState)
      IDLE: begin
        o_IfuRaddr      = PC;
        o_IfuValid_next = 1'b1;
        UpdatePC_en     = 1'b0;
        NextState       = WAIT;
      end

      WAIT: begin
        o_instr         = i_IfuRdata;
        o_IfuRaddr      = PC;
        
        if( (i_respValid ) || (~i_reqValid && io_ifu_respValid))begin
          UpdatePC_en     = 1'b1;
          NextState       = IDLE;
          o_IfuValid_next = 1'b0;
        end
        else begin
          o_IfuValid_next = 1'b0;
          UpdatePC_en     = 1'b0;
          NextState       = WAIT;
        end
      end

      default: begin
        // 保持默认值，无需额外赋值
      end
    endcase
  end

  assign o_PC = PC;

endmodule

module ysyx_25010028_PC #(PC_START = 32'h30000000) (
  input                   i_clk,
  input                   i_rst,
  input                   i_UpdatePC_en,
  input  [31:0]           i_JumpPC,
  input                   i_JumpPC_en,
  output [31:0]           o_PC
);
  reg  [31:0] d_PC;
  
  //根据i_UpdatePC_en和i_JumpPC_en判断PC是否需要更新或跳转
  always @(posedge i_clk) begin
    d_PC <= i_rst ? PC_START :
            i_UpdatePC_en ? (i_JumpPC_en ? i_JumpPC : d_PC + 32'h4) :
            d_PC;
  end

  assign o_PC = d_PC;

endmodule


module ysyx_25010028_LSU (
  input              i_clk,
  input              i_rst,
  input              i_reqValid,
  input              i_IfuValid,
  input              io_lsu_respValid,
  output   reg       io_lsu_reqValid
);

  parameter IDLE = 1'b0;
  parameter WAIT = 1'b1;

  reg                 CurrentState;
  reg                 NextState;


  always @(posedge i_clk) begin
    CurrentState <= (i_rst) ? IDLE : NextState;
  end

  // 组合逻辑（补充默认值）
always @(*) begin
    // 所有输出信号默认值
    NextState = CurrentState;
    io_lsu_reqValid = 1'b0;

    case(CurrentState)
      IDLE: begin
        if (i_reqValid && i_IfuValid) begin
          io_lsu_reqValid = 1'b1;
          NextState = WAIT;
        end else begin
          io_lsu_reqValid = 1'b0;
          NextState = IDLE;
        end
      end

      WAIT: begin
            io_lsu_reqValid = 1'b0;
            if(io_lsu_respValid)begin
              NextState  = IDLE;
            end else begin
              NextState  = WAIT;
            end
        end
      default: begin
        NextState  = IDLE;
        io_lsu_reqValid = 1'b0;
      end
    endcase
  end

endmodule


module ysyx_25010028_WBU #(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
) (
  input i_clk,
  input i_reset,
  input i_RegWen,
  input [11:0]           i_InstrNum,
  input [11:0]           i_CsrNum,
  input [ADDR_WIDTH-1:0] i_Rs1Raddr,
  input [ADDR_WIDTH-1:0] i_Rs2Raddr,
  input [ADDR_WIDTH-1:0] i_RdRaddr,
  input [DATA_WIDTH-1:0] i_ExuRes,
  input [DATA_WIDTH-1:0] i_CsrExuData,
  output [DATA_WIDTH-1:0] o_Rs1Data,
  output [DATA_WIDTH-1:0] o_Rs2Data,
  output [DATA_WIDTH-1:0] o_CsrData
);

  ysyx_25010028_RegisterFile #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
  ) U_REG (e
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_RegWen(i_RegWen),
    .i_Rs1Raddr(i_Rs1Raddr),
    .i_Rs2Raddr(i_Rs2Raddr),
    .i_RdRaddr(i_RdRaddr),
    .i_ExuRes(i_ExuRes),
    .o_Rs1Data(o_Rs1Data),
    .o_Rs2Data(o_Rs2Data)
  );

  ysyx_25010028_CsrFile #(
    .DATA_WIDTH(DATA_WIDTH)
  ) U_CSR (
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_RegWen(i_RegWen),
    .i_InstrNum(i_InstrNum),
    .i_CsrNum(i_CsrNum),
    .i_CsrExuData(i_CsrExuData),
    .o_CsrData(o_CsrData)
  );

endmodule

// 通用寄存器堆（补充完整代码，修复原代码截断问题）
module ysyx_25010028_RegisterFile #(
  parameter ADDR_WIDTH = 1,
  parameter DATA_WIDTH = 1
) (
  input i_clk,
  input i_reset,
  input i_RegWen,
  input [ADDR_WIDTH-1:0] i_Rs1Raddr,
  input [ADDR_WIDTH-1:0] i_Rs2Raddr,
  input [ADDR_WIDTH-1:0] i_RdRaddr,
  input [DATA_WIDTH-1:0] i_ExuRes,
  output [DATA_WIDTH-1:0] o_Rs1Data,
  output [DATA_WIDTH-1:0] o_Rs2Data
);

  reg [DATA_WIDTH-1:0] rf [15:0];


  assign o_Rs1Data = (i_Rs1Raddr == 0)? 0 : rf[i_Rs1Raddr[3:0]];
  assign o_Rs2Data = (i_Rs2Raddr == 0)? 0 : rf[i_Rs2Raddr[3:0]];

  // 写操作
  always @(posedge i_clk) begin
    if (i_reset) begin
      for (integer i = 0; i < 16; i = i + 1) begin
          rf[i] <= 0; // 初始化为 0
      end
    end else begin
    if (i_RegWen & (i_RdRaddr != 0)) rf[i_RdRaddr[3:0]] <= i_ExuRes;
  end
  end

endmodule

// CSR寄存器文件
module ysyx_25010028_CsrFile #(
  parameter DATA_WIDTH = 32
) (
  input                       i_clk,
  input                       i_reset,
  input                       i_RegWen,
  input [11:0]                i_InstrNum,
  input [11:0]                i_CsrNum,
  input [DATA_WIDTH-1:0]      i_CsrExuData,
  output reg [DATA_WIDTH-1:0] o_CsrData
);

  reg [DATA_WIDTH-1:0] mcycle;
  reg [DATA_WIDTH-1:0] mcycleh;
  reg [DATA_WIDTH-1:0] mvendorid;
  reg [DATA_WIDTH-1:0] marchid;

  // 组合逻辑（补充默认值）
always @(*) begin
    // 默认值
    o_CsrData = 32'd0;

    case (i_CsrNum)
      12'd5:  o_CsrData = mcycle;
      12'd6:  o_CsrData = mcycleh;
      12'd7:  o_CsrData = mvendorid;
      12'd8:  o_CsrData = marchid;
      default: o_CsrData = 32'd0;
    endcase
  end

  always @(posedge i_clk) begin
    if (i_reset) begin
      mcycle <= 0;
      mcycleh <= 0;
      mvendorid <= 32'h79737978;
      marchid <= 32'h017D9F6C;
    end else begin
      if (mcycle != 32'hFFFFFFFF) begin
        mcycle <= mcycle + 1'b1;
      end else begin
        mcycle <= 0;
        mcycleh <= mcycleh + 1'b1;
      end

      if ((i_InstrNum == 12'd37 || i_InstrNum == 12'd38) && i_RegWen) begin
        case (i_CsrNum)
          12'd5:  mcycle <= i_CsrExuData;
          12'd6:  mcycleh <= i_CsrExuData;
          12'd7:  mvendorid <= i_CsrExuData;
          12'd8:  marchid <= i_CsrExuData;
          default: ;
        endcase
      end
    end
  end

endmodule

module ysyx_25010028_IDU (
  input    [31:0]  i_instr,
  input            i_IfuValid,
  input            i_respValid,
  output   [4:0]   o_Rs1Raddr,
  output   [4:0]   o_Rs2Raddr,
  output   [4:0]   o_RdRaddr,
  output   [31:0]  o_Imm,
  output   [11:0]  o_InstrNum,
  output   [11:0]  o_CsrNum,
  output           o_reqValid,
  output           o_MemWen,
  output           o_RegWen,
  output   [1:0]   o_lsu_size
);

wire [4:0]  Rs1        = i_instr[19:15];
wire [4:0]  Rs2        = i_instr[24:20];
wire [4:0]  Rd         = i_instr[11:7];
wire [2:0]  Funct_3    = i_instr[14:12];
wire [6:0]  Opcode     = i_instr[6:0];

wire [11:0] I_imm;
wire [11:0] S_imm;
wire [19:0] U_imm;

wire [31:0] I_ex;
wire [31:0] S_ex;
wire [31:0] U_ex;
wire [31:0] R_ex;

// 关键修改：wire → reg（所有过程赋值信号）
reg [31:0]  Imm;
reg [11:0]  CsrNum;
reg [1:0]   lsu_size;
reg [11:0]  InstrFunct3;
reg [11:0]  InstrNoFunct;
wire [11:0] InstrType;  // 仍为wire（用assign赋值）
reg         reg_wen;
reg         reqValid;
reg         wen_ram;

wire [9:0]  Opcode_Funct3     = {Opcode, Funct_3};

assign I_imm   = i_instr[31:20];
assign U_imm   = i_instr[31:12];
assign S_imm   = {i_instr[31:25], i_instr[11:7]};

assign I_ex = {{20{i_instr[31]}}, I_imm};
assign S_ex = {{20{i_instr[31]}}, S_imm};
assign U_ex = {U_imm, 12'b0};
assign R_ex = 32'd0;

wire is_load = (Opcode == 7'b0000011);
wire is_store = (Opcode == 7'b0100011);
wire [2:0] lsu_funct3_key = (is_load || is_store) ? Funct_3 : 3'b000;

// 基础指令译码（原i0 mux → switch case，补充默认值）
always @(*) begin
  // 默认值
  InstrFunct3 = 12'd0;

  case (Opcode_Funct3)
    10'b0010011000: InstrFunct3 = 12'd0;
    10'b1100111000: InstrFunct3 = 12'd1;
    10'b0000011010: InstrFunct3 = 12'd2;
    10'b0100011010: InstrFunct3 = 12'd3;
    10'b0110011000: InstrFunct3 = 12'd5;
    10'b0100011000: InstrFunct3 = 12'd7;
    10'b0000011100: InstrFunct3 = 12'd8;
    10'b1110011010: InstrFunct3 = 12'd37;
    10'b1110011001: InstrFunct3 = 12'd38;
    default:        InstrFunct3 = 12'd0;
  endcase
end

// 无funct3指令译码（原i6 mux → switch case，补充默认值）
always @(*) begin
  // 默认值
  InstrNoFunct = 12'd0;

  case (Opcode)
    7'b0110111: InstrNoFunct = 12'd6;
    default:    InstrNoFunct = 12'd0;
  endcase
end

// 补充默认值

assign InstrType =(InstrNoFunct != 12'd0) ? InstrNoFunct :
                                          InstrFunct3;

// 立即数选择（原i1 mux → switch case，补充默认值）
always @(*) begin
  // 默认值
  Imm = 32'd0;

  case (InstrType)
    12'd0:  Imm = I_ex;
    12'd1:  Imm = I_ex;
    12'd2:  Imm = I_ex;
    12'd3:  Imm = S_ex;
    12'd5:  Imm = R_ex;
    12'd6:  Imm = U_ex;
    12'd7:  Imm = S_ex;
    12'd8:  Imm = I_ex;
    12'd37: Imm = I_ex;
    12'd38: Imm = I_ex;
    default: Imm = 32'd0;
  endcase
end

// 寄存器写使能控制（原i2 mux → switch case，补充默认值）
always @(*) begin
  // 默认值
  reg_wen = 1'd1;

  case (InstrType)
    12'd3:  reg_wen = 1'b0;
    12'd7:  reg_wen = 1'b0;
    default: reg_wen = 1'd1;
  endcase
end

// 存储器访问有效信号（原i4 mux → switch case，补充默认值）
always @(*) begin
  // 默认值
  reqValid = 1'd0;

  case (InstrType)
    12'd2:  reqValid = 1'b1;
    12'd8:  reqValid = 1'b1;
    12'd3:  reqValid = 1'b1;
    12'd7:  reqValid = 1'b1;
    default: reqValid = 1'd0;
  endcase
end

// 存储器写使能信号（原i5 mux → switch case，补充默认值）
always @(*) begin
  // 默认值
  wen_ram = 1'd0;

  case (InstrType)
    12'd3:  wen_ram = 1'b1;
    12'd7:  wen_ram = 1'b1;
    default: wen_ram = 1'd0;
  endcase
end

// CSR编号选择（原i9 mux → switch case，补充默认值）
always @(*) begin
  // 默认值
  CsrNum = 12'd0;

  case (I_imm)
    12'hB00: CsrNum = 12'd5;  // mcycle
    12'hB80: CsrNum = 12'd6;  // mcycleh
    12'hf11: CsrNum = 12'd7;
    12'hf12: CsrNum = 12'd8;
    default: CsrNum = 12'd0;
  endcase
end

// LSU位宽选择（原i11 mux → switch case，补充默认值）
always @(*) begin
  // 默认值
  lsu_size = 2'd0;

  case (lsu_funct3_key)
    3'b000: lsu_size = 2'b00;
    3'b100: lsu_size = 2'b00;  // lbu（1字节）
    3'b010: lsu_size = 2'b10;  // lw（4字节）
    default: lsu_size = 2'd0;
  endcase
end

// 输出赋值
assign o_Rs1Raddr = Rs1;
assign o_Rs2Raddr = Rs2;
assign o_RdRaddr  = Rd;
assign o_InstrNum = InstrType;
assign o_reqValid = reqValid;
assign o_MemWen   = wen_ram;
assign o_RegWen   = ((i_respValid) || (~reqValid && i_IfuValid)) && reg_wen;
assign o_Imm      = Imm;
assign o_lsu_size = lsu_size;
assign o_CsrNum   = CsrNum;

endmodule

module ysyx_25010028_ALU #(
    parameter DATA_WIDTH = 32
) (
    input [DATA_WIDTH-1:0] i_Rs1Data,
    input [DATA_WIDTH-1:0] i_Rs2Data,
    input [DATA_WIDTH-1:0] i_Imm,
    input [DATA_WIDTH-1:0] i_PC,
    input [DATA_WIDTH-1:0] i_LsuRData,
    input [DATA_WIDTH-1:0] i_CsrData,
    input [11:0] i_InstrNum,
    input [1:0] i_ByteIdx,
    output reg [DATA_WIDTH-1:0] o_ExuRes,
    output reg [DATA_WIDTH-1:0] o_CsrExuData,
    output reg [DATA_WIDTH-1:0] o_JumpPC,
    output reg o_JumpPC_en 
);

  always @(*) begin
    // 所有输出信号默认值
    o_JumpPC_en = 1'b0;
    o_ExuRes = 32'd0;
    o_CsrExuData = 32'd0;
    o_JumpPC = i_PC + 32'd4;

    case (i_InstrNum)
      12'd0:  o_ExuRes = i_Rs1Data + i_Imm;                  // ADDI（已保留，直接复用）
      12'd1: begin                                            // JALR
        o_JumpPC_en = 1'b1;
        o_ExuRes = i_PC + 32'd4;
        o_JumpPC = (i_Rs1Data + i_Imm) & 32'hfffffffe;
      end
      12'd2:  o_ExuRes = i_LsuRData;                          // LW
      12'd3:  o_ExuRes = i_Rs2Data;                          // SW
      12'd5:  o_ExuRes = i_Rs1Data + i_Rs2Data;              // ADD
      12'd6:  o_ExuRes = i_Imm;                              // LUI
      12'd7:  o_ExuRes = i_Rs2Data;                          // SB
      12'd8: begin                                            // LBU
        case (i_ByteIdx)
          2'd0: o_ExuRes = {24'd0, i_LsuRData[7:0]};
          2'd1: o_ExuRes = {24'd0, i_LsuRData[15:8]};
          2'd2: o_ExuRes = {24'd0, i_LsuRData[23:16]};
          2'd3: o_ExuRes = {24'd0, i_LsuRData[31:24]};
          default: o_ExuRes = 32'd0;
        endcase
      end
      12'd37: begin                                           // CSRRS
        o_ExuRes = i_CsrData;
        o_CsrExuData = i_CsrData | i_Rs1Data;
      end
      12'd38: begin                                           // CSRRW
        o_ExuRes = i_CsrData;
        o_CsrExuData = i_Rs1Data;
      end
      default: begin
            o_JumpPC_en = 1'b0;
            o_ExuRes = {DATA_WIDTH{1'b0}};
            o_JumpPC = i_PC + 32'd4;
        end
    endcase
  end

endmodule