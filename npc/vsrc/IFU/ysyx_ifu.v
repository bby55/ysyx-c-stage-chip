module ysyx_25010028_IFU #(parameter PC_START = 32'h30000000) (
  input               clock,
  input               reset,
  input       [31:0]  i_JumpPC,
  input               i_JumpPC_en,


//=================AXI================
  output reg          o_ifu_arvalid,
  input               i_ifu_arready,
  input               i_ifu_rvalid,
  output reg          o_ifu_rready, 
  input               i_ifu_rlast,


  output reg  [31:0]  o_ifu_araddr,
  output reg  [2:0]   o_ifu_arsize,
  output reg  [1:0]   o_ifu_arburst,
  output reg  [3:0]   o_ifu_arid,
  output reg  [7:0]   o_ifu_arlen,
  input       [31:0]  i_ifu_rdata,

//==============PipeLine==============
  output reg          IF_ID_Valid,
  input               ID_IF_Ready,
  output reg  [31:0]  IF_ID_PC,
  output reg  [31:0]  IF_ID_Instr

);

  parameter IDLE = 2'b00;
  parameter WAIT = 2'b01;
  parameter RESET = 2'b10;
  
  reg     [1:0]       CurrentState;
  reg     [1:0]       NextState;
  reg                 UpdatePC_en;

  reg [31:0] ifu_rdata_r;
  reg [31:0] PC_r;

  wire  [31:0] PC;

  ysyx_25010028_PC #(
    .PC_START(PC_START)
  ) U_PC (
    .clock(clock),
    .reset(reset),
    .i_JumpPC(i_JumpPC),
    .i_JumpPC_en(i_JumpPC_en),
    .i_UpdatePC_en(UpdatePC_en),
    .o_PC(PC)
  );

  always @(posedge clock) begin
    if (reset) begin
      CurrentState <= RESET;
    end else begin
      CurrentState <= NextState;
    end
  end


  always @(*) begin
    NextState = CurrentState;
    UpdatePC_en = 1'b0;

    case(CurrentState)
      RESET: begin
        NextState = reset ? RESET : IDLE;
      end
      IDLE: begin
        if (o_ifu_arvalid && i_ifu_arready) begin
          NextState = WAIT;
        end else begin
          NextState = IDLE;
        end
      end
      WAIT: begin
        if ((IF_ID_Valid) && ID_IF_Ready) begin
            UpdatePC_en = 1'b1;
            NextState = IDLE;
        end else begin
          NextState = WAIT;
        end
      end
      default: begin
        NextState = IDLE;
      end
    endcase
  end


  always @(posedge clock) begin
    if (reset) begin
      o_ifu_arvalid <= 1'b0;
      o_ifu_araddr  <= PC_START;
      o_ifu_arid    <= 4'b0;
      o_ifu_arlen   <= 8'b0;
      o_ifu_arsize  <= 3'b010;
      o_ifu_arburst <= 2'b00;

      o_ifu_rready <= 1'b0;
    end else if (CurrentState == IDLE && !o_ifu_arvalid) begin
      o_ifu_arvalid <= 1'b1;
      o_ifu_araddr  <= PC;
      o_ifu_arid    <= 4'b0;
      o_ifu_arlen   <= (PC >= 32'h0f000000 && PC <= 32'h0f001fff) ? 8'd0 : 8'd3;
      o_ifu_arsize  <= 3'b010;
      o_ifu_arburst <= (PC >= 32'h0f000000 && PC <= 32'h0f001fff) ? 2'b00: 2'b01;
    end else if (o_ifu_arvalid && i_ifu_arready) begin
      o_ifu_arvalid <= 1'b0;
    end

    if (CurrentState == IDLE || CurrentState == WAIT) begin
      o_ifu_rready <= 1'b1;
    end else begin
      o_ifu_rready <= 1'b0;
    end
  end

  always @(posedge clock) begin
    if(reset) begin
      IF_ID_Instr <= 32'b0;
      IF_ID_PC    <= 32'b0;
    end else if(ID_IF_Ready && IF_ID_Valid)begin
      IF_ID_Instr <= ifu_rdata_r;
      IF_ID_PC    <= PC_r;
  end
end


   always @(posedge clock) begin
    if(reset) begin
        IF_ID_Valid <= 1'b0;
    end else if(i_ifu_rlast && i_ifu_rvalid) begin
        IF_ID_Valid <= 1'b1;
        ifu_rdata_r <= i_ifu_rdata;
        PC_r        <= PC;
    end else if(ID_IF_Ready && IF_ID_Valid) begin
        IF_ID_Valid <= 1'b0;
    end 
  end
// //[DEBUG]
// `ifdef verilator
// import "DPI-C" function void display(input int instr, input int pc, input int npc, input int update_en);
// always @(posedge clock)begin
//   display(instruction_r, PC, npc, {31'd0, UpdatePC_en});
//   end

// wire [31:0] npc;
// assign npc = (!reset) ? (i_JumpPC_en) ? i_JumpPC: PC + 32'h4 : PC;
// `endif

endmodule