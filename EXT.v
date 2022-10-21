`timescale 1ns / 1ps
`include "head.v"

module EXT(
    input [`WIDTH_EXTSEL:1] EXTSel,
    input [15:0] Imm,
    output reg [31:0] Ext
    );

	always @(*)
	begin
		case (EXTSel)
			`ZERO_EXT: 			Ext = {16'b0, Imm};
			`SIGN_EXT: 			Ext = {{16{Imm[15]}}, Imm};
			`SIGN_EXT_SLL_2: 	Ext = {{14{Imm[15]}}, Imm, 2'b00};
			`CAT_ZERO: 			Ext = {Imm, 16'b0};
			default:			Ext = 32'b0;
		endcase
	end
	
endmodule
