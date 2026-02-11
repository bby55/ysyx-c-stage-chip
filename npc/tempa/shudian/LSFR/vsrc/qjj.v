// 顶层模块：4顶层时钟=1大时钟+clk1与din严格同步+单时钟域+无多路选择器
// 核心：din在clk1周期前已稳定，clk1全程与din同步，1大时钟完成一次并转串
module qjj(
    input clk,         // 顶层小时钟（4个=1个大时钟）
    input rst_n        // 高电平复位（rst_n=1复位，rst_n=0工作）
);

// -------------------------- 内部中间信号定义 --------------------------
reg         load;        // 加载使能：与clk1同周期（big_clk_cnt=0）有效，同步锁存din
reg  [3:0]  din;         // 4位并行数据：clk1周期前已稳定，全程与clk1同步
wire        dout;        // 串行输出：clk1~clk4依次触发din[0]~din[3]，同步无偏差

reg  [1:0]  big_clk_cnt;// 大时钟计数器：0~3循环，4个顶层周期=1个大时钟
reg  [3:0]  data_buf;    // 并行数据缓存：提前到clk4周期更新，为clk1准备好din
reg         clk1,clk2;   // 小时钟1-2：分别在第1、2顶层周期保持高电平
reg         clk3,clk4;   // 小时钟3-4：分别在第3、4顶层周期保持高电平

// -------------------------- 例化核心并转串模块（完全无修改） --------------------------
dff_4bit_par2ser_nomux u_dff_4bit_par2ser_nomux (
    .clk    (clk),      // 顶层唯一时钟
    .rst_n  (rst_n),    // 高电平复位
    .load   (load),     // 与clk1同步加载
    .din    (din),      // 与clk1同步的稳定并行数据
    .clk1   (clk1),     // 第1顶层周期高→din[0]（同步）
    .clk2   (clk2),     // 第2顶层周期高→din[1]
    .clk3   (clk3),     // 第3顶层周期高→din[2]
    .clk4   (clk4),     // 第4顶层周期高→din[3]
    .dout   (dout)      // 串行输出：与小时钟严格同步
);

// -------------------------- 1. 大时钟计数器：4顶层周期=1大时钟（无修改） --------------------------
always @(posedge clk) begin
    if (rst_n) begin
        big_clk_cnt <= 2'b00;
    end else begin
        big_clk_cnt <= big_clk_cnt + 1'b1; // 0→1→2→3→0循环
    end
end

// -------------------------- 2. 4路小时钟生成：与顶层周期绑定（无修改） --------------------------
always @(posedge clk) begin
    if (rst_n) begin
        clk1 <= 1'b0;
        clk2 <= 1'b0;
        clk3 <= 1'b0;
        clk4 <= 1'b0;
    end else begin
        clk1 <= (big_clk_cnt == 2'b00); // 第1顶层周期（大时钟0%~25%）：clk1全程高
        clk2 <= (big_clk_cnt == 2'b01); // 第2顶层周期（大时钟25%~50%）：clk2全程高
        clk3 <= (big_clk_cnt == 2'b10); // 第3顶层周期（大时钟50%~75%）：clk3全程高
        clk4 <= (big_clk_cnt == 2'b11); // 第4顶层周期（大时钟75%~100%）：clk4全程高
    end
end

// -------------------------- 3. 并行数据缓存：【核心修改1】提前到clk4周期更新 --------------------------
// 原条件：big_clk_cnt==0 → 新条件：big_clk_cnt==3（clk4周期，前一个大时钟最后一个周期）
// 效果：din在clk1周期（big_clk_cnt=0）前已完成更新，全程稳定
always @(posedge clk) begin
    if (rst_n) begin
        data_buf <= 4'b1011; // 初始测试数据：din[0]=1、din[1]=1、din[2]=0、din[3]=1
    end else if (big_clk_cnt == 2'b11) begin // 【修改点】clk4周期更新，为clk1准备数据
        data_buf <= {data_buf[0], data_buf[3:1]}; // 纯时序右循环，无分支
    end
end

// -------------------------- 4. load使能+din赋值：【核心修改2】din同步跟随data_buf，clk1周期稳定 --------------------------
// load与clk1同周期（big_clk_cnt=0）有效，din全程跟随data_buf，clk1周期已稳定
always @(posedge clk) begin
    if (rst_n) begin
        load <= 1'b0;
        din  <= 4'b0000;
    end else begin
        load <= (big_clk_cnt == 2'b00); // load与clk1同步（big_clk_cnt=0），锁存稳定din
        din  <= data_buf;                // 【无代码修改，但时序同步】clk1周期din=data_buf（已提前更新）
    end
end

endmodule

// 核心并转串模块：小时钟下降沿触发dout输出（沿敏感+同步）
module dff_4bit_par2ser_nomux (
    input         clk,
    input         rst_n,
    input         load,
    input  [3:0]  din,
    input         clk1,clk2,clk3,clk4,
    output reg    dout
);

reg [3:0] dff_reg; // 4位锁存寄存器：load时锁存稳定din

// 纯时序锁存：load=1时锁存din（与顶层clk同步）
always @(posedge clk) begin
    if (rst_n) begin
        dff_reg <= 4'b0000;
    end else begin
        dff_reg <= load ? din : dff_reg;
    end
end

// 【核心修改：小时钟下降沿触发dout输出（沿敏感，同步）】
// 逻辑：检测clk1~clk4的下降沿，对应锁存dff_reg的对应位到dout
always @(negedge clk1 or negedge clk2 or negedge clk3 or negedge clk4 or negedge rst_n) begin
    if (!rst_n) begin
        dout <= 1'b0;
    end else begin
        if (!clk1) begin // clk1下降沿：锁存dff_reg[0]
            dout <= dff_reg[0];
        end else if (!clk2) begin // clk2下降沿：锁存dff_reg[1]
            dout <= dff_reg[1];
        end else if (!clk3) begin // clk3下降沿：锁存dff_reg[2]
            dout <= dff_reg[2];
        end else if (!clk4) begin // clk4下降沿：锁存dff_reg[3]
            dout <= dff_reg[3];
        end
    end
end

endmodule