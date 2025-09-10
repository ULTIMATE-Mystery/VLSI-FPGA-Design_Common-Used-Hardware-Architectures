/*********************************************************************
*   Project:    
*   Guass filter demo.
*   Function:
*	1: do 5x5 guass filter for luma(Y) only, bypass chroma(UV).
*
*   Author:		sky@siliconthink.cn
*   History:	2019-07-18 Initial Version
*
*********************************************************************/

module guassflt(
	frm_width	,
	frm_height	,

	pvde		,
	pdata		,
	pvsync		,
	
	flt_vde		,
	flt_data	,
	flt_vsync	,

    pclk		,
    rstn		 
);

input	wire	[10:0]	frm_width	;	//cnt from 0
input	wire	[10:0]	frm_height	;	//cnt from 0
input	wire			pvde		;	//1'b1: valid pixel in a line
input	wire	[15:0]	pdata		;	//{y,u}/{y,v}
input	wire			pvsync		;	//frame sync, high pulse
output	reg				flt_vde		;
output	reg				flt_vsync	;
output	wire	[15:0]	flt_data	;

input   wire			pclk, rstn	;





endmodule

