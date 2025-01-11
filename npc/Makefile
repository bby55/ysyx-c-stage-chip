all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall top.v -cc -trace -build -exe main.cpp
	make -C obj_dir -f Vtop.mk Vtop	
	./obj_dir/Vtop
include ../Makefile
