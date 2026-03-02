module Arbiter(
    input         clock,
    input         reset,
    //读通道1(ifu)
    input             i_arvalid_1,  
    output reg        o_arready_1,    
    input  [31:0]     i_araddr_1,
    input  [2:0]      i_arsize_1,
    input  [1:0]      i_arburst_1,
    input  [3:0]      i_arid_1,
    input  [7:0]      i_arlen_1,
    input             i_rready_1,
    output reg        o_rvalid_1,   
    output reg [1:0]  o_rresp_1,     
    output reg [31:0] o_rdata_1,     
    output reg        o_rlast_1,     
    output reg [3:0]  o_rid_1,     
    input             i_arvalid_2,  
    output reg        o_arready_2, 
    input  [31:0]     i_araddr_2,
    input  [2:0]      i_arsize_2,
    input  [1:0]      i_arburst_2,
    input  [3:0]      i_arid_2,
    input  [7:0]      i_arlen_2,
    input             i_rready_2,
    output reg        o_rvalid_2,
    output reg [1:0]  o_rresp_2, 
    output reg [31:0] o_rdata_2,
    output reg        o_rlast_2,
    output reg [3:0]  o_rid_2,
    //读通道输出到存储器
    output reg        o_master_arvalid,
    input             i_master_arready, 
    output reg [31:0] o_master_araddr,
    output reg [ 3:0] o_master_arid,
    output reg [ 7:0] o_master_arlen,
    output reg [ 2:0] o_master_arsize,
    output reg [ 1:0] o_master_arburst, 
    input             i_master_rvalid, 
    output reg        o_master_rready,
    input  [31:0]     i_master_rdata, 
    input  [ 1:0]     i_master_rresp, 
    input             i_master_rlast, 
    input  [ 3:0]     i_master_rid,
    //写通道1(lsu)
    input             i_awvalid_1,  
    output reg        o_awready_1,    
    input  [31:0]     i_awaddr_1,
    input  [2:0]      i_awsize_1,
    input  [1:0]      i_awburst_1,
    input  [3:0]      i_awid_1,
    input  [7:0]      i_awlen_1,
    input             i_wvalid_1,
    output reg        o_wready_1,
    input  [31:0]     i_wdata_1,
    input  [3:0]      i_wstrb_1,
    input             i_wlast_1,
    output reg        o_bvalid_1,
    input             i_bready_1,
    output reg [1:0]  o_bresp_1,
    output reg [3:0]  o_bid_1,
    //
    output reg        o_master_awvalid,
    input             i_master_awready, 
    output reg [31:0] o_master_awaddr,
    output reg [ 3:0] o_master_awid,
    output reg [ 7:0] o_master_awlen,
    output reg [ 2:0] o_master_awsize,
    output reg [ 1:0] o_master_awburst, 
    output reg        o_master_wvalid,
    input             i_master_wready,
    output reg [31:0] o_master_wdata,
    output reg [ 3:0] o_master_wstrb,
    output reg        o_master_wlast,           
    input             i_master_bvalid, 
    output reg        o_master_bready,
    input  [ 1:0]     i_master_bresp,
    input  [ 3:0]     i_master_bid         
);
  parameter IDLE = 2'b00;
  parameter AR1 =  2'b01;
  parameter AR2 =  2'b10;
  parameter AW  =  2'b11;

  reg      [1:0]           CurrentState;
  reg      [1:0]           NextState;

  always @(posedge clock) begin
    CurrentState <= (reset) ? IDLE : NextState;
  end


  always @(*) begin
        NextState = CurrentState;
        o_arready_1 = 1'b0;
        o_arready_2 = 1'b0;
        o_rvalid_1  = 1'b0;
        o_rvalid_2  = 1'b0;
        o_rresp_1   = 2'b0;
        o_rresp_2   = 2'b0;
        o_rdata_1   = 32'b0;
        o_rdata_2   = 32'b0;
        o_rlast_1   = 1'b0;
        o_rlast_2   = 1'b0;
        o_rid_1     = 4'b0;
        o_rid_2     = 4'b0;
        o_master_arvalid = 1'b0;
        o_master_araddr  = 32'b0;
        o_master_arid    = 4'b0;
        o_master_arlen   = 8'b0;
        o_master_arsize  = 3'b0;
        o_master_arburst = 2'b0;
        o_master_rready  = 1'b0;
        o_awready_1 = 1'b0;
        o_wready_1  = 1'b0;
        o_bvalid_1  = 1'b0;
        o_bresp_1   = 2'b0;
        o_bid_1     = 4'b0;
        o_master_awvalid = 1'b0;
        o_master_awaddr  = 32'b0;
        o_master_awid    = 4'b0;
        o_master_awlen   = 8'b0;
        o_master_awsize  = 3'b0;
        o_master_awburst = 2'b0;
        o_master_bready  = 1'b0;
        o_master_wdata   = 32'b0;
        o_master_wstrb   = 4'b0;
        o_master_wlast   = 1'b0;    
        o_master_wvalid  = 1'b0;
    case(CurrentState)
      IDLE: begin
        
        if (i_arvalid_1) begin
          NextState = AR1;
        end else if(i_arvalid_2) begin
          NextState = AR2;
        end else if(i_awvalid_1) begin
          NextState = AW;
        end else begin
          NextState = IDLE;
        end
      end

      AR1: begin
            o_master_arvalid = i_arvalid_1;
            o_master_araddr  = i_araddr_1;
            o_master_arid    = i_arid_1;
            o_master_arlen   = i_arlen_1;
            o_master_arsize  = i_arsize_1;
            o_master_arburst = i_arburst_1;
            o_master_rready  = i_rready_1;
            o_arready_1 = i_master_arready;
            o_rvalid_1  = i_master_rvalid;
            o_rresp_1   = i_master_rresp;
            o_rdata_1   = i_master_rdata;
            o_rlast_1   = i_master_rlast;
            o_rid_1     = i_master_rid;
            if(i_master_rlast) begin
              if(i_arvalid_2)begin
                NextState  = AR2;
              end else if(i_awvalid_1)begin
                NextState  = AW;
              end else begin
                NextState  = IDLE;
              end
            end else begin
              NextState  = AR1;
            end
        end
      
      AR2: begin
            o_master_arvalid = i_arvalid_2;
            o_master_araddr  = i_araddr_2;
            o_master_arid    = i_arid_2;
            o_master_arlen   = i_arlen_2;
            o_master_arsize  = i_arsize_2;
            o_master_arburst = i_arburst_2;
            o_master_rready  = i_rready_2;
            o_arready_2 = i_master_arready;
            o_rvalid_2  = i_master_rvalid;
            o_rresp_2   = i_master_rresp;
            o_rdata_2   = i_master_rdata;
            o_rlast_2   = i_master_rlast;
            o_rid_2     = i_master_rid;
            if(i_arvalid_1 && i_master_rlast)begin
                NextState  = AR1;
            end else if(i_awvalid_1 && i_master_rlast)begin
              NextState  = AW;
            end else if (i_master_rlast)begin
                NextState  = IDLE;
            end else begin
                NextState  = AR2;
                end
            end
        AW: begin
            o_master_awvalid = i_awvalid_1;
            o_master_awaddr  = i_awaddr_1;
            o_master_awid    = i_awid_1;
            o_master_awlen   = i_awlen_1;
            o_master_awsize  = i_awsize_1;
            o_master_awburst = i_awburst_1;
            o_master_bready  = i_bready_1;
            o_master_wvalid  = i_wvalid_1;
            o_master_wdata   = i_wdata_1;
            o_master_wstrb   = i_wstrb_1;
            o_master_wlast   = i_wlast_1;
            o_awready_1 = i_master_awready;
            o_wready_1  = i_master_wready;
            o_bvalid_1  = i_master_bvalid;
            o_bresp_1   = i_master_bresp;
            o_bid_1     = i_master_bid;
            if(i_arvalid_1 && i_master_bvalid)begin
                NextState  = AR1;
            end else if(i_arvalid_2 && i_master_bvalid)begin
              NextState  = AR2;
            end else if (i_master_bvalid) begin
              NextState  = IDLE;
            end else begin
              NextState  = AW;
            end
        end
    
      default: begin
        o_arready_1 = 1'b0;
        o_arready_2 = 1'b0;
        o_rvalid_1  = 1'b0;
        o_rvalid_2  = 1'b0;
        o_rresp_1   = 2'b0;
        o_rresp_2   = 2'b0;
        o_rdata_1   = 32'b0;
        o_rdata_2   = 32'b0;
        o_rlast_1   = 1'b0;
        o_rlast_2   = 1'b0;
        o_rid_1     = 4'b0;
        o_rid_2     = 4'b0;
        o_master_arvalid = 1'b0;
        o_master_araddr  = 32'b0;
        o_master_arid    = 4'b0;
        o_master_arlen   = 8'b0;
        o_master_arsize  = 3'b0;
        o_master_arburst = 2'b0;
        o_master_rready  = 1'b0;
        o_awready_1 = 1'b0;
        o_wready_1  = 1'b0;
        o_bvalid_1  = 1'b0;
        o_bresp_1   = 2'b0;
        o_bid_1     = 4'b0;
        o_master_awvalid = 1'b0;
        o_master_awaddr  = 32'b0;
        o_master_awid    = 4'b0;
        o_master_awlen   = 8'b0;
        o_master_awsize  = 3'b0;
        o_master_awburst = 2'b0;
        o_master_bready  = 1'b0;
        o_master_wdata   = 32'b0;
        o_master_wstrb   = 4'b0;
        o_master_wlast   = 1'b0;
        o_master_wvalid  = 1'b0;
        NextState  = IDLE;
      end
    endcase
  end




endmodule