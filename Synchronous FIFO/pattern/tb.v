
`timescale 1ns / 100ps

module tb();

parameter   clk_cyc = 10.0;
parameter   FIFO_WIDTH = 16, FIFO_DEPTH = 6, FIFO_ADDR_BIT = 3; //2^FIFO_ADDR_BIT >= FIFO_DEPTH

parameter   LOOP_NUM = 200;


reg             clk, rstn       ;
reg     [FIFO_WIDTH-1:0] din    ;
reg             push, pop       ;
wire    [FIFO_WIDTH-1:0] dout_ref, dout, dout_buf;
wire            fifo_empty, fifo_empty_ref;
wire            fifo_ful, fifo_ful_ref;
wire            fifo_empty_buf  ;
wire            fifo_ful_buf    ;
integer         stage           ;

assign  #1 fifo_empty_buf = fifo_empty;
assign  #1 fifo_ful_buf   = fifo_ful;
assign  #1 dout_buf       = dout;

initial begin
    $dumpfile("tb.vcd");
    $dumpvars(0, tb);
end

always #(clk_cyc/2.0)  clk = !clk;


//--- 1: give stimulus

task  give_fifo_op;
input   [31:0]  push_rate    ;
input   [31:0]  pop_rate     ;

reg     [31:0]  rand0, rand1;
integer         cnt         ;

begin
    for(cnt=0; cnt<LOOP_NUM; cnt=cnt+1) begin
        @(negedge clk);         //ful/empty single must be stable
        rand0 = $unsigned($random()) % push_rate;
        rand1 = $unsigned($random()) % pop_rate;

        if(rand0 <= 127) begin  //this cycle will do push OP
            if(fifo_ful_ref != 1) begin
                push = 1;
                din  = $random();
            end
        end

        if(rand1 <= 127) begin  //this cycle will do pop OP
            if(fifo_empty_ref != 1) begin
                pop = 1;
            end
        end

        @(posedge clk); #1;
        pop = 0; push = 0;
    end
end
endtask

initial begin
    rstn = 0; clk = 0; din = 'd10; pop = 'd0; push = 'd0;
    repeat(5) @(posedge clk); #1;
    rstn = 1;
    repeat(1) @(posedge clk); #1;

    stage = 0;
    give_fifo_op(196, 196); //push/pop with equal opportunity
    repeat(100) @(posedge clk); #1;

    stage = 1;
    give_fifo_op((128+61), 196); //more push opportunity
    repeat(100) @(posedge clk); #1;

    stage = 3;
    give_fifo_op(196, (128+16)); //more pop opportunity
    repeat(100) @(posedge clk); #1;

    stage = 4;
    give_fifo_op(128*5, 128*5); //both push/pop with low opportunity
    repeat(100) @(posedge clk); #1;

    repeat(10) @(posedge clk);
    $display("Sim Pass.");
    $finish();
end


//--- 2: instance DUT and ref model
sync_fifo #(.FIFO_WIDTH(FIFO_WIDTH), .FIFO_DEPTH(FIFO_DEPTH), .FIFO_ADDR_BIT(FIFO_ADDR_BIT)) u_dut(
    .fifo_wr    (push           ),
    .fifo_rd    (pop            ),
    .fifo_din   (din            ),
    .fifo_do    (dout           ),
    .fifo_ful   (fifo_ful       ),
    .fifo_empty (fifo_empty     ),
    .clk        (clk            ),
    .rstn       (rstn           )
);



sync_fifo_model #(.FIFO_WIDTH(FIFO_WIDTH), .FIFO_DEPTH(FIFO_DEPTH), .FIFO_ADDR_BIT(FIFO_ADDR_BIT)) u_model(
    .fifo_wr    (push           ),
    .fifo_rd    (pop            ),
    .fifo_din   (din            ),
    .fifo_do    (dout_ref       ),
    .fifo_ful   (fifo_ful_ref   ),
    .fifo_empty (fifo_empty_ref ),
    .clk        (clk            ),
    .rstn       (rstn           )
);



//--- 3: result check
always @(posedge clk or negedge rstn)
if(rstn) begin
    if( (fifo_ful_buf !== fifo_ful_ref) || (fifo_empty_buf !== fifo_empty_ref) ||
        (pop && (dout_buf !== dout_ref)) ) begin
        $display("%0t, function of DUT fails.", $time());
        @(posedge clk); #1;
        $finish();
    end
end




endmodule

