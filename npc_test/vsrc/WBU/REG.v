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
module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1)
  (
  input i_clk,
  input i_RegWen,
  input [ADDR_WIDTH-1:0] i_Rs1Raddr,
  input [ADDR_WIDTH-1:0] i_Rs2Raddr,
  input [ADDR_WIDTH-1:0] i_RdRaddr,
  input [DATA_WIDTH-1:0] i_ExuRes,
  output [DATA_WIDTH-1:0] o_Rs1Data,
  output [DATA_WIDTH-1:0] o_Rs2Data,
  output [DATA_WIDTH-1:0] o_ReturnA0,
  output [DATA_WIDTH-1:0] o_A5Data
  );
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

  initial begin
      for (integer i = 0; i < 32; i = i + 1) begin
          rf[i] = 0; // 初始化为 0
      end
  end

  assign o_Rs1Data = (i_Rs1Raddr == 0)? 0 : rf[i_Rs1Raddr];
  assign o_Rs2Data = (i_Rs2Raddr == 0)? 0 : rf[i_Rs2Raddr];
  assign o_ReturnA0 = rf[10];
  assign o_A5Data   = rf[15];

  always @(posedge i_clk) begin
    if (i_RegWen & (i_RdRaddr != 0)) rf[i_RdRaddr] <= i_ExuRes;
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
 