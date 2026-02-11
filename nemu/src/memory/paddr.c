/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#define CONFIG_MROM 0
#define CONFIG_SRAM 1
#define CONFIG_SDRAM 1
#define CONFIG_FLASH 1
#if defined(CONFIG_PMEM_MALLOC)
uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
uint8_t pflash[CONFIG_FLASH_SIZE] PG_ALIGN = {};
uint8_t pmrom[CONFIG_MROM_SIZE] PG_ALIGN = {};
uint8_t psram[CONFIG_SRAM_SIZE] PG_ALIGN = {};
uint8_t sdram[CONFIG_SDRAM_SIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

uint8_t* guest_to_host_mrom(paddr_t paddr) { return pmrom + paddr - CONFIG_MROM_BASE; }
paddr_t host_to_guest_mrom(uint8_t *haddr) { return haddr - pmrom + CONFIG_MROM_BASE; }

uint8_t* guest_to_host_flash(paddr_t paddr) { return pflash + paddr - CONFIG_FLASH_BASE; }
paddr_t host_to_guest_flash(uint8_t *haddr) { return haddr - pflash + CONFIG_FLASH_BASE; }

uint8_t* guest_to_host_sram(paddr_t paddr) { return psram + paddr - CONFIG_SRAM_BASE; }
paddr_t host_to_guest_sram(uint8_t *haddr) { return haddr - psram+ CONFIG_SRAM_BASE; }

uint8_t* guest_to_host_sdram(paddr_t paddr) { return sdram + paddr - CONFIG_SDRAM_BASE; }
paddr_t host_to_guest_sdram(uint8_t *haddr) { return haddr - sdram + CONFIG_SDRAM_BASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static word_t pmrom_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host_mrom(addr), len);
  return ret;
}

static word_t pflash_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host_flash(addr), len);
  return ret;
}

static word_t psram_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host_sram(addr), len);
  return ret;
}

static word_t sdram_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host_sdram(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void pmrom_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host_mrom(addr), len, data);
}


static void pflash_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host_flash(addr), len, data);
}

static void psram_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host_sram(addr), len, data);
}

static void sdram_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host_sdram(addr), len, data);
}


static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}
void memory_write_dis(paddr_t addr, int len, word_t data);
void memory_read_dis(paddr_t addr, int len);

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  IFDEF(CONFIG_MTRACE, memory_read_dis(addr, len));
  // if (addr == 0xa0000048 || addr == 0xa000004c || addr == 0xa00003f8) {
  //   return 0;
  // }

  IFDEF(CONFIG_FLASH,if(likely(in_pflash(addr))) { return pflash_read(addr, len); })
  IFDEF(CONFIG_MROM,if(likely(in_pmrom(addr))) { return pmrom_read(addr, len); })
    // printf("in_pmrom=%d in_psram=%d ,addr = 0x%x\n",in_pmrom(addr),in_psram(addr),addr);
  IFDEF(CONFIG_SRAM,if(likely(in_psram(addr))) { return psram_read(addr, len); })
  IFDEF(CONFIG_SDRAM,if(likely(in_sdram(addr))) { return sdram_read(addr, len); })
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  IFDEF(CONFIG_MTRACE, memory_write_dis(addr, len, data));
  // if (addr == 0xa0000048 || addr == 0xa000004c || addr == 0xa00003f8) {
  //   return;
  // }
  
  
  
  IFDEF(CONFIG_MROM,if(likely(in_pmrom(addr))) { pmrom_write(addr, len, data); return; })

  IFDEF(CONFIG_FLASH,if(likely(in_pflash(addr))) { pflash_write(addr, len, data); return; })

  IFDEF(CONFIG_SRAM,if(likely(in_psram(addr))) { psram_write(addr, len, data); return; })
  IFDEF(CONFIG_SDRAM,if(likely(in_sdram(addr))) { sdram_write(addr, len, data); return; })
  
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
