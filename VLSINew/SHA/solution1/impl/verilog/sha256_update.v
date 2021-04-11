// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module sha256_update (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ctx_data_address0,
        ctx_data_ce0,
        ctx_data_we0,
        ctx_data_d0,
        ctx_data_q0,
        ctx_data_address1,
        ctx_data_ce1,
        ctx_data_q1,
        ctx_datalen_read,
        p_read1,
        p_read2,
        p_read3,
        p_read4,
        p_read5,
        p_read6,
        p_read7,
        p_read8,
        p_read9,
        p_read10,
        data_address0,
        data_ce0,
        data_q0,
        len,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8,
        ap_return_9,
        ap_return_10
);

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_state4 = 5'd8;
parameter    ap_ST_fsm_state5 = 5'd16;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [5:0] ctx_data_address0;
output   ctx_data_ce0;
output   ctx_data_we0;
output  [7:0] ctx_data_d0;
input  [7:0] ctx_data_q0;
output  [5:0] ctx_data_address1;
output   ctx_data_ce1;
input  [7:0] ctx_data_q1;
input  [31:0] ctx_datalen_read;
input  [31:0] p_read1;
input  [31:0] p_read2;
input  [31:0] p_read3;
input  [31:0] p_read4;
input  [31:0] p_read5;
input  [31:0] p_read6;
input  [31:0] p_read7;
input  [31:0] p_read8;
input  [31:0] p_read9;
input  [31:0] p_read10;
output  [5:0] data_address0;
output   data_ce0;
input  [7:0] data_q0;
input  [31:0] len;
output  [31:0] ap_return_0;
output  [31:0] ap_return_1;
output  [31:0] ap_return_2;
output  [31:0] ap_return_3;
output  [31:0] ap_return_4;
output  [31:0] ap_return_5;
output  [31:0] ap_return_6;
output  [31:0] ap_return_7;
output  [31:0] ap_return_8;
output  [31:0] ap_return_9;
output  [31:0] ap_return_10;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[5:0] ctx_data_address0;
reg ctx_data_ce0;
reg ctx_data_we0;
reg ctx_data_ce1;
reg data_ce0;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [6:0] empty_fu_273_p1;
reg   [6:0] empty_reg_627;
wire   [6:0] i_fu_337_p2;
reg   [6:0] i_reg_635;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln94_fu_332_p2;
wire   [0:0] icmp_ln98_fu_425_p2;
reg   [0:0] icmp_ln98_reg_645;
wire    ap_CS_fsm_state3;
reg   [31:0] ctx_state_7_0_load_1_reg_649;
wire    ap_CS_fsm_state4;
reg   [31:0] ctx_state_6_0_load_1_reg_654;
reg   [31:0] ctx_state_5_0_load_1_reg_659;
reg   [31:0] ctx_state_4_0_load_1_reg_664;
reg   [31:0] ctx_state_3_0_load_1_reg_669;
reg   [31:0] ctx_state_2_0_load_1_reg_674;
reg   [31:0] ctx_state_1_0_load_1_reg_679;
reg   [31:0] ctx_state_0_0_load_1_reg_684;
wire    grp_sha256_transform_fu_216_ap_start;
wire    grp_sha256_transform_fu_216_ap_done;
wire    grp_sha256_transform_fu_216_ap_idle;
wire    grp_sha256_transform_fu_216_ap_ready;
wire   [5:0] grp_sha256_transform_fu_216_data_address0;
wire    grp_sha256_transform_fu_216_data_ce0;
wire   [5:0] grp_sha256_transform_fu_216_data_address1;
wire    grp_sha256_transform_fu_216_data_ce1;
wire   [31:0] grp_sha256_transform_fu_216_ap_return_0;
wire   [31:0] grp_sha256_transform_fu_216_ap_return_1;
wire   [31:0] grp_sha256_transform_fu_216_ap_return_2;
wire   [31:0] grp_sha256_transform_fu_216_ap_return_3;
wire   [31:0] grp_sha256_transform_fu_216_ap_return_4;
wire   [31:0] grp_sha256_transform_fu_216_ap_return_5;
wire   [31:0] grp_sha256_transform_fu_216_ap_return_6;
wire   [31:0] grp_sha256_transform_fu_216_ap_return_7;
reg   [6:0] i_0_reg_205;
wire    ap_CS_fsm_state5;
reg    ap_block_state5_on_subcall_done;
reg    grp_sha256_transform_fu_216_ap_start_reg;
wire   [63:0] zext_ln96_fu_343_p1;
wire   [63:0] zext_ln96_1_fu_414_p1;
reg   [31:0] ctx_datalen_0_fu_62;
wire   [31:0] add_ln97_fu_419_p2;
reg   [31:0] ctx_state_7_0_fu_66;
reg   [31:0] ctx_state_6_0_fu_70;
reg   [31:0] ctx_state_5_0_fu_74;
reg   [31:0] ctx_state_4_0_fu_78;
reg   [31:0] ctx_state_3_0_fu_82;
reg   [31:0] ctx_state_2_0_fu_86;
reg   [31:0] ctx_state_1_0_fu_90;
reg   [31:0] ctx_state_0_0_fu_94;
reg   [31:0] ctx_bitlen_1_0_fu_98;
wire   [31:0] select_ln100_fu_485_p3;
reg   [31:0] ctx_bitlen_0_0_fu_102;
wire   [31:0] add_ln100_1_fu_493_p2;
wire   [0:0] icmp_ln100_fu_473_p2;
wire   [31:0] add_ln100_fu_479_p2;
reg   [4:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 5'd1;
#0 grp_sha256_transform_fu_216_ap_start_reg = 1'b0;
end

sha256_transform grp_sha256_transform_fu_216(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_sha256_transform_fu_216_ap_start),
    .ap_done(grp_sha256_transform_fu_216_ap_done),
    .ap_idle(grp_sha256_transform_fu_216_ap_idle),
    .ap_ready(grp_sha256_transform_fu_216_ap_ready),
    .ctx_state_0_read(ctx_state_0_0_load_1_reg_684),
    .ctx_state_1_read(ctx_state_1_0_load_1_reg_679),
    .ctx_state_2_read(ctx_state_2_0_load_1_reg_674),
    .ctx_state_3_read(ctx_state_3_0_load_1_reg_669),
    .ctx_state_4_read(ctx_state_4_0_load_1_reg_664),
    .ctx_state_5_read(ctx_state_5_0_load_1_reg_659),
    .ctx_state_6_read(ctx_state_6_0_load_1_reg_654),
    .ctx_state_7_read(ctx_state_7_0_load_1_reg_649),
    .data_address0(grp_sha256_transform_fu_216_data_address0),
    .data_ce0(grp_sha256_transform_fu_216_data_ce0),
    .data_q0(ctx_data_q0),
    .data_address1(grp_sha256_transform_fu_216_data_address1),
    .data_ce1(grp_sha256_transform_fu_216_data_ce1),
    .data_q1(ctx_data_q1),
    .ap_return_0(grp_sha256_transform_fu_216_ap_return_0),
    .ap_return_1(grp_sha256_transform_fu_216_ap_return_1),
    .ap_return_2(grp_sha256_transform_fu_216_ap_return_2),
    .ap_return_3(grp_sha256_transform_fu_216_ap_return_3),
    .ap_return_4(grp_sha256_transform_fu_216_ap_return_4),
    .ap_return_5(grp_sha256_transform_fu_216_ap_return_5),
    .ap_return_6(grp_sha256_transform_fu_216_ap_return_6),
    .ap_return_7(grp_sha256_transform_fu_216_ap_return_7)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_sha256_transform_fu_216_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state4)) begin
            grp_sha256_transform_fu_216_ap_start_reg <= 1'b1;
        end else if ((grp_sha256_transform_fu_216_ap_ready == 1'b1)) begin
            grp_sha256_transform_fu_216_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_bitlen_0_0_fu_102 <= add_ln100_1_fu_493_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_bitlen_0_0_fu_102 <= p_read1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_bitlen_1_0_fu_98 <= select_ln100_fu_485_p3;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_bitlen_1_0_fu_98 <= p_read2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ctx_datalen_0_fu_62 <= 32'd0;
    end else if (((icmp_ln98_fu_425_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_datalen_0_fu_62 <= add_ln97_fu_419_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_datalen_0_fu_62 <= ctx_datalen_read;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_state_0_0_fu_94 <= grp_sha256_transform_fu_216_ap_return_0;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_0_0_fu_94 <= p_read3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_state_1_0_fu_90 <= grp_sha256_transform_fu_216_ap_return_1;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_1_0_fu_90 <= p_read4;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_state_2_0_fu_86 <= grp_sha256_transform_fu_216_ap_return_2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_2_0_fu_86 <= p_read5;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_state_3_0_fu_82 <= grp_sha256_transform_fu_216_ap_return_3;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_3_0_fu_82 <= p_read6;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_state_4_0_fu_78 <= grp_sha256_transform_fu_216_ap_return_4;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_4_0_fu_78 <= p_read7;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_state_5_0_fu_74 <= grp_sha256_transform_fu_216_ap_return_5;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_5_0_fu_74 <= p_read8;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_state_6_0_fu_70 <= grp_sha256_transform_fu_216_ap_return_6;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_6_0_fu_70 <= p_read9;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        ctx_state_7_0_fu_66 <= grp_sha256_transform_fu_216_ap_return_7;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        ctx_state_7_0_fu_66 <= p_read10;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
        i_0_reg_205 <= i_reg_635;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_205 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ctx_state_0_0_load_1_reg_684 <= ctx_state_0_0_fu_94;
        ctx_state_1_0_load_1_reg_679 <= ctx_state_1_0_fu_90;
        ctx_state_2_0_load_1_reg_674 <= ctx_state_2_0_fu_86;
        ctx_state_3_0_load_1_reg_669 <= ctx_state_3_0_fu_82;
        ctx_state_4_0_load_1_reg_664 <= ctx_state_4_0_fu_78;
        ctx_state_5_0_load_1_reg_659 <= ctx_state_5_0_fu_74;
        ctx_state_6_0_load_1_reg_654 <= ctx_state_6_0_fu_70;
        ctx_state_7_0_load_1_reg_649 <= ctx_state_7_0_fu_66;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        empty_reg_627 <= empty_fu_273_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_635 <= i_fu_337_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        icmp_ln98_reg_645 <= icmp_ln98_fu_425_p2;
    end
end

always @ (*) begin
    if ((((icmp_ln94_fu_332_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln94_fu_332_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_address0 = zext_ln96_1_fu_414_p1;
    end else if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        ctx_data_address0 = grp_sha256_transform_fu_216_data_address0;
    end else begin
        ctx_data_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_ce0 = 1'b1;
    end else if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        ctx_data_ce0 = grp_sha256_transform_fu_216_data_ce0;
    end else begin
        ctx_data_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln98_reg_645 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        ctx_data_ce1 = grp_sha256_transform_fu_216_data_ce1;
    end else begin
        ctx_data_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_we0 = 1'b1;
    end else begin
        ctx_data_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        data_ce0 = 1'b1;
    end else begin
        data_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln94_fu_332_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln98_fu_425_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (1'b0 == ap_block_state5_on_subcall_done))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln100_1_fu_493_p2 = (ctx_bitlen_0_0_fu_102 + 32'd512);

assign add_ln100_fu_479_p2 = (ctx_bitlen_1_0_fu_98 + 32'd1);

assign add_ln97_fu_419_p2 = (ctx_datalen_0_fu_62 + 32'd1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

always @ (*) begin
    ap_block_state5_on_subcall_done = ((icmp_ln98_reg_645 == 1'd1) & (grp_sha256_transform_fu_216_ap_done == 1'b0));
end

assign ap_return_0 = ctx_datalen_0_fu_62;

assign ap_return_1 = ctx_bitlen_0_0_fu_102;

assign ap_return_10 = ctx_state_7_0_fu_66;

assign ap_return_2 = ctx_bitlen_1_0_fu_98;

assign ap_return_3 = ctx_state_0_0_fu_94;

assign ap_return_4 = ctx_state_1_0_fu_90;

assign ap_return_5 = ctx_state_2_0_fu_86;

assign ap_return_6 = ctx_state_3_0_fu_82;

assign ap_return_7 = ctx_state_4_0_fu_78;

assign ap_return_8 = ctx_state_5_0_fu_74;

assign ap_return_9 = ctx_state_6_0_fu_70;

assign ctx_data_address1 = grp_sha256_transform_fu_216_data_address1;

assign ctx_data_d0 = data_q0;

assign data_address0 = zext_ln96_fu_343_p1;

assign empty_fu_273_p1 = len[6:0];

assign grp_sha256_transform_fu_216_ap_start = grp_sha256_transform_fu_216_ap_start_reg;

assign i_fu_337_p2 = (i_0_reg_205 + 7'd1);

assign icmp_ln100_fu_473_p2 = ((ctx_bitlen_0_0_fu_102 > 32'd4294966783) ? 1'b1 : 1'b0);

assign icmp_ln94_fu_332_p2 = ((i_0_reg_205 == empty_reg_627) ? 1'b1 : 1'b0);

assign icmp_ln98_fu_425_p2 = ((add_ln97_fu_419_p2 == 32'd64) ? 1'b1 : 1'b0);

assign select_ln100_fu_485_p3 = ((icmp_ln100_fu_473_p2[0:0] === 1'b1) ? add_ln100_fu_479_p2 : ctx_bitlen_1_0_fu_98);

assign zext_ln96_1_fu_414_p1 = ctx_datalen_0_fu_62;

assign zext_ln96_fu_343_p1 = i_0_reg_205;

endmodule //sha256_update
