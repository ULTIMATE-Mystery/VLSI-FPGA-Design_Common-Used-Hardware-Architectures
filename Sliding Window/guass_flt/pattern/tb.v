/*********************************************************************
*   Project:    
*   Guass filter demo.
*
*   Function:
*	Test bench.
*
*   Author:		sky@siliconthink.cn
*   History:	2019-07-18 Initial Version
*
*********************************************************************/

//`define	USE_VERDI_SIM

`timescale 1ns / 10ps

module tb();

parameter	org_fname = "../image/org_1920x1080_422.yuv";
parameter	ref_fname = "../image/flt_1920x1080_422.yuv";
parameter	FRM_MAX_XY = 2048;

parameter	clk_cyc = 6.8;

reg			clk, rstn	;

always #(clk_cyc/2.0) clk = ~clk;

initial begin
	clk = 0; rstn = 1;
	repeat(10) @(posedge clk); rstn = 0;
	repeat(10) @(posedge clk); rstn = 1;
end

`ifdef USE_VERDI_SIM
initial begin
	$fsdbDumpfile("guass.fsdb");
    $fsdbDumpvars(0,tb);
end
`endif

integer			cur_fp, ref_fp	;

wire	[10:0]	frm_width		;
wire	[10:0]	frm_height		;
reg				pvde			;
reg		[15:0]	pdata			;
reg				pvsync			;
wire			flt_vde			;
wire			flt_vsync		;
wire	[15:0]	flt_data		;

reg		[7:0]	org_img[0:FRM_MAX_XY-1][0 : FRM_MAX_XY-1];
reg		[7:0]	org_uv[0:FRM_MAX_XY-1][0 : FRM_MAX_XY-1];

reg		[11:0]	org_x, org_y	;
reg		[7:0]	frm_cnt			;
reg		[7:0]	pixel			;
reg		[1:0]	uv				;

assign	frm_width = 1919;
assign	frm_height= 1079;

//--- 1: generate input sequency ---//
initial begin
	cur_fp	= $fopen(org_fname,"rb");
	if(cur_fp == 0) begin
        $display("Sim Erro: File %s doesn't exist. Which is needed by %m .", org_fname);
        $finish();
    end

	pvde = 1'b0; pvsync = 1'b0; pdata = 16'h0;
	@(posedge rstn);
	repeat(10) @(posedge clk);

	for(frm_cnt=0; frm_cnt<4; frm_cnt=frm_cnt+1) begin
		$display("Sim Info: Begin to sim for frame: %h.", frm_cnt);
		//--- read in a frame of org pixels
		//--- read in Y
		for(org_y=0; org_y<=frm_height; org_y=org_y+1) begin
			for(org_x=0; org_x<=frm_width; org_x=org_x+1) begin
				pixel = $fgetc(cur_fp);
				org_img[org_y][org_x] = pixel;
			end
		end

		//--- read in UV
		for(uv=0; uv<2; uv=uv+1) begin
			for(org_y=0; org_y<=frm_height; org_y=org_y+1) begin
				for(org_x=0; org_x<=(frm_width >>1); org_x=org_x+1) begin
					pixel = $fgetc(cur_fp);
					org_uv[org_y][org_x*2+uv] = pixel;
				end
			end
		end		

		#1; pvsync = 1'b1;
		repeat(10) @(posedge clk); #1;
		pvsync = 1'b0;
		repeat(10) @(posedge clk); #1;
		
		//--- valid image lines
		for(org_y=0; org_y<=frm_height; org_y=org_y+1) begin
			pvde = 1'b1;
			for(org_x=0; org_x<=frm_width; org_x=org_x+1) begin
				pdata = {org_img[org_y][org_x], org_uv[org_y][org_x]};
				@(posedge clk); #1;
			end
			pvde = 1'b0;

			//--- idle 200 cycle at each line
			for(org_x=0; org_x<200; org_x=org_x+1) begin
				@(posedge clk); #1;
			end
		end

		//--- idle image lines
		for(org_y=0; org_y<=3; org_y=org_y+1) begin
			for(org_x=0; org_x<(frm_width+200); org_x=org_x+1) begin
				@(posedge clk); #1;
			end
		end
	end	//for(frm_cnt=0; frm_cnt<5; frm_cnt=frm_cnt+1) begin

	
	//--- wait flt output all the pixels
	repeat(20*frm_width) @(posedge clk);
	
	$display("Sim PASS.");
    $finish();

end

//--- 2: check flt out data
reg		[7:0]	ref_img[0:FRM_MAX_XY-1][0 : FRM_MAX_XY-1];
reg		[7:0]	ref_uv[0:FRM_MAX_XY-1][0 : FRM_MAX_XY-1];

reg		[10:0]	ref_x, ref_y	;
reg		[10:0]	chk_x, chk_y	;
reg		[7:0]	out_cnt			;
reg		[7:0]	refp			;
reg		[1:0]	uv2				;
reg		[15:0]	exp_data		;
wire			buf_flt_vde		;
wire			buf_flt_vsync	;
wire	[15:0]	buf_flt_data	;
reg		[7:0]	pixel2			;

assign	#1 buf_flt_vde		= flt_vde	;
assign	#1 buf_flt_vsync	= flt_vsync	;
assign	#1 buf_flt_data		= flt_data	;

initial begin
	ref_fp	= $fopen(ref_fname,"rb");
	if(ref_fp == 0) begin
        $display("Sim Erro: File %s doesn't exist. Which is needed by %m .", ref_fname);
        $finish();
    end
	
	@(posedge clk);
	@(posedge rstn);
	
	while(1) begin
		//--- begin chk a frame
		@(posedge buf_flt_vsync);
				
		//--- read in the ref data of a frame
		for(ref_y=0; ref_y<=frm_height; ref_y=ref_y+1) begin
			for(ref_x=0; ref_x<=frm_width; ref_x=ref_x+1) begin
				pixel2 = $fgetc(ref_fp);
				ref_img[ref_y][ref_x] = pixel2;
			end
		end

		//--- read in UV
		for(uv2=0; uv2<2; uv2=uv2+1) begin
			for(ref_y=0; ref_y<=frm_height; ref_y=ref_y+1) begin
				for(ref_x=0; ref_x<=(frm_width >>1); ref_x=ref_x+1) begin
					pixel2 = $fgetc(ref_fp);
					ref_uv[ref_y][ref_x*2+uv2] = pixel2;
				end
			end
		end

		@(posedge clk);
	end //while(1) begin

end


always @(posedge clk or negedge rstn)
if(!rstn) begin
	chk_x	= 'd0;
	chk_y	= 'd0;
end else if(buf_flt_vsync) begin
	chk_x	= 'd0;
	chk_y	= 'd0;
end else if(buf_flt_vde) begin
	exp_data= {ref_img[chk_y][chk_x], ref_uv[chk_y][chk_x]};

	if(exp_data != buf_flt_data) begin
		$display("Sim Error: exp data: %h, dut data: %h .", exp_data, buf_flt_data);
		$finish();
	end

	if(chk_x == frm_width) begin
		chk_x	= 'd0;
		chk_y	= chk_y + 'd1;
	end else begin
		chk_x	= chk_x + 'd1;
	end
end


//--- 3: dut instance

guassflt u_guassflt(
	.frm_width	(frm_width	),
	.frm_height	(frm_height	),
	.pvde		(pvde		),
	.pdata		(pdata		),
	.pvsync		(pvsync		),
	                        
	.flt_vde	(flt_vde	),
	.flt_data	(flt_data	),
	.flt_vsync	(flt_vsync	),
                            
    .pclk		(clk		),
    .rstn		(rstn		) 
);


endmodule

