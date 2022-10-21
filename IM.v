`timescale 1ns / 1ps
`include "head.v"

module IM(
    input Reset,
    input Clk,
    input [31:0] Addr,
    output [31:0] Instr
    );
	 
	 reg [31:0] InstrMem [`INSTRMEM_SIZE - 1:0];
	 wire [`INSTRMEM_SIZE-1:0] RealAddr;
	 
	 assign RealAddr = (Addr - 32'h00003000)>>2;
	 assign Instr = InstrMem[RealAddr];
	 
	 initial 
		begin: InstrMem_init
			reg [31:0] i;
			for (i = 0; i < `INSTRMEM_SIZE; i=i+1)
				begin
					InstrMem[i] = 32'b0;
				end
			$readmemh("code.txt", InstrMem);
		end
		

endmodule
