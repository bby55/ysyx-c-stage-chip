module icache #(parameter PC_START = 32'h30000000)(
  input               clock,
  input               reset,

  input       [31:0]  i_JumpPC,
  input               i_JumpPC_en,

//=================AXI================
  output reg          o_icache_arvalid,
  input               i_icache_arready,
  input               i_icache_rvalid,
  output reg          o_icache_rready,
  input               i_icache_rlast,

  output reg  [31:0]  o_icache_araddr,
  output reg  [2:0]   o_icache_arsize,
  output reg  [1:0]   o_icache_arburst,
  output reg  [3:0]   o_icache_arid,
  output reg  [7:0]   o_icache_arlen,
  input       [31:0]  i_icache_data,
//fence.i
  input               i_icache_wash,
//==============PipeLine==============
  output              IF_ID_Valid,
  input               ID_IF_Ready,
  output reg  [31:0]  IF_ID_PC,
  output reg  [31:0]  IF_ID_Instr



);

    parameter K_icache = 16;
    parameter B_icache = 128; //16B
    parameter M_icache = 4;
    parameter N_icache = 4; //2^N = K
    
    parameter OFFSET_WIDTH = M_icache - 1;
    parameter INDEX_WIDTH = N_icache - 1;
    parameter TAG_WIDTH = 31 - M_icache - N_icache;

    reg [B_icache-1:0] cache_data [0:K_icache-1];
    reg [TAG_WIDTH:0] cache_tags [0:K_icache-1];
    reg [K_icache-1:0] cache_valid;

    wire [OFFSET_WIDTH:0] offset;
    wire [INDEX_WIDTH:0] index;
    wire [TAG_WIDTH:0] tag;

    parameter IDLE = 2'b00;
    parameter CHECK = 2'b01;
    parameter WAIT = 2'b10;
    parameter TRANSFER = 2'b11;
    reg [1:0] state;
    reg [1:0] next_state;

    reg        ifu_arvalid;
    reg        ifu_arready;
    reg [31:0] ifu_rdata;
    reg        ifu_rvalid;
    reg        ifu_rlast;
    reg [31:0] ifu_araddr;

    assign offset = ifu_araddr[M_icache-1:0];
    assign index = ifu_araddr[M_icache + N_icache - 1:M_icache];
    assign tag = ifu_araddr[31:M_icache + N_icache];

    reg [1:0] icache_count;
    always @(posedge clock) begin
        if(i_icache_wash)begin
            cache_data[index] <= 128'b0;
            cache_tags[index] <= 24'b0;
            cache_valid[index] <= 1'b0;
        end else if(i_icache_rvalid && (ifu_araddr < 32'h0f000000 || ifu_araddr > 32'h0f001fff)) begin
            case(icache_count)
                2'b00:cache_data[index][31:0] <= i_icache_data;
                2'b01:cache_data[index][63:32] <= i_icache_data;
                2'b10:cache_data[index][95:64] <= i_icache_data;
                2'b11:cache_data[index][127:96] <= i_icache_data;
            endcase
            icache_count <= (i_icache_rlast )? 2'b00 : icache_count + 1;
            cache_tags[index] <= tag;
            cache_valid[index] <= 1'b1; 
        end
       
    end

    assign    o_icache_araddr = (ifu_araddr < 32'h0f000000 || ifu_araddr > 32'h0f001fff) ? {tag,index,4'b0} : ifu_araddr;
    always @(posedge clock) begin
        if(reset) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end

    always @(*) begin
        next_state = state;
        ifu_rlast = 1'b0;
        ifu_rvalid = 1'b0;
        ifu_arready = 1'b0;
        o_icache_arvalid = 1'b0;
        ifu_rdata = 32'h0;
        case(state)
            IDLE: begin
                if(ifu_arvalid) begin
                    next_state = CHECK;
                end else begin
                    next_state = IDLE;
                end
            end
            CHECK: begin
                if (cache_tags[index] == tag && cache_valid[index]) begin
                    ifu_arready = 1'b1;
                    next_state = TRANSFER;
                end else begin
                    next_state = WAIT;
                end
            end
            TRANSFER: begin
                case(offset[3:2])
                    2'b00:ifu_rdata = cache_data[index][31:0];
                    2'b01:ifu_rdata = cache_data[index][63:32];
                    2'b10:ifu_rdata = cache_data[index][95:64];
                    2'b11:ifu_rdata = cache_data[index][127:96];
                endcase 
                ifu_arready = 1'b1;
                ifu_rvalid = 1'b1;
                ifu_rlast = 1'b1;
                o_icache_arvalid = 1'b0;
                next_state = IDLE;
            end
            WAIT: begin
                case(offset[3:2])
                    2'b00:ifu_rdata = (ifu_araddr < 32'h0f000000 || ifu_araddr > 32'h0f001fff) ? cache_data[index][31:0]     : i_icache_data;
                    2'b01:ifu_rdata = (ifu_araddr < 32'h0f000000 || ifu_araddr > 32'h0f001fff) ? cache_data[index][63:32]    : i_icache_data;
                    2'b10:ifu_rdata = (ifu_araddr < 32'h0f000000 || ifu_araddr > 32'h0f001fff) ? cache_data[index][95:64]    : i_icache_data;
                    2'b11:ifu_rdata =  i_icache_data;
                endcase 
                ifu_arready = i_icache_arready;
                ifu_rvalid = i_icache_rvalid;
                ifu_rlast = i_icache_rlast ;
                o_icache_arvalid = ifu_arvalid;
                if(i_icache_rvalid && i_icache_rlast) begin
                    next_state = IDLE;
                end else begin
                    next_state = WAIT;
                end
            end
            default: begin
                next_state = IDLE;
            end
        endcase
    end



ysyx_25010028_IFU #(
    .PC_START(PC_START)
  ) U_IFU (
    .clock        (clock),
    .reset        (reset),
    .i_JumpPC     (i_JumpPC),
    .i_JumpPC_en  (i_JumpPC_en),

    .o_ifu_arvalid(ifu_arvalid),
    .i_ifu_arready(ifu_arready),
    .i_ifu_rvalid (ifu_rvalid),
    .o_ifu_rready (o_icache_rready),
    .i_ifu_rlast  (ifu_rlast),
    .o_ifu_araddr (ifu_araddr),
    .o_ifu_arsize (o_icache_arsize),
    .o_ifu_arburst(o_icache_arburst),
    .o_ifu_arlen  (o_icache_arlen),
    .o_ifu_arid   (o_icache_arid), 
    .i_ifu_rdata  (ifu_rdata),

    .IF_ID_Valid  (IF_ID_Valid),
    .ID_IF_Ready  (ID_IF_Ready),
    .IF_ID_PC     (IF_ID_PC),
    .IF_ID_Instr  (IF_ID_Instr)
  );

endmodule