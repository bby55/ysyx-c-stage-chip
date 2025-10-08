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
    o_JumpPC_en = 1'b0;
    o_ExuRes = {DATA_WIDTH{1'b0}};
    case (i_InstrNum)
        12'd0:  o_ExuRes = i_Rs1Data + i_Imm;                  // ADDI
        12'd2:  o_ExuRes = i_LsuRData;                          // LW（加载字）
        12'd3:  o_ExuRes = i_Rs2Data;                          // SW（存储字数据）
        12'd7:  o_ExuRes = i_Rs2Data;                          // SB（存储字节数据）
        12'd5:  o_ExuRes = i_Rs1Data + i_Rs2Data;              // ADD（寄存器加）
        12'd6:  o_ExuRes = i_Imm;                              // LUI（高位立即数）
        12'd8: begin                                          // LBU（加载无符号字节）
            case (i_ByteIdx)
                2'd0: o_ExuRes = {24'b0, i_LsuRData[7:0]};
                2'd1: o_ExuRes = {24'b0, i_LsuRData[15:8]};
                2'd2: o_ExuRes = {24'b0, i_LsuRData[23:16]};
                2'd3: o_ExuRes = {24'b0, i_LsuRData[31:24]};
            endcase
        end
        12'd9:  o_ExuRes = i_PC + i_Imm;                       // AUIPC
        12'd11: o_ExuRes = i_Rs1Data << i_Imm[4:0];            // SLLI（立即数左移）
        12'd12: o_ExuRes = i_Rs1Data - i_Rs2Data;              // SUB（寄存器减）
        12'd15: o_ExuRes = $signed(i_Rs1Data) >>> i_Imm[4:0];  // SRAI（立即数算术右移）
        12'd16: o_ExuRes = i_Rs2Data;                          // SH（存储半字数据）
        12'd17: o_ExuRes = i_Rs1Data & i_Imm;                  // ANDI（立即数与）
        12'd18: o_ExuRes = i_Rs1Data << i_Rs2Data[4:0];        // SLL（寄存器左移）
        12'd19: o_ExuRes = i_Rs1Data & i_Rs2Data;              // AND（寄存器与）
        12'd20: o_ExuRes = ($unsigned(i_Rs1Data) < $unsigned(i_Rs2Data)) ? 32'd1 : 32'd0; // SLTU
        12'd21: o_ExuRes = i_Rs1Data | i_Rs2Data;              // OR（寄存器或）
        12'd22: o_ExuRes = i_Rs1Data ^ i_Imm;                  // XORI（立即数异或）
        12'd25: o_ExuRes = i_Rs1Data >> i_Imm[4:0];            // SRLI（立即数逻辑右移）
        12'd26: o_ExuRes = i_Rs1Data ^ i_Rs2Data;              // XOR（寄存器异或）
        12'd29: o_ExuRes = ($signed(i_Rs1Data) < $signed(i_Rs2Data)) ? 32'd1 : 32'd0; // SLT
        12'd30: o_ExuRes = ($unsigned(i_Rs1Data) < i_Imm) ? 32'd1 : 32'd0; // SLTIU
        12'd31: begin                                         // LH（加载有符号半字）
            case (i_ByteIdx[1])
                1'd0: o_ExuRes = {{16{i_LsuRData[15]}}, i_LsuRData[15:0]};
                1'd1: o_ExuRes = {{16{i_LsuRData[31]}}, i_LsuRData[31:16]};
            endcase
        end
        12'd32: begin                                         // LHU（加载无符号半字）
            case (i_ByteIdx[1])
                1'd0: o_ExuRes = {16'b0, i_LsuRData[15:0]};
                1'd1: o_ExuRes = {16'b0, i_LsuRData[31:16]};
            endcase
        end
        12'd33: o_ExuRes = $signed(i_Rs1Data) >>> i_Rs2Data[4:0]; // SRA
        12'd34: o_ExuRes = $unsigned(i_Rs1Data) >> i_Rs2Data[4:0]; // SRL
        12'd35: begin                                         // LB（加载有符号字节）
            case (i_ByteIdx)
                2'd0: o_ExuRes = {{24{i_LsuRData[ 7]}}, i_LsuRData[7:0]};
                2'd1: o_ExuRes = {{24{i_LsuRData[15]}}, i_LsuRData[15:8]};
                2'd2: o_ExuRes = {{24{i_LsuRData[23]}}, i_LsuRData[23:16]};
                2'd3: o_ExuRes = {{24{i_LsuRData[31]}}, i_LsuRData[31:24]};
            endcase
        end
        12'd37: begin
                  o_ExuRes = i_CsrData;                          // CSRRS
                  o_CsrExuData = i_CsrData | i_Rs1Data;
                  //$display("PC=%h CsrData=%h", i_PC,i_CsrData);
        end
        12'd38: begin
                  o_ExuRes = i_CsrData;                          // CSRRW
                  o_CsrExuData = i_Rs1Data;
        end
        12'd1: begin                                         // JALR
            o_JumpPC_en = 1'b1;                               // 使能跳转
            o_ExuRes = i_PC + 32'd4;                           // 运算结果=返回地址（PC+4）
            o_JumpPC = (i_Rs1Data < 32'h30000000) ? (32'h30000000 + (i_Rs1Data + i_Imm)) : (i_Rs1Data + i_Imm);
        end
        12'd10: begin                                        // JAL
            o_JumpPC_en = 1'b1;                               // 使能跳转
            o_ExuRes = i_PC + 32'd4;                           // 运算结果=返回地址（PC+4）
            o_JumpPC = (i_PC < 32'h30000000) ? (32'h30000000 + (i_PC + i_Imm)) : (i_PC + i_Imm);
        end
        12'd13: begin                                        // BEQ（相等则跳转）
            o_JumpPC_en = (i_Rs1Data == i_Rs2Data) ? 1'b1 : 1'b0; // 条件满足使能跳转
            o_ExuRes = {DATA_WIDTH{1'b0}};                     // 运算结果无意义（条件分支无返回值）
            o_JumpPC = (i_Rs1Data == i_Rs2Data) ? (i_PC + i_Imm) : (i_PC + 32'd4);
        end
        12'd14: begin                                        // BNE（不相等则跳转）
            o_JumpPC_en = (i_Rs1Data != i_Rs2Data) ? 1'b1 : 1'b0; // 条件满足使能跳转
            o_ExuRes = {DATA_WIDTH{1'b0}};                     // 运算结果无意义
            o_JumpPC = (i_Rs1Data != i_Rs2Data) ? (i_PC + i_Imm) : (i_PC + 32'd4);
        end
        12'd23: begin                                        // BGE（有符号大于等于则跳转）
            o_JumpPC_en = ($signed(i_Rs1Data) >= $signed(i_Rs2Data)) ? 1'b1 : 1'b0;
            o_ExuRes = {DATA_WIDTH{1'b0}};
            o_JumpPC = ($signed(i_Rs1Data) >= $signed(i_Rs2Data)) ? (i_PC + i_Imm) : (i_PC + 32'd4);
        end
        12'd24: begin                                        // BLT（有符号小于则跳转）
            o_JumpPC_en = ($signed(i_Rs1Data) < $signed(i_Rs2Data)) ? 1'b1 : 1'b0;
            o_ExuRes = {DATA_WIDTH{1'b0}};
            o_JumpPC = ($signed(i_Rs1Data) < $signed(i_Rs2Data)) ? (i_PC + i_Imm) : (i_PC + 32'd4);
        end
        12'd27: begin                                        // BGEU（无符号大于等于则跳转）
            o_JumpPC_en = ($unsigned(i_Rs1Data) >= $unsigned(i_Rs2Data)) ? 1'b1 : 1'b0;
            o_ExuRes = {DATA_WIDTH{1'b0}};
            o_JumpPC = ($unsigned(i_Rs1Data) >= $unsigned(i_Rs2Data)) ? (i_PC + i_Imm) : (i_PC + 32'd4);
        end
        12'd28: begin                                        // BLTU（无符号小于则跳转）
            o_JumpPC_en = ($unsigned(i_Rs1Data) < $unsigned(i_Rs2Data)) ? 1'b1 : 1'b0;
            o_ExuRes = {DATA_WIDTH{1'b0}};
            o_JumpPC = ($unsigned(i_Rs1Data) < $unsigned(i_Rs2Data)) ? (i_PC + i_Imm) : (i_PC + 32'd4);
        end
        12'd36: begin                                        // ECALL（强制跳转至异常向量表）
            o_JumpPC_en = 1'b1;                               // 强制使能跳转
            o_ExuRes = {DATA_WIDTH{1'b0}};                     // 运算结果无意义
            o_JumpPC = i_CsrData;                            // 跳转目标地址=异常向量表（mtvec）
        end
        12'd39: begin                                        // MRET（强制跳转至异常返回地址）
            o_JumpPC_en = 1'b1;                               // 强制使能跳转
            o_ExuRes = {DATA_WIDTH{1'b0}};                     // 运算结果无意义
            o_JumpPC = i_CsrData;                             // 跳转目标地址=异常返回地址（mepc）
        end

        // -------------------------- 默认分支 --------------------------
        default: begin
            o_JumpPC_en = 1'b0;
            o_ExuRes = {DATA_WIDTH{1'b0}};
            o_JumpPC = i_PC + 32'd4; // 默认下一条地址
        end
    endcase
end

endmodule