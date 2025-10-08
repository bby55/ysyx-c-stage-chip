import "DPI-C" function int pmem_read(input int raddr, input int valid);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask, input int pc);
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
  input              i_IfuValid,
  input              io_lsu_respValid,
  output   reg       io_lsu_reqValid
  //output reg [31:0]  o_LsuRData,
  //output reg         o_respValid

);

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
    //o_respValid = 1'b0;
    case(CurrentState)
      IDLE: begin
        //o_respValid  = 1'b0;
        if (i_reqValid && i_IfuValid) begin
          io_lsu_reqValid = 1'b1;
          NextState = WAIT;
        end
      end

      WAIT: begin
            //o_LsuRData = 0;
            // if(i_reqValid)begin
            //   if ((i_InstrNum == 12'd2) || (i_InstrNum == 12'd8) || 
            //       (i_InstrNum == 12'd31) || (i_InstrNum == 12'd32) || 
            //       (i_InstrNum == 12'd35)) begin
            //     //$monitor("PC=%h Lsuraddr=%h", i_PC, i_LsuRaddr);
            //     o_LsuRData = pmem_read(i_LsuRaddr - 32'h30000000, {32{i_reqValid}});                
            //       end
            //   if (i_MemWen) begin
            //     pmem_write(i_LsuWaddr-32'h30000000, i_LsuWdata, i_LsuWmask, i_PC);
            //   end
            //   o_respValid = 1'b1;
            // end
            // else begin
            //   o_LsuRData = 0;
            // end
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
      end
    endcase
  end



endmodule