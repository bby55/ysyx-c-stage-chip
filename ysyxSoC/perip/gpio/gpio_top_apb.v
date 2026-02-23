module gpio_top_apb(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output  [31:0] in_prdata,  // 保持wire，不修改
  output        in_pslverr,

  output  [15:0] gpio_out,   // 保持wire，不修改
  input   [15:0] gpio_in,
  output  [7:0]  gpio_seg_0, // 保持wire，不修改
  output  [7:0]  gpio_seg_1,
  output  [7:0]  gpio_seg_2,
  output  [7:0]  gpio_seg_3,
  output  [7:0]  gpio_seg_4,
  output  [7:0]  gpio_seg_5,
  output  [7:0]  gpio_seg_6,
  output  [7:0]  gpio_seg_7
);

// 核心：定义内部reg寄存器，承接时序逻辑的赋值
reg [15:0] gpio_out_reg;    // 内部reg，对应gpio_out
reg [31:0] in_prdata_reg;   // 内部reg，对应in_prdata
reg [31:0] seg_data_reg;    // 内部reg，存储数码管数据

// 组合逻辑：将内部reg赋值给output wire（关键！规避wire时序赋值）
assign gpio_out = gpio_out_reg;
assign in_prdata = in_prdata_reg;

// APB基础响应（组合逻辑）
assign in_pready = 1'b1;
assign in_pslverr = 1'b0;

// 共阳极数码管段码表（你的原始表）
wire [7:0] seg_code[15:0];
assign seg_code[0]  = 8'b00000010; // 原8'b01000000 颠倒后
assign seg_code[1]  = 8'b10011110; // 原8'b01111001 颠倒后
assign seg_code[2]  = 8'b00100100; // 原8'b00100100 颠倒后（对称，值不变）
assign seg_code[3]  = 8'b00001100; // 原8'b00110000 颠倒后
assign seg_code[4]  = 8'b10011000; // 原8'b00011001 颠倒后
assign seg_code[5]  = 8'b01001000; // 原8'b00010010 颠倒后
assign seg_code[6]  = 8'b01000000; // 原8'b00000010 颠倒后（重点）
assign seg_code[7]  = 8'b00011110; // 原8'b01111000 颠倒后
assign seg_code[8]  = 8'b00000000; // 原8'b00000000 颠倒后（值不变）
assign seg_code[9]  = 8'b00001000; // 原8'b00010000 颠倒后
assign seg_code[10] = 8'b00010000; // 原8'b00001000 颠倒后
assign seg_code[11] = 8'b11000000; // 原8'b00000011 颠倒后
assign seg_code[12] = 8'b01100010; // 原8'b01000110 颠倒后
assign seg_code[13] = 8'b10000100; // 原8'b00100001 颠倒后
assign seg_code[14] = 8'b01100000; // 原8'b00000110 颠倒后
assign seg_code[15] = 8'b01110000; // 原8'b00001110 颠倒后
// 组合逻辑驱动数码管（wire类型，符合要求）
assign gpio_seg_0 = seg_code[seg_data_reg[3:0]];
assign gpio_seg_1 = seg_code[seg_data_reg[7:4]];
assign gpio_seg_2 = seg_code[seg_data_reg[11:8]];
assign gpio_seg_3 = seg_code[seg_data_reg[15:12]];
assign gpio_seg_4 = seg_code[seg_data_reg[19:16]];
assign gpio_seg_5 = seg_code[seg_data_reg[23:20]];
assign gpio_seg_6 = seg_code[seg_data_reg[27:24]];
assign gpio_seg_7 = seg_code[seg_data_reg[31:28]];

// 时序逻辑：仅对内部reg赋值（绝不直接赋值给output wire）
always @(posedge clock or posedge reset) begin
  if(reset) begin
    gpio_out_reg   <= 16'h0000;  // 赋值给内部reg
    seg_data_reg   <= 32'h00000000;
    in_prdata_reg  <= 32'h00000000;
  end else if(in_psel && in_penable) begin
    if(in_pwrite) begin
      case(in_paddr[7:0])
        8'h00: begin
          gpio_out_reg <= in_pwdata[15:0]; // 赋值给内部reg
        end
        8'h04: begin
          // 拨码开关只读，无操作
        end
        8'h08: begin
          seg_data_reg <= in_pwdata; // 赋值给内部reg
        end
        8'h0c: begin
          // 保留地址，无操作
        end
        default: begin
        end
      endcase
    end else begin
      // 读操作：仅赋值给内部reg
      case(in_paddr[7:0])
        8'h00: begin
          in_prdata_reg <= {16'h0000, gpio_out_reg};
        end
        8'h04: begin
          in_prdata_reg <= {16'h0000, gpio_in};
        end
        8'h08: begin
          in_prdata_reg <= seg_data_reg;
        end
        8'h0c: begin
          in_prdata_reg <= 32'h00000000;
        end
        default: begin
          in_prdata_reg <= 32'h00000000;
        end
      endcase
    end
  end
end

endmodule