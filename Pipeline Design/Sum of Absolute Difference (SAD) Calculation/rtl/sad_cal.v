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
// File name    : sad_cal.v
// Author       : sky@SiliconThink
// Email        : 
// Project      : 
// Created      : 
// Copyright    : 
// Description  : 
//----------------------------------------------------------------------------//

module sad_cal(
    din         ,
    refi         ,
    cal_en      ,

    sad         ,
    sad_vld     ,

    clk         ,
    rstn         
);

parameter   DWIDTH = 8;

input   wire    [16*16*DWIDTH -1 : 0]   din, refi    ;
input   wire                            cal_en      ;
output  reg     [8+DWIDTH-1 : 0]        sad         ;
output  reg                             sad_vld     ;

input   wire                            clk, rstn   ;

reg     [4:0]   cal_en_d    ;

//--- 0: data prepare
wire    [DWIDTH-1 :0]   din_array   [0:15][0:15];
wire    [DWIDTH-1 :0]   ref_array   [0:15][0:15];

always @(posedge clk or negedge rstn)
if(~rstn)
    cal_en_d    <= 'd0;
else 
    cal_en_d    <= {cal_en_d[3:0], cal_en};

//--- no logic cells, just wire connections
generate
genvar  i,j;
for(j=0; j<=15; j=j+1) begin : gen_array_out
    for(i=0; i<=15; i=i+1) begin : gen_array_in
        assign  din_array[j][i] = din[(16*j*DWIDTH + i*DWIDTH) +: DWIDTH];
        assign  ref_array[j][i] = refi[(16*j*DWIDTH + i*DWIDTH) +: DWIDTH];
    end
end
endgenerate

//--- 1: cal diff
reg     [DWIDTH : 0]    diff[0:15][0:15];   //signed number

//--- will generate 256(16x16) subtractors
generate
genvar  y,x;
for(y=0; y<=15; y=y+1) begin : gen_diff_out
    for(x=0; x<=15; x=x+1) begin : gen_diff_in
        always @(posedge clk or negedge rstn)
        if(~rstn)
            diff[y][x]  <= 'd0;
        else if(cal_en)
            diff[y][x]  <= {1'b0, din_array[y][x]} - {1'b0, ref_array[y][x]};
    end
end
endgenerate

//--- 2: cal abs
reg     [DWIDTH-1 : 0]  abs_val[0:15][0:15];

//--- will generate 256(16x16) ABS cal logic
generate
genvar  abs_y, abs_x;
for(abs_y=0; abs_y<=15; abs_y=abs_y+1) begin : gen_abs_out
    for(abs_x=0; abs_x<=15; abs_x=abs_x+1) begin : gen_abs_in
        always @(posedge clk or negedge rstn)
        if(~rstn)
            abs_val[abs_y][abs_x]   <= 'd0;       
        else if(cal_en_d[0])
            abs_val[abs_y][abs_x]   <= (diff[abs_y][abs_x][DWIDTH])? ((~{diff[abs_y][abs_x][DWIDTH-1 : 0]}) + 'd1) 
                                                                   : diff[abs_y][abs_x][DWIDTH-1 : 0];
    end
end
endgenerate

//--- 3: accumulae 16x16 --> 4x16
reg     [DWIDTH+1 : 0]  acc_4x16[0:15][0:3];

generate
genvar  y0, x0;
for(y0=0; y0<=15; y0=y0+1) begin : acc0_out
    for(x0=0; x0<=3; x0=x0+1) begin : acc0_in
        always @(posedge clk or negedge rstn)
        if(~rstn)
            acc_4x16[y0][x0]    <= 'd0;       
        else if(cal_en_d[1])
            acc_4x16[y0][x0]    <= {2'b0, abs_val[y0][4*x0 + 0]} + {2'b0, abs_val[y0][4*x0 + 1]} 
                                 + {2'b0, abs_val[y0][4*x0 + 2]} + {2'b0, abs_val[y0][4*x0 + 3]};
    end
end
endgenerate


//--- 4: accumulate 4x16 -> 4x4
reg     [DWIDTH+3 : 0]  acc_4x4[0:3][0:3];

generate
genvar  y1, x1;
for(y1=0; y1<=3; y1=y1+1) begin : acc1_out
    for(x1=0; x1<=3; x1=x1+1) begin : acc1_in
        always @(posedge clk or negedge rstn)
        if(~rstn)
            acc_4x4[y1][x1] <= 'd0;       
        else if(cal_en_d[2])
            acc_4x4[y1][x1] <= {2'b0, acc_4x16[y1*4 + 0][x1]} + {2'b0, acc_4x16[y1*4 + 1][x1]}
                             + {2'b0, acc_4x16[y1*4 + 2][x1]} + {2'b0, acc_4x16[y1*4 + 3][x1]};
    end
end
endgenerate

//--- 5: accumulate 4x4 -> 1x4
reg     [DWIDTH+5 : 0]  acc_1x4[0:3];

generate    
genvar  y2;
for(y2=0; y2<=3; y2=y2+1) begin : acc2
    always @(posedge clk or negedge rstn)
    if(~rstn)
        acc_1x4[y2] <= 'd0;
    else if(cal_en_d[3])
        acc_1x4[y2] <= {2'b0, acc_4x4[y2][0]} + {2'b0, acc_4x4[y2][1]}
                     + {2'b0, acc_4x4[y2][2]} + {2'b0, acc_4x4[y2][3]};
end
endgenerate

//--- 6: accumulate 1x4 -> final 1x1 sad

always @(posedge clk or negedge rstn)
if(~rstn)
    sad <= 'd0;
else if(cal_en_d[4])
    sad <= {2'b0, acc_1x4[0]} + {2'b0, acc_1x4[1]} + {2'b0, acc_1x4[2]} + {2'b0, acc_1x4[3]};

always @(posedge clk or negedge rstn)
if(~rstn)
    sad_vld <= 1'b0;
else
    sad_vld <= cal_en_d[4];


endmodule

