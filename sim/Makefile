VERILATOR ?= verilator

VERILATOR_FLAGS = -Wall --timing --assert -I../rtl

TOP_ALU = alu_tb
TOP_REGFILE = regfile_tb
TOP_IMM_GEN = imm_gen_tb
TOP_DECODER = decoder_tb

OBJ_DIR_ALU = obj_dir_alu
OBJ_DIR_REGFILE = obj_dir_regfile
OBJ_DIR_IMM_GEN = obj_dir_imm_gen
OBJ_DIR_DECODER = obj_dir_decoder

RTL_ALU = ../rtl/cpu_pkg.sv ../rtl/alu.sv
TB_ALU = ../tb/alu_tb.sv

RTL_REGFILE = ../rtl/regfile.sv
TB_REGFILE = ../tb/regfile_tb.sv

RTL_IMM_GEN = ../rtl/cpu_pkg.sv ../rtl/imm_gen.sv
TB_IMM_GEN = ../tb/imm_gen_tb.sv

RTL_DECODER = ../rtl/cpu_pkg.sv ../rtl/decoder.sv
TB_DECODER = ../tb/decoder_tb.sv

.PHONY: all alu regfile imm-gen decoder lint lint-alu lint-regfile lint-imm-gen lint-decoder wave-alu wave-regfile wave-imm-gen wave-decoder clean

all: alu regfile imm-gen decoder

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

imm-gen:
	$(VERILATOR) $(VERILATOR_FLAGS) --binary --trace \
		$(RTL_IMM_GEN) $(TB_IMM_GEN) \
		--top-module $(TOP_IMM_GEN) \
		-Mdir $(OBJ_DIR_IMM_GEN)
	./$(OBJ_DIR_IMM_GEN)/V$(TOP_IMM_GEN)

decoder:
	$(VERILATOR) $(VERILATOR_FLAGS) --binary --trace \
		$(RTL_DECODER) $(TB_DECODER) \
		--top-module $(TOP_DECODER) \
		-Mdir $(OBJ_DIR_DECODER)
	./$(OBJ_DIR_DECODER)/V$(TOP_DECODER)

lint: lint-alu lint-regfile lint-imm-gen lint-decoder

lint-alu:
	$(VERILATOR) --lint-only $(VERILATOR_FLAGS) \
		$(RTL_ALU) $(TB_ALU) \
		--top-module $(TOP_ALU)

lint-regfile:
	$(VERILATOR) --lint-only $(VERILATOR_FLAGS) \
		$(RTL_REGFILE) $(TB_REGFILE) \
		--top-module $(TOP_REGFILE)

lint-imm-gen:
	$(VERILATOR) --lint-only $(VERILATOR_FLAGS) \
		$(RTL_IMM_GEN) $(TB_IMM_GEN) \
		--top-module $(TOP_IMM_GEN)

lint-decoder:
	$(VERILATOR) --lint-only $(VERILATOR_FLAGS) \
		$(RTL_DECODER) $(TB_DECODER) \
		--top-module $(TOP_DECODER)

wave-alu:
	gtkwave alu_tb.vcd

wave-regfile:
	gtkwave regfile_tb.vcd

wave-imm-gen:
	gtkwave imm_gen_tb.vcd

wave-decoder:
	gtkwave decoder_tb.vcd

clean:
	rm -rf $(OBJ_DIR_ALU) $(OBJ_DIR_REGFILE) $(OBJ_DIR_IMM_GEN) $(OBJ_DIR_DECODER) *.vcd
	