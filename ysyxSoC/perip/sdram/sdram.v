`timescale 1ns / 1ps

module sdram(
  input        clk,          // 系统时钟
  input        cke,          // 时钟使能
  input        cs,           // 片选（低有效）
  input        ras,          // 行地址选通（低有效）
  input        cas,          // 列地址选通（低有效）
  input        we,           // 写使能（低有效）
  input [13:0] a,            // 地址总线
  input [ 1:0] ba,           // Bank地址
  input [ 3:0] dqm,          // 数据掩码（dqm[0]=低8位，dqm[1]=高8位）
  inout [31:0] dq            // 双向数据总线
);

wire sdram_sel = a[13];
wire [15:0] dq_low_1;
wire [15:0] dq_high_1;
wire cs_grp1 = ~cs & (~sdram_sel);

wire [15:0] dq_low_2;
wire [15:0] dq_high_2;
wire cs_grp2 = ~cs & sdram_sel; 

// wire write_cmd = (~cs) && (ras) && (~cas) && (~we);
// wire read_cmd  = (~cs) && (ras) && (~cas) && (we);

// assign dq_low_1  = (write_cmd && ~sdram_sel)? dq[15:0] : 16'hzzzz; 
// assign dq_high_1 = (write_cmd && ~sdram_sel) ? dq[31:16] : 16'hzzzz;
// assign dq_low_2  = (write_cmd && sdram_sel) ? dq[15:0] : 16'hzzzz;
// assign dq_high_2 = (write_cmd && sdram_sel) ? dq[31:16] : 16'hzzzz; 

// assign dq = read_cmd ? (sdram_sel ? {dq_high_2, dq_low_2} : {dq_high_1, dq_low_1}) : 32'hzzzz_zzzz;

  sdram_u sdram_1(
    .clk(clk),
    .cke(cke),
    .cs(~cs_grp1),
    .ras(ras),
    .cas(cas),
    .we(we),
    .a(a[12:0]),
    .ba(ba),
    .dqm(dqm[1:0]),
    .dq(dq[15:0])
  );

  sdram_u sdram_2(
    .clk(clk),
    .cke(cke),
    .cs(~cs_grp1),
    .ras(ras),
    .cas(cas),
    .we(we),
    .a(a[12:0]),
    .ba(ba),
    .dqm(dqm[3:2]),
    .dq(dq[31:16])
  );

  sdram_u sdram_3(
    .clk(clk),
    .cke(cke),
    .cs(~cs_grp2),
    .ras(ras),
    .cas(cas),
    .we(we),
    .a(a[12:0]),
    .ba(ba),
    .dqm(dqm[1:0]),
    .dq(dq[15:0])
  );

  sdram_u sdram_4(
    .clk(clk),
    .cke(cke),
    .cs(~cs_grp2),
    .ras(ras),
    .cas(cas),
    .we(we),
    .a(a[12:0]),
    .ba(ba),
    .dqm(dqm[3:2]),
    .dq(dq[31:16])
  );




endmodule


module sdram_u(
  input        clk,          // 系统时钟
  input        cke,          // 时钟使能
  input        cs,           // 片选（低有效）
  input        ras,          // 行地址选通（低有效）
  input        cas,          // 列地址选通（低有效）
  input        we,           // 写使能（低有效）
  input [12:0] a,            // 地址总线
  input [ 1:0] ba,           // Bank地址
  input [ 1:0] dqm,          // 数据掩码（dqm[0]=低8位，dqm[1]=高8位）
  inout [15:0] dq            // 双向数据总线
);

// -------------------------- 1. 命令定义（{ras, cas, we}） --------------------------
localparam CMD_NOP        = 3'b111;    // 空操作
localparam CMD_ACTIVE     = 3'b011;    // 激活行
localparam CMD_READ       = 3'b101;    // 读命令
localparam CMD_WRITE      = 3'b100;    // 写命令
localparam CMD_PRECHARGE  = 3'b010;    // 预充电
localparam CMD_REFRESH    = 3'b001;    // 刷新
localparam CMD_MODE       = 3'b000;    // 模式寄存器配置

// -------------------------- 2. 内部寄存器定义 --------------------------
wire [12:0] r_active_row;     // 当前激活的行地址
wire [12:0] w_active_row;     // 当前激活的行地址
reg [1:0]  active_bank;    // 当前激活的Bank
reg [8:0]  curr_col;       // 当前列地址（读/写命令时锁存）
reg [8:0]  burst_cnt;      // 突发计数器（读写共用）
reg [8:0]  burst_len;      // 突发长度（1/2/4/8）
reg [8:0]  cas_latency;    // CAS延迟（1/2/3）
reg        read_en;        // 读使能（控制DQ输出）
reg        write_en;       // 写使能
reg [8:0]  cas_cnt;        // CAS延迟计数器
reg [15:0] dq_out;         // DQ输出寄存器（读数据）
reg        row_active;     // 行激活标志（仅激活后有效）

// 组合逻辑信号（基于跳变前的值）
wire [2:0] cmd;
wire       cas_done;       // CAS延迟完成（读操作有效）
wire       burst_done;     // 突发传输完成
wire [8:0] col_addr;       // 实时列地址（curr_col + burst_cnt）

// -------------------------- 3. 组合逻辑定义（关键：基于跳变前的值） --------------------------
// 命令解码（cs高则空操作）
assign cmd = cs ? CMD_NOP : {ras, cas, we};

// CAS延迟完成：读操作时，cas_cnt == cas_latency - 1（满足CAS-1延迟）
assign cas_done = (read_en && (cas_cnt == cas_latency - 9'd1)) ? 1'b1 : 1'b0;

// 突发完成：统一判断（读写共用，burst_cnt达到burst_len-1）
assign burst_done = ((read_en || write_en) && (burst_cnt == burst_len - 9'd1)) ? 1'b1 : 1'b0;

// 实时列地址：自动截断（等价于模512），仅在突发传输时有效
assign col_addr = (read_en) ? (curr_col + burst_cnt ) : 
((write_en && ~burst_done)) ? (curr_col + burst_cnt + 1) : a[8:0];

// 双向数据总线：读使能时输出dq_out，否则高阻
assign dq = (read_en || r_done) ? dq_out : 16'hzzzz;
wire [15:0] wdata;
// -------------------------- 4. 存储阵列 --------------------------
// 存储结构：4Bank × 8192行 × 512列 × 16位（修正初始化范围）
reg [15:0] mem[0:3][0:8191][0:511];

reg r_done;

always @(posedge clk)begin
  if(burst_done && read_en) r_done <= 1'b1;
  else r_done <= 1'b0;
end  
// -------------------------- 5. 初始化 --------------------------
initial begin
  integer b, r, c;
  // 初始化所有存储单元为0（修正：行/列循环范围）
  for (b = 0; b < 4; b = b + 1) begin
    for (r = 0; r < 8192; r = r + 1) begin
      for (c = 0; c < 512; c = c + 1) begin
        mem[b][r][c] = 16'h0000;
      end
    end
  end
  
  // 寄存器初始化
  active_bank  = 2'd0;
  curr_col     = 9'd0;
  burst_cnt    = 9'd0;
  burst_len    = 9'd4;       // 默认突发长度4
  cas_latency  = 9'd2;       // 默认CAS延迟2
  read_en      = 1'b0;
  write_en     = 1'b0;
  cas_cnt      = 9'd0;
  dq_out       = 16'h0000;
  row_active   = 1'b0;
end
      
assign wdata[7:0] = (dqm[0])? mem[active_bank][w_active_row][col_addr][7:0] : dq[7:0];
assign wdata[15:8] =(dqm[1])? mem[active_bank][w_active_row][col_addr][15:8]: dq[15:8]; 

reg [12:0] bank_row [3:0];
assign w_active_row = bank_row[ba];
assign r_active_row = bank_row[active_bank];
// -------------------------- 6. 命令处理（时序逻辑） --------------------------
always @(posedge clk) begin
  if (!cke) begin
    // 时钟禁用：重置所有标志和计数器
    read_en    <= 1'b0;
    write_en   <= 1'b0;
    cas_cnt    <= 9'd0;
    burst_cnt  <= 9'd0;
    row_active <= 1'b0;
    dq_out     <= 16'h0000;
  end else begin
    // 优先处理命令（基于跳变前的cmd值）
    case (cmd)
      CMD_ACTIVE: begin
        // 激活命令：锁存Bank和行地址，标记行激活
        active_bank  <= ba;
        bank_row[ba] <= a;
        row_active   <= 1'b1;    // 行激活标志置位
        cas_cnt      <= 9'd0;    // 重置CAS计数器
        burst_cnt    <= 9'd0;    // 重置突发计数器
        read_en      <= 1'b0;    // 关闭读使能
        write_en     <= 1'b0;    // 关闭写使能
      end
      CMD_READ: begin
        // 读命令：仅当行激活时有效，锁存列地址，置位读使能
        if (row_active) begin
          curr_col  <= a[8:0];   // 锁存列地址
          read_en   <= 1'b1;     // 读使能置位
          write_en  <= 1'b0;     // 关闭写使能
          cas_cnt   <= 9'd0;     // 重置CAS计数器
          burst_cnt <= 9'd0;     // 重置突发计数器
        end
      end
      CMD_WRITE: begin
        // 写命令：无CAS延迟，仅当行激活时有效，锁存列地址，置位写使能
        if (row_active) begin
          curr_col  <= a[8:0];   // 锁存列地址
          write_en  <= 1'b1;     // 写使能置位
          read_en   <= 1'b0;     // 关闭读使能
          cas_cnt   <= 9'd0;     // 重置CAS计数器
          burst_cnt <= 9'd0;     // 重置突发计数器
        end
      end
      CMD_MODE: begin
        // 模式寄存器配置：设置突发长度和CAS延迟
        case (a[2:0])
          3'b000: burst_len <= 9'd1;
          3'b001: burst_len <= 9'd2;
          3'b010: burst_len <= 9'd4;
          3'b011: burst_len <= 9'd8;
          default: burst_len <= 9'd4;
        endcase
        case (a[6:4])
          3'b001: cas_latency <= 9'd1;
          3'b010: cas_latency <= 9'd2;
          3'b011: cas_latency <= 9'd3;
          default: cas_latency <= 9'd2;
        endcase
      end
      CMD_PRECHARGE: begin
        // 预充电：关闭当前激活的行
        row_active <= 1'b0;
        read_en    <= 1'b0;
        write_en   <= 1'b0;
        cas_cnt    <= 9'd0;
        burst_cnt  <= 9'd0;
      end
      CMD_REFRESH: begin
        // 刷新：重置所有标志（简化实现）
        row_active <= 1'b0;
        read_en    <= 1'b0;
        write_en   <= 1'b0;
        cas_cnt    <= 9'd0;
        burst_cnt  <= 9'd0;
      end
      CMD_NOP: begin
        // 空操作：保持当前状态，仅更新计数器（读操作时）
        if (read_en && !cas_done && !burst_done) begin
          cas_cnt <= cas_cnt + 9'd1;  // CAS计数器递增
        end
      end
      default: begin
        // 无效命令：关闭读写使能
        read_en  <= 1'b0;
        write_en <= 1'b0;
      end
    endcase

    // -------------------------- 7. CAS延迟计数（仅读操作） --------------------------
    // 读操作时，CAS计数器递增（直到cas_done）
    if ((cmd == CMD_READ || read_en) && !cas_done && !burst_done) begin
      if (cas_cnt < cas_latency - 9'd1) begin
        cas_cnt <= cas_cnt + 9'd1;
      end
    end else if (!read_en || burst_done) begin
      cas_cnt <= 9'd0;  // 读结束或突发完成，重置CAS计数器
    end

    // -------------------------- 8. 突发计数（读写共用） --------------------------
    if ((read_en && cas_done) || (write_en && row_active)) begin
      // 读操作：CAS完成后开始突发计数；写操作：立即开始（无CAS延迟）
      if (!burst_done) begin
        burst_cnt <= burst_cnt + 9'd1;  // 突发计数器递增
      end else begin
        // 突发完成：重置计数器，关闭读写使能
        burst_cnt <= 9'd0;
        read_en   <= 1'b0;
        write_en  <= 1'b0;
      end
    end else if (!read_en && !write_en) begin
      burst_cnt <= 9'd0;  // 无读写操作，重置突发计数器
    end

    // -------------------------- 9. 读数据输出（CAS延迟后） --------------------------
    if (~cs && read_en && cas_done   && row_active) begin
      // 读数据输出：支持DQM掩码（1=保留原数据，0=输出存储数据）
      dq_out <= mem[active_bank][r_active_row][col_addr];
      if (dqm[0]) dq_out[7:0] <= mem[active_bank][r_active_row][col_addr][7:0];
      if (dqm[1]) dq_out[15:8] <= mem[active_bank][r_active_row][col_addr][15:8];
    end else begin
      dq_out <= 16'h0000;  // 无读操作，输出清零
    end

    // -------------------------- 10. 写数据输入（无CAS延迟） --------------------------
    if (~cs &&(write_en && !burst_done && row_active) || (cmd == CMD_WRITE && !burst_done))begin
      // 写数据输入：支持DQM掩码（1=保留原数据，0=写入新数据）

      
      // 写入存储阵列
      mem[ba][w_active_row][col_addr] <= wdata;
    end
  end 
end

endmodule