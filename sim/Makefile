VERILATOR ?= verilator

TOP_ALU = alu_tb
OBJ_DIR = obj_dir

RTL = ../rtl/cpu_pkg.sv ../rtl/alu.sv
TB_ALU = ../tb/alu_tb.sv

.PHONY: alu lint wave clean

alu:
	$(VERILATOR) -Wall --binary --timing --trace --assert \
		-I../rtl \
		$(RTL) $(TB_ALU) \
		--top-module $(TOP_ALU) \
		-Mdir $(OBJ_DIR)
	./$(OBJ_DIR)/V$(TOP_ALU)

lint:
	$(VERILATOR) --lint-only -Wall --timing --assert \
		-I../rtl \
		$(RTL) $(TB_ALU) \
		--top-module $(TOP_ALU)

wave:
	gtkwave alu_tb.vcd

clean:
	rm -rf $(OBJ_DIR) *.vcd