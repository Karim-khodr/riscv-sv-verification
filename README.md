# RISC-V SystemVerilog Verification Project

This project builds and verifies a small single-cycle RV32I RISC-V CPU subset using SystemVerilog and Verilator.

The main goal of this project is verification, not just CPU implementation. Each major hardware block is tested with self-checking testbenches, reference models, assertions, directed tests, random tests, waveform dumping, and regression-style Makefile targets.

## Project Goals

* Build a small single-cycle RV32I CPU subset in SystemVerilog
* Verify each module independently before CPU integration
* Use self-checking testbenches instead of manual waveform-only checking
* Add assertions to catch invalid or unexpected behavior
* Use random testing where useful
* Generate VCD waveforms for debugging in GTKWave
* Keep a clean, documented GitHub repo suitable for internship applications

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

## Project Structure

```text
rtl/        SystemVerilog RTL modules
tb/         Self-checking testbenches
programs/   Small RISC-V test programs or machine-code programs
sim/        Makefile and simulation outputs
docs/       Test plan, verification report, notes, and diagrams
```

## Current Status

* [x] Project structure created
* [x] ALU RTL implemented
* [x] ALU directed tests passing
* [x] ALU random tests passing
* [x] ALU reference model / scoreboard added
* [x] ALU assertions added
* [x] Verilator lint passing
* [x] Waveform generation working
* [ ] Register file
* [ ] Immediate generator
* [ ] Decoder
* [ ] Control logic
* [ ] CPU integration
* [ ] Program-level tests
* [ ] Verification report

## Running Simulations

From the `sim/` directory:

```bash
make clean
make lint
make alu
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
