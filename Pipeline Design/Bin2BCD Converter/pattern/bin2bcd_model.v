//----------------------------------------------------------------------------//
// File name    : .v
// Author       : asic_service 
// Email        : 
// Project      : 
// Created      : 
// Copyright    : 
// Description  : 
//----------------------------------------------------------------------------//

module bin2bcd_model(
    bin     ,
    bin_vld ,

    bcd     ,
    bcd_vld ,

    clk     ,
    rstn     
);

parameter   PIPE_STAGE = 4;

input   wire    [10:0]  bin     ;       //signed num [-1023, 1023]
input   wire            bin_vld ;
output  wire    [16:0]  bcd     ;       //{sign, bcd_th, bcd_hu, bcd_ten, bcd}
output  wire            bcd_vld ;
input   wire            clk, rstn;


function [16:0] bin2bcd;

input   [10:0]  bin     ;   //signed num

reg         bin_sign    ;
reg [9:0]  bin_abs      ;
reg [3:0]   bcd_th      ;   //thousand section BCD value
reg [3:0]   bcd_hu      ;   //hundred section BCD value
reg [3:0]   bcd_ten     ;   //tenth section BCD
reg [3:0]   bcd_last    ;


begin
    if(bin[10]) begin
        bin_sign = 1;
        bin_abs  = (~{bin[9:0]}) + 1'b1;
    end else begin
        bin_sign = 0;
        bin_abs  = bin[9:0];
    end

    //--- cal last BCd section
    bcd_last= bin_abs % 10;
    bin_abs = bin_abs / 10;

    //--- cal tenth section
    bcd_ten = bin_abs % 10;
    bin_abs = bin_abs / 10;

    //--- cal hundred section
    bcd_hu  = bin_abs % 10;
    bin_abs = bin_abs / 10;
    
    //--- cal thousand section
    bcd_th  = bin_abs % 10;

    bin2bcd = {bin_sign, bcd_th, bcd_hu, bcd_ten, bcd_last};
end

endfunction

wire    [16:0]  bcd_tmp     ;
reg     [16:0]  bcd_pipe        [0:PIPE_STAGE-1];
reg             bin_vld_pipe    [0:PIPE_STAGE-1];


assign  bcd_tmp = bin2bcd(bin);


generate 
genvar  cnt ;

for(cnt=0; cnt<PIPE_STAGE; cnt=cnt+1) begin : gen_bcd_pipe
    if(cnt == 0) begin
        always @(posedge clk or negedge rstn)
        if(~rstn) begin
            bcd_pipe[cnt]       <= 'd0;
            bin_vld_pipe[cnt]   <= 'd0;
        end else begin
            bcd_pipe[cnt]       <= bcd_tmp;
            bin_vld_pipe[cnt]   <= bin_vld;
        end
    end else begin
        always @(posedge clk or negedge rstn)
        if(~rstn) begin
            bcd_pipe[cnt]       <= 'd0;
            bin_vld_pipe[cnt]   <= 'd0;
        end else begin
            bcd_pipe[cnt]       <= bcd_pipe[cnt-1];
            bin_vld_pipe[cnt]   <= bin_vld_pipe[cnt-1];
        end
    end
end
endgenerate


assign  bcd_vld = bin_vld_pipe[PIPE_STAGE-1];
assign  bcd     = bcd_pipe[PIPE_STAGE-1];


wire    [16:0]      bcd_d0      ;
wire                bcd_vld_d0  ;
wire    [16:0]      bcd_d1      ;
wire                bcd_vld_d1  ;
wire    [16:0]      bcd_d2      ;
wire                bcd_vld_d2  ;

assign  bcd_d0      = bcd_pipe[0];
assign  bcd_vld_d0  = bin_vld_pipe[0];
assign  bcd_d1      = bcd_pipe[1];
assign  bcd_vld_d1  = bin_vld_pipe[1];
assign  bcd_d2      = bcd_pipe[2];
assign  bcd_vld_d2  = bin_vld_pipe[2];
 

endmodule

