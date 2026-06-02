# RISC-V SystemVerilog Verification Project

This project builds and verifies a small single-cycle RV32I RISC-V CPU subset using SystemVerilog and Verilator.

The main goal of this project is verification, not just CPU implementation. Each major hardware block is tested with self-checking testbenches, reference models, assertions, directed tests, random tests, waveform dumping, and regression-style Makefile targets.


## Planned Instruction Subset

Required instructions:

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

## Tools

* SystemVerilog
* Verilator
* GTKWave
* Make
* Git/GitHub
* Python, optional for later test generation
* Yosys, optional later for synthesis sanity checks

## Current Status

* [x] Project structure created
* [x] ALU RTL implemented and verified
* [x] Register file RTL implemented and verified
* [x] Immediate generator RTL implemented and verified
* [x] Decoder/control unit implemented and verified
* [x] Single-cycle CPU core integrated
* [x] CPU program-level tests passing
* [x] CPU execution trace added
* [x] Verilator lint targets added
* [x] VCD waveform generation working
* [x] Test plan started
* [x] Verification report started
* [ ] Additional CPU programs
* [ ] Optional Yosys synthesis sanity check
* [ ] Final README polish

## Running the Full Regression

From the `sim/` directory:

```bash
make clean
make lint
make all
```

Expected passing tests:

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

## CPU Debug Trace

The CPU integration testbench prints an execution trace during program execution:

```text
TRACE cycle=0 pc=00000000 instr=00500093 illegal=0
TRACE cycle=1 pc=00000004 instr=00700113 illegal=0
```

This helps debug instruction execution, branching, and halt behavior.
