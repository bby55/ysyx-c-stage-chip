
`ifdef verilator
import "DPI-C" function void perfomance(input int ifu_count, input int lsu_count, input int compute_count, input int csr_count, input int jump_count, input int mem_count, input int exu_count, input int ifu_cycles, input int lsu_cycles, input int no_icache_count);
`endif
module perfomance(
  input         clock,
  input         reset,
  input         ifu_arvalid,
  input         lsu_arvalid,
  input         lsu_awvalid,
  input         ifu_rlast,
  input         icache_rlast,
  input         ifu_rready,
  input         lsu_rlast,
  input         lsu_rready,
  input [31:0]  ExuRes,
  input [11:0]  InstrNum
);

reg [31:0] ifu_count;
reg [31:0] no_icache_count;
reg [31:0] lsu_count;
reg [31:0] compute_count;
reg [31:0] csr_count;
reg [31:0] jump_count;
reg [31:0] mem_count;
reg [31:0] exu_count;
reg [31:0] prev_ExuRes;
reg [31:0] ifu_cycles;
reg [31:0] lsu_cycles;

parameter IDLE = 2'b00;
parameter ifu_start = 2'b01;
parameter lsu_start = 2'b10;

reg [1:0] state;
reg [1:0] next_state;

always @(posedge clock) begin
  if (reset) begin
    state <= IDLE;
  end else begin
    state <= next_state;
  end
end

always @(*) begin
  case (state)
    IDLE: begin
      if (ifu_arvalid) begin
        next_state = ifu_start;
      end else if (lsu_arvalid || lsu_awvalid) begin
        next_state = lsu_start;
      end else begin
        next_state = IDLE;
      end
    end
    ifu_start: begin
      if (icache_rlast && ifu_rready) begin
        next_state = IDLE;
      end else begin
        next_state = ifu_start;
      end
    end
    lsu_start: begin
      if (lsu_rlast && lsu_rready) begin
        next_state = IDLE;
      end else begin
        next_state = lsu_start;
      end
    end
    default: next_state = IDLE;
  endcase
end


always @(posedge clock) begin
  if (reset) begin
    ifu_count <= 0;
    no_icache_count <= 0;
    lsu_count <= 0;
    compute_count <= 0;
    csr_count <= 0;
    jump_count <= 0;
    mem_count <= 0;
    exu_count <= 0;
    prev_ExuRes <= 0;
  end else begin
    if (icache_rlast && ifu_rready) begin
      ifu_count <= ifu_count + 1;
    end
    if(ifu_rlast && ifu_rready) begin
      no_icache_count <= no_icache_count + 1;
    end


    if (lsu_rlast && lsu_rready) begin
      lsu_count <= lsu_count + 1;
    end

    if(state == ifu_start) begin
        ifu_cycles <= ifu_cycles + 1;
    end 
    if(state == lsu_start) begin
        lsu_cycles <= lsu_cycles + 1;
    end

    if (icache_rlast && ifu_rready) begin

        if(ExuRes != prev_ExuRes) begin
        prev_ExuRes <= ExuRes;
        exu_count <= exu_count + 1;
        end

        if (InstrNum == 12'd0 || InstrNum == 12'd5 || InstrNum == 12'd6 || InstrNum == 12'd9 || 
            InstrNum == 12'd11 || InstrNum == 12'd12 || InstrNum == 12'd15 || InstrNum == 12'd17 || 
            InstrNum == 12'd18 || InstrNum == 12'd19 || InstrNum == 12'd20 || InstrNum == 12'd21 || 
            InstrNum == 12'd22 || InstrNum == 12'd25 || InstrNum == 12'd26 || InstrNum == 12'd29 || 
            InstrNum == 12'd30 || InstrNum == 12'd33 || InstrNum == 12'd34) begin
        compute_count <= compute_count + 1;
        end


        if (InstrNum == 12'd37 || InstrNum == 12'd38) begin
        csr_count <= csr_count + 1;
        end


        if (InstrNum == 12'd1 || InstrNum == 12'd10 || InstrNum == 12'd13 || InstrNum == 12'd14 || 
            InstrNum == 12'd23 || InstrNum == 12'd24 || InstrNum == 12'd27 || InstrNum == 12'd28 || 
            InstrNum == 12'd36 || InstrNum == 12'd39) begin
        jump_count <= jump_count + 1;
        end

        if (InstrNum == 12'd2 || InstrNum == 12'd3 || InstrNum == 12'd7 || 
            InstrNum == 12'd8 || InstrNum == 12'd16 || InstrNum == 12'd31 || 
            InstrNum == 12'd32 || InstrNum == 12'd35) begin
        mem_count <= mem_count + 1;
        end
    end
  end
end


`ifdef verilator
always @(*) begin
  perfomance(ifu_count, lsu_count, compute_count, csr_count, jump_count, mem_count, exu_count, ifu_cycles, lsu_cycles, no_icache_count);
end
`endif
endmodule