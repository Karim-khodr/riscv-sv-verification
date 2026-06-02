# RISC-V SystemVerilog Verification Project

Verification-focused SystemVerilog project for a small single-cycle RV32I RISC-V CPU using Verilator, self-checking testbenches, assertions, random testing, waveform debugging, and regression scripts.

This project is not just “I built a CPU.” The main goal is to demonstrate a realistic digital design and verification flow: block-level verification, CPU-level integration testing, reference models, assertions, waveforms, and clean documentation.

## Project Summary

This project implements and verifies a small single-cycle RV32I CPU subset in SystemVerilog.

The CPU currently supports:

### R-type Instructions

* `add`
* `sub`
* `and`
* `or`
* `xor`

### I-type Instructions

* `addi`
* `andi`
* `ori`
* `xori`
* `lw`

### S-type Instructions

* `sw`

### B-type Instructions

* `beq`

The CPU is tested using both block-level testbenches and integrated CPU program-level tests.

## Tools Used

* SystemVerilog
* Verilator
* GTKWave
* Make
* Git/GitHub
* WSL Ubuntu environment

## Project Structure

```text
rtl/        SystemVerilog RTL modules
tb/         Self-checking SystemVerilog testbenches
programs/   Future location for assembly or machine-code programs
sim/        Makefile, regression script, and simulation outputs
docs/       Test plan and verification report
README.md   Project overview and usage instructions
```

## RTL Modules

| Module         | Description                                                     |
| -------------- | --------------------------------------------------------------- |
| `cpu_pkg.sv`   | Shared enums and package definitions                            |
| `alu.sv`       | ALU supporting ADD, SUB, AND, OR, XOR                           |
| `regfile.sv`   | 32-register RISC-V register file with x0 hardwired to zero      |
| `imm_gen.sv`   | Immediate generator for I-type, S-type, and B-type instructions |
| `decoder.sv`   | Instruction decoder and control unit                            |
| `instr_mem.sv` | Simple instruction memory                                       |
| `data_mem.sv`  | Simple data memory                                              |
| `cpu_core.sv`  | Integrated single-cycle CPU core                                |

## Verification Features

This project includes:

* Self-checking testbenches
* Directed tests
* Randomized tests where useful
* Reference models / scoreboard-style checking
* Assertions for invalid or unknown behavior
* VCD waveform dumping
* GTKWave debug support
* CPU execution trace output
* Regression targets through Make
* Regression shell script
* Test plan documentation
* Verification report documentation

## Current Status

* [x] Project structure created
* [x] ALU RTL implemented and verified
* [x] Register file RTL implemented and verified
* [x] Immediate generator RTL implemented and verified
* [x] Decoder/control unit implemented and verified
* [x] Instruction memory added
* [x] Data memory added
* [x] Single-cycle CPU core integrated
* [x] CPU program-level tests added
* [x] CPU execution trace added
* [x] Verilator lint targets added
* [x] VCD waveform generation working
* [x] Regression script added
* [x] Test plan written
* [x] Verification report written
* [ ] Optional Yosys synthesis sanity check
* [ ] Optional stretch instructions such as `bne`, `slt`, `sll`, `srl`, or `jal`

## Running the Tests

From the `sim/` directory:

```bash
make clean
make lint
make all
```

Or run the regression script:

```bash
cd sim
./run_regression.sh
```

## Individual Test Targets

From the `sim/` directory:

```bash
make alu
make regfile
make imm-gen
make decoder
make cpu
```

## Individual Lint Targets

```bash
make lint-alu
make lint-regfile
make lint-imm-gen
make lint-decoder
make lint-cpu
```

## Expected Regression Output

A passing regression should include:

```text
ALU TEST PASSED
REGFILE TEST PASSED
IMM_GEN TEST PASSED
DECODER TEST PASSED
CPU PROGRAM 1 PASSED
CPU PROGRAM 2 PASSED
CPU PROGRAM 3 PASSED
CPU CORE TEST PASSED
```

## Waveform Debugging

Each testbench generates a VCD waveform file.

Example:

```bash
cd sim
make cpu
make wave-cpu
```

Other waveform targets:

```bash
make wave-alu
make wave-regfile
make wave-imm-gen
make wave-decoder
make wave-cpu
```

GTKWave can be used to inspect signals such as:

```text
pc_dbg
instr_dbg
illegal_instr_dbg
register file values
ALU inputs and outputs
memory read/write behavior
branch behavior
```

## CPU Execution Trace

The CPU testbench prints an execution trace during program execution.

Example trace format:

```text
TRACE cycle=0 pc=00000000 instr=00500093 illegal=0
TRACE cycle=1 pc=00000004 instr=00700113 illegal=0
TRACE cycle=2 pc=00000008 instr=002081b3 illegal=0
```

This helps debug instruction execution, program counter updates, branches, and halt behavior.

## CPU Program Tests

The integrated CPU testbench runs multiple small programs by loading instructions directly into instruction memory and checking the final architectural state.

### Program 1: Memory and Branch Taken Test

Covers:

* `addi`
* `add`
* `sw`
* `lw`
* `beq` taken
* `xor`

Expected behavior:

* Compute `5 + 7 = 12`
* Store 12 to data memory
* Load 12 back from data memory
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
* Store/load at a nonzero memory address
* x0 write protection

Expected behavior:

* Execute ALU and immediate operations correctly
* Confirm branch is not taken when registers differ
* Store and load from data memory address 16
* Confirm x0 remains zero

### Program 3: Negative Immediate and Branch Taken Test

Covers:

* Negative immediate sign extension
* Two's complement arithmetic
* Branch taken behavior
* Instruction skipping

Expected behavior:

* Load -1 using `addi`
* Add -1 and 1 to produce 0
* Branch when result equals x0
* Skip an instruction
* Halt on an invalid instruction

## Verification Approach

The project follows a staged verification approach.

First, each block is verified independently:

1. ALU
2. Register file
3. Immediate generator
4. Decoder/control unit

Then, the verified blocks are integrated into the CPU core and tested using small self-checking programs.

This approach makes debugging easier because individual modules are tested before full-system integration.

## Notes

This is intentionally a small single-cycle CPU. The project avoids pipelining, UVM, and FPGA deployment at the beginning so that the focus stays on clean RTL, verification, and simulation.

## Future Work

Possible future extensions:

* Add `bne`
* Add `slt`
* Add `sll` and `srl`
* Add `jal`
* Add a Python instruction/program generator
* Add Yosys synthesis sanity check
* Add saved GTKWave layouts
* Add CI regression through GitHub Actions
* Add a simple FPGA demo after the simulation project is complete

## Author

Built as a personal digital design and verification project focused on SystemVerilog, RISC-V, RTL design, and hardware verification.
