// by a subsisting licensing agreement from SiliconThink.
//
//      (C) COPYRIGHT SiliconThink Limited or its affiliates
//                   ALL RIGHTS RESERVED
//
// This entire notice must be reproduced on all copies of this file
// and copies of this file may only be made by a person if such person is
// permitted to do so under the terms of a subsisting license agreement
// from SiliconThink or its affiliates.
// ---------------------------------------------------------------------------//

//----------------------------------------------------------------------------//
// File name    : .v
// Author       : sky@SiliconThink
// Email        : 
// Project      : 
// Created      : 
// Copyright    : 
// Description  : 
//----------------------------------------------------------------------------//


module sad_model(
    din         ,
    refi         ,
    cal_en      ,

    sad         ,
    sad_vld     ,

    clk         ,
    rstn         
);

parameter   DWIDTH = 8;
parameter   PIPE_STAGE = 5;

input   wire    [16*16*DWIDTH -1 : 0]   din, refi    ;
input   wire                            cal_en      ;
output  wire    [8+DWIDTH-1 : 0]        sad         ;
output  wire                            sad_vld     ;

input   wire                            clk, rstn   ;


integer         cnt         ;

wire    [DWIDTH : 0]    diff    [0:255];
wire    [DWIDTH-1 :0]   abs_val [0:255];
reg     [DWIDTH+8-1 :0] acc     ;
wire    [DWIDTH+8-1 :0] temp    [0:255] /*verilator split_var*/;

generate
genvar  i;
for(i=0; i<=255; i=i+1) begin : gen_abs
    assign  diff[i]     = {1'b0, din[i*DWIDTH +: DWIDTH]} - {1'b0, refi[i*DWIDTH +: DWIDTH]};
    assign  abs_val[i]  = (diff[i][DWIDTH])? ((~{diff[i][DWIDTH-1 : 0]}) + 1'b1) 
                                           : diff[i][DWIDTH-1 : 0];
end
endgenerate


assign  temp[0] = abs_val[0];

generate
genvar  m;
for(m=1; m<=255; m=m+1) begin : gen_acc
    assign  temp[m] = temp[m-1] + abs_val[m];
end
endgenerate

always @(*) begin
if(cal_en) begin
    //for(cnt=0; cnt<=255; cnt=cnt+1) begin             //work for modelsim/vcs, but not for verilator
    //    if(cnt == 0)
    //        temp[cnt] = abs_val[cnt];
    //    else
    //        temp[cnt] = temp[cnt-1] + abs_val[cnt]; 
    //end

    acc = temp[255];
end else begin
    acc = 0;
end
end

reg     [DWIDTH+7 : 0]  acc_d   [0:PIPE_STAGE];
reg                     cal_en_d[0:PIPE_STAGE];

generate
genvar  j;
for(j=0; j<=PIPE_STAGE; j=j+1) begin : gen_sad
    if(j==0) begin
        always @(posedge clk or negedge rstn)
        if(~rstn) begin
            acc_d[j]    <= 'd0;
            cal_en_d[j] <= 'd0;
        end else begin
            acc_d[j]    <= acc;
            cal_en_d[j] <= cal_en;
        end
    end else begin
        always @(posedge clk or negedge rstn)
        if(~rstn) begin
            acc_d[j]    <= 'd0;
            cal_en_d[j] <= 'd0;
        end else begin
            acc_d[j]    <= acc_d[j-1];
            cal_en_d[j] <= cal_en_d[j-1];
        end
    end
end
endgenerate

assign  sad_vld = cal_en_d[PIPE_STAGE];
assign  sad     = acc_d[PIPE_STAGE];

endmodule

