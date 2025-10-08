module ysyx_25010028_PC #(PC_START = 32'h30000000) (
  input                   i_clk,
  input                   i_rst,
  input                   i_UpdatePC_en,
  input  [31:0]           i_JumpPC,
  input                   i_JumpPC_en,
  output [31:0]           o_PC
);
  reg  [31:0] d_PC;
  
  //根据i_UpdatePC_en和i_JumpPC_en判断PC是否需要更新或跳转
  always @(posedge i_clk) begin
    d_PC <= i_rst ? PC_START :
            i_UpdatePC_en ? (i_JumpPC_en ? i_JumpPC : d_PC + 32'h4) :
            d_PC;
  end

  assign o_PC = d_PC;

endmodule