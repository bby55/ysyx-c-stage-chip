.PHONY: insert-arg sim run run-diff
AM_SRCS := riscv/soc/start.S \
           riscv/soc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/soc.ld
LDFLAGS   += --defsym=_flash_start=0x30000000 --defsym=_entry_offset=0x0
LDFLAGS   += --defsym=_psram_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --defsym=_sram_start=0x0f000000 --defsym=_entry_offset=0x0
LDFLAGS   += --defsym=_sdram_start=0xa0000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
# LDFLAGS   += --print-map 

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER="$(MAINARGS_PLACEHOLDER)"


# # 批处理模式控制：通过NEMUFLAGS中的-b标志启用
# NEMUFLAGS += -b
# # 禁用批处理模式：注释掉上面一行即可
# ifneq (,$(findstring -b,$(NEMUFLAGS)))
# CFLAGS += -DBATCH_MODE
# $(info [Makefile] 批处理模式已启用 (BATCH_MODE))
# endif

# 原有编译配置
EXTRA_SRCS += $(NEMU_HOME)/src/utils/trace.c $(NEMU_HOME)/src/disasm.c
insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	$(OBJCOPY) -S -R .bss -O binary $(IMAGE).elf $(IMAGE).bin
	
SOC_HOME ?= /home/ysyxbby/ysyx-workbench/npc
sim: insert-arg
	@echo "Running $(NAME) on minirv-npc..."
	@$(MAKE) -C $(SOC_HOME) clean
	@mkdir -p $(SOC_HOME)/rom
	@cp $(IMAGE).bin $(SOC_HOME)/rom/text.bin
	@$(MAKE) -C $(SOC_HOME) LDFLAGS+=-lreadline CFLAGS+=-I$(AM_HOME)/include CFLAGS+=-I$(NEMU_HOME)/include
	@$(SOC_HOME)/obj_dir/Vtop
run: insert-arg
	$(MAKE) -C $(SOC_HOME) ISA=$(ISA) sim ARGS="$(SOCFLAGS)" IMG=$(IMAGE).bin $(NEMUFLAGS)

run-diff: insert-arg
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) sim ARGS="$(NPCFLAGS)" IMG=$(IMAGE).bin DIFFTEST=1 $(NEMUFLAGS)   