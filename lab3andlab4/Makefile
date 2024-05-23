.PHONY: test1
test1:
	make clean
	verilator --build --top-module SingleCycleCPU SingleCycleCPU.v Adder.v ALU_Branch_Ctrl.v ALU.v BranchComp.v Control.v DataMemory.v \
	ForwardUnit.v HazardDetectUnit.v ImmGen.v InstructionMemory.v Mux2to1.v Mux3to1.v PC.v \
	Register.v Pipe_reg_IF_ID.v Pipe_reg_ID_Ex.v Pipe_reg_Ex_Mem.v Pipe_reg_Mem_Wb.v \
	--exe example_testbench.cpp -cc --trace -Wall
	./obj_dir/VSingleCycleCPU

.PHONY: clean
clean:
	rm -rf obj_dir
	rm -f waveform.vcd


### compiile code
# verilator -Wall --cc  SingleCycleCPU.v --exe example_testbench.cpp -Wno-STMTDLY --trace
# make -C obj_dir -f VSingleCycleCPU.mk VSingleCycleCPU
# ./obj_dir/VSingleCycleCPU