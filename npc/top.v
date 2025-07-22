module top(
    input clk,
    input reset
);
  wire[31:0] pc;
  wire[31:0] pc_next;
  wire[31:0] instr;
  wire[4:0] rs1;
  wire[4:0] rs2;
  wire[4:0] rd;
  wire[11:0] imm; //I指令的立即数
  wire[31:0] imm_ex;
  wire[31:0] rs1_data;
  wire[31:0] rs2_data;
  wire[31:0] rd_data;

  assign pc_next = pc + 32'd4;
  PC u_pc (
    .clk(clk),
    .reset(reset),
    .pc_in(pc_next),    // 输入下一条地址
    .pc_out(pc)         // 输出当前PC值
  );
  
  Rom #(
    .ADDR_WIDTH(32),    // 地址位宽32
    .DATA_WIDTH(32),    // 32位指令
    .file("code.txt")
  ) u_rom (
    .addr(pc),          // 地址接当前PC值
    .dout(instr)        // 输出接指令寄存器instr
  );

  IDU u_idu (
    .instr(instr),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .I_imm(imm)  
  );

  assign imm_ex = {{20{imm[11]}}, imm};

  RegisterFile #(
    .ADDR_WIDTH(5),     // 5位地址→32个寄存器
    .DATA_WIDTH(32)     // 32位数据
  ) u_regfile (
    .clk(clk),
    .wen(1'b1),         // 写使能
    .wdata(rd_data),    // 写入数据
    .waddr(rd),         // 写入地址
    .raddr1(rs1),        // 读地址
    .rdata1(rs1_data),
    .raddr2(rs2),
    .rdata2(rs2_data)    // 读出数据
  );

  ALU #(
    .DATA_WIDTH(32)
  ) u_alu (
    .a(rs1_data),       // 操作数a
    .b(imm_ex),        // 操作数b
    .alu_ctrl(3'b000),  // 3位控制码
    .alu_out(rd_data)   // 输出结果
  );


   


endmodule

//寄存器
module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule

// 选择器模板内部实现
module MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  genvar n;
  generate
    for (n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end
endmodule

// 不带默认值的选择器模板
module MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule

// 带默认值的选择器模板
module MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule

//寄存器堆,*0号寄存器不可写*
module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input wen,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input [ADDR_WIDTH-1:0] raddr1,
  output  [DATA_WIDTH-1:0] rdata1,
  input [ADDR_WIDTH-1:0] raddr2,
  output [DATA_WIDTH-1:0] rdata2
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  assign rdata1 = (raddr1 == 0)? 0 : rf[raddr1];
  assign rdata2 = (raddr2 == 0)? 0 : rf[raddr2];
  always @(posedge clk) begin
    if (wen & (waddr != 0)) rf[waddr] <= wdata;
  end
endmodule

//指令存储器
module Rom #(ADDR_WIDTH = 1, DATA_WIDTH = 1, file = "code.txt") (
    input [ADDR_WIDTH-1:0] addr,
    output [DATA_WIDTH-1:0] dout
);
    reg [DATA_WIDTH-1:0] rom [2**ADDR_WIDTH-1:0];
    initial begin
        $readmemh("code.txt", rom);
    end
    assign dout = rom[(addr -  32'h80000000) >> 2];
endmodule


//指令译码器,*I_imm*
module IDU (
  input [31:0] instr,
  output [4:0] rs1,
  output [4:0] rs2,
  output [4:0] rd,
  output [11:0] I_imm
);
    assign rs1 = instr[19:15];
    assign rs2  = instr[24:20];
    assign rd   = instr[11:7];
    assign I_imm  = instr[31:20];

endmodule

module ALU #(DATA_WIDTH = 1) (
    input [DATA_WIDTH-1:0] a,
    input [DATA_WIDTH-1:0] b,
    input [2:0] alu_ctrl,
    output [DATA_WIDTH-1:0] alu_out
);
    wire [DATA_WIDTH-1:0] adder_out;
    assign adder_out = a + b;
    assign alu_out = adder_out;
endmodule


module PC #(PC_START = 32'h80000000) (
    input clk,
    input reset,
    input [31:0] pc_in,
    output [31:0] pc_out
);

    Reg #(32, 32'h80000000) pc_reg(clk, reset, pc_in, pc_out, 1'b1);
    
    
endmodule


module RAM #(DATA_WIDTH = 1, ADDR_WIDTH = 1) (
    input clk,
    input reset,
    input [ADDR_WIDTH-1:0] addr,
    input [DATA_WIDTH-1:0] din,
    output [DATA_WIDTH-1:0] dout,
    input we
);
    reg [DATA_WIDTH-1:0] ram[2**ADDR_WIDTH-1:0];
    assign dout = ram[addr];
    always @(posedge clk) begin
        if (we) begin
            ram[addr] <= din;
        end
    end
endmodule