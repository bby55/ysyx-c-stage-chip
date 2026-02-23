.section .fbl, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la a0, _sbl_lma
  la a1, _sbl_start
  la a2, _sbl_end
  sub a2, a2, a1
  mv t0, zero
  la ra, .fbl_copy
  jalr ra


.global .fbl_copy
.type .fbl_copy, @function

.fbl_copy:
  bgeu t0, a2, .fbl_end
  add t1, a0, t0
  lw t2, 0(t1)
  add t1, a1, t0
  sw t2, 0(t1)
  addi t0, t0, 4
  j .fbl_copy

.fbl_end:
  mv a0, zero
  mv a1, zero
  mv a2, zero
  mv t0, zero
  mv t1, zero
  mv t2, zero
  la a0, _text_vma_start
  la a1, _text_lma_start
  la a2, _text_len
  la ra, .sbl_text_copy
  jalr ra


.section .sbl, "ax"
.global .sbl_text_copy
.type .sbl_text_copy, @function

.sbl_text_copy:
  bgeu t0, a2, .sbl_text_copy_end
  add t1, a1, t0
  lw t2, 0(t1)
  add t1, a0, t0
  sw t2, 0(t1)
  addi t0, t0, 4
  j .sbl_text_copy

.sbl_text_copy_end:
  mv a0, zero
  mv a1, zero
  mv a2, zero
  mv t0, zero
  mv t1, zero
  mv t2, zero
  la a0, _data_vma_start
  la a1, _data_lma_start
  la a2, _data_len
  la ra, .sbl_copy
  jalr ra

.global .sbl_copy
.type .sbl_copy, @function

.sbl_copy:
  bgeu t0, a2, .sbl_copy_end
  add t1, a1, t0
  lw t2, 0(t1)
  add t1, a0, t0
  sw t2, 0(t1)
  addi t0, t0, 4
  j .sbl_copy

.sbl_copy_end:
  mv a0, zero
  mv a1, zero
  mv a2, zero
  mv t0, zero
  mv t1, zero
  mv t2, zero
  la a0, _bss_vma_start
  la a1, _bss_vma_end
  sub a1, a1, a0
  la ra, .sbl_bss_clear
  jalr ra

.sbl_bss_clear:
  bgeu t0, a1, .sbl_bss_clear_end
  add t1, a0, t0
  sw zero, 0(t1)
  addi t0, t0, 4
  j .sbl_bss_clear

.sbl_bss_clear_end:
  la sp, _stack_pointer
  call _trm_init