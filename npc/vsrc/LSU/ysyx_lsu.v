import "DPI-C" function int pmem_read(input int raddr, input int valid);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask, input int pc);

module ysyx_25010028_LSU (
  input               i_clk,
  input               i_rst,
  input               i_ifu_rlast,  //ifu->lsu（需同步后使用）
  output reg          o_lsu_arvalid, //lsu->mem 读地址有效（时序输出）
  input               i_lsu_arready, //mem->lsu 读地址准备好
  input               i_lsu_rvalid,  //mem->lsu 读数据有效
  output reg          o_lsu_rready,  //lsu->mem 读数据准备好（时序输出）
  output reg          o_lsu_awvalid, //lsu->mem 写地址有效（时序输出）
  input               i_lsu_awready, //mem->lsu 写地址准备好
  output reg          o_lsu_wvalid,  //lsu->mem 写数据有效（时序输出）
  input               i_lsu_wready,  //mem->lsu 写数据准备好
  input               i_is_loadmemory,
  input               i_is_storememory,
  input               i_lsu_rlast,
  input               i_lsu_bvalid,
  output reg          o_lsu_bready   //lsu->mem 写响应准备好（时序输出）
);

  parameter IDLE = 2'b00;
  parameter AR   = 2'b01;
  parameter AW   = 2'b10;
  parameter W    = 2'b11;  // 新增写数据状态，分离AW和W，符合AXI写通道时序

  reg [1:0] CurrentState;
  reg [1:0] NextState;
  


  // 2. 状态寄存器更新（纯时序逻辑，仅时钟沿更新）
  always @(posedge i_clk or posedge i_rst) begin
    if (i_rst) begin
      CurrentState <= IDLE;
    end else begin
      CurrentState <= NextState;
    end
  end

  // 3. 组合逻辑：仅计算下一状态（剥离所有控制信号赋值）
  always @(*) begin
    NextState = CurrentState;

    case(CurrentState)
      IDLE: begin
        // 仅同步脉冲触发状态切换，避免异步干扰
        if (i_is_loadmemory && i_ifu_rlast) begin
          NextState = AR;
        end else if (i_is_storememory && i_ifu_rlast) begin
          NextState = AW;
        end else begin
          NextState = IDLE;
        end
      end

      AR: begin
        // Load完成：rvalid且rlast有效
        if (i_lsu_rvalid && i_lsu_rlast) begin
          NextState = IDLE;
        end else begin
          NextState = AR;
        end
      end

      AW: begin
        // 写地址握手完成，进入写数据状态
        if (o_lsu_awvalid && i_lsu_awready) begin
          NextState = W;
        end else begin
          NextState = AW;
        end
      end

      W: begin
        // 写数据完成且收到写响应
        if (i_lsu_bvalid) begin
          NextState = IDLE;
        end else begin
          NextState = W;
        end
      end

      default: begin
        NextState = IDLE;
      end
    endcase
  end

  // 4. 时序逻辑：AXI读通道（Load）控制信号（核心修复）
  always @(posedge i_clk or posedge i_rst) begin
    if (i_rst) begin
      o_lsu_arvalid <= 1'b0;
      o_lsu_rready  <= 1'b0;
    end else begin
      // 读地址有效：仅IDLE→AR时拉高，握手完成后拉低
      if (CurrentState == IDLE && NextState == AR) begin
        o_lsu_arvalid <= 1'b1;
      end else if (o_lsu_arvalid && i_lsu_arready) begin
        o_lsu_arvalid <= 1'b0;
      end

      // 读数据ready：AR状态持续置1（提前准备，符合AXI时序）
      o_lsu_rready <= (CurrentState == AR);
    end
  end

  // 5. 时序逻辑：AXI写通道（Store）控制信号（核心修复）
  always @(posedge i_clk or posedge i_rst) begin
    if (i_rst) begin
      o_lsu_awvalid <= 1'b0;
      o_lsu_wvalid  <= 1'b0;
      o_lsu_bready  <= 1'b0;
    end else begin
      // 写地址有效：IDLE→AW时拉高，握手完成后拉低
      if (CurrentState == IDLE && NextState == AW) begin
        o_lsu_awvalid <= 1'b1;
        o_lsu_wvalid <= 1'b1;
      end else if (o_lsu_awvalid && i_lsu_awready) begin
        o_lsu_awvalid <= 1'b0;
      end

      // 写数据有效：AW→W时拉高，握手完成后拉低
      if (CurrentState == AW && NextState == W) begin
       if (o_lsu_wvalid && i_lsu_wready) begin
        o_lsu_wvalid <= 1'b0;
      end
    end
      // 写响应ready：W状态持续置1（提前准备，符合AXI时序）
      o_lsu_bready <= (NextState == W);
    end
  end

endmodule