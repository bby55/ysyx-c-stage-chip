AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER="$(MAINARGS_PLACEHOLDER)"  # 这里建议加引号，避免空格问题
# 在NPC的Makefile中添加
EXTRA_SRCS += $(NEMU_HOME)/src/utils/trace.c $(NEMU_HOME)/src/disasm.c
insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

NPC_HOME ?= /home/ysyxbby/ysyx-workbench/npc
run: insert-arg
	@echo "Running $(NAME) on minirv-npc..."
	@$(MAKE) -C $(NPC_HOME) clean
	@mkdir -p $(NPC_HOME)/rom
	@cp $(IMAGE).bin $(NPC_HOME)/rom/text.bin  # 此时的.bin已经被insert-arg替换过
	@$(MAKE) -C $(NPC_HOME) LDFLAGS+=-lreadline CFLAGS+=-I$(AM_HOME)/include CFLAGS+=-I$(NEMU_HOME)/include
	@$(NPC_HOME)/obj_dir/Vtop