`timescale 1ns / 1ps
`include "head.v"

module WriteInf(
	 input En,
	 input Reset,
	 input Clk,
    input [`WIDTH_WDSOURCE:1] WDSource_in,
    input [31:0] WD_in,
    input [4:0] Addr_in,
    input [1:0] Tnew_in,
    input GRFWE_in,
    input [31:0] RD1,
    input [31:0] RD2,
	 input [31:0] PC4,
    input [31:0] Ext,
    input [31:0] AO,
	 input [31:0] HI,
	 input [31:0] LO,
    input [31:0] DMRD,
    output reg [31:0] WD,
    output reg [4:0] Addr,
    output reg [1:0] Tnew,
    output reg GRFWE,
    output reg [`WIDTH_WDSOURCE:1] WDSource
    );
	  
	 always @(posedge Clk)
	 begin
		if (Reset)
		begin
			{WD, Addr, Tnew, GRFWE, WDSource} <= 0;
		end
		else
		begin
			if (En)
			begin
				if ((GRFWE_in==1'b1) & (Tnew_in==1'b1))
				begin
					case (WDSource_in)
						`WDSOURCE_ALUC: 	WD <= AO;
						`WDSOURCE_DMRD: 	WD <= DMRD;
						`WDSOURCE_EXTEXT:	WD <= Ext;
						`WDSOURCE_PC4:		WD <= PC4 + 32'd4;
						`WDSOURCE_HI:		WD <= HI;
						`WDSOURCE_LO:		WD <= LO;
						default:				WD <= WD_in;
					endcase
				end
				else
				begin
					WD <= WD_in;
				end
				
				Addr <= Addr_in;
				
				if (Tnew_in == 0)
				begin
					Tnew <= 0;
				end
				else
				begin
					Tnew <= Tnew_in - 1;
				end
				
				GRFWE <= GRFWE_in;
				
				WDSource <= WDSource_in;
			end
		end
	end

endmodule
