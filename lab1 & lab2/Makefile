.PHONY: test1
test1:
	make clean
	verilator --build SingleCycleCPU.v Adder.v ALU.v ALUCtrl.v Control.v DataMemory.v \
	ImmGen.v InstructionMemory.v Mux2to1.v PC.v Register.v ShiftLeftOne.v \
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