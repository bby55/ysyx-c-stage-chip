ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }
MEMORY {
  mrom (rx)  : ORIGIN = 0x20000000, LENGTH = 16M
  sram (rwx): ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  . = ORIGIN(mrom);
  .text : {
    . = ALIGN(4);
    *(entry)
    *(.text*)
    . = ALIGN(4);
  } > mrom AT> mrom :text
  etext = .;

  .rodata : {
    . = ALIGN(4);
    *(.rodata) *(.rodata*)
    . = ALIGN(4);
  } > mrom AT> mrom
  
  . = ORIGIN(sram);
  .data : {
    _data_vma_start = .;
    . = ALIGN(4);
    *(.data) *(.data*) *(.data.extra)
    *(.sdata) *(.sdata*)
    . = ALIGN(4);
    _data_vma_end = .;
  } > sram AT> mrom :data
  
  _data_lma_start = LOADADDR(.data);
  _data_len       = SIZEOF(.data);
  _data_lma_end   = _data_lma_start + _data_len;

  .bss : {
    _bss_vma_start = .;
    . = ALIGN(4);
    *(.sbss*)
    *(.scommon)
    *(.bss*)
    . = ALIGN(4);
    _bss_vma_end = .;
  } > sram

  _stack_top = ALIGN(0x100);
  . = ORIGIN(sram) + LENGTH(sram) - 0x1000;
  _stack_pointer = .;
  end = .;
  _heap_start = ALIGN(0x100);
}