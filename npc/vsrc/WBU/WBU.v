module ysyx_25010028_WBU #(
    ADDR_WIDTH = 1, 
    DATA_WIDTH = 1) 
  (
  input               clock,
  input               reset,

  output reg          WB_LS_Ready,
  input               LS_WB_Valid,

  input        [31:0] LS_WB_ExuRes,
  input        [31:0] LS_WB_CsrExuData,
  input        [31:0] LS_WB_JumpPC,
  input               LS_WB_JumpPC_en,
  input        [31:0] LS_WB_PC,
  input        [31:0] LS_WB_Instr,
  input        [11:0] LS_WB_InstrNum,
  input        [ 4:0] LS_WB_Rs1,
  input        [ 4:0] LS_WB_Rs2,
  input        [ 4:0] LS_WB_Rd,
  input        [31:0] LS_WB_Imm,
  input               LS_WB_RegWen,
  input        [11:0] LS_WB_CsrNum,
  input               LS_WB_IsLoad,
  input               LS_WB_IsStore,
  input        [31:0] LS_WB_LData,

  output       [4:0]  WB_Rd,
  output       [31:0] WB_Data,
  output              WB_RegWen,
  output              WB_Done

);
assign  WB_Data          = (LS_WB_IsLoad) ? LS_WB_LData : LS_WB_ExuRes;
assign  WB_Rd            =  LS_WB_Rd;
assign  WB_RegWen        =  LS_WB_RegWen;

always @(posedge clock) begin
    WB_LS_Ready         <= 1'b1;
  if(reset)begin
    WB_LS_Ready         <= 1'b0;
  end else if(LS_WB_Valid && WB_LS_Ready) begin
    WB_Done             <= 1'b1;
  end else begin
    WB_Done             <= 1'b0;
  end
end

endmodule