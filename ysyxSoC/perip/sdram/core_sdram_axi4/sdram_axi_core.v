//-----------------------------------------------------------------
//                    SDRAM Controller (AXI4) - 32位位扩展版
//                           V2.1 (DQM修正：4位 + READ-WAIT状态还原)
//-----------------------------------------------------------------
module sdram_axi_core
(
    // Inputs
     input           clk_i
    ,input           rst_i
    ,input  [  3:0]  inport_wr_i
    ,input           inport_rd_i
    ,input  [  7:0]  inport_len_i
    ,input  [ 31:0]  inport_addr_i
    ,input  [ 31:0]  inport_write_data_i
    ,input  [ 31:0]  sdram_data_input_i  // 32位输入

    // Outputs
    ,output          inport_accept_o
    ,output          inport_ack_o
    ,output          inport_error_o
    ,output [ 31:0]  inport_read_data_o
    ,output          sdram_clk_o
    ,output          sdram_cke_o
    ,output          sdram_cs_o
    ,output          sdram_ras_o
    ,output          sdram_cas_o
    ,output          sdram_we_o
    ,output [  3:0]  sdram_dqm_o         // 修正：4位DQM（2颗16位颗粒）
    ,output [ 13:0]  sdram_addr_o
    ,output [  1:0]  sdram_ba_o
    ,output [ 31:0]  sdram_data_output_o // 32位输出
    ,output          sdram_data_out_en_o
);

//-----------------------------------------------------------------
// Key Params
//-----------------------------------------------------------------
parameter SDRAM_MHZ              = 50;
parameter SDRAM_ADDR_W           = 24;
parameter SDRAM_COL_W            = 9;
parameter SDRAM_READ_LATENCY     = 1; // CAS延迟，对应READ-WAIT状态周期

//-----------------------------------------------------------------
// Defines / Local params
//-----------------------------------------------------------------
localparam SDRAM_BANK_W          = 2;
localparam SDRAM_DQM_W           = 4;        // 修正：4位DQM（32位位扩展）
localparam SDRAM_BANKS           = 2 ** SDRAM_BANK_W;
localparam SDRAM_ROW_W           = SDRAM_ADDR_W - SDRAM_COL_W - SDRAM_BANK_W;
localparam SDRAM_REFRESH_CNT     = 2 ** SDRAM_ROW_W;
localparam SDRAM_START_DELAY     = 100000 / (1000 / SDRAM_MHZ); // 100uS
localparam SDRAM_REFRESH_CYCLES  = (64000*SDRAM_MHZ) / SDRAM_REFRESH_CNT-1;

localparam CMD_W             = 4;
localparam CMD_NOP           = 4'b0111;
localparam CMD_ACTIVE        = 4'b0011;
localparam CMD_READ          = 4'b0101;
localparam CMD_WRITE         = 4'b0100;
localparam CMD_TERMINATE     = 4'b0110;
localparam CMD_PRECHARGE     = 4'b0010;
localparam CMD_REFRESH       = 4'b0001;
localparam CMD_LOAD_MODE     = 4'b0000;

// 模式寄存器：突发长度=1（取消突发），CAS=1
localparam MODE_REG          = {3'b000,1'b0,2'b00,3'b001,1'b0,3'b000};

// SM states - 新增READ-WAIT状态（对应CAS延迟等待）
localparam STATE_W           = 4;
localparam STATE_INIT        = 4'd0;
localparam STATE_DELAY       = 4'd1;
localparam STATE_IDLE        = 4'd2;
localparam STATE_ACTIVATE    = 4'd3;
localparam STATE_READ        = 4'd4;
localparam STATE_READ_WAIT   = 4'd8; // 新增：READ-WAIT状态（CAS延迟等待）
localparam STATE_WRITE       = 4'd5;
localparam STATE_PRECHARGE   = 4'd6;
localparam STATE_REFRESH     = 4'd7;

localparam AUTO_PRECHARGE    = 10;
localparam ALL_BANKS         = 10;

localparam SDRAM_DATA_W      = 32;         // 32位数据位宽

localparam CYCLE_TIME_NS     = 1000 / SDRAM_MHZ;

// SDRAM timing
localparam SDRAM_TRCD_CYCLES = (20 + (CYCLE_TIME_NS-1)) / CYCLE_TIME_NS;
localparam SDRAM_TRP_CYCLES  = (20 + (CYCLE_TIME_NS-1)) / CYCLE_TIME_NS;
localparam SDRAM_TRFC_CYCLES = (60 + (CYCLE_TIME_NS-1)) / CYCLE_TIME_NS;

//-----------------------------------------------------------------
// 核心：保留原始读写命令纯组合逻辑定义（与单颗粒一致，无时序扰动）
//-----------------------------------------------------------------
wire cs       = sdram_cs_o;
wire ras      = sdram_ras_o;
wire cas      = sdram_cas_o;
wire we       = sdram_we_o;
wire write_cmd = (~cs) && (ras) && (~cas) && (~we); // 写命令（纯组合逻辑）
wire read_cmd  = (~cs) && (ras) && (~cas) && (we);  // 读命令（纯组合逻辑）

//-----------------------------------------------------------------
// External Interface
//-----------------------------------------------------------------
wire [ 31:0]  ram_addr_w       = inport_addr_i;
wire [  3:0]  ram_wr_w         = inport_wr_i;
wire          ram_rd_w         = inport_rd_i;
wire          ram_accept_w;
wire [ 31:0]  ram_write_data_w = inport_write_data_i;
wire [ 31:0]  ram_read_data_w;
wire          ram_ack_w;

wire          ram_req_w = (ram_wr_w != 4'b0) | ram_rd_w;

assign inport_ack_o       = ram_ack_w;
assign inport_read_data_o = ram_read_data_w;
assign inport_error_o     = 1'b0;
assign inport_accept_o    = ram_accept_w;

//-----------------------------------------------------------------
// Registers / Wires
//-----------------------------------------------------------------
reg [CMD_W-1:0]        command_q;
reg [SDRAM_ROW_W-1:0]  addr_q;
reg [SDRAM_DATA_W-1:0] data_q;
reg                    data_rd_en_q;
reg [SDRAM_DQM_W-1:0]  dqm_q;           // 4位DQM寄存器
reg                    cke_q;
reg [SDRAM_BANK_W-1:0] bank_q;

reg                    refresh_q;

reg [SDRAM_BANKS-1:0]  row_open_q;
reg [SDRAM_ROW_W-1:0]  active_row_q[0:SDRAM_BANKS-1];

reg  [STATE_W-1:0]     state_q;
reg  [STATE_W-1:0]     next_state_r;
reg  [STATE_W-1:0]     target_state_r;
reg  [STATE_W-1:0]     target_state_q;
reg  [STATE_W-1:0]     delay_state_q;

// Address bits
wire [SDRAM_ROW_W-1:0]  addr_col_w  = {{(SDRAM_ROW_W-SDRAM_COL_W){1'b0}}, ram_addr_w[SDRAM_COL_W:2], 1'b0};
wire [SDRAM_ROW_W-1:0]  addr_row_w  = ram_addr_w[SDRAM_ADDR_W:SDRAM_COL_W+2+1];
wire [SDRAM_BANK_W-1:0] addr_bank_w = ram_addr_w[SDRAM_COL_W+2:SDRAM_COL_W+2-1];

//-----------------------------------------------------------------
// SDRAM State Machine (新增READ-WAIT状态逻辑)
//-----------------------------------------------------------------
always @ *
begin
    next_state_r   = state_q;
    target_state_r = target_state_q;

    case (state_q)
    STATE_INIT :
    begin
        if (refresh_q)
            next_state_r = STATE_IDLE;
    end
    STATE_IDLE :
    begin
        if (refresh_q)
        begin
            if (|row_open_q)
                next_state_r = STATE_PRECHARGE;
            else
                next_state_r = STATE_REFRESH;
            target_state_r = STATE_REFRESH;
        end
        else if (ram_req_w)
        begin
            if (row_open_q[addr_bank_w] && addr_row_w == active_row_q[addr_bank_w])
            begin
                next_state_r = ram_rd_w ? STATE_READ : STATE_WRITE;
            end
            else if (row_open_q[addr_bank_w])
            begin
                next_state_r   = STATE_PRECHARGE;
                target_state_r = ram_rd_w ? STATE_READ : STATE_WRITE;
            end
            else
            begin
                next_state_r   = STATE_ACTIVATE;
                target_state_r = ram_rd_w ? STATE_READ : STATE_WRITE;
            end
        end
    end
    STATE_ACTIVATE :
    begin
        next_state_r = target_state_r;
    end
    STATE_READ :
    begin
        // 发送读命令后，进入READ-WAIT状态（等待CAS延迟）
        next_state_r = STATE_READ_WAIT;
    end
    STATE_READ_WAIT :
    begin
        // READ-WAIT状态完成后，回到IDLE（纯组合逻辑判断，无时序扰动）
        next_state_r = STATE_IDLE;
        // 支持连续读：若仍有读请求且行未关闭，继续READ-WAIT
        if (!refresh_q && ram_req_w && ram_rd_w && row_open_q[addr_bank_w] && addr_row_w == active_row_q[addr_bank_w])
            next_state_r = STATE_READ_WAIT;
    end
    STATE_WRITE :
    begin
        next_state_r = STATE_IDLE;
        if (!refresh_q && ram_req_w && (ram_wr_w != 4'b0) && row_open_q[addr_bank_w] && addr_row_w == active_row_q[addr_bank_w])
            next_state_r = STATE_WRITE;
    end
    STATE_PRECHARGE :
    begin
         // Closing row to perform refresh
        if (target_state_r == STATE_REFRESH)
            next_state_r = STATE_REFRESH;
        // Must be closing row to open another
        else
            next_state_r = STATE_ACTIVATE;
    end
    STATE_REFRESH :
    begin
        next_state_r = STATE_IDLE;
    end
    STATE_DELAY :
    begin
        next_state_r = delay_state_q;
    end
    default:
        ;
   endcase
end

//-----------------------------------------------------------------
// Delays (适配READ-WAIT状态的CAS延迟)
//-----------------------------------------------------------------
localparam DELAY_W = 4;

reg [DELAY_W-1:0] delay_q;
reg [DELAY_W-1:0] delay_r;

/* verilator lint_off WIDTH */
always @ *
begin
    case (state_q)
    STATE_ACTIVATE : delay_r = SDRAM_TRCD_CYCLES;
    STATE_READ     : delay_r = 1'd1; // 读命令发送后，进入1周期延迟（触发READ-WAIT）
    STATE_READ_WAIT: delay_r = SDRAM_READ_LATENCY; // READ-WAIT状态延迟=CAS延迟（默认2）
    STATE_PRECHARGE: delay_r = SDRAM_TRP_CYCLES;
    STATE_REFRESH  : delay_r = SDRAM_TRFC_CYCLES;
    STATE_DELAY    : delay_r = delay_q - 4'd1;
    default        : delay_r = {DELAY_W{1'b0}};
    endcase
end
/* verilator lint_on WIDTH */

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    target_state_q   <= STATE_IDLE;
else
    target_state_q   <= target_state_r;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    delay_state_q   <= STATE_IDLE;
else if (state_q != STATE_DELAY && delay_r != {DELAY_W{1'b0}})
    delay_state_q   <= next_state_r;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    state_q   <= STATE_INIT;
else if (delay_r != {DELAY_W{1'b0}})
    state_q   <= STATE_DELAY;
else
    state_q   <= next_state_r;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    delay_q   <= {DELAY_W{1'b0}};
else
    delay_q   <= delay_r;

//-----------------------------------------------------------------
// Refresh counter
//-----------------------------------------------------------------
localparam REFRESH_CNT_W = 17;

reg [REFRESH_CNT_W-1:0] refresh_timer_q;
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    refresh_timer_q <= SDRAM_START_DELAY + 100;
else if (refresh_timer_q == {REFRESH_CNT_W{1'b0}})
    refresh_timer_q <= SDRAM_REFRESH_CYCLES;
else
    refresh_timer_q <= refresh_timer_q - 1;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    refresh_q <= 1'b0;
else if (refresh_timer_q == {REFRESH_CNT_W{1'b0}})
    refresh_q <= 1'b1;
else if (state_q == STATE_REFRESH)
    refresh_q <= 1'b0;

//-----------------------------------------------------------------
// Input sampling
//-----------------------------------------------------------------
reg [SDRAM_DATA_W-1:0] sample_data0_q;
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    sample_data0_q <= {SDRAM_DATA_W{1'b0}};
else
    sample_data0_q <= sdram_data_input_i;

reg [SDRAM_DATA_W-1:0] sample_data_q;
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    sample_data_q <= {SDRAM_DATA_W{1'b0}};
else
    sample_data_q <= sample_data0_q;

//-----------------------------------------------------------------
// Command Output (READ-WAIT状态输出NOP，保持总线稳定)
//-----------------------------------------------------------------
integer idx;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
begin
    command_q       <= CMD_NOP;
    data_q          <= 32'b0;
    addr_q          <= {SDRAM_ROW_W{1'b0}};
    bank_q          <= {SDRAM_BANK_W{1'b0}};
    cke_q           <= 1'b0;
    dqm_q           <= {SDRAM_DQM_W{1'b0}};
    data_rd_en_q    <= 1'b1;

    for (idx=0;idx<SDRAM_BANKS;idx=idx+1)
        active_row_q[idx] <= {SDRAM_ROW_W{1'b0}};

    row_open_q      <= {SDRAM_BANKS{1'b0}};
end
else
begin
    case (state_q)
    default:
    begin
        command_q    <= CMD_NOP;
        addr_q       <= {SDRAM_ROW_W{1'b0}};
        bank_q       <= {SDRAM_BANK_W{1'b0}};
        data_rd_en_q <= 1'b1;
    end
    STATE_INIT:
    begin
        if (refresh_timer_q == 50)
            cke_q <= 1'b1;
        else if (refresh_timer_q == 40)
        begin
            command_q           <= CMD_PRECHARGE;
            addr_q[ALL_BANKS]   <= 1'b1;
        end
        else if (refresh_timer_q == 20 || refresh_timer_q == 30)
        begin
            command_q <= CMD_REFRESH;
        end
        else if (refresh_timer_q == 10)
        begin
            command_q <= CMD_LOAD_MODE;
            addr_q    <= MODE_REG;
        end
        else
        begin
            command_q   <= CMD_NOP;
            addr_q      <= {SDRAM_ROW_W{1'b0}};
            bank_q      <= {SDRAM_BANK_W{1'b0}};
        end
    end
    STATE_ACTIVATE :
    begin
        command_q     <= CMD_ACTIVE;
        addr_q        <= addr_row_w;
        bank_q        <= addr_bank_w;
        active_row_q[addr_bank_w]  <= addr_row_w;
        row_open_q[addr_bank_w]    <= 1'b1;
    end
    STATE_PRECHARGE :
    begin
        if (target_state_r == STATE_REFRESH)
        begin
            command_q           <= CMD_PRECHARGE;
            addr_q[ALL_BANKS]   <= 1'b1;
            row_open_q          <= {SDRAM_BANKS{1'b0}};
        end
        else
        begin
            command_q           <= CMD_PRECHARGE;
            addr_q[ALL_BANKS]   <= 1'b0;
            bank_q              <= addr_bank_w;
            row_open_q[addr_bank_w] <= 1'b0;
        end
    end
    STATE_REFRESH :
    begin
        command_q   <= CMD_REFRESH;
        addr_q      <= {SDRAM_ROW_W{1'b0}};
        bank_q      <= {SDRAM_BANK_W{1'b0}};
    end
    STATE_READ :
    begin
        command_q   <= CMD_READ;
        addr_q      <= addr_col_w;
        bank_q      <= addr_bank_w;
        addr_q[AUTO_PRECHARGE]  <= 1'b0;
        dqm_q       <= {SDRAM_DQM_W{1'b0}}; // 读无掩码
    end
    STATE_READ_WAIT :
    begin
        // READ-WAIT状态输出NOP，等待CAS延迟完成（纯组合逻辑，无时序扰动）
        command_q   <= CMD_NOP;
        addr_q      <= {SDRAM_ROW_W{1'b0}};
        bank_q      <= addr_bank_w;
        dqm_q       <= {SDRAM_DQM_W{1'b0}};
    end
    STATE_WRITE :
    begin
        command_q       <= CMD_WRITE;
        addr_q          <= addr_col_w;
        bank_q          <= addr_bank_w;
        data_q          <= ram_write_data_w;
        addr_q[AUTO_PRECHARGE]  <= 1'b0;
        
        // 修正：4位DQM正确映射
        dqm_q[1:0]      <= ~ram_wr_w[1:0];
        dqm_q[3:2]      <= ~ram_wr_w[3:2];
        
        data_rd_en_q    <= 1'b0;
    end
    endcase
end

//-----------------------------------------------------------------
// Record read events (适配READ-WAIT状态的ACK时机)
//-----------------------------------------------------------------
reg [SDRAM_READ_LATENCY+1:0]  rd_q;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    rd_q    <= {(SDRAM_READ_LATENCY+2){1'b0}};
else
    // READ-WAIT状态触发读数据采样（与CAS延迟对齐）
    rd_q    <= {rd_q[SDRAM_READ_LATENCY:0], (state_q == STATE_READ)};

//-----------------------------------------------------------------
// Data Output
//-----------------------------------------------------------------
assign ram_read_data_w = sample_data_q;

//-----------------------------------------------------------------
// ACK (READ-WAIT状态完成后产生ACK)
//-----------------------------------------------------------------
reg ack_q;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    ack_q   <= 1'b0;
else
begin
    if (state_q == STATE_WRITE)
        ack_q <= 1'b1;
    else if (rd_q[SDRAM_READ_LATENCY])
        ack_q <= 1'b1;
    else
        ack_q <= 1'b0;
end

assign ram_ack_w = ack_q;
assign ram_accept_w = (state_q == STATE_READ || state_q == STATE_WRITE);

//-----------------------------------------------------------------
// SDRAM I/O
//-----------------------------------------------------------------
assign sdram_clk_o           = ~clk_i;
assign sdram_data_out_en_o   = ~data_rd_en_q;
assign sdram_data_output_o   = data_q;
assign sdram_cke_o           = cke_q;
assign sdram_cs_o            = command_q[3];
assign sdram_ras_o           = command_q[2];
assign sdram_cas_o           = command_q[1];
assign sdram_we_o            = command_q[0];
assign sdram_dqm_o           = dqm_q;  // 修正：直接输出4位DQM
assign sdram_ba_o            = bank_q;

wire sdram_addr_msb_w = inport_addr_i[27];
assign sdram_addr_o          = {sdram_addr_msb_w, addr_q};

//-----------------------------------------------------------------
// Simulation only
//-----------------------------------------------------------------
`ifdef verilator
reg [79:0] dbg_state;

always @ *
begin
    case (state_q)
    STATE_INIT        : dbg_state = "INIT";
    STATE_DELAY       : dbg_state = "DELAY";
    STATE_IDLE        : dbg_state = "IDLE";
    STATE_ACTIVATE    : dbg_state = "ACTIVATE";
    STATE_READ        : dbg_state = "READ";
    STATE_READ_WAIT   : dbg_state = "READ-WAIT"; // 新增状态打印
    STATE_WRITE       : dbg_state = "WRITE";
    STATE_PRECHARGE   : dbg_state = "PRECHARGE";
    STATE_REFRESH     : dbg_state = "REFRESH";
    default           : dbg_state = "UNKNOWN";
    endcase
end
`endif

endmodule