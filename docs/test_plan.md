# Test Plan

## Project Scope

This project verifies a small single-cycle RV32I CPU subset written in SystemVerilog.

The goal is to demonstrate a realistic verification-focused hardware project using:

* Self-checking testbenches
* Directed tests
* Randomized tests
* Reference models
* Assertions
* Waveform debugging
* Regression scripts
* Documentation

## Supported Instruction Subset

### R-type

* `add`
* `sub`
* `and`
* `or`
* `xor`

### I-type

* `addi`
* `andi`
* `ori`
* `xori`
* `lw`

### S-type

* `sw`

### B-type

* `beq`

## Tools

* SystemVerilog
* Verilator
* GTKWave
* Make
* Git/GitHub

## Verification Strategy

The verification strategy has two main phases:

1. Block-level verification
2. CPU-level integration verification

Each hardware block is verified independently before integration into the full CPU. The integrated CPU is then tested by running small programs in simulation and checking final register and memory state.

## Block-Level Test Plan

## ALU Test Plan

### Features Tested

* ADD operation
* SUB operation
* AND operation
* OR operation
* XOR operation
* Zero flag behavior

### Directed Tests

Directed tests check known operation results and edge cases:

* `1 + 1`
* `10 - 3`
* AND with bit masks
* OR with bit masks
* XOR with alternating bit patterns
* Result equal to zero
* Overflow-style wraparound behavior

### Random Tests

Random tests apply randomized operands and randomized ALU operations. The ALU output is compared against a reference model inside the testbench.

### Checks

* Output result matches expected reference model result
* Zero flag is high only when output equals zero
* Inputs do not contain unknown values

## Register File Test Plan

### Features Tested

* 32 general-purpose registers
* Two read ports
* One write port
* Synchronous write behavior
* Reset behavior
* Write enable behavior
* x0 hardwired to zero

### Directed Tests

Directed tests check:

* Registers reset to zero
* Write to register x1
* Write to register x2
* Read two registers at the same time
* Attempted write to x0 is ignored
* Disabled write does not modify a register
* Overwriting a register updates its value

### Random Tests

Randomized tests perform random writes and random reads. A reference model array tracks the expected register values.

### Checks

* Read data matches reference model
* x0 always reads as zero
* Write enable controls register updates correctly
* Invalid x0 writes do not change x0

## Immediate Generator Test Plan

### Features Tested

* I-type immediate extraction
* S-type immediate extraction
* B-type immediate extraction
* Sign extension
* Branch offset bit placement

### Directed Tests

Directed tests include:

* Zero immediate
* Small positive immediates
* Largest positive signed immediate
* Negative immediate values
* All-ones immediate
* B-type branch offsets

### Random Tests

Random immediate values are generated for I-type, S-type, and B-type formats. The immediate generator output is compared against a reference model.

### Checks

* Immediate field extraction is correct
* Sign extension is correct
* B-type immediate bit ordering is correct
* B-type immediate includes a zero least-significant bit

## Decoder / Control Unit Test Plan

### Features Tested

The decoder generates control signals for:

* R-type ALU instructions
* I-type ALU instructions
* Load word
* Store word
* Branch equal
* Illegal instruction detection

### Directed Tests

Directed tests check decoding of:

* `add`
* `sub`
* `and`
* `or`
* `xor`
* `addi`
* `andi`
* `ori`
* `xori`
* `lw`
* `sw`
* `beq`

### Invalid Instruction Tests

Invalid opcode and unsupported function field combinations are tested to confirm that `illegal_instr` is asserted.

### Checks

The testbench checks:

* `rs1`
* `rs2`
* `rd`
* `alu_op`
* `imm_type`
* `wb_sel`
* `reg_we`
* `mem_re`
* `mem_we`
* `alu_src_imm`
* `branch_eq`
* `illegal_instr`

## CPU-Level Test Plan

The integrated CPU is tested by loading small programs into instruction memory and checking the final architectural state.

## CPU Program 1: Memory and Branch Taken Test

### Instructions Covered

* `addi`
* `add`
* `sw`
* `lw`
* `beq`
* `xor`

### Purpose

This program verifies basic arithmetic, data memory access, load/store behavior, and taken branch behavior.

### Expected Behavior

* x1 becomes 5
* x2 becomes 7
* x3 becomes 12
* data memory location 0 becomes 12
* x4 loads 12 from memory
* branch is taken because x3 equals x4
* x5 remains 0 because the instruction writing x5 is skipped
* x6 becomes 0 because x3 XOR x4 equals 0
* CPU halts on an invalid instruction

## CPU Program 2: ALU Immediate and Branch Not-Taken Test

### Instructions Covered

* `addi`
* `sub`
* `and`
* `or`
* `xori`
* `andi`
* `ori`
* `beq`
* `sw`
* `lw`

### Purpose

This program verifies additional ALU operations, immediate ALU operations, branch not-taken behavior, nonzero memory access, and x0 write protection.

### Expected Behavior

* Attempted write to x0 is ignored
* x1 becomes 15
* x2 becomes 5
* x3 becomes 10 from subtraction
* x4 becomes 5 from AND
* x5 becomes 15 from OR
* x6 becomes 5 from XOR immediate
* x7 becomes 6 from AND immediate
* x8 becomes 13 from OR immediate
* branch is not taken because x1 does not equal x2
* x9 becomes 99
* data memory word 4 becomes 99
* x10 loads 99 from memory

## CPU Program 3: Negative Immediate and Branch Taken Test

### Instructions Covered

* `addi`
* `add`
* `beq`

### Purpose

This program verifies negative immediate sign extension, two's complement arithmetic, taken branch behavior, and instruction skipping.

### Expected Behavior

* x1 becomes `0xFFFF_FFFF`, representing -1
* x2 becomes 1
* x3 becomes 0 after adding -1 and 1
* branch is taken because x3 equals x0
* x4 remains 0 because the instruction writing x4 is skipped
* x5 becomes 42
* CPU halts on an invalid instruction

## Regression Plan

All completed tests are run with:

```bash
cd sim
make clean
make lint
make all
```

Or:

```bash
cd sim
./run_regression.sh
```

## Expected Passing Tests

A passing regression should include:

* ALU testbench passing
* Register file testbench passing
* Immediate generator testbench passing
* Decoder testbench passing
* CPU program 1 passing
* CPU program 2 passing
* CPU program 3 passing
* CPU core test passing

## Waveform Plan

Each testbench dumps a VCD waveform file. GTKWave can be used to inspect internal signals.

Important CPU-level waveform signals include:

* `clk`
* `rst_n`
* `pc_dbg`
* `instr_dbg`
* `illegal_instr_dbg`
* register file read/write signals
* ALU inputs and output
* data memory address
* data memory write data
* data memory read data
* branch control signals

## Pass / Fail Criteria

The project is considered passing when:

* All Verilator lint targets complete successfully
* All block-level self-checking tests pass
* All CPU program tests pass
* No assertion failures occur
* The full regression script completes successfully
