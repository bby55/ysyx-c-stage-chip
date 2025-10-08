module ysyx_25010028_IFU #(parameter PC_START = 32'h80000000) (
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

  // 组合逻辑：计算下一状态和控制信号
  always @(*) begin
    case(CurrentState)
      IDLE: begin
        o_IfuRaddr      = PC;
        o_IfuValid_next = 1'b1;  // IDLE状态下有效
        UpdatePC_en     = 1'b0;
        NextState       = WAIT;
      end

      WAIT: begin
        o_instr         = i_IfuRdata;
        
        if( (i_respValid ) || (~i_reqValid && io_ifu_respValid))begin
          UpdatePC_en     = 1'b1;
          NextState       = IDLE;
          o_IfuValid_next = 1'b0;  // 准备回到IDLE时先无效
        end
        else begin
          o_IfuValid_next = 1'b0;  // WAIT状态保持无效
          UpdatePC_en     = 1'b0;
          NextState       = WAIT;
        end
      end

      default: begin
        o_IfuRaddr      = 32'h0;
        o_instr         = 32'h0;
        o_IfuValid_next = 1'b0;
        UpdatePC_en     = 1'b0;
        NextState       = IDLE;
      end
    endcase
  end

  assign o_PC = PC;

endmodule
