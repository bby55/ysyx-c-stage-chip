module ysyx_25010028_ALU #(
    parameter DATA_WIDTH = 32,
    parameter PC_START = 32'h20000000
) (
    input             clock,
    input             reset,
    input      [31:0] i_CsrData,

    input             ID_EX_Valid,
    output reg        EX_ID_Ready,
    input      [31:0] ID_EX_Imm,
    input      [31:0] ID_EX_PC,
    input      [31:0] ID_EX_Instr,
    input      [11:0] ID_EX_InstrNum,

    input      [4:0]   ID_EX_Rs1,
    input      [4:0]   ID_EX_Rs2,
    input      [4:0]   ID_EX_Rd,
    input              ID_EX_RegWen,
    input      [11:0]  ID_EX_CsrNum,
    input              ID_EX_IsLoad,
    input              ID_EX_IsStore,

    output            EX_LS_Valid,
    input             LS_EX_Ready,
    output reg [31:0] EX_LS_ExuRes,
    output reg [31:0] EX_LS_CsrExuData,
    output reg [31:0] EX_LS_JumpPC,
    output reg        EX_LS_JumpPC_en,
    output reg [31:0] EX_LS_PC,
    output reg [11:0] EX_LS_InstrNum,
    output reg [31:0] EX_LS_Instr,
    output reg [4:0]  EX_LS_Rs1,
    output reg [4:0]  EX_LS_Rs2,
    output reg [4:0]  EX_LS_Rd,
    output reg [31:0] EX_LS_Imm,
    output reg        EX_LS_RegWen,
    output reg [11:0] EX_LS_CsrNum,
    output reg        EX_LS_IsLoad,
    output reg        EX_LS_IsStore,
    output            EX_LS_IsLoad_w,
    output            EX_LS_IsStore_w,

    input      [31:0] RAW_Rs1Data,
    input      [31:0] RAW_Rs2Data,

    output reg [31:0] EX_LS_Rs1Data,

    input      [31:0] ID_EX_PC_w,
    input             Load_Use

);

    reg [31:0] ExuRes;
    reg [31:0] CsrExuData;
    reg [31:0] JumpPC;
    reg JumpPC_en;


always @(*) begin
    JumpPC     = 32'b0;
    JumpPC_en  = 1'b0;
    ExuRes     = {32{1'b0}};
    CsrExuData = 32'b0;
    case (ID_EX_InstrNum)
        12'd0:  ExuRes =  RAW_Rs1Data + ID_EX_Imm;                  // ADDI
        // 12'd2,12'd8,12'd31,12'd32,12'd35:  begin                   //LW LBU LH LHU LB
        //         ExuRes = RAW_Rs1Data;
        //     end   
        12'd3,12'd7,12'd16:  begin
                ExuRes = RAW_Rs2Data;                             // SW（存储字数据） SB（存储字节数据） SH（存储半字数据）  
        end                          
        12'd5:  ExuRes =  RAW_Rs1Data +  RAW_Rs2Data;                   // ADD（寄存器加）
        12'd6:  ExuRes = ID_EX_Imm;                           // LUI（高位立即数）
        12'd9:  ExuRes = ID_EX_PC + ID_EX_Imm;                // AUIPC
        12'd11: ExuRes =  RAW_Rs1Data << ID_EX_Imm[4:0];           // SLLI（立即数左移）
        12'd12: ExuRes =  RAW_Rs1Data -  RAW_Rs2Data;                   // SUB（寄存器减）
        12'd15: ExuRes = $signed( RAW_Rs1Data) >>> ID_EX_Imm[4:0]; // SRAI（立即数算术右移）
        12'd17: ExuRes =  RAW_Rs1Data & ID_EX_Imm;                 // ANDI（立即数与）
        12'd18: ExuRes =  RAW_Rs1Data <<  RAW_Rs2Data[4:0];             // SLL（寄存器左移）
        12'd19: ExuRes =  RAW_Rs1Data &  RAW_Rs2Data;                   // AND（寄存器与）
        12'd20: ExuRes = ($unsigned( RAW_Rs1Data) < $unsigned( RAW_Rs2Data)) ? 32'd1 : 32'd0; // SLTU
        12'd21: ExuRes =  RAW_Rs1Data |  RAW_Rs2Data;                   // OR（寄存器或）
        12'd22: ExuRes =  RAW_Rs1Data ^ ID_EX_Imm;                 // XORI（立即数异或）
        12'd25: ExuRes =  RAW_Rs1Data >> ID_EX_Imm[4:0];           // SRLI（立即数逻辑右移）
        12'd26: ExuRes =  RAW_Rs1Data ^  RAW_Rs2Data;                   // XOR（寄存器异或）
        12'd29: ExuRes = ($signed( RAW_Rs1Data) < $signed( RAW_Rs2Data)) ? 32'd1 : 32'd0; // SLT
        12'd30: ExuRes = ($unsigned( RAW_Rs1Data) < ID_EX_Imm) ? 32'd1 : 32'd0; // SLTIU
        12'd33: ExuRes = $signed( RAW_Rs1Data) >>>  RAW_Rs2Data[4:0];   // SRA
        12'd34: ExuRes = $unsigned( RAW_Rs1Data) >>  RAW_Rs2Data[4:0];  // SRL
        12'd37: begin
                  ExuRes = i_CsrData;                         // CSRRS
                  CsrExuData = i_CsrData |  RAW_Rs1Data;
                  //$display("PC=%h CsrData=%h", ID_EX_PC,i_CsrData);
        end
        12'd38: begin
                  ExuRes = i_CsrData;                         // CSRRW
                  CsrExuData =  RAW_Rs1Data;
        end
        12'd1: begin                                         // JALR
            JumpPC_en = 1'b1;                               
            ExuRes = ID_EX_PC + 32'd4;                       
            JumpPC =  RAW_Rs1Data + ID_EX_Imm;
        end
        12'd10: begin                                        // JAL
            JumpPC_en = 1'b1;                                
            ExuRes = ID_EX_PC + 32'd4;                       
            JumpPC = ID_EX_PC + ID_EX_Imm;
        end
        12'd13: begin                                        // BEQ（相等则跳转）
            JumpPC_en = ( RAW_Rs1Data ==  RAW_Rs2Data) ? 1'b1 : 1'b0;   
            ExuRes = {32{1'b0}};                             
            JumpPC = ( RAW_Rs1Data ==  RAW_Rs2Data) ? (ID_EX_PC + ID_EX_Imm) : (ID_EX_PC + 32'd4);
        end
        12'd14: begin                                        // BNE（不相等则跳转）
            JumpPC_en = ( RAW_Rs1Data !=  RAW_Rs2Data) ? 1'b1 : 1'b0;   
            ExuRes = {32{1'b0}};                              
            JumpPC = ( RAW_Rs1Data !=  RAW_Rs2Data) ? (ID_EX_PC + ID_EX_Imm) : (ID_EX_PC + 32'd4);
        end
        12'd23: begin                                        // BGE（有符号大于等于则跳转）
            JumpPC_en = ($signed( RAW_Rs1Data) >= $signed( RAW_Rs2Data)) ? 1'b1 : 1'b0; 
            ExuRes = {32{1'b0}};                         
            JumpPC = ($signed( RAW_Rs1Data) >= $signed( RAW_Rs2Data)) ? (ID_EX_PC + ID_EX_Imm) : (ID_EX_PC + 32'd4);
        end
        12'd24: begin                                        // BLT（有符号小于则跳转）
            JumpPC_en = ($signed( RAW_Rs1Data) < $signed( RAW_Rs2Data)) ? 1'b1 : 1'b0; 
            ExuRes = {32{1'b0}};                          
            JumpPC = ($signed( RAW_Rs1Data) < $signed( RAW_Rs2Data)) ? (ID_EX_PC + ID_EX_Imm) : (ID_EX_PC + 32'd4);
        end
        12'd27: begin                                        // BGEU（无符号大于等于则跳转）
            JumpPC_en = ($unsigned( RAW_Rs1Data) >= $unsigned( RAW_Rs2Data)) ? 1'b1 : 1'b0; 
            ExuRes = {32{1'b0}};                            
            JumpPC = ($unsigned( RAW_Rs1Data) >= $unsigned( RAW_Rs2Data)) ? (ID_EX_PC + ID_EX_Imm) : (ID_EX_PC + 32'd4);
        end
        12'd28: begin                                        // BLTU（无符号小于则跳转）
            JumpPC_en = ($unsigned( RAW_Rs1Data) < $unsigned( RAW_Rs2Data)) ? 1'b1 : 1'b0;
            ExuRes = {32{1'b0}};                             
            JumpPC = ($unsigned( RAW_Rs1Data) < $unsigned( RAW_Rs2Data)) ? (ID_EX_PC + ID_EX_Imm) : (ID_EX_PC + 32'd4);
        end
        12'd36: begin                                        // ECALL（强制跳转至异常向量表）
            JumpPC_en = 1'b1;
            ExuRes = {32{1'b0}};
            JumpPC = i_CsrData;
        end
        12'd39: begin                                        // MRET（强制跳转至异常返回地址）
            JumpPC_en = 1'b1;
            ExuRes = {32{1'b0}};
            JumpPC = i_CsrData;
        end

        default: begin
            JumpPC_en = 1'b0;                        
            ExuRes = {32{1'b0}};                   
            JumpPC = ID_EX_PC + 32'd4;            
        end
    endcase
end

 always @(posedge clock)begin 
    if(reset)begin
        EX_LS_ExuRes        <=  32'b0;
        EX_LS_CsrExuData    <=  32'b0;
        EX_LS_JumpPC        <=  32'b0;
        EX_LS_JumpPC_en     <=  1'b0;
        EX_LS_PC            <=  32'b0;
        EX_LS_Instr         <=  32'b0;
        EX_LS_InstrNum      <=  12'b0;
        EX_LS_Rs1           <=  5'b0;
        EX_LS_Rs2           <=  5'b0;
        EX_LS_Rd            <=  5'b0;
        EX_LS_Imm           <=  32'b0;
        EX_LS_RegWen        <=  1'b0;
        EX_LS_CsrNum        <=  12'b0;
        EX_LS_IsLoad        <=  1'b0;
        EX_LS_IsStore       <=  1'b0;
        EX_LS_Rs1Data       <=  32'b0;
    end else if(EX_LS_Valid && LS_EX_Ready)begin
        EX_LS_ExuRes        <=  ExuRes;
        EX_LS_CsrExuData    <=  CsrExuData;
        EX_LS_JumpPC        <=  JumpPC;
        EX_LS_JumpPC_en     <=  JumpPC_en;
        EX_LS_PC            <=  ID_EX_PC;
        EX_LS_Instr         <=  ID_EX_Instr;
        EX_LS_InstrNum      <=  ID_EX_InstrNum;
        EX_LS_Rs1           <=  ID_EX_Rs1;
        EX_LS_Rs2           <=  ID_EX_Rs2;
        EX_LS_Rd            <=  ID_EX_Rd;
        EX_LS_Imm           <=  ID_EX_Imm;
        EX_LS_RegWen        <=  ID_EX_RegWen;
        EX_LS_CsrNum        <=  ID_EX_CsrNum;
        EX_LS_IsLoad        <=  ID_EX_IsLoad;
        EX_LS_IsStore       <=  ID_EX_IsStore;
        EX_LS_Rs1Data       <=  RAW_Rs1Data;
    end
  end

wire [31:0] NPC;
assign NPC = (!reset) ? (EX_LS_JumpPC_en) ? EX_LS_JumpPC: ID_EX_PC: ID_EX_PC;

  always @(posedge clock) begin
    if(reset) begin
        EX_LS_Valid <= 1'b0;
    end else if((NPC != ID_EX_PC_w && EX_LS_JumpPC_en) || Load_Use) begin
        EX_LS_Valid  <= 1'b0;
    end else if(ID_EX_Valid && EX_ID_Ready) begin
        EX_LS_Valid <= 1'b1;
    end else if(EX_LS_Valid && LS_EX_Ready) begin
        EX_LS_Valid <= 1'b0;
    end 
  end

  always @(posedge clock) begin
    if(reset) begin
        EX_ID_Ready <= 1'b0;
    end else if((LS_EX_Ready) && !Load_Use) begin
        EX_ID_Ready <= 1'b1;
    end else begin
        EX_ID_Ready <= 1'b0;
    end
  end
assign EX_LS_IsLoad_w = ID_EX_IsLoad;
assign EX_LS_IsStore_w = ID_EX_IsStore;
endmodule