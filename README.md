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

Stretch instructions:

* `sll`
* `srl`
* `slt`
* `bne`
* `jal`

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
* [x] ALU RTL implemented
* [x] ALU directed tests passing
* [x] ALU random tests passing
* [x] ALU reference model / scoreboard added
* [x] ALU assertions added
* [x] Verilator lint passing
* [x] Waveform generation working
* [x] Register file
* [x] Immediate generator
* [x] Decoder
* [x] Control logic
* [ ] CPU integration
* [ ] Program-level tests
* [ ] Verification report

## Running Simulations

From the `sim/` directory:

```bash
make clean
make lint
make all
```

To open the ALU waveform:

```bash
make wave
```

## Verification Approach

The verification strategy is to test each CPU block independently before integrating the full CPU. Each testbench is designed to be self-checking and compares the RTL output against an expected result or reference model.

Current ALU verification includes:

* Directed tests for known edge cases
* Random tests for broader input coverage
* Reference model comparison
* Assertions for unknown inputs
* VCD waveform dumping for GTKWave debug
* Pass/fail summary printed at the end of simulation

## Author

Built as a personal digital design and verification project focused on SystemVerilog, RISC-V, and hardware verification.
