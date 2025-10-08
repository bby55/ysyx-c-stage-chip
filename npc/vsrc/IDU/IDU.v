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
wire [6:0]  Funct_7    = i_instr[31:25];
wire [6:0]  Opcode     = i_instr[6:0];


wire [11:0] I_imm;
wire [11:0] B_imm;
wire [11:0] S_imm;
wire [19:0] J_imm;
wire [19:0] U_imm;
wire        R_imm;

wire [31:0] I_ex;
wire [31:0] S_ex;
wire [31:0] J_ex;
wire [31:0] U_ex;
wire [31:0] B_ex;
wire [31:0] R_ex;

wire [31:0] Imm;
wire [11:0] CsrNum;
wire [1:0]  lsu_size;

wire [9:0]  Opcode_Funct3     = {Opcode, Funct_3};
wire [16:0] Opcode_Funct3_Funct7 = {Opcode, Funct_3, Funct_7};

assign I_imm   = i_instr[31:20];
assign U_imm   = i_instr[31:12];
assign B_imm   = {i_instr[31], i_instr[7], i_instr[30:25], i_instr[11:8]};
assign J_imm   = {i_instr[31], i_instr[19:12], i_instr[20], i_instr[30:21]};
assign S_imm   = {i_instr[31:25], i_instr[11:7]};
assign R_imm   = 1'b0;

assign I_ex = {{20{i_instr[31]}}, I_imm};
assign S_ex = {{20{i_instr[31]}}, S_imm};
assign B_ex = {{19{i_instr[31]}}, B_imm, 1'b0};
assign U_ex = {U_imm, 12'b0};
assign J_ex = {{11{i_instr[31]}}, J_imm, 1'b0};
assign R_ex = 32'd0;

wire [11:0] InstrFunct3;
wire [11:0] InstrNoFunct;
wire [11:0] InstrFunct7;
wire [11:0] InstrCsr;
wire [11:0] InstrType;


wire is_load = (Opcode == 7'b0000011);
wire is_store = (Opcode == 7'b0100011);
wire [2:0] lsu_funct3_key = (is_load || is_store) ? Funct_3 : 3'b000;

// 基础指令译码（匹配模板：NR_KEY/KEY_LEN/DATA_LEN，端口default_out/lut）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(24),
  .KEY_LEN(10),
  .DATA_LEN(12)
) i0 (
  .out(InstrFunct3),
  .key(Opcode_Funct3),
  .default_out(12'd0),
  .lut({
    {10'b0010011000, 12'd0},
    {10'b1100111000, 12'd1},
    {10'b0000011010, 12'd2},
    {10'b0100011010, 12'd3},
    {10'b1110011000, 12'd4},
    {10'b0110011000, 12'd5},
    {10'b0100011000, 12'd7},
    {10'b0000011100, 12'd8},
    {10'b0010011001, 12'd11},
    {10'b1100011000, 12'd13},
    {10'b1100011001, 12'd14},
    {10'b0100011001, 12'd16},
    {10'b0010011111, 12'd17},
    {10'b0010011100, 12'd22},
    {10'b1100011101, 12'd23},
    {10'b1100011100, 12'd24},
    {10'b1100011111, 12'd27},
    {10'b1100011110, 12'd28},
    {10'b0010011011, 12'd30},
    {10'b0000011001, 12'd31},
    {10'b0000011101, 12'd32},
    {10'b0000011000, 12'd35},
    {10'b1110011010, 12'd37},
    {10'b1110011001, 12'd38}
  })
);

// 无funct3指令译码（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(3),
  .KEY_LEN(7),
  .DATA_LEN(12)
) i6 (
  .out(InstrNoFunct),
  .key(Opcode),
  .default_out(12'd0),
  .lut({
    {7'b0110111, 12'd6},
    {7'b0010111, 12'd9},
    {7'b1101111, 12'd10}
  })
);

// 需funct7指令译码（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(11),
  .KEY_LEN(17),
  .DATA_LEN(12)
) i7 (
  .out(InstrFunct7),
  .key(Opcode_Funct3_Funct7),
  .default_out(12'd0),
  .lut({
    {17'b01100110000100000, 12'd12},
    {17'b00100111010100000, 12'd15},
    {17'b01100110010000000, 12'd18},
    {17'b01100111110000000, 12'd19},
    {17'b01100110110000000, 12'd20},
    {17'b01100111100000000, 12'd21},
    {17'b00100111010000000, 12'd25},
    {17'b01100111000000000, 12'd26},
    {17'b01100110100000000, 12'd29},
    {17'b01100111010100000, 12'd33},
    {17'b01100111010000000, 12'd34}
  })
);

// CSR指令译码（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(2),
  .KEY_LEN(32),
  .DATA_LEN(12)
) i8 (
  .out(InstrCsr),
  .key(i_instr),
  .default_out(12'd0),
  .lut({
    {32'b00000000000000000000000001110011, 12'd36},
    {32'b00110000001000000000000001110011, 12'd39}
  })
);

assign InstrType = (InstrCsr != 12'd0)    ? InstrCsr    :
                  (InstrNoFunct != 12'd0) ? InstrNoFunct :
                  (InstrFunct7 != 12'd0)  ? InstrFunct7  :
                                          InstrFunct3;

// 立即数选择MUX（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(40),
  .KEY_LEN(12),
  .DATA_LEN(32)
) i1 (
  .out(Imm),
  .key(InstrType),
  .default_out(32'd0),
  .lut({
    12'd0,  I_ex,  12'd1,  I_ex,  12'd2,  I_ex,  12'd3,  S_ex,
    12'd4,  I_ex,  12'd5,  R_ex,  12'd6,  U_ex,  12'd7,  S_ex,
    12'd8,  I_ex,  12'd9,  U_ex,  12'd10, J_ex,  12'd11, I_ex,
    12'd12, R_ex,  12'd13, B_ex,  12'd14, B_ex,  12'd15, I_ex,
    12'd16, S_ex,  12'd17, I_ex,  12'd18, R_ex,  12'd19, R_ex,
    12'd20, R_ex,  12'd21, R_ex,  12'd22, I_ex,  12'd23, B_ex,
    12'd24, B_ex,  12'd25, I_ex,  12'd26, R_ex,  12'd27, B_ex,
    12'd28, B_ex,  12'd29, R_ex,  12'd30, I_ex,  12'd31, I_ex,
    12'd32, I_ex,  12'd33, R_ex,  12'd34, R_ex,  12'd35, I_ex,
    12'd36, I_ex,  12'd37, I_ex,  12'd38, I_ex,  12'd39, R_ex
  })
);

wire reg_wen;
// 寄存器写使能控制（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(11),
  .KEY_LEN(12),
  .DATA_LEN(1)
) i2 (
  .out(reg_wen),
  .key(InstrType),
  .default_out(1'd1),
  .lut({
    12'd3,  1'b0, 12'd4,  1'b0, 12'd7,  1'b0, 12'd13, 1'b0,
    12'd14, 1'b0, 12'd16, 1'b0, 12'd23, 1'b0, 12'd24, 1'b0,
    12'd27, 1'b0, 12'd28, 1'b0, 12'd36, 1'b0
  })
);

wire reqValid;
// 存储器访问有效信号（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(8),
  .KEY_LEN(12),
  .DATA_LEN(1)
) i4 (
  .out(reqValid),
  .key(InstrType),
  .default_out(1'd0),
  .lut({
    12'd2,  1'b1, 12'd8,  1'b1, 12'd3,  1'b1, 12'd7,  1'b1,
    12'd16, 1'b1, 12'd31, 1'b1, 12'd32, 1'b1, 12'd35, 1'b1
  })
);

wire wen_ram;
// 存储器写使能信号（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(3),
  .KEY_LEN(12),
  .DATA_LEN(1)
) i5 (
  .out(wen_ram),
  .key(InstrType),
  .default_out(1'd0),
  .lut({
    12'd3,  1'b1, 12'd7,  1'b1, 12'd16, 1'b1
  })
);

ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(2),
  .KEY_LEN(12),  
  .DATA_LEN(12)
) i9 (
  .out(CsrNum),
  .key(I_imm),
  .default_out(12'd0),
  .lut({
    // {32'h341, 12'd1},  // mepc → 编号1
    // {32'h342, 12'd2},  // mcause → 编号2
    // {32'h300, 12'd3},  // mstatus → 编号3IVal
    // {32'h305, 12'd4},   // mtvec → 编号4
    {12'hB00, 12'd5},    //mcycle
    {12'hB80, 12'd6}    //mcycleh
  })
);

ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(5),          // 有效键数量：lb/lbu + lh/lhu + lw（共5个）
  .KEY_LEN(3),         // 键宽度 = Funct3 宽度（3bit）
  .DATA_LEN(2)         // 输出宽度 = o_lsu_size 宽度（2bit）
) i11 (
  .out(lsu_size),
  .key(lsu_funct3_key),// 仅访存指令的 Funct3 作为键（之前定义的信号）
  .default_out(2'd0),  // 非访存指令默认输出 00
  .lut({
    // 键（Funct3）   输出（o_lsu_size）→ 对应指令及位宽
    3'b000, 2'b00,    // lb（有符号字节）→ 1字节
    3'b100, 2'b00,    // lbu（无符号字节）→ 1字节
    3'b001, 2'b01,    // lh（有符号半字）→ 2字节
    3'b101, 2'b01,    // lhu（无符号半字）→ 2字节
    3'b010, 2'b10     // lw（字）→ 4字节
  })
);


assign o_Rs1Raddr = Rs1;
assign o_Rs2Raddr = Rs2;
assign o_RdRaddr  = Rd;
assign o_InstrNum = InstrType;
assign o_reqValid = reqValid;
assign o_MemWen   = wen_ram;
assign o_RegWen   = ((i_respValid ) || (~reqValid && i_IfuValid)) && reg_wen;
assign o_Imm      = Imm;
assign o_lsu_size = lsu_size;
assign o_CsrNum   = CsrNum;

endmodule