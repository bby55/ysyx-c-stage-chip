module ysyx_25010028_LSU (
  // input    [31:0]  i_instr,
  // output   [4:0]   o_Rs1Raddr,
  // output   [4:0]   o_Rs2Raddr,
  // output   [4:0]   o_RdRaddr,
  // output   [31:0]  o_Imm,
  //input   [11:0]  i_InstrNum,

  input              i_clk,
  input              i_rst,
  //input      [31:0]  i_LsuRaddr,
  //input      [31:0]  i_LsuWaddr,
  //input      [31:0]  i_LsuWdata,
  //input      [ 7:0]  i_LsuWmask,
  input              i_reqValid,
  //input              i_MemWen,
  //input      [31:0]  i_PC,
  input              io_ifu_respValid,
  input              io_lsu_respValid,
  output   reg       io_lsu_reqValid
  output reg         o_respValid

);
import "DPI-C" function int pmem_read(input int raddr, input int valid);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask, input int pc);

  parameter IDLE = 1'b0;
  parameter WAIT = 1'b1;

  reg                 CurrentState;
  reg                 NextState;


  always @(posedge i_clk) begin
    CurrentState <= (i_rst) ? IDLE : NextState;
  end

  always @(*) begin
    NextState = CurrentState;
    //o_LsuRData = 32'd0;
    o_respValid = 1'b0;
    case(CurrentState)
      IDLE: begin
        o_respValid  = 1'b0;
        if (i_reqValid && io_ifu_respValid) begin
          io_lsu_reqValid = 1'b1;
          NextState = WAIT;
        end else if(i_reqValid && i_reqReady) begin
          o_respValid  = 1'b1;
          NextState = WAIT;
        end else begin
          o_respValid = 1'b0;
          io_lsu_reqValid = 1'b0;
          NextState = IDLE;
        end
      end

      WAIT: begin
            io_lsu_reqValid = 1'b0;
            if(io_lsu_respValid)begin
              NextState  = IDLE;
            end else begin
              NextState  = WAIT;
            end
        end
      default: begin
        //o_respValid  = 1'b0;
        NextState  = IDLE;
        io_lsu_reqValid = 1'b0;
      end
    endcase
  end



endmodule