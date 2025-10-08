module CsrFile #(
  parameter ADDR_WIDTH = 12,
  parameter DATA_WIDTH = 32
) (
  input                       i_clk,
  input                       i_RegWen,
  input [11:0]                i_InstrNum,
  input [11:0]                i_CsrNum,
  input [DATA_WIDTH-1:0]      i_PC,
  input [DATA_WIDTH-1:0]      i_ExuRes,
  input [DATA_WIDTH-1:0]      i_A5Data,
  input [DATA_WIDTH-1:0]      i_CsrExuData,
  output [DATA_WIDTH-1:0]     o_CsrData
);

  reg [DATA_WIDTH-1:0] mcause;
  reg [DATA_WIDTH-1:0] mepc;
  reg [DATA_WIDTH-1:0] mstatus;
  reg [DATA_WIDTH-1:0] mtvec;
  reg [DATA_WIDTH-1:0] mcycle;
  reg [DATA_WIDTH-1:0] mcycleh;
  reg [DATA_WIDTH-1:0] mvendorid;
  reg [DATA_WIDTH-1:0] marchid;

  wire [DATA_WIDTH-1:0] EpcData;

  initial begin
    mcause    = {DATA_WIDTH{1'b0}};
    mepc      = {DATA_WIDTH{1'b0}};
    mstatus   = 32'h1800;
    mtvec     = {DATA_WIDTH{1'b0}};
    mcycle    = {DATA_WIDTH{1'b0}};
    mcycleh   = {DATA_WIDTH{1'b0}};
    mvendorid = 32'h79737978;
    marchid   = 32'h017D9F6C;
  end

  assign EpcData = (i_A5Data == {DATA_WIDTH{1'b0}}) ? (i_PC + 32'd4) : i_PC;

  MuxKeyWithDefault #(4, 12, 32) i10 (o_CsrData, i_CsrNum, 32'd0, {
    12'd1, mepc, //mepc
    12'd2, mcause,//mcause
    12'd3, mstatus,//mstatus
    12'd4,  mtvec//mtvec
    //.....
  });

  always @(posedge i_clk) begin
    if (mcycle != 32'hFFFFFFFF) begin
      mcycle <= mcycle + 32'd1;
    end else begin
      mcycle <= 32'd0;
      if (mcycleh != 32'hFFFFFFFF) begin
        mcycleh <= mcycleh + 32'd1;
      end else begin
        mcycleh <= 32'd0;
      end
    end

    if (i_InstrNum == 12'd36) begin
      mcause <= i_A5Data;
      mepc   <= EpcData;
    end

    if ((i_InstrNum == 12'd37 || i_InstrNum == 12'd38) && i_RegWen) begin
      $display("PC=%h CsrNum=%h CsrExuData=%h CsrData=%h", i_PC,i_CsrNum,i_CsrExuData,o_CsrData);
      case (i_CsrNum)
        12'd1: mepc   <= i_CsrExuData;
        12'd2: mcause <= i_CsrExuData;
        12'd3: mstatus<= i_CsrExuData;
        12'd4: mtvec  <= i_CsrExuData;
        default: ;
      endcase
    end

    if (i_InstrNum == 12'd39) begin
      mstatus[3]      <= mstatus[7];
      mstatus[7]      <= 1'b1;
      mstatus[12:11]  <= 2'b00;
    end
  end

endmodule