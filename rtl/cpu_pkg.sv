`timescale 1ns/1ps

package cpu_pkg;

  typedef enum logic [3:0] {
    ALU_ADD = 4'd0,
    ALU_SUB = 4'd1,
    ALU_AND = 4'd2,
    ALU_OR  = 4'd3,
    ALU_XOR = 4'd4
  } alu_op_e;

endpackage
