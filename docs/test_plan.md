# Test Plan

## Project Scope

This project verifies a small single-cycle RV32I CPU subset written in SystemVerilog. The verification approach starts with block-level testing and then moves to integrated CPU program-level testing.

## Tools

* SystemVerilog
* Verilator
* GTKWave
* Make
* Git/GitHub

## Block-Level Test Plan

### ALU

Instructions/operations covered:

* ADD
* SUB
* AND
* OR
* XOR

Verification features:

* Directed tests for basic operations and edge cases
* Randomized operand testing
* Reference model comparison
* Zero flag checking
* Assertions for unknown input detection
* VCD waveform generation

### Register File

Features covered:

* 32 general-purpose registers
* Two asynchronous read ports
* One synchronous write port
* Register x0 hardwired to zero
* Write enable behavior
* Reset behavior

Verification features:

* Directed read/write tests
* Random register accesses
* Reference model comparison
* Assertions for x0 behavior and unknown inputs

### Immediate Generator

Immediate types covered:

* I-type immediates
* S-type immediates
* B-type branch immediates

Verification features:

* Directed sign-extension tests
* Random immediate tests
* Reference model comparison
* Tests for positive and negative immediate values

### Decoder / Control Unit

Instruction classes covered:

* R-type ALU instructions
* I-type ALU instructions
* Load word
* Store word
* Branch equal
* Illegal instruction detection

Verification features:

* Directed decode tests for each supported instruction
* Invalid opcode testing
* Control signal checking
* Register field extraction checking

## CPU-Level Test Plan

The integrated CPU is tested by loading small programs into instruction memory and checking the final architectural state.

### Program 1: Memory and Branch Taken Test

Covers:

* `addi`
* `add`
* `sw`
* `lw`
* `beq` taken
* `xor`

Expected behavior:

* Store the value 12 to data memory
* Load it back into a register
* Take a branch when two registers are equal
* Skip an instruction
* Halt on an invalid instruction

### Program 2: ALU Immediate and Branch Not-Taken Test

Covers:

* `sub`
* `and`
* `or`
* `xori`
* `andi`
* `ori`
* `beq` not taken
* Nonzero memory address access
* x0 write protection

Expected behavior:

* Execute ALU and immediate operations correctly
* Confirm branch is not taken when registers differ
* Store and load from a nonzero data memory address
* Confirm x0 remains zero

### Program 3: Negative Immediate and Branch Taken Test

Covers:

* Negative immediate sign extension
* Addition with two's complement values
* Branch taken when result is zero
* Instruction skip behavior

Expected behavior:

* Load -1 using `addi`
* Add -1 and 1 to produce 0
* Take a branch when result equals x0
* Skip an instruction
* Halt on an invalid instruction

## Regression Targets

From the `sim/` directory:

```bash
make clean
make lint
make all
```

Expected passing tests:

* ALU testbench
* Register file testbench
* Immediate generator testbench
* Decoder testbench
* CPU integration testbench
