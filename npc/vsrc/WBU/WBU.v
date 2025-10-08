module ysyx_25010028_WBU #(
    ADDR_WIDTH = 1, 
    DATA_WIDTH = 1) 
  (
  input i_clk,
  input i_RegWen,
  input [11:0]           i_InstrNum,
  input [11:0]           i_CsrNum,
  input [ADDR_WIDTH-1:0] i_Rs1Raddr,
  input [ADDR_WIDTH-1:0] i_Rs2Raddr,
  input [ADDR_WIDTH-1:0] i_RdRaddr,
  input [DATA_WIDTH-1:0] i_ExuRes,
  input [DATA_WIDTH-1:0] i_PC,
  input [DATA_WIDTH-1:0] i_CsrExuData,
  output [DATA_WIDTH-1:0] o_Rs1Data,
  output [DATA_WIDTH-1:0] o_Rs2Data,
  output [DATA_WIDTH-1:0] o_ReturnA0,
  output [DATA_WIDTH-1:0] o_CsrData
);
  wire [DATA_WIDTH-1:0] A5Data;

  ysyx_25010028_RegisterFile #(
    .ADDR_WIDTH(ADDR_WIDTH),  
    .DATA_WIDTH(DATA_WIDTH)
) U_REG (
    .i_clk(i_clk),
    .i_RegWen(i_RegWen),
    .i_Rs1Raddr(i_Rs1Raddr),
    .i_Rs2Raddr(i_Rs2Raddr),
    .i_RdRaddr(i_RdRaddr),
    .i_ExuRes(i_ExuRes),
    .o_Rs1Data(o_Rs1Data),
    .o_Rs2Data(o_Rs2Data),
    .o_ReturnA0(o_ReturnA0),
    .o_A5Data(A5Data)
);
 
  ysyx_25010028_CsrFile #(
    .ADDR_WIDTH(12),
    .DATA_WIDTH(DATA_WIDTH)
  ) U_CSR (
    .i_clk(i_clk),
    .i_RegWen(i_RegWen),
    .i_InstrNum(i_InstrNum),
    .i_CsrNum(i_CsrNum),
    .i_PC(i_PC),
    .i_ExuRes(i_ExuRes),
    .i_A5Data(A5Data),
    .i_CsrExuData(i_CsrExuData),
    .o_CsrData(o_CsrData)
  );

endmodule