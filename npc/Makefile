all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall top.v main.cpp -cc -trace -build -exe
	./obj_dir/Vtop
include ../Makefile
