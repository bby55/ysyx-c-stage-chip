module ysyx_25010028_LSU (
  input               clock,
  input               reset,


  input               EX_LS_Valid,
  output reg          LS_EX_Ready,

  input        [31:0] EX_LS_ExuRes,
  input        [31:0] EX_LS_CsrExuData,
  input        [31:0] EX_LS_JumpPC,
  input               EX_LS_JumpPC_en,
  input        [31:0] EX_LS_PC,
  input        [31:0] EX_LS_Instr,
  input        [11:0] EX_LS_InstrNum,
  input        [ 4:0] EX_LS_Rs1,
  input        [ 4:0] EX_LS_Rs2,
  input        [ 4:0] EX_LS_Rd,
  input        [31:0] EX_LS_Imm,
  input               EX_LS_RegWen,
  input        [11:0] EX_LS_CsrNum,
  input               EX_LS_IsLoad,
  input               EX_LS_IsStore,
  input               EX_LS_IsLoad_w,
  input               EX_LS_IsStore_w,
  input        [31:0] EX_LS_Rs1Data,

  input               WB_LS_Ready,
  output              LS_WB_Valid,

  output reg   [31:0] LS_WB_ExuRes,
  output reg   [31:0] LS_WB_CsrExuData,
  output reg   [31:0] LS_WB_JumpPC,
  output reg          LS_WB_JumpPC_en,
  output reg   [31:0] LS_WB_PC,
  output reg   [31:0] LS_WB_Instr,
  output reg   [11:0] LS_WB_InstrNum,
  output reg   [ 4:0] LS_WB_Rs1,
  output reg   [ 4:0] LS_WB_Rs2,
  output reg   [ 4:0] LS_WB_Rd,
  output reg   [31:0] LS_WB_Imm,
  output reg          LS_WB_RegWen,
  output reg   [11:0] LS_WB_CsrNum,
  output reg          LS_WB_IsLoad,
  output reg          LS_WB_IsStore,
  output reg   [31:0] LS_WB_LData,

  output reg          o_lsu_arvalid,
  input               i_lsu_arready,
  input               i_lsu_rvalid,
  output reg          o_lsu_rready,
  output reg          o_lsu_awvalid,
  input               i_lsu_awready,
  output reg          o_lsu_wvalid,
  input               i_lsu_wready,
  input               i_lsu_rlast,
  input               i_lsu_bvalid,
  output reg          o_lsu_bready,

  input        [31:0] i_lsu_rdata,
  output       [31:0] o_lsu_araddr,
  output       [ 7:0] o_lsu_arlen,
  output       [ 2:0] o_lsu_arsize,
  output       [ 1:0] o_lsu_arburst,
  output       [ 3:0] o_lsu_arid,
  output       [31:0] o_lsu_awaddr,
  output       [ 7:0] o_lsu_awlen,
  output       [ 2:0] o_lsu_awsize,
  output       [ 1:0] o_lsu_awburst,
  output       [31:0] o_lsu_wdata,
  output       [ 3:0] o_lsu_wstrb,
  output reg          o_lsu_wlast


);

  parameter IDLE = 2'b00;
  parameter AR   = 2'b01;
  parameter AW   = 2'b10;
  parameter W    = 2'b11;

  reg [1:0] CurrentState;
  reg [1:0] NextState;
  


  // 2. 状态寄存器更新（纯时序逻辑，仅时钟沿更新）
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      CurrentState <= IDLE;
    end else begin
      CurrentState <= NextState;
    end
  end

  // 3. 组合逻辑：仅计算下一状态（剥离所有控制信号赋值）
  always @(*) begin
    NextState = CurrentState;

    case(CurrentState)
      IDLE: begin
        if (EX_LS_IsLoad_w && EX_LS_Valid && LS_EX_Ready ) begin
          NextState = AR;
        end else if (EX_LS_IsStore_w && EX_LS_Valid && LS_EX_Ready) begin
          NextState = AW;
        end else begin
          NextState = IDLE;
        end
      end

      AR: begin
        // Load完成：rvalid且rlast有效
        if (i_lsu_rvalid && i_lsu_rlast && WB_LS_Ready) begin
          NextState = IDLE;
        end else begin
          NextState = AR;
        end
      end

      AW: begin
        // 写地址握手完成，进入写数据状态
        if (o_lsu_awvalid && i_lsu_awready) begin
          NextState = W;
        end else begin
          NextState = AW;
        end
      end

      W: begin
        // 写数据完成且收到写响应
        if (i_lsu_bvalid && WB_LS_Ready) begin
          NextState = IDLE;
        end else begin
          NextState = W;
        end
      end

      default: begin
        NextState = IDLE;
      end
    endcase
  end

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      o_lsu_arvalid <= 1'b0;
      o_lsu_rready  <= 1'b0;
    end else begin
      // 读地址有效：仅IDLE→AR时拉高，握手完成后拉低
      if (CurrentState == IDLE && NextState == AR) begin
        o_lsu_arvalid <= 1'b1;
      end else if (o_lsu_arvalid && i_lsu_arready) begin
        o_lsu_arvalid <= 1'b0;
      end

      // 读数据ready：AR状态持续置1
      o_lsu_rready <= (CurrentState == AR);
    end
  end


  always @(posedge clock or posedge reset) begin
    if (reset) begin
      o_lsu_awvalid <= 1'b0;
      o_lsu_wvalid  <= 1'b0;
      o_lsu_bready  <= 1'b0;
    end else begin
      // 写地址有效：IDLE→AW时拉高，握手完成后拉低
      if (CurrentState == IDLE && NextState == AW) begin
        o_lsu_awvalid <= 1'b1;
        o_lsu_wvalid <= 1'b1;
      end else if (o_lsu_awvalid && i_lsu_awready) begin
        o_lsu_awvalid <= 1'b0;
      end

      // 写数据有效：AW→W时拉高，握手完成后拉低
      if (CurrentState == AW && NextState == W) begin
       if (o_lsu_wvalid && i_lsu_wready) begin
        o_lsu_wvalid <= 1'b0;
      end
    end
      // 写响应ready：W状态持续置1
      o_lsu_bready <= (NextState == W);
    end
  end


  wire  [31:0]  lsu_addr = EX_LS_Rs1Data + EX_LS_Imm;
  reg   [1:0]   i_ByteIdx;
  always @(posedge clock) begin
    if(reset) begin
      i_ByteIdx <= 2'b00;
    end
    else if (EX_LS_IsLoad_w || EX_LS_IsStore_w) begin
      i_ByteIdx <= lsu_addr[1:0];
    end
    else begin
      i_ByteIdx <= i_ByteIdx;
    end
  end

  reg [31:0]  LData;
  always @(*) begin
    o_lsu_arlen = 8'b0;
    o_lsu_arsize = 3'b010;
    o_lsu_arburst = 2'b00;
    o_lsu_arid = 4'b0;
    o_lsu_awlen = 8'b0;
    o_lsu_awsize = 3'b010;
    o_lsu_awburst = 2'b00;
    o_lsu_wstrb = 4'b0;
    o_lsu_wlast = 1'b0;
    case (EX_LS_InstrNum)
      12'd3:  begin             // SW（存储字数据）
                  o_lsu_awaddr = EX_LS_Rs1Data + EX_LS_Imm;
                  o_lsu_awsize = 3'b010;
                  o_lsu_wstrb = 4'hF;
                  o_lsu_wlast = 1'b1;
                  o_lsu_wdata  = EX_LS_ExuRes << lsu_addr[1:0]*8;
          end
      12'd7:  begin             // SB（存储字节数据）
                o_lsu_awaddr = EX_LS_Rs1Data + EX_LS_Imm;
                o_lsu_awsize = 3'b000;
                o_lsu_wstrb = (i_ByteIdx == 2'd0) ? 4'h1 :
                              (i_ByteIdx == 2'd1) ? 4'h2 :
                              (i_ByteIdx == 2'd2) ? 4'h4 :
                              (i_ByteIdx == 2'd3) ? 4'h8 :
                              4'h0;
                o_lsu_wdata  = EX_LS_ExuRes << lsu_addr[1:0]*8;
                o_lsu_wlast = 1'b1;                      
            end
      12'd16: begin             // SH（存储半字数据）
                o_lsu_awaddr = EX_LS_Rs1Data + EX_LS_Imm;
                o_lsu_awsize = 3'b001;
                o_lsu_wstrb = (i_ByteIdx[1] == 1'd0) ? 4'h3 : 4'hC;
                o_lsu_wdata  = EX_LS_ExuRes << lsu_addr[1:0]*8;
                o_lsu_wlast = 1'b1;                      
            end
      12'd2:  begin             // LW（加载字）
                o_lsu_araddr = EX_LS_Rs1Data + EX_LS_Imm;
                o_lsu_arsize = 3'b010;
                if(i_lsu_rlast) begin
                  LData = i_lsu_rdata;
                end
            end   
      12'd8: begin              // LBU（加载无符号字节）         
                o_lsu_araddr = EX_LS_Rs1Data + EX_LS_Imm;
                o_lsu_arsize = 3'b000;
                if(i_lsu_rlast) begin
                case (i_ByteIdx)
                  2'd0: LData = {24'b0, i_lsu_rdata[7:0]};
                  2'd1: LData = {24'b0, i_lsu_rdata[15:8]};
                  2'd2: LData = {24'b0, i_lsu_rdata[23:16]};
                  2'd3: LData = {24'b0, i_lsu_rdata[31:24]};
              endcase
                end
        end
      12'd31: begin             // LH（加载有符号半字）
                o_lsu_araddr = EX_LS_Rs1Data + EX_LS_Imm;
                o_lsu_arsize = 3'b001;
                if(i_lsu_rlast) begin
                  case (i_ByteIdx[1])
                  1'd0: LData = {{16{i_lsu_rdata[15]}}, i_lsu_rdata[15:0]};
                  1'd1: LData = {{16{i_lsu_rdata[31]}}, i_lsu_rdata[31:16]};
              endcase          
                end  
        end
      12'd32: begin           // LHU（加载无符号半字）                
                o_lsu_araddr = EX_LS_Rs1Data + EX_LS_Imm;
                o_lsu_arsize = 3'b001;
                if(i_lsu_rlast) begin
                  case (i_ByteIdx[1])
                  1'd0: LData = {16'b0, i_lsu_rdata[15:0]};
                  1'd1: LData = {16'b0, i_lsu_rdata[31:16]};
              endcase          
                end
        end
      12'd35: begin                       // LB（加载有符号字节）
                o_lsu_araddr = EX_LS_Rs1Data + EX_LS_Imm;
                o_lsu_arsize = 3'b000;
                if(i_lsu_rlast) begin
                  case (i_ByteIdx)
                  2'd0: LData = {{24{i_lsu_rdata[ 7]}}, i_lsu_rdata[7:0]};
                  2'd1: LData = {{24{i_lsu_rdata[15]}}, i_lsu_rdata[15:8]};
                  2'd2: LData = {{24{i_lsu_rdata[23]}}, i_lsu_rdata[23:16]};
                  2'd3: LData = {{24{i_lsu_rdata[31]}}, i_lsu_rdata[31:24]};
              endcase           
                end
        end
      default: begin
            LData = {32{1'b0}};
            o_lsu_arlen = 8'b0;
            o_lsu_arsize = 3'b010;
            o_lsu_arburst = 2'b00;
            o_lsu_arid = 4'b0;
            o_lsu_awlen = 8'b0;
            o_lsu_awsize = 3'b010;
            o_lsu_awburst = 2'b00;
            o_lsu_wstrb = 4'b0;
            o_lsu_wlast = 1'b0;
        end
  endcase
end


always @(posedge clock)begin
  if(reset)begin
    LS_WB_ExuRes        <= 32'b0;
    LS_WB_CsrExuData    <= 32'b0;
    LS_WB_JumpPC        <= 32'b0;
    LS_WB_JumpPC_en     <= 1'b0;
    LS_WB_PC            <= 32'b0;
    LS_WB_Instr         <= 32'b0;
    LS_WB_InstrNum      <= 12'b0;
    LS_WB_Rs1           <= 5'b0;
    LS_WB_Rs2           <= 5'b0; 
    LS_WB_Rd            <= 5'b0;
    LS_WB_Imm           <= 32'b0;
    LS_WB_RegWen        <= 1'b0;
    LS_WB_CsrNum        <= 12'b0;
    LS_WB_IsLoad        <= 1'b0;
    LS_WB_IsStore       <= 1'b0;
    LS_WB_LData         <= 32'b0;
    
  end else if(WB_LS_Ready && LS_WB_Valid)begin
    LS_WB_ExuRes        <= EX_LS_ExuRes;
    LS_WB_CsrExuData    <= EX_LS_CsrExuData;
    LS_WB_JumpPC        <= EX_LS_JumpPC;
    LS_WB_JumpPC_en     <= EX_LS_JumpPC_en;
    LS_WB_PC            <= EX_LS_PC;
    LS_WB_Instr         <= EX_LS_Instr;
    LS_WB_InstrNum      <= EX_LS_InstrNum;
    LS_WB_Rs1           <= EX_LS_Rs1;
    LS_WB_Rs2           <= EX_LS_Rs2; 
    LS_WB_Rd            <= EX_LS_Rd;
    LS_WB_Imm           <= EX_LS_Imm;
    LS_WB_RegWen        <= EX_LS_RegWen;
    LS_WB_CsrNum        <= EX_LS_CsrNum;
    LS_WB_IsLoad        <= EX_LS_IsLoad;
    LS_WB_IsStore       <= EX_LS_IsStore;
    LS_WB_LData         <= LData;
    
  end
end


always @(posedge clock) begin
  if(reset) begin
    LS_EX_Ready <= 1'b1;
  end else if(EX_LS_Valid && LS_EX_Ready && (EX_LS_IsLoad_w || EX_LS_IsStore_w))begin
    LS_EX_Ready <= 1'b0;
  end else if((WB_LS_Ready || !LS_WB_Valid ) && ~(EX_LS_IsLoad_w || EX_LS_IsStore_w || EX_LS_IsLoad || EX_LS_IsStore))begin;
    LS_EX_Ready <= 1'b1;
  end else if (i_lsu_rlast || i_lsu_bvalid)begin
    LS_EX_Ready <= 1'b1;
  end
end


always @(posedge clock) begin
  if(reset) begin
    LS_WB_Valid <= 1'b0;
  end else if(EX_LS_Valid && LS_EX_Ready && ~(EX_LS_IsLoad_w || EX_LS_IsStore_w))begin
    LS_WB_Valid <= 1'b1;
  end else if (EX_LS_Valid && LS_EX_Ready && (EX_LS_IsLoad_w || EX_LS_IsStore_w))begin
    LS_WB_Valid <= 1'b0;
  end else if((i_lsu_rlast && i_lsu_rvalid ) || i_lsu_bvalid)begin;
    LS_WB_Valid <= 1'b1;
  end 
end



endmodule