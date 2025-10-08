module IFU #(parameter PC_START = 32'h80000000) (
  input               i_clk,
  input               i_rst,
  input       [31:0]  i_IfuRdata,
  input       [31:0]  i_JumpPC,
  input               i_JumpPC_en,
  input               i_respValid,
  input               i_reqValid,
  output reg  [31:0]  o_IfuRaddr,
  output reg  [31:0]  o_instr,
  output reg          o_IfuValid,
  output      [31:0]  o_PC
);

  parameter IDLE = 1'b0;
  parameter WAIT = 1'b1;

  reg                 CurrentState;
  reg                 NextState;
  reg                 UpdatePC_en;
  wire        [31:0]  PC;

  PC #(
    .PC_START(PC_START)
  ) U_PC (
    .i_clk(i_clk),
    .i_rst(i_rst),
    .i_JumpPC(i_JumpPC),
    .i_JumpPC_en(i_JumpPC_en),
    .i_UpdatePC_en(UpdatePC_en),
    .o_PC(PC)
  );

  always @(posedge i_clk) begin
    CurrentState <= (i_rst) ? IDLE : NextState;
  end

  always @(*) begin
    case(CurrentState)
      IDLE: begin
        o_IfuRaddr  = PC;
        o_IfuValid  = 1'b0;
        UpdatePC_en = 1'b0;
        NextState   = WAIT;
      end

      WAIT: begin
        o_instr     = i_IfuRdata;
        o_IfuValid  = 1'b1;
        if(i_respValid ^~ i_reqValid)begin
          UpdatePC_en = 1'b1;
          NextState   = IDLE;
        end
        else begin
          UpdatePC_en = 1'b0;
          NextState   = WAIT;
        end
      end

      default: begin
        o_IfuRaddr  = 32'h0;
        o_instr     = 32'h0;
        o_IfuValid  = 1'b0;
        UpdatePC_en = 1'b0;
        NextState   = IDLE;
      end
    endcase
  end

  assign o_PC = PC;

endmodule
    