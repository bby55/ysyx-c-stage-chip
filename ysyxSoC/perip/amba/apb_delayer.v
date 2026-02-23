module apb_delayer(
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
  output [31:0] in_prdata,
  output        in_pslverr,

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);

  parameter IDLE = 2'b00;
  parameter WAIT = 2'b01;
  parameter DELAY = 2'b10;

  parameter r = 5.16;
  parameter s = 100;

  parameter r_s = 516;

  reg [1:0] state;
  reg [1:0] next_state;

  always @(posedge clock or posedge reset) begin
    if(reset) begin
      state <= IDLE;
    end
    else begin
      state <= next_state;
    end
  end

  always @(*) begin
    case(state)
      IDLE: begin
        if(in_psel && !in_penable) begin
          next_state = WAIT;
        end
        else begin
          next_state = IDLE;
        end
      end
      WAIT: begin
        if(out_pready) begin
          next_state = DELAY;
        end else begin
          next_state = WAIT;
        end
      end
      DELAY: begin
        if(delay_done) begin
          next_state = IDLE;
        end
        else begin
          next_state = DELAY;
        end
      end
      default: begin
        next_state = IDLE;
      end
    endcase
  end

  reg [31:0] delay_cnt;
  wire      delay_done = (delay_cnt == 1);
  always @(posedge clock) begin
    if(reset) begin
      delay_cnt <= 0;
    end
    else if(in_psel && !in_penable || state == WAIT) begin
      delay_cnt <= delay_cnt + r_s;
      if(next_state == DELAY) begin
        delay_cnt <= delay_cnt / s;
      end
    end
    else if(out_pready && in_penable || state == DELAY) begin
      if(!delay_done) delay_cnt <= delay_cnt - 1;
      else delay_cnt <= 0;
    end
    else begin
      delay_cnt <= 0;
    end
  end

  reg [31:0] r_paddr;
  reg        r_psel;
  reg        r_penable;
  reg [2:0]  r_pprot;
  reg        r_pwrite;
  reg [31:0] r_pwdata;
  reg [3:0]  r_pstrb;
  reg        r_pready;
  reg [31:0] r_prdata;
  reg        r_pslverr;

  always @(posedge clock) begin
    if(reset) begin
      r_pready  <= 1'b0;
      r_prdata  <= 32'b0;
      r_pslverr <= 1'b0;
    end
    else if(out_pready && in_penable) begin
      r_pready  <= out_pready;
      r_prdata  <= out_prdata;
      r_pslverr <= out_pslverr;
    end else if(delay_done) begin
      r_pready  <= 1'b0;
      r_prdata  <= 32'b0;
      r_pslverr <= 1'b0;
    end
  end

  assign out_paddr   = in_paddr;
  assign out_psel    = in_psel && state != DELAY;
  assign out_penable = in_penable;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;
  assign in_pready   = (delay_done) ? r_pready : 1'b0;
  assign in_prdata   = (delay_done) ? r_prdata : 32'b0;
  assign in_pslverr  = (delay_done) ? r_pslverr : 1'b0;


endmodule
