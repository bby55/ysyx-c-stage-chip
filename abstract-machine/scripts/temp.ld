ENTRY(_start)
MEMORY {
  flash (rx)  : ORIGIN = 0x30000000, LENGTH = 16M 
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
  sram (rwx)  : ORIGIN = 0x0f000000, LENGTH = 8K 
}

_sram_start = ORIGIN(sram);
_stack_size = 0x1000;
SECTIONS {
  . = ORIGIN(flash);
  
  .text : {
    . = ALIGN(4);
    *(entry)
    *(.text*)
    . = ALIGN(4);
  } > flash AT> flash
  etext = .;

  _fbl_start = .;
  .fbl : {
    . = ALIGN(4);
    KEEP(*(.fbl*))
    . = ALIGN(4);
  } > flash AT> flash
  _fbl_end = .;

  . = ORIGIN(sram);
  _sbl_start = .;
  .sbl : {
    . = ALIGN(4);
    KEEP(*(.sbl*))
    . = ALIGN(4);
  } > sram AT> flash
  _sbl_end = .;
  _sbl_lma = LOADADDR(.sbl);

  .rodata : {
    . = ALIGN(4);
    *(.rodata) *(.rodata*)
    . = ALIGN(4);
  } > flash AT> flash


  . = ORIGIN(psram); 
  _data_vma_start = .;
  _data_lma_start = .;


  .data : {
    . = ALIGN(4);
    *(.data) *(.data*)
    *(.sdata) *(.sdata*)
 
    __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(4);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(4);

    . = ALIGN(4);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(4);

    __rt_utest_tc_tab_start = .;
    KEEP(*(UtestTcTab))
    __rt_utest_tc_tab_end = .;
    . = ALIGN(4);

    __am_apps_data_start = .;
    *(__am_apps.data*)
    *(__am_apps.sdata*)
    __am_apps_data_end = .;
    . = ALIGN(4);
  } > psram AT> flash

  _data_vma_end = .; 
  _data_lma_start = LOADADDR(.data); 
  _data_len       = _data_vma_end - _data_vma_start;


  .bss : {
    _bss_vma_start = .;
    . = ALIGN(4);
    *(.sbss*)
    *(.scommon)
    *(.bss*)
    . = ALIGN(4);

    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(4);
    _bss_vma_end = .;
  } > psram AT>flash

    
    . = ORIGIN(sram) + LENGTH(sram) - _stack_size;
    . = ALIGN(4);
    _stack_top = .;
    . += _stack_size;
    _stack_pointer = .;


  . = _bss_vma_end;
  end = .;
  _heap_start = ALIGN(0x100);
}

/* 低地址
┌───────────────────┐
│      .text        │ ← _pmem_start
│   (entry, code)   │
├───────────────────┤
│     .rodata       │
│   (read-only)     │
├───────────────────┤
│      .data        │
│ (initialized data)│
├───────────────────┤
│       .bss        │ ← _bss_start
│ (uninitialized)   │
├───────────────────┤
│                   │
│     栈空间         │ ← _stack_top (栈底)
│    (32KB)         │
│                   │ ← _stack_pointer (初始SP)
├───────────────────┤
│                   │
│     未分配空间      │ ← end/_end
├───────────────────┤
│                   │
│      堆空间        │ ← _heap_start
│   (动态分配)       │
└───────────────────┘ 高地址 */