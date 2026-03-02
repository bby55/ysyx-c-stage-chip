module icache #(parameter PC_START = 32'h30000000)(
  input               i_clk,
  input               i_rst,
//=======================================
  output              IF_ID_Valid;
  input               ID_IF_Ready;

  output      [31:0]  IF_ID_PC;
  output      [31:0]  IF_ID_Instr;
//========================================
  input       [31:0]  i_JumpPC,
  input               i_JumpPC_en,

  output reg          o_icache_arvalid, 
  input               i_icache_arready,
  input               i_icache_rvalid,
  output reg          o_icache_rready,
  input               i_icache_rlast,
  

  output reg  [31:0]  o_icache_araddr, 
  output reg  [2:0]   o_icache_arsize,
  output reg  [1:0]   o_icache_arburst,
  output reg  [3:0]   o_icache_arid,
  output reg  [7:0]   o_icache_arlen,

  input       [31:0]  i_icache_data,

  output              o_icache_rlast,

//===perf or fence.i ==================
  output              o_ifu_arvalid,
  input               i_icache_wash    

);
    assign IF_ID_Valid = ifu_rlast;
    always @(posedge i_clk)begin
        if(i_rst)begin
            IF_ID_PC <= 32'b0;
            IF_ID_Instr <= 32'b0;
        end else if(IF_ID_Valid && ID_IF_Ready)begin
            IF_ID_PC <= o_PC;
            IF_ID_PC <= o_instruction;
        end
    end

ysyx_25010028_IFU #(
    .PC_START(PC_START)
  ) U_IFU (
    .i_clk      (i_clk),
    .i_rst      (i_rst),
    .i_JumpPC   (i_JumpPC),
    .i_JumpPC_en(i_JumpPC_en),
    .o_PC       (o_PC),
    .o_ifu_arvalid(ifu_arvalid), 
    .i_ifu_arready(ifu_arready), 
    .i_ifu_rvalid (ifu_rvalid),
    .o_ifu_rready (o_icache_rready),
    .i_ifu_rlast  (ifu_rlast),
    .o_ifu_araddr (ifu_araddr),
    .o_ifu_arsize (o_icache_arsize),
    .o_ifu_arburst(o_icache_arburst),
    .o_ifu_arlen  (o_icache_arlen),
    .o_ifu_arid   (o_icache_arid),
    .i_lsu_bvalid (i_lsu_bvalid),
    .i_lsu_rlast  (i_lsu_rlast),
    .i_ifu_data   (ifu_data),
    .o_instruction(o_instruction)
  );






endmodule