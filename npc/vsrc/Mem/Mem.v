import "DPI-C" function int rom_read(input int addr);
module ysyx_25010028_Mem (
  input                   i_clk,
  input      [31:0]       i_Raddr,
  output reg [31:0]       o_Rdata
);

  always @(posedge i_clk) begin
    o_Rdata <= rom_read(i_Raddr);
  end

endmodule