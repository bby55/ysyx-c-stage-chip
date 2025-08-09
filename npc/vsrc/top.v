import "DPI-C" function void ebreak(input int a0_val, input int exit_pc);
import "DPI-C" function int rom_read(input int addr);
import "DPI-C" function void display(input int instr, input int pc, input int npc);
import "DPI-C" function void display_ref(
    input int rf0, input int rf1, input int rf2, input int rf3,
    input int rf4, input int rf5, input int rf6, input int rf7,
    input int rf8, input int rf9, input int rf10, input int rf11,
    input int rf12, input int rf13, input int rf14, input int rf15,
    input int rf16, input int rf17, input int rf18, input int rf19,
    input int rf20, input int rf21, input int rf22, input int rf23,
    input int rf24, input int rf25, input int rf26, input int rf27,
    input int rf28, input int rf29, input int rf30, input int rf31
);


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
  wire [6:0] funct7;
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
  wire [16:0] opcode_funct3_funct7;
  wire [31:0] a0_val; 
  initial begin
    $monitor("PC=%h instr=%h raddr=%h", pc,instr,raddr);
  end
  PC #(.PC_START(32'h80000000)
  )u_pc (
    .clk(clk),
    .reset(reset),
    .pc_in(pc_next),    // 输入下一条地址
    .pc_out(pc)         // 输出当前PC值
  );

  
  always @(posedge clk)begin
    display(instr,pc,pc_next);
  end
  
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
  wire [7:0]  wmask_sh;
  wire valid;
  wire wen_ram;
  assign raddr = (valid==1)?rs1_data+imm:32'h80000000;
  assign waddr = (wen_ram==1)?rs1_data+imm:32'h80000000;

  assign wdata = (instr_type == 12'd3 || instr_type == 12'd16) ? rd_data :      // SW: 完整32位
                 (instr_type == 12'd7) ?                // SB: 字节存储
                 (waddr[1:0] == 2'd0) ? {24'd0, rd_data[7:0]} :
                 (waddr[1:0] == 2'd1) ? {16'd0, rd_data[7:0], 8'd0} :
                 (waddr[1:0] == 2'd2) ? {8'd0, rd_data[7:0], 16'd0} :
                 {rd_data[7:0], 24'd0} :
                 32'd0;  

    MuxKeyWithDefault #(8, 12, 1) i4 (valid, instr_type, 1'd0, {
    12'd2, 1'b1, //lw
    12'd8, 1'b1,  //lbu
    12'd3, 1'b1, //SW
    12'd7, 1'b1, //sb
    12'd16,1'b1, //sh
    12'd31,1'b1,  //lh
    12'd32,1'b1,  //lhu
    12'd35,1'b1
    //.....
  });

    MuxKeyWithDefault #(3, 12, 1) i5 (wen_ram, instr_type, 1'd0, {
    12'd3, 1'b1, //SW
    12'd7, 1'b1, //sb
    12'd16,1'b1 //sh
    //.....
  });

  
  assign wmask_sh = (waddr[1] == 1'b0) ? 8'h03 : 8'h0c;

  assign wmask = (instr_type == 12'd16) ? wmask_sh :
                   (instr_type == 12'd3)? 8'h0f : 
                   (waddr[1:0] == 2'd0) ? 8'h01 :
                   (waddr[1:0] == 2'd1) ? 8'h02 :
                   (waddr[1:0] == 2'd2) ? 8'h04 :
                   (waddr[1:0] == 2'd3) ? 8'h08 : 8'h00;

  import "DPI-C" function int pmem_read(input int raddr, input int valid);
  import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask, input int pc);
  always @(*) begin
    
    rdata = 0;

    if (valid) begin // 有读写请求时
      if((instr_type == 12'd2) || (instr_type == 12'd8) || (instr_type == 12'd31) || instr_type == 12'd32 ||(instr_type == 12'd35))begin
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
    .funct3(funct3),
    .funct7(funct7)  
  );

  assign I_ex = {{20{I_imm[11]}}, I_imm};
  assign S_ex = {{20{S_imm[11]}}, S_imm};
  assign J_ex = {{11{J_imm[19]}}, J_imm, 1'b0};
  assign U_ex = {U_imm, {12{1'b0}}};
  assign B_ex = {{19{B_imm[11]}}, B_imm, 1'b0};
  assign R_ex = {{32{R_imm}}};
  
  assign opcode_funct3 = {opcode,funct3};
  assign opcode_funct3_funct7 = {opcode,funct3,funct7};
  wire is_lui;
  wire [11:0]instr_type_tmp;
  wire [11:0]instr_type_nofunct;
  wire [11:0]instr_type_funct7;
  MuxKeyWithDefault #(22, 10, 12) i0 (instr_type_tmp, opcode_funct3, 12'd0, {
    10'b0010011000, 12'd0, //ADDI
    10'b1100111000, 12'd1, //JALR
    10'b0000011010, 12'd2, //LW
    10'b0100011010, 12'd3, //SW
    10'b1110011000, 12'd4, //ebreak
    10'b0110011000, 12'd5, //add
    //10'b0110111???, 12'd6, //lui
    10'b0100011000, 12'd7, //sb
    10'b0000011100, 12'd8,  //lbu    
    //10'b???0010111, 12'd9, //auipc
    //10'b???1101111, 12'd10, //jal 
    10'b0010011001, 12'd11, //slli
    // 12'd12 //sub
    10'b1100011000, 12'd13, //beq
    10'b1100011001, 12'd14, //bne
    //12'd15 //srai
    10'b0100011001, 12'd16,  //sh
    10'b0010011111, 12'd17,  //andi
    //12'd18 //sll
    //12'd19 //and
    //12'd20 //sltu
    //12'd21 //or
    10'b0010011100, 12'd22,  //xori
    10'b1100011101, 12'd23,   //bge
    10'b1100011100, 12'd24,    //blt
    //12'd25 //srli
    //12'd26 //xor
    10'b1100011111, 12'd27,    //bge
    10'b1100011110, 12'd28,    //bltu
    10'b0010011011, 12'd30,    //sltiu
    10'b0000011001, 12'd31,    //lh
    10'b0000011101, 12'd32,     //lhu
    //12'd33 //sra
    10'b0000011000, 12'd35      //lb
    //.....
  });
  
  MuxKeyWithDefault #(3, 7, 12) i6 (instr_type_nofunct, opcode, 12'd0, {
    7'b0110111, 12'd6, //lui
    7'b0010111, 12'd9,  //auipc
    7'b1101111, 12'd10  //jal
  });

  MuxKeyWithDefault #(11, 17, 12) i7 (instr_type_funct7, opcode_funct3_funct7, 12'd0, {
    17'b01100110000100000, 12'd12, //sub
    17'b00100111010100000, 12'd15, //srai
    17'b01100110010000000, 12'd18,  //sll
    17'b01100111110000000, 12'd19, //and
    17'b01100110110000000, 12'd20, //sltu
    17'b01100111100000000, 12'd21, //or
    17'b00100111010000000, 12'd25, //srli
    17'b01100111000000000, 12'd26, //xor
    17'b01100110100000000, 12'd29, //slt
    17'b01100111010100000, 12'd33, //sra
    17'b01100111010000000, 12'd34 //srl
  });

  assign instr_type = (instr_type_nofunct != 0)?instr_type_nofunct:
                      (instr_type_funct7 !=0 )?instr_type_funct7:instr_type_tmp;


  always @(posedge clk) begin
      if(instr == 32'h00100073)begin
        ebreak(a0_val,pc);

      end
  end


  MuxKeyWithDefault #(36, 12, 32) i1 (imm, instr_type, 32'd0, {
    12'd0, I_ex, //
    12'd1, I_ex, //
    12'd2, I_ex, //
    12'd3, S_ex, //
    12'd4, I_ex,
    12'd5, R_ex,
    12'd6, U_ex,
    12'd7, S_ex,
    12'd8, I_ex,
    12'd9, U_ex, //auipc
    12'd10,J_ex, //jal
    12'd11,I_ex, //slli
    12'd12,R_ex, //sub
    12'd13,B_ex, //beq
    12'd14,B_ex, //bne
    12'd15,I_ex, //srai
    12'd16,S_ex, //sh
    12'd17,I_ex, //andi
    12'd18,R_ex, //sll
    12'd19,R_ex, //and
    12'd20,R_ex, //sltu
    12'd21,R_ex, //or
    12'd22,I_ex, //xori
    12'd23,B_ex, //bge
    12'd24,B_ex, //blt
    12'd25,I_ex, //srli
    12'd26,R_ex, //xor
    12'd27,B_ex, //bgeu
    12'd28,B_ex, //bltu
    12'd29,R_ex, //slt
    12'd30,I_ex, //sltiu
    12'd31,I_ex, //lh
    12'd32,I_ex, //lhu
    12'd33,R_ex, //sra
    12'd34,R_ex,  //srl
    12'd35,I_ex
    //.....
  });

  MuxKeyWithDefault #(10, 12, 1) i2 (wen, instr_type, 1'd1, {
    12'd3, 1'b0, //SW
    12'd4, 1'b0, //ebreak
    12'd7, 1'b0, //sb
    12'd13, 1'b0, //beq
    12'd14, 1'b0, //bne
    12'd16, 1'b0, //sh
    12'd23, 1'b0, //bge
    12'd24, 1'b0,  //blt
    12'd27, 1'b0,   //bgeu
    12'd28, 1'b0   //bltu
    //.....
  });

  MuxKeyWithDefault #(8, 12, 32) i3 (pc_next, instr_type, pc + 32'd4, {
    12'd1, (rs1_data < 32'h80000000) ? 32'h80000000 + (rs1_data + imm) : (rs1_data + imm),//JALR
    12'd10, (pc < 32'h80000000) ? 32'h80000000 + (pc + imm) : (pc + imm),//JAL
    12'd13, (rs1_data == rs2_data)? pc + imm : pc + 32'd4,//beq
    12'd14, (rs1_data != rs2_data)? pc + imm : pc + 32'd4,//bne
    12'd23, ($signed(rs1_data) >= $signed(rs2_data))? pc + imm : pc + 32'd4, //bge
    12'd24, ($signed(rs1_data) < $signed(rs2_data))? pc + imm : pc + 32'd4,  //blt
    12'd27, ($unsigned(rs1_data) >= $unsigned(rs2_data))? pc + imm : pc + 32'd4, //bgeu
    12'd28, ($unsigned(rs1_data) < $unsigned(rs2_data))? pc + imm : pc + 32'd4  //bltu
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
  initial begin
        for (integer i = 0; i < 32; i = i + 1) begin
            rf[i] = 0; // 初始化为 0
        end
    end
  assign rdata1 = (raddr1 == 0)? 0 : rf[raddr1];
  assign rdata2 = (raddr2 == 0)? 0 : rf[raddr2];
  assign a0_val = rf[10];
  always @(posedge clk) begin
    if (wen & (waddr != 0)) rf[waddr] <= wdata;
  end

  
  always @(*) begin
    display_ref(
        rf[0], rf[1], rf[2], rf[3],
        rf[4], rf[5], rf[6], rf[7],
        rf[8], rf[9], rf[10], rf[11],
        rf[12], rf[13], rf[14], rf[15],
        rf[16], rf[17], rf[18], rf[19],
        rf[20], rf[21], rf[22], rf[23],
        rf[24], rf[25], rf[26], rf[27],
        rf[28], rf[29], rf[30], rf[31]
    );
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
  output [6:0] funct7,
  output [6:0] opcode
);
    assign rs1 = instr[19:15];
    assign rs2  = instr[24:20];
    assign rd   = instr[11:7];
    assign funct3 = instr[14:12];
    assign funct7 = instr[31:25];
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
        12'd9:  alu_out = pc + imm;                         //AUIPC
        12'd10: alu_out = pc + 32'd4;                       //JAL
        12'd11: alu_out = rs1_data << imm[4:0];             //SLLI
        12'd12: alu_out = rs1_data - rs2_data;              //SUB
        12'd15: alu_out = $signed(rs1_data) >>> imm[4:0];   //SRAI
        12'd16: alu_out = rs2_data;                         //SH
        12'd17: alu_out = rs1_data & imm;                   //andi
        12'd18: alu_out = rs1_data << rs2_data[4:0];        //sll
        12'd19: alu_out = rs1_data & rs2_data;              //and
        12'd20: alu_out = ($unsigned(rs1_data) < $unsigned(rs2_data))? 32'd1 : 32'd0; //sltu
        12'd21: alu_out = rs1_data | rs2_data;              //or
        12'd22: alu_out = rs1_data ^ imm;                   //XORI
        12'd25: alu_out = rs1_data >> imm[4:0];             //srli
        12'd26: alu_out = rs1_data ^ rs2_data;              //xor
        12'd29: alu_out = ($signed(rs1_data) < $signed(rs2_data))? 32'd1 : 32'd0; //slt
        12'd30: alu_out = ($unsigned(rs1_data) < imm)? 32'd1 : 32'd0; //sltiu
        12'd31: begin                                       
            case (byte_idx[1])
                1'd0: alu_out = {{16{rdata[15]}}, rdata[15:0]};        //  低位
                1'd1: alu_out = {{16{rdata[31]}}, rdata[31:16]};       //  高位
            endcase
        end
        12'd32: begin                                       
            case (byte_idx[1])
                1'd0: alu_out = {16'b0, rdata[15:0]};        //  低位
                1'd1: alu_out = {16'b0, rdata[31:16]};       //  高位
            endcase
        end
        12'd33: alu_out = $signed(rs1_data) >>> rs2_data[4:0];
        12'd34: alu_out = $unsigned(rs1_data) >> rs2_data[4:0];
        12'd35: begin                                       // LB（加载符号字节）
            case (byte_idx)
                2'd0: alu_out = {{24{rdata[7]}}, rdata[7:0]};        // 第0字节
                2'd1: alu_out = {{24{rdata[15]}}, rdata[15:8]};       // 第1字节
                2'd2: alu_out = {{24{rdata[23]}}, rdata[23:16]};      // 第2字节
                2'd3: alu_out = {{24{rdata[31]}}, rdata[31:24]};      // 第3字节（修复原25→24的笔误）
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