
module sync_fifo_model(
    fifo_wr ,
    fifo_rd ,
    fifo_din,
    fifo_do ,
    fifo_ful,
    fifo_empty,
    clk     ,
    rstn      
);

//-- FIFO_DEPTH:  can be 2 ~ N;
parameter   FIFO_WIDTH = 16, FIFO_DEPTH = 6, FIFO_ADDR_BIT = 3; //2^FIFO_ADDR_BIT >= FIFO_DEPTH

input   wire            fifo_wr     ;
input   wire            fifo_rd     ;
input   wire    [FIFO_WIDTH-1 : 0]  fifo_din;
output  wire    [FIFO_WIDTH-1 : 0]  fifo_do;//combination output
output  wire            fifo_ful    ;       //high active; combination output
output  wire            fifo_empty  ;       //high active; combination output
input   wire            clk, rstn   ;

reg     [FIFO_WIDTH-1 : 0]  mem [0: FIFO_DEPTH-1];
reg     [FIFO_ADDR_BIT :0]  rd_ptr  ;
reg     [FIFO_ADDR_BIT :0]  wr_ptr  ;
reg     [FIFO_ADDR_BIT :0]  dnum    ;
reg     [FIFO_WIDTH-1 : 0]  dout    ;


task fifo_read;
begin
    //fifo_do = #1 mem[rd_ptr];
    rd_ptr  = rd_ptr + 1;
    if(rd_ptr >= FIFO_DEPTH)
        rd_ptr = 'd0;
    dnum    = dnum - 1;
end        
endtask

always @(*) begin
    dout = mem[rd_ptr];
end

assign  #1 fifo_do = dout;

task fifo_write;
begin
    mem[wr_ptr] = fifo_din;
    wr_ptr      = wr_ptr + 1;
    if(wr_ptr >= FIFO_DEPTH)
        wr_ptr  = 'd0;
    dnum        = dnum + 1;
end
endtask


always @(posedge clk or negedge rstn)
if(!rstn) begin
    rd_ptr  = 'd0;
    wr_ptr  = 'd0;
    dnum    = 'd0;
end else begin
    if(fifo_rd) begin
        fifo_read;
    end

    if(fifo_wr) begin
        fifo_write;
    end
end

assign #1 fifo_ful  = (dnum == FIFO_DEPTH)? 1'b1 : 1'b0;
assign #1 fifo_empty= (dnum == 'd0)? 1'b1 : 1'b0;

endmodule

