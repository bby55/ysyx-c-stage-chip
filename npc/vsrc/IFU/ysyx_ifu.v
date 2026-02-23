module ysyx_25010028_IFU #(parameter PC_START = 32'h20000000) (
  input               i_clk,
  input               i_rst,
  input       [31:0]  i_JumpPC,
  input               i_JumpPC_en,
  input               i_is_loadmemory,
  input               i_is_storememory,

  output reg          o_ifu_arvalid, //ifu->mem 读地址有效（时序输出）
  input               i_ifu_arready, //mem->ifu 读地址准备好
  input               i_ifu_rvalid,  //mem->ifu 读数据有效
  output reg          o_ifu_rready,  //ifu->mem 读数据准备好（时序输出）
  input               i_ifu_rlast,   //mem->ifu 读数据最后一拍
  input               i_lsu_bvalid,  //lsu->ifu 写响应有效（用于等待写响应完成）
  input               i_lsu_rlast,   //lsu->ifu 读数据最后一拍（用于等待读数据完成）

  output reg  [31:0]  o_ifu_araddr,  //时序输出，与arvalid同步
  output reg  [2:0]   o_ifu_arsize,
  output reg  [1:0]   o_ifu_arburst,
  output reg  [3:0]   o_ifu_arid,
  output reg  [7:0]   o_ifu_arlen,
  output      [31:0]  o_PC,
  input       [31:0]  i_ifu_data,
  output      [31:0]  o_instruction  // 恢复为wire，组合逻辑同步更新
);

  parameter IDLE = 2'b00;
  parameter WAIT = 2'b01;
  parameter RESET = 2'b10;
  
  reg    [1:0]        CurrentState;
  reg     [1:0]       NextState;
  reg                 UpdatePC_en;
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

  always @(posedge i_clk) begin
    if (i_rst) begin
      CurrentState <= RESET;
    end else begin
      CurrentState <= NextState;
    end
  end

  // 组合逻辑：仅控制状态切换和PC更新，o_instruction独立赋值
  always @(*) begin
    NextState = CurrentState;
    UpdatePC_en = 1'b0;

    case(CurrentState)
      RESET: begin
        NextState = i_rst ? RESET : IDLE;
      end
      IDLE: begin
        if (o_ifu_arvalid && i_ifu_arready) begin
          NextState = WAIT;
        end else begin
          NextState = IDLE;
        end
      end
      WAIT: begin
        // 仅用is_loadmemory控制PC更新，而非o_instruction赋值
        if ((i_ifu_rvalid && i_ifu_rlast && !i_is_loadmemory && !i_is_storememory)  || i_lsu_bvalid || i_lsu_rlast) begin
          UpdatePC_en = 1'b1;
          NextState = IDLE;
        end else begin
          NextState = WAIT;
        end
      end
      default: begin
        NextState = IDLE;
      end
    endcase
  end

  // 核心：组合逻辑同步赋值o_instruction，且不依赖反馈信号
  // 仅在WAIT状态读数据有效时更新，其余时间保持最后一次有效值
  reg [31:0] instruction_r; // 缓存最后一次的指令值
  always @(posedge i_clk or posedge i_rst) begin
    if (i_rst) begin
      instruction_r <= 32'h0;
    end else if (CurrentState == WAIT && i_ifu_rvalid && i_ifu_rlast) begin
      instruction_r <= i_ifu_data; // 时序缓存，避免组合环路
    end
  end

  // 组合逻辑同步输出：读数据有效时用i_ifu_data，否则用缓存值
  // 实现“同步更新 + 无环路”
  assign o_instruction = (CurrentState == WAIT && i_ifu_rvalid && i_ifu_rlast) 
                        ? i_ifu_data 
                        : instruction_r;

  // 原有AR通道时序逻辑不变
  always @(posedge i_clk) begin
    if (i_rst) begin
      o_ifu_arvalid <= 1'b0;
      o_ifu_araddr  <= PC_START;
      o_ifu_arid    <= 4'b0;
      o_ifu_arlen   <= 8'b0;
      o_ifu_arsize  <= 3'b010;
      o_ifu_arburst <= 2'b00;
    end else if (CurrentState == IDLE && !o_ifu_arvalid) begin
      o_ifu_arvalid <= 1'b1;
      o_ifu_araddr  <= PC;
      o_ifu_arid    <= 4'b0;
      o_ifu_arlen   <= 8'b0;
      o_ifu_arsize  <= 3'b010;
      o_ifu_arburst <= 2'b00;
    end else if (o_ifu_arvalid && i_ifu_arready) begin
      o_ifu_arvalid <= 1'b0;
    end
  end

  // 原有RREADY时序逻辑不变
  always @(posedge i_clk) begin
    if (i_rst) begin
      o_ifu_rready <= 1'b0;
    end else if (CurrentState == IDLE || CurrentState == WAIT) begin
      o_ifu_rready <= 1'b1;
    end else begin
      o_ifu_rready <= 1'b0;
    end
  end

  assign o_PC = PC;
//[DEBUG]
`ifdef verilator
import "DPI-C" function void display(input int instr, input int pc, input int npc, input int update_en);
always @(posedge i_clk)begin
  display(instruction_r, PC, npc, {31'd0, UpdatePC_en});
  end
`endif
wire [31:0] npc;
assign npc = (!i_rst) ? (i_JumpPC_en) ? i_JumpPC: PC + 32'h4 : PC;


endmodule