-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity SIG0 is
port (
    ap_ready : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of SIG0 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_12 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal trunc_ln35_fu_38_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal lshr_ln_fu_28_p4 : STD_LOGIC_VECTOR (24 downto 0);
    signal trunc_ln35_2_fu_60_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal lshr_ln35_2_fu_50_p4 : STD_LOGIC_VECTOR (13 downto 0);
    signal lshr_ln5_fu_72_p4 : STD_LOGIC_VECTOR (28 downto 0);
    signal zext_ln55_fu_82_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln35_2_fu_64_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln55_fu_86_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal or_ln_fu_42_p3 : STD_LOGIC_VECTOR (31 downto 0);


begin



    ap_ready <= ap_const_logic_1;
    ap_return <= (xor_ln55_fu_86_p2 xor or_ln_fu_42_p3);
    lshr_ln35_2_fu_50_p4 <= x(31 downto 18);
    lshr_ln5_fu_72_p4 <= x(31 downto 3);
    lshr_ln_fu_28_p4 <= x(31 downto 7);
    or_ln35_2_fu_64_p3 <= (trunc_ln35_2_fu_60_p1 & lshr_ln35_2_fu_50_p4);
    or_ln_fu_42_p3 <= (trunc_ln35_fu_38_p1 & lshr_ln_fu_28_p4);
    trunc_ln35_2_fu_60_p1 <= x(18 - 1 downto 0);
    trunc_ln35_fu_38_p1 <= x(7 - 1 downto 0);
    xor_ln55_fu_86_p2 <= (zext_ln55_fu_82_p1 xor or_ln35_2_fu_64_p3);
    zext_ln55_fu_82_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lshr_ln5_fu_72_p4),32));
end behav;