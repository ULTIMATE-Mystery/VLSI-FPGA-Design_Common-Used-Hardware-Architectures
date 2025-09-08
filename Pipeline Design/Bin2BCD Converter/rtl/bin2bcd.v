//----------------------------------------------------------------------------//
// File name    : .v
// Author       : asic_service 
// Email        : 
// Project      : 
// Created      : 
// Copyright    : 
// Description  : 
//----------------------------------------------------------------------------//

module bin2bcd(
    bin     ,
    bin_vld ,

    bcd     ,
    bcd_vld ,

    clk     ,
    rstn     
);

input   wire    [10:0]  bin     ;       //signed num [-1023, 1023]
input   wire            bin_vld ;
output  wire    [16:0]  bcd     ;       //{sign, bcd_th, bcd_hu, bcd_ten, bcd}
output  wire            bcd_vld ;
input   wire            clk, rstn;


//--- 0: 
reg     [4:0]   bin_vld_d   ;

always @(posedge clk or negedge rstn)
if(~rstn)
    bin_vld_d   <= 'd0;
else
    bin_vld_d   <= {bin_vld_d[3:0], bin_vld};

//--- 1: cal abs value of bin
wire    [9:0]   bin_abs_w   ;   //no -1024
reg             bin_sign    ;
reg     [9:0]   bin_abs     ;

assign  bin_abs_w   = (bin[10])? ((~{bin[9:0]}) + 1'b1) : bin[9:0];

always @(posedge clk or negedge rstn)
if(~rstn) begin
    bin_abs     <= 'd0;
    bin_sign    <= 'd0;
end else if(bin_vld) begin
    bin_abs     <= bin_abs_w;
    bin_sign    <= bin[10];
end

//--- 2: cal thousand section of BCD
wire    [10:0]  abs_sub_1000    ;
reg     [9:0]   res_thousand    ;   //residual after thousand
reg             bcd_th          ;   //BCD code for thousand
reg             bin_sign_d0     ;

assign  abs_sub_1000    = {1'b0, bin_abs} - 11'd1000;

always @(posedge clk or negedge rstn)
if(~rstn) begin
    bin_sign_d0 <= 1'b0;
    res_thousand<= 'd0;
    bcd_th      <= 'd0;
end else if(bin_vld_d[0]) begin
    bin_sign_d0 <= bin_sign;
    res_thousand<= (abs_sub_1000[10])? bin_abs : abs_sub_1000[9:0];
    bcd_th      <= (abs_sub_1000[10])? 1'b0 : 1'b1;
end

//--- 3: cal hundred section of BCD
wire    [10:0]  abs_sub_900 ;
wire    [10:0]  abs_sub_800 ;
wire    [10:0]  abs_sub_700 ;
wire    [10:0]  abs_sub_600 ;
wire    [10:0]  abs_sub_500 ;
wire    [9:0]   abs_sub_400 ;
wire    [9:0]   abs_sub_300 ;
wire    [9:0]   abs_sub_200 ;
wire    [8:0]   abs_sub_100 ;
reg     [6:0]   res_hundred ;
reg     [3:0]   bcd_hu      ;
reg             bin_sign_d1 ;
reg             bcd_th_d0   ;

assign  abs_sub_900 = {1'b0, res_thousand} - 11'd900;
assign  abs_sub_800 = {1'b0, res_thousand} - 11'd800;
assign  abs_sub_700 = {1'b0, res_thousand} - 11'd700;
assign  abs_sub_600 = {1'b0, res_thousand} - 11'd600;
assign  abs_sub_500 = {1'b0, res_thousand} - 11'd500;
assign  abs_sub_400 = {1'b0, res_thousand[8:0]} - 10'd400;
assign  abs_sub_300 = {1'b0, res_thousand[8:0]} - 10'd300;
assign  abs_sub_200 = {1'b0, res_thousand[8:0]} - 10'd200;
assign  abs_sub_100 = {1'b0, res_thousand[7:0]} - 9'd100;

always @(posedge clk or negedge rstn)
if(~rstn) begin
    bin_sign_d1 <= 1'b0;
    bcd_th_d0   <= 1'b0;
    res_hundred <= 'd0;
    bcd_hu      <= 'd0;
end else if(bin_vld_d[1]) begin
    bin_sign_d1 <= bin_sign_d0;
    bcd_th_d0   <= bcd_th;
    if(abs_sub_900[10] == 1'b0) begin
        res_hundred <= abs_sub_900[6:0];
        bcd_hu      <= 'd9;
    end else if(abs_sub_800[10] == 1'b0) begin
        res_hundred <= abs_sub_800[6:0];
        bcd_hu      <= 'd8;
    end else if(abs_sub_700[10] == 1'b0) begin
        res_hundred <= abs_sub_700[6:0];
        bcd_hu      <= 'd7;
    end else if(abs_sub_600[10] == 1'b0) begin
        res_hundred <= abs_sub_600[6:0];
        bcd_hu      <= 'd6;
    end else if(abs_sub_500[10] == 1'b0) begin
        res_hundred <= abs_sub_500[6:0];
        bcd_hu      <= 'd5;
    end else if(abs_sub_400[9] == 1'b0) begin
        res_hundred <= abs_sub_400[6:0];
        bcd_hu      <= 'd4;
    end else if(abs_sub_300[9] == 1'b0) begin
        res_hundred <= abs_sub_300[6:0];
        bcd_hu      <= 'd3;
    end else if(abs_sub_200[9] == 1'b0) begin
        res_hundred <= abs_sub_200[6:0];
        bcd_hu      <= 'd2;
    end else if(abs_sub_100[8] == 1'b0) begin
        res_hundred <= abs_sub_100[6:0];
        bcd_hu      <= 'd1;
    end else begin
        res_hundred <= res_thousand[6:0];
        bcd_hu      <= 'd0;
    end
end

//--- 4: cal tenth section of BCD
wire    [7:0]   abs_sub_90  ;
wire    [7:0]   abs_sub_80  ;
wire    [7:0]   abs_sub_70  ;
wire    [7:0]   abs_sub_60  ;
wire    [7:0]   abs_sub_50  ;
wire    [6:0]   abs_sub_40  ;
wire    [6:0]   abs_sub_30  ;
wire    [5:0]   abs_sub_20  ;
wire    [5:0]   abs_sub_10  ;
reg     [3:0]   res_ten     ;
reg     [3:0]   bcd_ten     ;
reg             bin_sign_d2 ;
reg             bcd_th_d1   ;
reg     [3:0]   bcd_hu_d0   ;

assign  abs_sub_90  = {1'b0, res_hundred} - 8'd90;
assign  abs_sub_80  = {1'b0, res_hundred} - 8'd80;
assign  abs_sub_70  = {1'b0, res_hundred} - 8'd70;
assign  abs_sub_60  = {1'b0, res_hundred} - 8'd60;
assign  abs_sub_50  = {1'b0, res_hundred} - 8'd50;
assign  abs_sub_40  = {1'b0, res_hundred[5:0]} - 7'd40;
assign  abs_sub_30  = {1'b0, res_hundred[5:0]} - 7'd30;
assign  abs_sub_20  = {1'b0, res_hundred[4:0]} - 6'd20;
assign  abs_sub_10  = {1'b0, res_hundred[4:0]} - 6'd10;

always @(posedge clk or negedge rstn)
if(~rstn) begin
    bin_sign_d2 <= 1'b0;
    bcd_th_d1   <= 'd0;
    bcd_hu_d0   <= 'd0;
    res_ten     <= 'd0;
    bcd_ten     <= 'd0;
end else if(bin_vld_d[2]) begin
    bin_sign_d2 <= bin_sign_d1;
    bcd_th_d1   <= bcd_th_d0;
    bcd_hu_d0   <= bcd_hu;
    if(abs_sub_90[7] == 1'b0) begin
        res_ten <= abs_sub_90[3:0];
        bcd_ten <= 'd9;
    end else if(abs_sub_80[7] == 1'b0) begin
        res_ten <= abs_sub_80[3:0];
        bcd_ten <= 'd8;
    end else if(abs_sub_70[7] == 1'b0) begin
        res_ten <= abs_sub_70[3:0];
        bcd_ten <= 'd7;
    end else if(abs_sub_60[7] == 1'b0) begin
        res_ten <= abs_sub_60[3:0];
        bcd_ten <= 'd6;
    end else if(abs_sub_50[7] == 1'b0) begin
        res_ten <= abs_sub_50[3:0];
        bcd_ten <= 'd5;
    end else if(abs_sub_40[6] == 1'b0) begin
        res_ten <= abs_sub_40[3:0];
        bcd_ten <= 'd4;
    end else if(abs_sub_30[6] == 1'b0) begin
        res_ten <= abs_sub_30[3:0];
        bcd_ten <= 'd3;
    end else if(abs_sub_20[5] == 1'b0) begin
        res_ten <= abs_sub_20[3:0];
        bcd_ten <= 'd2;
    end else if(abs_sub_10[5] == 1'b0) begin
        res_ten <= abs_sub_10[3:0];
        bcd_ten <= 'd1;
    end else begin
        res_ten <= res_hundred[3:0];
        bcd_ten <= 'd0;
    end
end 

//--- 5: generate output
assign  bcd_vld = bin_vld_d[3];
assign  bcd     = {bin_sign_d2, 3'h0, bcd_th_d1, bcd_hu_d0, bcd_ten , res_ten};

endmodule

