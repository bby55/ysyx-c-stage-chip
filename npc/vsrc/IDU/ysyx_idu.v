module ysyx_25010028_IDU (
  input               clock,
  input               reset,
  
  input       [31:0]  IF_ID_Instr,
  input       [31:0]  IF_ID_PC,
  input               IF_ID_Valid,
  output reg          ID_IF_Ready,

  output reg          ID_EX_Valid,
  input               EX_ID_Ready,
  output reg  [4:0]   ID_EX_Rs1,
  output reg  [4:0]   ID_EX_Rs2,
  output reg  [4:0]   ID_EX_Rd,
  output reg  [31:0]  ID_EX_PC,
  output reg  [31:0]  ID_EX_Imm,
  output reg          ID_EX_RegWen,
  output reg  [11:0]  ID_EX_InstrNum,
  output reg  [11:0]  ID_EX_CsrNum,
  output reg          ID_EX_IsLoad,
  output reg          ID_EX_IsStore,
  output reg  [31:0]  ID_EX_Instr,

  //===============RAW===================
  input       [4:0]   EX_LS_Rd,
  input       [4:0]   LS_WB_Rd,
  input       [31:0]  EX_LS_ExuRes,
  input       [31:0]  LS_WB_ExuRes,
  input       [31:0]  LS_WB_LData,
  input               EX_LS_Valid,
  input               LS_EX_Ready,
  input               EX_LS_RegWen,
  input               LS_WB_RegWen,
  input               EX_LS_IsLoad,
  input               LS_WB_IsLoad,

  output      [4:0]   Rs1,
  output      [4:0]   Rs2,
  input       [31:0]  Rs1Data,
  input       [31:0]  Rs2Data,
  output reg  [31:0]  RAW_Rs1Data,
  output reg  [31:0]  RAW_Rs2Data,
  output      [31:0]  ID_EX_PC_w,

  output              Load_Use

    
);

assign      Rs1        = IF_ID_Instr[19:15];
assign      Rs2        = IF_ID_Instr[24:20];
wire [4:0]  Rd         = IF_ID_Instr[11:7];
wire [2:0]  Funct_3    = IF_ID_Instr[14:12];
wire [6:0]  Funct_7    = IF_ID_Instr[31:25];
wire [6:0]  Opcode     = IF_ID_Instr[6:0];


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


wire [9:0]  Opcode_Funct3     = {Opcode, Funct_3};
wire [16:0] Opcode_Funct3_Funct7 = {Opcode, Funct_3, Funct_7};

assign I_imm   = IF_ID_Instr[31:20];
assign U_imm   = IF_ID_Instr[31:12];
assign B_imm   = {IF_ID_Instr[31], IF_ID_Instr[7], IF_ID_Instr[30:25], IF_ID_Instr[11:8]};
assign J_imm   = {IF_ID_Instr[31], IF_ID_Instr[19:12], IF_ID_Instr[20], IF_ID_Instr[30:21]};
assign S_imm   = {IF_ID_Instr[31:25], IF_ID_Instr[11:7]};
assign R_imm   = 1'b0;

assign I_ex = {{20{IF_ID_Instr[31]}}, I_imm};
assign S_ex = {{20{IF_ID_Instr[31]}}, S_imm};
assign B_ex = {{19{IF_ID_Instr[31]}}, B_imm, 1'b0};
assign U_ex = {U_imm, 12'b0};
assign J_ex = {{11{IF_ID_Instr[31]}}, J_imm, 1'b0};
assign R_ex = 32'd0;

wire [11:0] InstrFunct3;
wire [11:0] InstrNoFunct;
wire [11:0] InstrFunct7;
wire [11:0] InstrCsr;
wire [11:0] InstrType;


wire is_load = (Opcode == 7'b0000011);
wire is_store = (Opcode == 7'b0100011);

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

// CSR指令译码（匹配模板参数/端口）//fence.i
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(3),
  .KEY_LEN(32),
  .DATA_LEN(12)
) i8 (
  .out(InstrCsr),
  .key(IF_ID_Instr),
  .default_out(12'd0),
  .lut({
    {32'b00000000000000000000000001110011, 12'd36},
    {32'b00110000001000000000000001110011, 12'd39},
    {32'b00000000000000000001000000001111, 12'd40}
  })
);

assign InstrType = (InstrCsr != 12'd0)    ? InstrCsr    :
                  (InstrNoFunct != 12'd0) ? InstrNoFunct :
                  (InstrFunct7 != 12'd0)  ? InstrFunct7  :
                                          InstrFunct3;

// 立即数选择MUX（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(41),
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
    12'd36, I_ex,  12'd37, I_ex,  12'd38, I_ex,  12'd39, R_ex,
    12'd40, I_ex
  })
);

wire reg_wen;
// 寄存器写使能控制（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(12),
  .KEY_LEN(12),
  .DATA_LEN(1)
) i2 (
  .out(reg_wen),
  .key(InstrType),
  .default_out(1'd1),
  .lut({
    12'd3,  1'b0, 12'd4,  1'b0, 12'd7,  1'b0, 12'd13, 1'b0,
    12'd14, 1'b0, 12'd16, 1'b0, 12'd23, 1'b0, 12'd24, 1'b0,
    12'd27, 1'b0, 12'd28, 1'b0, 12'd36, 1'b0, 12'd40, 1'b0
  })
);

wire is_loadmemory;
wire is_storememory;
// 存储器访问有效信号（匹配模板参数/端口）
ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(5),
  .KEY_LEN(12),
  .DATA_LEN(1)
) i4 (
  .out(is_loadmemory),
  .key(InstrType),
  .default_out(1'd0),
  .lut({
    12'd2,  1'b1, 12'd8,  1'b1,
    12'd31, 1'b1, 12'd32, 1'b1, 12'd35, 1'b1
  })
);

ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(3),
  .KEY_LEN(12),
  .DATA_LEN(1)
) i12 (
  .out(is_storememory),
  .key(InstrType),
  .default_out(1'd0),
  .lut({
    12'd3,  1'b1, 12'd7,  1'b1,
    12'd16, 1'b1
  })
);


ysyx_25010028_MuxKeyWithDefault #(
  .NR_KEY(8),
  .KEY_LEN(12),  
  .DATA_LEN(12)
) i9 (
  .out(CsrNum),
  .key(I_imm),
  .default_out(12'd0),
  .lut({
    {12'h341, 12'd1},  // mepc → 编号1
    {12'h342, 12'd2},  // mcause → 编号2
    {12'h300, 12'd3},  // mstatus → 编号3IVal
    {12'h305, 12'd4},   // mtvec → 编号4
    {12'hB00, 12'd5},    //mcycle
    {12'hB80, 12'd6},    //mcycleh
    {12'hf11, 12'd7},
    {12'hf12, 12'd8}
  })
);


wire [11:0] o_CsrNum;
assign o_CsrNum   = (InstrType == 12'd36) ? 12'd4 : 
                    (InstrType == 12'd39) ? 12'd1 :
                    CsrNum;


  always @(posedge clock)begin
    if(reset)begin
      ID_EX_Imm      <= 32'b0;
      ID_EX_InstrNum <= 12'b0;
      ID_EX_Rs1      <= 5'b0;
      ID_EX_Rs2      <= 5'b0;
      ID_EX_Rd       <= 5'b0;
      ID_EX_RegWen   <= 1'b0;
      ID_EX_CsrNum   <= 12'b0;
      ID_EX_IsLoad   <= 1'b0;
      ID_EX_IsStore  <= 1'b0;
      ID_EX_PC       <= 32'b0;
      ID_EX_Instr    <= 32'b0;
    end else if(ID_EX_Valid && EX_ID_Ready && !Load_Use)begin
      ID_EX_Imm      <= Imm;
      ID_EX_InstrNum <= InstrType;
      ID_EX_Rs1      <= Rs1;
      ID_EX_Rs2      <= Rs2;
      ID_EX_Rd       <= Rd;
      ID_EX_RegWen   <= reg_wen;
      ID_EX_CsrNum   <= o_CsrNum;
      ID_EX_IsLoad   <= is_loadmemory;
      ID_EX_IsStore  <= is_storememory;
      ID_EX_PC       <= IF_ID_PC;
      ID_EX_Instr    <= IF_ID_Instr;
    end
  end
 
   always @(posedge clock) begin
    if(reset) begin
        ID_EX_Valid <= 1'b0;
    end else if (Load_Use) begin
        ID_EX_Valid <= ID_EX_Valid;
    end else if(IF_ID_Valid && ID_IF_Ready) begin
        ID_EX_Valid <= 1'b1;
    end else if(ID_EX_Valid && EX_ID_Ready) begin
        ID_EX_Valid <= 1'b0;
    end 
  end
   always @(posedge clock) begin
    if(reset) begin
        ID_IF_Ready <= 1'b0;
    end else if (Load_Use) begin
        ID_IF_Ready <=  1'b0;
    end else if(EX_ID_Ready || !ID_EX_Valid) begin
        ID_IF_Ready <= 1'b1;
    end else begin
        ID_IF_Ready <= 1'b0;
    end
  end

wire Load_Use_Raw;
assign Load_Use_Raw = (EX_LS_IsLoad && EX_LS_RegWen && (EX_LS_Rd != 0)) && 
                     ((EX_LS_Rd == Rs1) || (EX_LS_Rd == Rs2));

reg LS_EX_Ready_Latched;
always @(posedge clock or posedge reset) begin
  if(reset) begin
    LS_EX_Ready_Latched <= 1'b0;
  end else if(Load_Use_Raw && LS_EX_Ready) begin
    LS_EX_Ready_Latched <= 1'b1;
  end else if(!Load_Use_Raw || (IF_ID_Valid && ID_IF_Ready)) begin
    LS_EX_Ready_Latched <= 1'b0;
  end
end


assign Load_Use =  Load_Use_Raw && !LS_EX_Ready_Latched && !LS_EX_Ready;

always @(posedge clock) begin
    if(reset) begin
        RAW_Rs1Data <= 32'b0;
        RAW_Rs2Data <= 32'b0;
    end else if(ID_EX_Valid && EX_ID_Ready) begin
      if(EX_LS_Rd == Rs1 && EX_LS_RegWen && EX_LS_Rd != 5'b0)begin
        if(EX_LS_IsLoad) begin
          if(LS_EX_Ready || LS_EX_Ready_Latched) begin
            RAW_Rs1Data <= LS_WB_LData;
          end
        end else begin
        RAW_Rs1Data <= EX_LS_ExuRes;
        end
      end else if(LS_WB_Rd == Rs1 && LS_WB_RegWen && LS_WB_Rd != 5'b0)begin
        if(LS_WB_IsLoad) begin
            RAW_Rs1Data <= LS_WB_LData;
        end else begin
            RAW_Rs1Data <= LS_WB_ExuRes;
        end
      end else begin
            RAW_Rs1Data <= Rs1Data;
      end

      if(EX_LS_Rd == Rs2 && EX_LS_RegWen && EX_LS_Rd != 5'b0)begin
        if(EX_LS_IsLoad) begin
          if(LS_EX_Ready || LS_EX_Ready_Latched) begin
            RAW_Rs2Data <= LS_WB_LData;
          end
        end else begin
            RAW_Rs2Data <= EX_LS_ExuRes;
        end
      end else if(LS_WB_Rd == Rs2 && LS_WB_RegWen && LS_WB_Rd != 5'b0)begin
        if(LS_WB_IsLoad) begin
            RAW_Rs2Data <= LS_WB_LData;
        end else begin
            RAW_Rs2Data <= LS_WB_ExuRes;
        end
      end else begin
            RAW_Rs2Data <= Rs2Data;
      end
    end 
  end

assign ID_EX_PC_w = IF_ID_PC;
endmodule