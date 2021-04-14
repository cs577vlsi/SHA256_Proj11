-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity CH is
port (
    ap_ready : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (31 downto 0);
    y : IN STD_LOGIC_VECTOR (31 downto 0);
    z : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of CH is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_FFFFFFFF : STD_LOGIC_VECTOR (31 downto 0) := "11111111111111111111111111111111";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal xor_ln39_fu_34_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal and_ln39_1_fu_40_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal and_ln39_fu_28_p2 : STD_LOGIC_VECTOR (31 downto 0);


begin



    and_ln39_1_fu_40_p2 <= (z and xor_ln39_fu_34_p2);
    and_ln39_fu_28_p2 <= (y and x);
    ap_ready <= ap_const_logic_1;
    ap_return <= (and_ln39_fu_28_p2 xor and_ln39_1_fu_40_p2);
    xor_ln39_fu_34_p2 <= (x xor ap_const_lv32_FFFFFFFF);
end behav;