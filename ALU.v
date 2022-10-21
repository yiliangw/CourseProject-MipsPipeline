`timescale 1ns / 1ps
`include "head.v"

module ALU(
	input [`WIDTH_ALUSEL:1] ALUSel,
    input [31:0] A,
    input [31:0] B,
    output reg [31:0] C
    );
	
	always @(*)
	begin
		case (ALUSel)
			`ALUSEL_ADD: 	C = A + B;
			`ALUSEL_AND:	C = A & B;
			`ALUSEL_SUB: 	C = A - B;
			`ALUSEL_OR:  	C = A | B;
			`ALUSEL_XOR: 	C = A ^ B;
			`ALUSEL_NOR: 	C = ~(A | B);
			`ALUSEL_SLL: 	C = B << A[4:0];
			`ALUSEL_SRL: 	C = B >> A[4:0];
			`ALUSEL_SRA: 	C = $signed(B) >>> A[4:0];
			`ALUSEL_SLT: 	C = ($signed(A) < $signed(B));
			`ALUSEL_SLTU:	C = ($unsigned(A) < $unsigned(B));
			default: C = 32'b0;
		endcase
	end

endmodule
