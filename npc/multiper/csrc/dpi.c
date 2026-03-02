#include "npc.h"
#include <cstdio>
#include <cstdlib>
#include <cassert>

// ==============================================
// 本模块定义的全局变量（npc.h中extern声明）
// ==============================================
uint32_t n_pc = 0;
uint32_t instr = 0;
void print_performance_stats();
// ==============================================
// DPI接口：设置CSR寄存器值（硬件→软件）
// ==============================================
extern "C" void set_csr_values(int mcause, int mepc, int mstatus, int mtvec) {
    cpu_state.csr.mcause = static_cast<uint32_t>(mcause);
    cpu_state.csr.mepc = static_cast<uint32_t>(mepc);
    cpu_state.csr.mstatus = static_cast<uint32_t>(mstatus);
    cpu_state.csr.mtvec = static_cast<uint32_t>(mtvec);
}

// ==============================================
// 串口输出辅助函数
// ==============================================
void putch(int c) {
    *(volatile uint8_t *)SERIAL_PORT = c & 0xff;
}

uint32_t Ifu_count = 0;
uint32_t Lsu_count = 0;
uint32_t Compute_count = 0;
uint32_t Csr_count = 0;
uint32_t Jump_count = 0;
uint32_t Mem_count = 0;
uint32_t Exu_count = 0;
uint32_t IFU_cycles = 0;
uint32_t LSU_cycles = 0;
uint32_t NO_ICACHE_count = 0;
extern "C" void perfomance(int ifu_count, int lsu_count, int compute_count, int csr_count, int jump_count, int mem_count, int exu_count, int ifu_cycles, int lsu_cycles, int no_icache_count) {
        Ifu_count = ifu_count;
        Lsu_count = lsu_count;
        Compute_count = compute_count;
        Csr_count = csr_count;
        Jump_count = jump_count;
        Mem_count = mem_count;
        Exu_count = exu_count;
        IFU_cycles = ifu_cycles;
        LSU_cycles = lsu_cycles;
        NO_ICACHE_count = no_icache_count;
}

void print_performance_count() {
    printf("\n\033[1;36m[Performance Count]\033[0m\n");
    printf("\033[1;36mIFU Count: %u IFU Cycles: %u  Spent: %.4f\033[0m\n", Ifu_count, IFU_cycles, (float)IFU_cycles/total_cycles);
    printf("\033[1;36mLSU Count: %u LSU Cycles: %u  Spent: %.4f\033[0m\n", Lsu_count, LSU_cycles, (float)LSU_cycles/total_cycles);
    printf("\033[1;36mEXU Count: %u\033[0m\n", Exu_count);
    printf("\033[1;36m[Instruction Count]\033[0m\n");
    printf("\033[1;36mCompute Count: %u\033[0m\n", Compute_count);
    printf("\033[1;36mCSR Count: %u\033[0m\n", Csr_count);
    printf("\033[1;36mJump Count: %u\033[0m\n", Jump_count);
    printf("\033[1;36mMem Count: %u\033[0m\n", Mem_count);
    printf("\033[1;36mHIT ICache useage: %.4f\033[0m\n", (float)(Ifu_count - NO_ICACHE_count) / Ifu_count);
}

// ==============================================
// DPI接口：程序异常/正常退出（硬件→软件）
// ==============================================
extern "C" void ebreak(int exit_code, int exit_pc) { 
    if (tfp != NULL) { tfp->close(); delete tfp; tfp = NULL; }
    if (exit_code == 0) {
        printf("Exit PC: 0x%x\n", cpu_state.pc);
        printf("[DPI] ebreak: \033[1;32m HIT GOOD TRAP \033[0m\n");        
    } else {
        printf("Exit PC: 0x%x\n", cpu_state.pc);
        printf("[DPI] ebreak: \033[1;31m HIT BAD TRAP \033[0m\n");
    }
    npc_state.state = NPC_END;
    // print_iringbuf();
    print_performance_stats();
    print_performance_count();
    exit(exit_code);
}

// ==============================================
// DPI接口：ROM读取（硬件→软件）
// ==============================================
extern "C" int rom_read(int raddr) {
    if(raddr >= 0x80000000) raddr = raddr - 0x80000000;
    uint32_t aligned_addr = raddr & ~0x3u;
    uint32_t rom_idx = aligned_addr >> 2;
    if (rom_idx >= ROM_SIZE) {
        fprintf(stderr, "ROM越界: 0x%x\n", aligned_addr);
        assert(0);
        return 0;
    }
    return rom[rom_idx];
}

// ==============================================
// DPI接口：FLASH读取（硬件→软件）
// ==============================================
extern "C" void flash_read(int32_t addr, int32_t *data) {
    if(addr >= 0x30000000) addr = addr - 0x30000000;
    uint32_t aligned_addr = addr & ~0x3u;
    uint32_t flash_idx = aligned_addr >> 2;
    if (flash_idx >= FLASH_SIZE) {
        fprintf(stderr, "Flash越界: 0x%x\n", aligned_addr);
        assert(0);
    }
     *data = flash[flash_idx];
}

// ==============================================
// DPI接口：PSRAM读取（硬件→软件）
// ==============================================
extern "C" void psram_read(int32_t addr, int32_t *data) {
    if (addr >= 0x80000000) {
        addr = addr - 0x80000000;
    }

    if (addr + 3 >= PSRAM_SIZE) {
        fprintf(stderr, "PSRAM4字节读取越界: 起始地址0x%x，结束地址0x%x，总大小0x%x\n",
                addr, addr + 3, PSRAM_SIZE);
        assert(0);
    }
    *data = (psram[addr + 3] << 24) |
            (psram[addr + 2] << 16) |
            (psram[addr + 1] << 8) |
            psram[addr];
            // printf("data = 0x%x\n",*data);
}

extern "C" void psram_write(int32_t addr, int8_t data) {
    if(addr >= 0x80000000) addr = addr - 0x80000000;
    if (addr >= PSRAM_SIZE) {
        fprintf(stderr, "PSRAM越界: 0x%x\n", addr);
        assert(0);
    }
    // printf("addr = 0x%x data = 0x%x\n",addr,data);
    psram[addr] = data ;
   
}

// ==============================================
// DPI接口：MROM读取（硬件→软件）
// ==============================================
extern "C" void mrom_read(int32_t addr, int32_t *data) { 
    if(addr >= 0x20000000) addr = addr - 0x20000000;
    uint32_t aligned_addr = addr & ~0x3u;
    uint32_t mrom_idx = aligned_addr >> 2;
    if (mrom_idx >= MMROM_SIZE) {
        fprintf(stderr, "mrom越界: 0x%x\n", aligned_addr);
        assert(0);
    }
     *data = mrom[mrom_idx];
}

// ==============================================
// DPI接口：物理内存读取（硬件→软件）
// ==============================================
extern "C" int pmem_read(int raddr, int valid) {
    uint32_t data = 0;
    if (raddr == SERIAL_PORT) data = 0;
    else if (raddr == KBD_ADDR) data = 0;
    else if (raddr >= VGA_ADDR && raddr <= VGA_ADDR+0x7) {}
    else if (raddr >= FB_ADDR && raddr <= FB_ADDR + 0x200000) data = 0;
    else if (raddr == TIMER_LO) data = (uint32_t)(virtual_us & 0xFFFFFFFF);
    else if (raddr == TIMER_HI) data = (uint32_t)(virtual_us >> 32);
    else if (raddr == RTC_SECOND) data = rtc_tm->tm_sec;
    else {
        int addr = (raddr & ~0x3u) >> 2;
        data = ram[addr];
    }
    if(is_mtrace && (valid == 0xffffffff)) {
        printf("\033[1;32mMtrace: 成功在地址: 0x%x 取出数据 0x%x\n\033[0m", raddr+0x80000000, data);
    }
    return data;
}

// ==============================================
// DPI接口：物理内存写入（硬件→软件）
// ==============================================
extern "C" void pmem_write(int waddr, int wdata, char wmask, int pc) {
    if (waddr == SERIAL_PORT) {
        if (wmask & 0x1) {
            putchar(wdata & 0xff);
            fflush(stdout);
        }
        return;
    }
    if(waddr == KBD_ADDR || waddr == VGA_ADDR) return;
    if (waddr >= VGA_ADDR && waddr <= VGA_ADDR+0x7) return;
    if (waddr >= FB_ADDR && waddr <= FB_ADDR + 0x200000) return;
    if (waddr == TIMER_LO || waddr == TIMER_HI) return;
    
    int addr = (waddr & ~0x3u) >> 2;
    uint32_t new_val = ram[addr];
    if (wmask == 0x1) new_val = (new_val & ~0xFF) | (wdata & 0xFF);
    else if (wmask == 0x2) new_val = (new_val & ~0xFF00) | (wdata & 0xFF00);
    else if (wmask == 0x4) new_val = (new_val & ~0xFF0000) | (wdata & 0xFF0000);
    else if (wmask == 0x8) new_val = (new_val & ~0xFF000000) | (wdata & 0xFF000000);
    else if (wmask == 0x3) new_val = (new_val & ~0x0000FFFF) | (wdata & 0xFFFF);
    else if (wmask == 0x0c) new_val = (new_val & ~0xFFFF0000) | (wdata & 0xFFFF0000);
    else new_val = wdata;
    
    if(is_mtrace) {
        printf("\033[1;32mMtrace: 成功在地址: 0x%x 存入数据 0x%x\n\033[0m", waddr+0x80000000, new_val);
    }
    ram[addr] = new_val;
}

// ==============================================
// DPI接口：指令/PC状态同步（硬件→软件）
// ==============================================
extern "C" void display(int instr, int pc, int npc, int update_en) {
     #if (LOAD_MEM_TYPE == LOAD_FLASH)
        int index = (pc >= 0x30000000) ? (pc - 0x30000000) / 4 : 0;
        ::instr = instr;
    #elif (LOAD_MEM_TYPE == LOAD_MROM)
        // MROM基地址0x20000000，4字节步长（32位指令，占4字节）
        int index = (pc >= 0x20000000) ? (pc - 0x20000000) / 4 : 0;
        ::instr = mrom[index];
    #elif (LOAD_MEM_TYPE == LOAD_ROM)
        // ROM基地址0x80000000，默认分支
        int index = (pc >= 0x80000000) ? (pc - 0x80000000) / 4 : 0;
        ::instr = rom[index];
    #else
        // 宏未定义时的兜底处理，避免编译/运行错误
        ::instr = 0;  // 指令置空
    #endif   
    cpu_state.pc = static_cast<uint32_t>(pc);
    if(update_en) ::n_pc = npc;
}

// ==============================================
// DPI接口：寄存器状态同步（硬件→软件）
// ==============================================
extern "C" void display_ref(int rf0, int rf1, int rf2, int rf3,
                            int rf4, int rf5, int rf6, int rf7,
                            int rf8, int rf9, int rf10, int rf11,
                            int rf12, int rf13, int rf14, int rf15) {
    cpu_state.gpr[0] = static_cast<uint32_t>(rf0);
    cpu_state.gpr[1] = static_cast<uint32_t>(rf1);
    cpu_state.gpr[2] = static_cast<uint32_t>(rf2);
    cpu_state.gpr[3] = static_cast<uint32_t>(rf3);
    cpu_state.gpr[4] = static_cast<uint32_t>(rf4);
    cpu_state.gpr[5] = static_cast<uint32_t>(rf5);
    cpu_state.gpr[6] = static_cast<uint32_t>(rf6);
    cpu_state.gpr[7] = static_cast<uint32_t>(rf7);
    cpu_state.gpr[8] = static_cast<uint32_t>(rf8);
    cpu_state.gpr[9] = static_cast<uint32_t>(rf9);
    cpu_state.gpr[10] = static_cast<uint32_t>(rf10);
    cpu_state.gpr[11] = static_cast<uint32_t>(rf11);
    cpu_state.gpr[12] = static_cast<uint32_t>(rf12);
    cpu_state.gpr[13] = static_cast<uint32_t>(rf13);
    cpu_state.gpr[14] = static_cast<uint32_t>(rf14);
    cpu_state.gpr[15] = static_cast<uint32_t>(rf15);
}

