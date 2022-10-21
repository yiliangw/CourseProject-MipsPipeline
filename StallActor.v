`timescale 1ns / 1ps
`include "head.v"

 module StallActor(
    input StallSignal,
    output PCEn,
    output DPipelineRegEn,
	 output EWriteInfReset,
    output EPipelineRegReset
    );

	assign {PCEn, DPipelineRegEn, EWriteInfReset, EPipelineRegReset} = StallSignal? {4'b0011}:
																										     {4'b1100};
																					  
endmodule
