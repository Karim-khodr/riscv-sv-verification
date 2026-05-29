VERILATOR ?= verilator

VERILATOR_FLAGS = -Wall --timing --assert -I../rtl

TOP_ALU = alu_tb
TOP_REGFILE = regfile_tb

OBJ_DIR_ALU = obj_dir_alu
OBJ_DIR_REGFILE = obj_dir_regfile

RTL_ALU = ../rtl/cpu_pkg.sv ../rtl/alu.sv
TB_ALU = ../tb/alu_tb.sv

RTL_REGFILE = ../rtl/regfile.sv
TB_REGFILE = ../tb/regfile_tb.sv

.PHONY: all alu regfile lint lint-alu lint-regfile wave-alu wave-regfile clean

all: alu regfile

alu:
	$(VERILATOR) $(VERILATOR_FLAGS) --binary --trace \
		$(RTL_ALU) $(TB_ALU) \
		--top-module $(TOP_ALU) \
		-Mdir $(OBJ_DIR_ALU)
	./$(OBJ_DIR_ALU)/V$(TOP_ALU)

regfile:
	$(VERILATOR) $(VERILATOR_FLAGS) --binary --trace \
		$(RTL_REGFILE) $(TB_REGFILE) \
		--top-module $(TOP_REGFILE) \
		-Mdir $(OBJ_DIR_REGFILE)
	./$(OBJ_DIR_REGFILE)/V$(TOP_REGFILE)

lint: lint-alu lint-regfile

lint-alu:
	$(VERILATOR) --lint-only $(VERILATOR_FLAGS) \
		$(RTL_ALU) $(TB_ALU) \
		--top-module $(TOP_ALU)

lint-regfile:
	$(VERILATOR) --lint-only $(VERILATOR_FLAGS) \
		$(RTL_REGFILE) $(TB_REGFILE) \
		--top-module $(TOP_REGFILE)

wave-alu:
	gtkwave alu_tb.vcd

wave-regfile:
	gtkwave regfile_tb.vcd

clean:
	rm -rf $(OBJ_DIR_ALU) $(OBJ_DIR_REGFILE) *.vcd