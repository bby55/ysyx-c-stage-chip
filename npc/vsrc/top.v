import "DPI-C" function void ebreak(input int a0_val, input int exit_pc);
import "DPI-C" function int rom_read(input int addr);
import "DPI-C" function void display(input int instr, input int pc);
import "DPI-C" function void display_ref(input int rf[]);

module top(
    input clk,
    input reset
);
  wire [31:0] pc;
  wire [31:0] pc_next;
  wire [31:0] instr;
  wire [11:0] instr_type;
  wire [6:0] opcode;
  wire [2:0] funct3;
  wire [4:0] rs1;
  wire [4:0] rs2;
  wire [4:0] rd;
  wire [31:0] imm;
  wire [11:0] I_imm;
  wire [19:0] J_imm;
  wire [11:0] B_imm;
  wire R_imm;
  wire [11:0] S_imm;
  wire [19:0] U_imm;
  wire [31:0] I_ex;    // I型立即数扩展后
  wire [31:0] S_ex;    // S型立即数扩展后
  wire [31:0] J_ex;    // J型立即数扩展后
  wire [31:0] U_ex;    // U型立即数扩展后
  wire [31:0] B_ex;    // B型立即数扩展后
  wire [31:0] R_ex;    
  wire [31:0] imm_ex;
  wire [31:0] rs1_data;
  wire [31:0] rs2_data;
  wire [31:0] rd_data;
  wire [31:0] rom_index;
  wire wen;
  wire [9:0] opcode_funct3;
  wire [31:0] a0_val; 
  /*initial begin
    $monitor("PC=%h instr=%h raddr=%h", pc,instr,raddr);
  end*/
  PC #(.PC_START(32'h80000000)
  )u_pc (
    .clk(clk),
    .reset(reset),
    .pc_in(pc_next),    // 输入下一条地址
    .pc_out(pc)         // 输出当前PC值
  );

  
  
  
  assign rom_index = (pc < 32'h80000000)? (pc >> 2) : (pc - 32'h80000000) >> 2;
  /*Rom #(
    .ADDR_WIDTH(3),    // 地址位宽32
    .DATA_WIDTH(32)   // 32位指令
  ) u_rom (
    .addr(rom_index[2:0]),       // 地址接当前PC值
    .dout(instr)        // 输出接指令寄存器instr
  );*/

  assign instr = rom_read(rom_index*4);

/* verilator lint_off UNOPTFLAT */
  reg [31:0] rdata;
/* verilator lint_on UNOPTFLAT */
  reg [31:0] wdata;
  wire [31:0] raddr;
  wire [31:0] waddr;
  wire [7:0]  wmask;
  wire valid;
  wire wen_ram;
  assign raddr = (valid==1)?rs1_data+imm:32'h80000000;
  assign waddr = (wen_ram==1)?rs1_data+imm:32'h80000000;

  assign wdata = (instr_type == 12'd3) ? rd_data :      // SW: 完整32位
                 (instr_type == 12'd7) ?                // SB: 字节存储
                 (waddr[1:0] == 2'd0) ? {24'd0, rd_data[7:0]} :
                 (waddr[1:0] == 2'd1) ? {16'd0, rd_data[7:0], 8'd0} :
                 (waddr[1:0] == 2'd2) ? {8'd0, rd_data[7:0], 16'd0} :
                 {rd_data[7:0], 24'd0} :
                 32'd0;  

    MuxKeyWithDefault #(4, 12, 1) i4 (valid, instr_type, 1'd0, {
    12'd2, 1'b1, //lw
    12'd8, 1'b1,  //lbu
    12'd3, 1'b1, //SW
    12'd7, 1'b1 //sb
    //
    //.....
  });

    MuxKeyWithDefault #(2, 12, 1) i5 (wen_ram, instr_type, 1'd0, {
    12'd3, 1'b1, //SW
    12'd7, 1'b1 //sb
    //.....
  });

  assign wmask = (instr_type == 12'd3)? 8'h0f:
                   (waddr[1:0] == 2'd0) ? 8'h01 :
                   (waddr[1:0] == 2'd1) ? 8'h02 :
                   (waddr[1:0] == 2'd2) ? 8'h04 :
                   (waddr[1:0] == 2'd3) ? 8'h08 : 8'h00;

  import "DPI-C" function int pmem_read(input int raddr, input int valid);
  import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask, input int pc);
  always @(*) begin
    display(instr,pc);
    rdata = 0;

    if (valid) begin // 有读写请求时
      if((instr_type == 12'd2) || (instr_type == 12'd8))begin
        rdata = pmem_read(raddr-32'h80000000, {32{valid}});
      end
      if (wen_ram) begin // 有写请求时
        pmem_write(waddr-32'h80000000, wdata, wmask, pc);
      end
    end
    else begin
      rdata = 0;
    end
  end


  IDU u_idu (
    .instr(instr),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .I_imm(I_imm),
    .J_imm(J_imm),
    .B_imm(B_imm),       
    .R_imm(R_imm),       
    .S_imm(S_imm),       
    .U_imm(U_imm),       
    .opcode(opcode),
    .funct3(funct3)  
  );

  assign I_ex = {{20{I_imm[11]}}, I_imm};
  assign S_ex = {{20{S_imm[11]}}, S_imm};
  assign J_ex = {{11{J_imm[11]}}, J_imm, 1'b0};
  assign U_ex = {U_imm, {12{1'b0}}};
  assign B_ex = {{19{B_imm[11]}}, B_imm, 1'b0};
  assign R_ex = {{32{R_imm}}};
  
  assign opcode_funct3 = {opcode,funct3};
  wire is_lui;
  wire [11:0]instr_type_tmp;
  assign is_lui = (opcode == 7'b0110111)?1'b1:1'b0;
  MuxKeyWithDefault #(8, 10, 12) i0 (instr_type_tmp, opcode_funct3, 12'd0, {
    10'b0010011000, 12'd0, //ADDI
    10'b1100111000, 12'd1, //JALR
    10'b0000011010, 12'd2, //LW
    10'b0100011010, 12'd3, //SW
    10'b1110011000, 12'd4, //ebreak
    10'b0110011000, 12'd5, //add
    //10'b0110111xxx, 12'd6, //lui
    10'b0100011000, 12'd7, //sb
    10'b0000011100, 12'd8  //lbu    

    //.....
  });
  assign instr_type = (is_lui)?12'd6:instr_type_tmp;


  always @(posedge clk) begin
      if(instr == 32'h00100073)begin
        ebreak(a0_val,pc);

      end
  end


  MuxKeyWithDefault #(9, 12, 32) i1 (imm, instr_type, 32'd0, {
    12'd0, I_ex, //
    12'd1, I_ex, //
    12'd2, I_ex, //
    12'd3, S_ex, //
    12'd4, I_ex,
    12'd5, R_ex,
    12'd6, U_ex,
    12'd7, S_ex,
    12'd8, I_ex
    //.....
  });

  MuxKeyWithDefault #(3, 12, 1) i2 (wen, instr_type, 1'd1, {
    12'd3, 1'b0, //SW
    12'd4, 1'b0, //ebreak
    12'd7, 1'b0  //sb
    //.....
  });

  MuxKeyWithDefault #(1, 12, 32) i3 (pc_next, instr_type, pc + 32'd4, {
    12'd1, (rs1_data < 32'h80000000) ? 32'h80000000 + (rs1_data + imm) : (rs1_data + imm)//JALR
    //.....
  });

  RegisterFile #(
    .ADDR_WIDTH(5),     // 5位地址→32个寄存器
    .DATA_WIDTH(32)     // 32位数据
  ) u_regfile (
    .clk(clk),
    .wen(wen),         // 写使能
    .wdata(rd_data),    // 写入数据
    .waddr(rd),         // 写入地址
    .raddr1(rs1),        // 读地址
    .rdata1(rs1_data),
    .raddr2(rs2),
    .rdata2(rs2_data),
    .a0_val(a0_val)    // 读出数据
  );

  ALU #(
    .DATA_WIDTH(32)
  ) u_alu (
    .rs1_data(rs1_data),       
    .rs2_data(rs2_data),        
    .imm(imm),
    .raddr(raddr),
    .pc(pc),
    .rdata(rdata),
    .alu_ctrl(instr_type),  // 12位控制码
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
  output [DATA_WIDTH-1:0] rdata2,
  output [DATA_WIDTH-1:0] a0_val
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  assign rdata1 = (raddr1 == 0)? 0 : rf[raddr1];
  assign rdata2 = (raddr2 == 0)? 0 : rf[raddr2];
  assign a0_val = rf[10];
  always @(posedge clk) begin
    if (wen & (waddr != 0)) rf[waddr] <= wdata;
    display_ref(rf);
  end
  
endmodule

//指令存储器
module Rom #(ADDR_WIDTH = 3, DATA_WIDTH = 32) (
    input [ADDR_WIDTH-1:0] addr,
    output [DATA_WIDTH-1:0] dout
);
    reg [DATA_WIDTH-1:0] rom [2**ADDR_WIDTH-1:0];
    initial begin
        rom[0] = 32'h800011b7;
        rom[1] = 32'h12345237;
        rom[2] = 32'h4d200213;
        rom[3] = 32'hfe418ea3;
        rom[4] = 32'hffd1c283;
        rom[5] = 32'h00028513;
        rom[6] = 32'h00000073;
    end
    //wire [31:0] addr_extended = {{32-ADDR_WIDTH{1'b0}}, addr};  // 符号扩展为32位 
    //wire [1:0] offset = addr_extended[1:0]; // 相对基地址的偏移量
    wire [ADDR_WIDTH-1:0] rom_index;
    assign rom_index = addr;
    assign dout = rom[addr];
endmodule


//指令译码器,*I_imm*
module IDU (
  input [31:0] instr,
  output [4:0] rs1,
  output [4:0] rs2,
  output [4:0] rd,
  output [11:0] I_imm,
  output [19:0] J_imm,
  output [11:0] B_imm,
  output R_imm,
  output [11:0] S_imm,
  output [19:0] U_imm,
  output [2:0] funct3,
  output [6:0] opcode
);
    assign rs1 = instr[19:15];
    assign rs2  = instr[24:20];
    assign rd   = instr[11:7];
    assign funct3 = instr[14:12];
    assign opcode = instr[6:0];
    assign I_imm  = instr[31:20];
    assign U_imm  = instr[31:12];
    assign B_imm  = {instr[31], instr[7], instr[30:25], instr[11:8]};
    assign J_imm  = {instr[31], instr[19:12], instr[20], instr[30:21]};
    assign S_imm  = {instr[31:25], instr[11:7]};
    assign R_imm  = 1'b0;


endmodule

module ALU #(
    parameter DATA_WIDTH = 32
) (
    input [DATA_WIDTH-1:0] rs1_data,
    input [DATA_WIDTH-1:0] rs2_data,
    input [DATA_WIDTH-1:0] raddr,
    input [DATA_WIDTH-1:0] imm,
    input [DATA_WIDTH-1:0] pc,
    input [DATA_WIDTH-1:0] rdata,
    input [11:0] alu_ctrl,
    output reg [DATA_WIDTH-1:0] alu_out
);

wire [1:0] byte_idx = raddr[1:0];

always @(*) begin
    case (alu_ctrl)
        12'd0:  alu_out = rs1_data + imm;                  // ADDI
        12'd1:  alu_out = pc + 32'd4;                      // JALR（返回地址）
        12'd2:  alu_out = rdata;                           // LW（加载字）
        12'd3:  alu_out = rs2_data;                        //SW
        12'd7:  alu_out = rs2_data;                                      // SB（加载无符号字节）
        12'd5:  alu_out = rs1_data + rs2_data;             // ADD（寄存器加）
        12'd6:  alu_out = imm;              // LUI（高位立即数）
        12'd8: begin                                       // LBU（加载无符号字节）
            case (byte_idx)
                2'd0: alu_out = {24'b0, rdata[7:0]};        // 第0字节
                2'd1: alu_out = {24'b0, rdata[15:8]};       // 第1字节
                2'd2: alu_out = {24'b0, rdata[23:16]};      // 第2字节
                2'd3: alu_out = {24'b0, rdata[31:24]};      // 第3字节（修复原25→24的笔误）
            endcase
        end
        default: alu_out = {DATA_WIDTH{1'b0}};              // 默认输出0
    endcase
end

endmodule


module PC #(PC_START = 32'h80000000) (
    input clk,
    input reset,
    input [31:0] pc_in,
    output [31:0] pc_out
);

    Reg #(32, PC_START) pc_reg(clk, reset, pc_in, pc_out, 1'b1);
    
    
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