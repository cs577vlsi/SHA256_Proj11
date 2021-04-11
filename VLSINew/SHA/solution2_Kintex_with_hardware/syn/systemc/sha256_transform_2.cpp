#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
            ap_enable_reg_pp0_iter0_reg = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        add_ln40_13_reg_25118 = add_ln40_13_fu_7526_p2.read();
        add_ln53_131_reg_25970 = add_ln53_131_fu_15803_p2.read();
        add_ln53_134_reg_25992 = add_ln53_134_fu_15998_p2.read();
        add_ln53_183_reg_26399 = add_ln53_183_fu_19560_p2.read();
        add_ln53_187_reg_26416 = add_ln53_187_fu_19765_p2.read();
        add_ln53_239_reg_26775 = add_ln53_239_fu_22848_p2.read();
        add_ln53_23_reg_24487 = add_ln53_23_fu_3005_p2.read();
        add_ln53_253_reg_25997 = add_ln53_253_fu_16004_p2.read();
        add_ln53_260_reg_26002 = add_ln53_260_fu_16010_p2.read();
        add_ln53_260_reg_26002_pp0_iter3_reg = add_ln53_260_reg_26002.read();
        add_ln53_27_reg_24504 = add_ln53_27_fu_3211_p2.read();
        add_ln53_79_reg_25159 = add_ln53_79_fu_7940_p2.read();
        add_ln58_18_reg_25142 = add_ln58_18_fu_7806_p2.read();
        add_ln58_19_reg_25169 = add_ln58_19_fu_8024_p2.read();
        add_ln58_31_reg_25954 = add_ln58_31_fu_15672_p2.read();
        add_ln58_32_reg_25980 = add_ln58_32_fu_15887_p2.read();
        add_ln58_45_reg_26409 = add_ln58_45_fu_19644_p2.read();
        add_ln58_58_reg_26758 = add_ln58_58_fu_22715_p2.read();
        add_ln58_59_reg_26785 = add_ln58_59_fu_22932_p2.read();
        add_ln58_5_reg_24497 = add_ln58_5_fu_3089_p2.read();
        add_ln62_17_reg_25133 = add_ln62_17_fu_7694_p2.read();
        add_ln62_18_reg_25149 = add_ln62_18_fu_7817_p2.read();
        add_ln62_30_reg_25945 = add_ln62_30_fu_15569_p2.read();
        add_ln62_31_reg_25960 = add_ln62_31_fu_15681_p2.read();
        add_ln62_44_reg_26389 = add_ln62_44_fu_19520_p2.read();
        add_ln62_4_reg_24477 = add_ln62_4_fu_2964_p2.read();
        add_ln62_57_reg_26749 = add_ln62_57_fu_22602_p2.read();
        add_ln62_58_reg_26765 = add_ln62_58_fu_22726_p2.read();
        m_19_reg_25112 = m_19_fu_7520_p2.read();
        m_44_reg_25877 = m_44_fu_14599_p2.read();
        m_46_reg_25883 = m_46_fu_14683_p2.read();
        m_47_reg_25888 = m_47_fu_14693_p2.read();
        m_47_reg_25888_pp0_iter3_reg = m_47_reg_25888.read();
        m_48_reg_25895 = m_48_fu_14777_p2.read();
        m_48_reg_25895_pp0_iter3_reg = m_48_reg_25895.read();
        m_49_reg_25901 = m_49_fu_14862_p2.read();
        m_49_reg_25901_pp0_iter3_reg = m_49_reg_25901.read();
        m_50_reg_25907 = m_50_fu_14947_p2.read();
        m_50_reg_25907_pp0_iter3_reg = m_50_reg_25907.read();
        m_51_reg_25913 = m_51_fu_15033_p2.read();
        m_51_reg_25913_pp0_iter3_reg = m_51_reg_25913.read();
        m_53_reg_25924 = m_53_fu_15189_p2.read();
        m_53_reg_25924_pp0_iter3_reg = m_53_reg_25924.read();
        m_5_reg_24417 = m_5_fu_2732_p5.read();
        m_5_reg_24417_pp0_iter1_reg = m_5_reg_24417.read();
        m_6_reg_24422 = m_6_fu_2744_p5.read();
        m_6_reg_24422_pp0_iter1_reg = m_6_reg_24422.read();
        xor_ln40_145_reg_25919 = xor_ln40_145_fu_15103_p2.read();
        xor_ln40_157_reg_25930 = xor_ln40_157_fu_15259_p2.read();
        xor_ln40_175_reg_25935 = xor_ln40_175_fu_15329_p2.read();
        xor_ln40_183_reg_25940 = xor_ln40_183_fu_15399_p2.read();
        xor_ln40_21_reg_25123 = xor_ln40_21_fu_7594_p2.read();
        xor_ln40_23_reg_24467 = xor_ln40_23_fu_2842_p2.read();
        xor_ln40_23_reg_24467_pp0_iter1_reg = xor_ln40_23_reg_24467.read();
        xor_ln40_27_reg_24472 = xor_ln40_27_fu_2934_p2.read();
        xor_ln40_27_reg_24472_pp0_iter1_reg = xor_ln40_27_reg_24472.read();
        xor_ln40_75_reg_25128 = xor_ln40_75_fu_7664_p2.read();
        xor_ln53_133_reg_25987 = xor_ln53_133_fu_15964_p2.read();
        xor_ln53_241_reg_26794 = xor_ln53_241_fu_23009_p2.read();
        xor_ln53_81_reg_25178 = xor_ln53_81_fu_8101_p2.read();
        xor_ln54_129_reg_25975 = xor_ln54_129_fu_15881_p2.read();
        xor_ln54_181_reg_26404 = xor_ln54_181_fu_19638_p2.read();
        xor_ln54_21_reg_24492 = xor_ln54_21_fu_3083_p2.read();
        xor_ln54_237_reg_26780 = xor_ln54_237_fu_22926_p2.read();
        xor_ln54_77_reg_25164 = xor_ln54_77_fu_8018_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0))) {
        add_ln40_19_reg_25200 = add_ln40_19_fu_8200_p2.read();
        add_ln53_139_reg_26074 = add_ln53_139_fu_16725_p2.read();
        add_ln53_191_reg_26447 = add_ln53_191_fu_20029_p2.read();
        add_ln53_194_reg_26469 = add_ln53_194_fu_20224_p2.read();
        add_ln53_243_reg_26809 = add_ln53_243_fu_23079_p2.read();
        add_ln53_247_reg_26826 = add_ln53_247_fu_23284_p2.read();
        add_ln53_261_reg_26474 = add_ln53_261_fu_20234_p2.read();
        add_ln53_261_reg_26474_pp0_iter4_reg = add_ln53_261_reg_26474.read();
        add_ln53_31_reg_24595 = add_ln53_31_fu_3684_p2.read();
        add_ln53_34_reg_24617 = add_ln53_34_fu_3880_p2.read();
        add_ln53_83_reg_25230 = add_ln53_83_fu_8479_p2.read();
        add_ln53_87_reg_25247 = add_ln53_87_fu_8685_p2.read();
        add_ln58_20_reg_25240 = add_ln58_20_fu_8563_p2.read();
        add_ln58_33_reg_26057 = add_ln58_33_fu_16592_p2.read();
        add_ln58_34_reg_26084 = add_ln58_34_fu_16809_p2.read();
        add_ln58_46_reg_26431 = add_ln58_46_fu_19898_p2.read();
        add_ln58_47_reg_26457 = add_ln58_47_fu_20113_p2.read();
        add_ln58_60_reg_26819 = add_ln58_60_fu_23163_p2.read();
        add_ln58_6_reg_24579 = add_ln58_6_fu_3552_p2.read();
        add_ln58_7_reg_24605 = add_ln58_7_fu_3768_p2.read();
        add_ln62_19_reg_25220 = add_ln62_19_fu_8438_p2.read();
        add_ln62_32_reg_26048 = add_ln62_32_fu_16480_p2.read();
        add_ln62_33_reg_26064 = add_ln62_33_fu_16603_p2.read();
        add_ln62_45_reg_26422 = add_ln62_45_fu_19795_p2.read();
        add_ln62_46_reg_26437 = add_ln62_46_fu_19907_p2.read();
        add_ln62_59_reg_26799 = add_ln62_59_fu_23039_p2.read();
        add_ln62_5_reg_24570 = add_ln62_5_fu_3449_p2.read();
        add_ln62_6_reg_24585 = add_ln62_6_fu_3561_p2.read();
        m_20_reg_25183 = m_20_fu_8111_p2.read();
        m_21_reg_25189 = m_21_fu_8124_p2.read();
        m_52_reg_26007 = m_52_fu_16024_p2.read();
        m_52_reg_26007_pp0_iter3_reg = m_52_reg_26007.read();
        m_54_reg_26012 = m_54_fu_16109_p2.read();
        m_54_reg_26012_pp0_iter3_reg = m_54_reg_26012.read();
        m_55_reg_26017 = m_55_fu_16123_p2.read();
        m_55_reg_26017_pp0_iter3_reg = m_55_reg_26017.read();
        m_57_reg_26028 = m_57_fu_16278_p2.read();
        m_57_reg_26028_pp0_iter3_reg = m_57_reg_26028.read();
        m_59_reg_26033 = m_59_fu_16364_p2.read();
        m_59_reg_26033_pp0_iter3_reg = m_59_reg_26033.read();
        m_61_reg_26038 = m_61_fu_16450_p2.read();
        m_61_reg_26038_pp0_iter3_reg = m_61_reg_26038.read();
        m_61_reg_26038_pp0_iter4_reg = m_61_reg_26038_pp0_iter3_reg.read();
        m_7_reg_24510 = m_7_fu_3217_p5.read();
        m_7_reg_24510_pp0_iter1_reg = m_7_reg_24510.read();
        m_8_reg_24515 = m_8_fu_3229_p5.read();
        m_8_reg_24515_pp0_iter1_reg = m_8_reg_24515.read();
        xor_ln40_161_reg_26023 = xor_ln40_161_fu_16193_p2.read();
        xor_ln40_25_reg_25195 = xor_ln40_25_fu_8194_p2.read();
        xor_ln40_29_reg_25205 = xor_ln40_29_fu_8268_p2.read();
        xor_ln40_31_reg_24560 = xor_ln40_31_fu_3327_p2.read();
        xor_ln40_31_reg_24560_pp0_iter1_reg = xor_ln40_31_reg_24560.read();
        xor_ln40_35_reg_24565 = xor_ln40_35_fu_3419_p2.read();
        xor_ln40_35_reg_24565_pp0_iter1_reg = xor_ln40_35_reg_24565.read();
        xor_ln40_79_reg_25210 = xor_ln40_79_fu_8338_p2.read();
        xor_ln40_83_reg_25215 = xor_ln40_83_fu_8408_p2.read();
        xor_ln53_141_reg_26093 = xor_ln53_141_fu_16886_p2.read();
        xor_ln53_193_reg_26464 = xor_ln53_193_fu_20190_p2.read();
        xor_ln53_33_reg_24612 = xor_ln53_33_fu_3845_p2.read();
        xor_ln54_137_reg_26079 = xor_ln54_137_fu_16803_p2.read();
        xor_ln54_189_reg_26452 = xor_ln54_189_fu_20107_p2.read();
        xor_ln54_241_reg_26814 = xor_ln54_241_fu_23157_p2.read();
        xor_ln54_29_reg_24600 = xor_ln54_29_fu_3762_p2.read();
        xor_ln54_81_reg_25235 = xor_ln54_81_fu_8557_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        add_ln40_28_reg_25343 = add_ln40_28_fu_9469_p2.read();
        add_ln53_151_reg_26177 = add_ln53_151_fu_17689_p2.read();
        add_ln53_154_reg_26199 = add_ln53_154_fu_17884_p2.read();
        add_ln53_203_reg_26539 = add_ln53_203_fu_20739_p2.read();
        add_ln53_207_reg_26556 = add_ln53_207_fu_20944_p2.read();
        add_ln53_43_reg_24809 = add_ln53_43_fu_4803_p2.read();
        add_ln53_47_reg_24826 = add_ln53_47_fu_5008_p2.read();
        add_ln53_99_reg_25384 = add_ln53_99_fu_9883_p2.read();
        add_ln58_10_reg_24819 = add_ln58_10_fu_4887_p2.read();
        add_ln58_23_reg_25367 = add_ln58_23_fu_9749_p2.read();
        add_ln58_24_reg_25394 = add_ln58_24_fu_9967_p2.read();
        add_ln58_36_reg_26161 = add_ln58_36_fu_17558_p2.read();
        add_ln58_37_reg_26187 = add_ln58_37_fu_17773_p2.read();
        add_ln58_50_reg_26549 = add_ln58_50_fu_20823_p2.read();
        add_ln62_22_reg_25358 = add_ln62_22_fu_9637_p2.read();
        add_ln62_23_reg_25374 = add_ln62_23_fu_9760_p2.read();
        add_ln62_35_reg_26152 = add_ln62_35_fu_17455_p2.read();
        add_ln62_36_reg_26167 = add_ln62_36_fu_17567_p2.read();
        add_ln62_49_reg_26529 = add_ln62_49_fu_20699_p2.read();
        add_ln62_9_reg_24799 = add_ln62_9_fu_4763_p2.read();
        m_12_reg_24742 = m_12_fu_4543_p5.read();
        m_12_reg_24742_pp0_iter1_reg = m_12_reg_24742.read();
        m_24_reg_25337 = m_24_fu_9463_p2.read();
        xor_ln40_41_reg_25348 = xor_ln40_41_fu_9537_p2.read();
        xor_ln40_47_reg_24789 = xor_ln40_47_fu_4641_p2.read();
        xor_ln40_47_reg_24789_pp0_iter1_reg = xor_ln40_47_reg_24789.read();
        xor_ln40_51_reg_24794 = xor_ln40_51_fu_4733_p2.read();
        xor_ln40_51_reg_24794_pp0_iter1_reg = xor_ln40_51_reg_24794.read();
        xor_ln40_95_reg_25353 = xor_ln40_95_fu_9607_p2.read();
        xor_ln53_101_reg_25403 = xor_ln53_101_fu_10044_p2.read();
        xor_ln53_153_reg_26194 = xor_ln53_153_fu_17850_p2.read();
        xor_ln54_149_reg_26182 = xor_ln54_149_fu_17767_p2.read();
        xor_ln54_201_reg_26544 = xor_ln54_201_fu_20817_p2.read();
        xor_ln54_41_reg_24814 = xor_ln54_41_fu_4881_p2.read();
        xor_ln54_97_reg_25389 = xor_ln54_97_fu_9961_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        add_ln40_34_reg_25425 = add_ln40_34_fu_10143_p2.read();
        add_ln53_103_reg_25455 = add_ln53_103_fu_10422_p2.read();
        add_ln53_107_reg_25472 = add_ln53_107_fu_10628_p2.read();
        add_ln53_159_reg_26230 = add_ln53_159_fu_18159_p2.read();
        add_ln53_211_reg_26587 = add_ln53_211_fu_21208_p2.read();
        add_ln53_214_reg_26609 = add_ln53_214_fu_21403_p2.read();
        add_ln53_51_reg_24897 = add_ln53_51_fu_5676_p2.read();
        add_ln53_54_reg_24919 = add_ln53_54_fu_5872_p2.read();
        add_ln58_11_reg_24881 = add_ln58_11_fu_5545_p2.read();
        add_ln58_12_reg_24907 = add_ln58_12_fu_5760_p2.read();
        add_ln58_25_reg_25465 = add_ln58_25_fu_10506_p2.read();
        add_ln58_38_reg_26213 = add_ln58_38_fu_18026_p2.read();
        add_ln58_39_reg_26240 = add_ln58_39_fu_18243_p2.read();
        add_ln58_51_reg_26571 = add_ln58_51_fu_21077_p2.read();
        add_ln58_52_reg_26597 = add_ln58_52_fu_21292_p2.read();
        add_ln62_10_reg_24872 = add_ln62_10_fu_5442_p2.read();
        add_ln62_11_reg_24887 = add_ln62_11_fu_5554_p2.read();
        add_ln62_24_reg_25445 = add_ln62_24_fu_10381_p2.read();
        add_ln62_37_reg_26204 = add_ln62_37_fu_17913_p2.read();
        add_ln62_38_reg_26220 = add_ln62_38_fu_18037_p2.read();
        add_ln62_50_reg_26562 = add_ln62_50_fu_20974_p2.read();
        add_ln62_51_reg_26577 = add_ln62_51_fu_21086_p2.read();
        m_13_reg_24832 = m_13_fu_5014_p5.read();
        m_13_reg_24832_pp0_iter2_reg = m_13_reg_24832.read();
        m_14_reg_24838 = m_14_fu_5026_p5.read();
        m_14_reg_24838_pp0_iter2_reg = m_14_reg_24838.read();
        m_15_reg_24845 = m_15_fu_5038_p5.read();
        m_15_reg_24845_pp0_iter2_reg = m_15_reg_24845.read();
        m_25_reg_25408 = m_25_fu_10054_p2.read();
        m_26_reg_25414 = m_26_fu_10067_p2.read();
        xor_ln40_103_reg_25440 = xor_ln40_103_fu_10351_p2.read();
        xor_ln40_1_reg_24852 = xor_ln40_1_fu_5136_p2.read();
        xor_ln40_45_reg_25420 = xor_ln40_45_fu_10137_p2.read();
        xor_ln40_49_reg_25430 = xor_ln40_49_fu_10211_p2.read();
        xor_ln40_55_reg_24862 = xor_ln40_55_fu_5320_p2.read();
        xor_ln40_55_reg_24862_pp0_iter2_reg = xor_ln40_55_reg_24862.read();
        xor_ln40_59_reg_24867 = xor_ln40_59_fu_5412_p2.read();
        xor_ln40_59_reg_24867_pp0_iter2_reg = xor_ln40_59_reg_24867.read();
        xor_ln40_5_reg_24857 = xor_ln40_5_fu_5228_p2.read();
        xor_ln40_99_reg_25435 = xor_ln40_99_fu_10281_p2.read();
        xor_ln53_161_reg_26249 = xor_ln53_161_fu_18320_p2.read();
        xor_ln53_213_reg_26604 = xor_ln53_213_fu_21369_p2.read();
        xor_ln53_53_reg_24914 = xor_ln53_53_fu_5837_p2.read();
        xor_ln54_101_reg_25460 = xor_ln54_101_fu_10500_p2.read();
        xor_ln54_157_reg_26235 = xor_ln54_157_fu_18237_p2.read();
        xor_ln54_209_reg_26592 = xor_ln54_209_fu_21286_p2.read();
        xor_ln54_49_reg_24902 = xor_ln54_49_fu_5754_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        add_ln40_46_reg_25507 = add_ln40_46_fu_10882_p2.read();
        add_ln53_111_reg_25552 = add_ln53_111_fu_11355_p2.read();
        add_ln53_114_reg_25574 = add_ln53_114_fu_11551_p2.read();
        add_ln53_163_reg_26264 = add_ln53_163_fu_18390_p2.read();
        add_ln53_167_reg_26281 = add_ln53_167_fu_18595_p2.read();
        add_ln53_219_reg_26640 = add_ln53_219_fu_21678_p2.read();
        add_ln53_3_reg_24178 = add_ln53_3_fu_1196_p2.read();
        add_ln53_59_reg_24950 = add_ln53_59_fu_6147_p2.read();
        add_ln53_7_reg_24190 = add_ln53_7_fu_1328_p2.read();
        add_ln58_13_reg_24933 = add_ln58_13_fu_6014_p2.read();
        add_ln58_14_reg_24960 = add_ln58_14_fu_6231_p2.read();
        add_ln58_26_reg_25536 = add_ln58_26_fu_11223_p2.read();
        add_ln58_27_reg_25562 = add_ln58_27_fu_11439_p2.read();
        add_ln58_40_reg_26274 = add_ln58_40_fu_18474_p2.read();
        add_ln58_53_reg_26623 = add_ln58_53_fu_21545_p2.read();
        add_ln58_54_reg_26650 = add_ln58_54_fu_21762_p2.read();
        add_ln58_reg_24183 = add_ln58_fu_1202_p2.read();
        add_ln62_12_reg_24924 = add_ln62_12_fu_5901_p2.read();
        add_ln62_13_reg_24940 = add_ln62_13_fu_6025_p2.read();
        add_ln62_25_reg_25527 = add_ln62_25_fu_11120_p2.read();
        add_ln62_26_reg_25542 = add_ln62_26_fu_11232_p2.read();
        add_ln62_39_reg_26254 = add_ln62_39_fu_18350_p2.read();
        add_ln62_52_reg_26614 = add_ln62_52_fu_21433_p2.read();
        add_ln62_53_reg_26630 = add_ln62_53_fu_21556_p2.read();
        ctx_state_3_read_1_reg_24118 = ap_port_reg_ctx_state_3_read.read();
        ctx_state_3_read_1_reg_24118_pp0_iter1_reg = ctx_state_3_read_1_reg_24118.read();
        ctx_state_3_read_1_reg_24118_pp0_iter2_reg = ctx_state_3_read_1_reg_24118_pp0_iter1_reg.read();
        ctx_state_3_read_1_reg_24118_pp0_iter3_reg = ctx_state_3_read_1_reg_24118_pp0_iter2_reg.read();
        ctx_state_3_read_1_reg_24118_pp0_iter4_reg = ctx_state_3_read_1_reg_24118_pp0_iter3_reg.read();
        ctx_state_4_read_1_reg_24111 = ap_port_reg_ctx_state_4_read.read();
        ctx_state_4_read_1_reg_24111_pp0_iter1_reg = ctx_state_4_read_1_reg_24111.read();
        ctx_state_4_read_1_reg_24111_pp0_iter2_reg = ctx_state_4_read_1_reg_24111_pp0_iter1_reg.read();
        ctx_state_4_read_1_reg_24111_pp0_iter3_reg = ctx_state_4_read_1_reg_24111_pp0_iter2_reg.read();
        ctx_state_4_read_1_reg_24111_pp0_iter4_reg = ctx_state_4_read_1_reg_24111_pp0_iter3_reg.read();
        ctx_state_5_read_1_reg_24105 = ap_port_reg_ctx_state_5_read.read();
        ctx_state_5_read_1_reg_24105_pp0_iter1_reg = ctx_state_5_read_1_reg_24105.read();
        ctx_state_5_read_1_reg_24105_pp0_iter2_reg = ctx_state_5_read_1_reg_24105_pp0_iter1_reg.read();
        ctx_state_5_read_1_reg_24105_pp0_iter3_reg = ctx_state_5_read_1_reg_24105_pp0_iter2_reg.read();
        ctx_state_5_read_1_reg_24105_pp0_iter4_reg = ctx_state_5_read_1_reg_24105_pp0_iter3_reg.read();
        ctx_state_6_read_1_reg_24100 = ap_port_reg_ctx_state_6_read.read();
        ctx_state_6_read_1_reg_24100_pp0_iter1_reg = ctx_state_6_read_1_reg_24100.read();
        ctx_state_6_read_1_reg_24100_pp0_iter2_reg = ctx_state_6_read_1_reg_24100_pp0_iter1_reg.read();
        ctx_state_6_read_1_reg_24100_pp0_iter3_reg = ctx_state_6_read_1_reg_24100_pp0_iter2_reg.read();
        ctx_state_6_read_1_reg_24100_pp0_iter4_reg = ctx_state_6_read_1_reg_24100_pp0_iter3_reg.read();
        ctx_state_7_read_1_reg_24095 = ap_port_reg_ctx_state_7_read.read();
        ctx_state_7_read_1_reg_24095_pp0_iter1_reg = ctx_state_7_read_1_reg_24095.read();
        ctx_state_7_read_1_reg_24095_pp0_iter2_reg = ctx_state_7_read_1_reg_24095_pp0_iter1_reg.read();
        ctx_state_7_read_1_reg_24095_pp0_iter3_reg = ctx_state_7_read_1_reg_24095_pp0_iter2_reg.read();
        ctx_state_7_read_1_reg_24095_pp0_iter4_reg = ctx_state_7_read_1_reg_24095_pp0_iter3_reg.read();
        m_0_reg_24123 = m_0_fu_960_p5.read();
        m_0_reg_24123_pp0_iter1_reg = m_0_reg_24123.read();
        m_1_reg_24128 = m_1_fu_972_p5.read();
        m_1_reg_24128_pp0_iter1_reg = m_1_reg_24128.read();
        m_27_reg_25478 = m_27_fu_10638_p2.read();
        m_28_reg_25484 = m_28_fu_10651_p2.read();
        m_29_reg_25490 = m_29_fu_10736_p2.read();
        xor_ln40_107_reg_25512 = xor_ln40_107_fu_10950_p2.read();
        xor_ln40_111_reg_25517 = xor_ln40_111_fu_11020_p2.read();
        xor_ln40_115_reg_25522 = xor_ln40_115_fu_11090_p2.read();
        xor_ln40_3_reg_24173 = xor_ln40_3_fu_1070_p2.read();
        xor_ln40_3_reg_24173_pp0_iter1_reg = xor_ln40_3_reg_24173.read();
        xor_ln40_57_reg_25497 = xor_ln40_57_fu_10806_p2.read();
        xor_ln40_61_reg_25502 = xor_ln40_61_fu_10876_p2.read();
        xor_ln53_113_reg_25569 = xor_ln53_113_fu_11516_p2.read();
        xor_ln53_221_reg_26659 = xor_ln53_221_fu_21839_p2.read();
        xor_ln53_61_reg_24969 = xor_ln53_61_fu_6308_p2.read();
        xor_ln54_109_reg_25557 = xor_ln54_109_fu_11433_p2.read();
        xor_ln54_161_reg_26269 = xor_ln54_161_fu_18468_p2.read();
        xor_ln54_217_reg_26645 = xor_ln54_217_fu_21756_p2.read();
        xor_ln54_57_reg_24955 = xor_ln54_57_fu_6225_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        add_ln40_4_reg_24980 = add_ln40_4_fu_6328_p2.read();
        add_ln40_61_reg_25624 = add_ln40_61_fu_11990_p2.read();
        add_ln40_70_reg_25641 = add_ln40_70_fu_12150_p2.read();
        add_ln53_119_reg_25707 = add_ln53_119_fu_12914_p2.read();
        add_ln53_11_reg_24278 = add_ln53_11_fu_1664_p2.read();
        add_ln53_14_reg_24295 = add_ln53_14_fu_1783_p2.read();
        add_ln53_171_reg_26312 = add_ln53_171_fu_18859_p2.read();
        add_ln53_174_reg_26334 = add_ln53_174_fu_19054_p2.read();
        add_ln53_223_reg_26674 = add_ln53_223_fu_21909_p2.read();
        add_ln53_227_reg_26691 = add_ln53_227_fu_22114_p2.read();
        add_ln53_63_reg_25005 = add_ln53_63_fu_6536_p2.read();
        add_ln53_67_reg_25022 = add_ln53_67_fu_6742_p2.read();
        add_ln58_15_reg_25015 = add_ln58_15_fu_6620_p2.read();
        add_ln58_1_reg_24272 = add_ln58_1_fu_1542_p2.read();
        add_ln58_28_reg_25690 = add_ln58_28_fu_12781_p2.read();
        add_ln58_29_reg_25717 = add_ln58_29_fu_12998_p2.read();
        add_ln58_2_reg_24283 = add_ln58_2_fu_1670_p2.read();
        add_ln58_41_reg_26296 = add_ln58_41_fu_18728_p2.read();
        add_ln58_42_reg_26322 = add_ln58_42_fu_18943_p2.read();
        add_ln58_55_reg_26684 = add_ln58_55_fu_21993_p2.read();
        add_ln62_14_reg_24995 = add_ln62_14_fu_6496_p2.read();
        add_ln62_27_reg_25681 = add_ln62_27_fu_12669_p2.read();
        add_ln62_28_reg_25697 = add_ln62_28_fu_12792_p2.read();
        add_ln62_40_reg_26287 = add_ln62_40_fu_18625_p2.read();
        add_ln62_41_reg_26302 = add_ln62_41_fu_18737_p2.read();
        add_ln62_54_reg_26664 = add_ln62_54_fu_21869_p2.read();
        ctx_state_1_read_1_reg_24203 = ap_port_reg_ctx_state_1_read.read();
        ctx_state_1_read_1_reg_24203_pp0_iter1_reg = ctx_state_1_read_1_reg_24203.read();
        ctx_state_1_read_1_reg_24203_pp0_iter2_reg = ctx_state_1_read_1_reg_24203_pp0_iter1_reg.read();
        ctx_state_1_read_1_reg_24203_pp0_iter3_reg = ctx_state_1_read_1_reg_24203_pp0_iter2_reg.read();
        ctx_state_1_read_1_reg_24203_pp0_iter4_reg = ctx_state_1_read_1_reg_24203_pp0_iter3_reg.read();
        ctx_state_2_read_1_reg_24196 = ap_port_reg_ctx_state_2_read.read();
        ctx_state_2_read_1_reg_24196_pp0_iter1_reg = ctx_state_2_read_1_reg_24196.read();
        ctx_state_2_read_1_reg_24196_pp0_iter2_reg = ctx_state_2_read_1_reg_24196_pp0_iter1_reg.read();
        ctx_state_2_read_1_reg_24196_pp0_iter3_reg = ctx_state_2_read_1_reg_24196_pp0_iter2_reg.read();
        ctx_state_2_read_1_reg_24196_pp0_iter4_reg = ctx_state_2_read_1_reg_24196_pp0_iter3_reg.read();
        m_16_reg_24974 = m_16_fu_6322_p2.read();
        m_2_reg_24212 = m_2_fu_1334_p5.read();
        m_2_reg_24212_pp0_iter1_reg = m_2_reg_24212.read();
        m_30_reg_25579 = m_30_fu_11565_p2.read();
        m_31_reg_25585 = m_31_fu_11575_p2.read();
        m_32_reg_25592 = m_32_fu_11659_p2.read();
        m_33_reg_25598 = m_33_fu_11744_p2.read();
        m_34_reg_25605 = m_34_fu_11829_p2.read();
        m_35_reg_25612 = m_35_fu_11914_p2.read();
        m_37_reg_25629 = m_37_fu_12074_p2.read();
        m_3_reg_24217 = m_3_fu_1346_p5.read();
        m_3_reg_24217_pp0_iter1_reg = m_3_reg_24217.read();
        xor_ln40_119_reg_25646 = xor_ln40_119_fu_12219_p2.read();
        xor_ln40_11_reg_24267 = xor_ln40_11_fu_1536_p2.read();
        xor_ln40_11_reg_24267_pp0_iter1_reg = xor_ln40_11_reg_24267.read();
        xor_ln40_123_reg_25651 = xor_ln40_123_fu_12289_p2.read();
        xor_ln40_127_reg_25656 = xor_ln40_127_fu_12359_p2.read();
        xor_ln40_131_reg_25661 = xor_ln40_131_fu_12429_p2.read();
        xor_ln40_135_reg_25666 = xor_ln40_135_fu_12499_p2.read();
        xor_ln40_139_reg_25671 = xor_ln40_139_fu_12569_p2.read();
        xor_ln40_147_reg_25676 = xor_ln40_147_fu_12639_p2.read();
        xor_ln40_63_reg_24990 = xor_ln40_63_fu_6466_p2.read();
        xor_ln40_7_reg_24262 = xor_ln40_7_fu_1444_p2.read();
        xor_ln40_7_reg_24262_pp0_iter1_reg = xor_ln40_7_reg_24262.read();
        xor_ln40_81_reg_25619 = xor_ln40_81_fu_11984_p2.read();
        xor_ln40_93_reg_25636 = xor_ln40_93_fu_12144_p2.read();
        xor_ln40_9_reg_24985 = xor_ln40_9_fu_6396_p2.read();
        xor_ln53_121_reg_25726 = xor_ln53_121_fu_13075_p2.read();
        xor_ln53_13_reg_24290 = xor_ln53_13_fu_1748_p2.read();
        xor_ln53_173_reg_26329 = xor_ln53_173_fu_19020_p2.read();
        xor_ln54_117_reg_25712 = xor_ln54_117_fu_12992_p2.read();
        xor_ln54_169_reg_26317 = xor_ln54_169_fu_18937_p2.read();
        xor_ln54_221_reg_26679 = xor_ln54_221_fu_21987_p2.read();
        xor_ln54_61_reg_25010 = xor_ln54_61_fu_6614_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        add_ln40_85_reg_25782 = add_ln40_85_fu_13595_p2.read();
        add_ln40_94_reg_25799 = add_ln40_94_fu_13755_p2.read();
        add_ln53_123_reg_25854 = add_ln53_123_fu_14384_p2.read();
        add_ln53_127_reg_25871 = add_ln53_127_fu_14589_p2.read();
        add_ln53_179_reg_26365 = add_ln53_179_fu_19329_p2.read();
        add_ln53_19_reg_24393 = add_ln53_19_fu_2564_p2.read();
        add_ln53_231_reg_26722 = add_ln53_231_fu_22378_p2.read();
        add_ln53_234_reg_26744 = add_ln53_234_fu_22573_p2.read();
        add_ln53_71_reg_25085 = add_ln53_71_fu_7310_p2.read();
        add_ln53_74_reg_25107 = add_ln53_74_fu_7506_p2.read();
        add_ln58_16_reg_25069 = add_ln58_16_fu_7178_p2.read();
        add_ln58_17_reg_25095 = add_ln58_17_fu_7394_p2.read();
        add_ln58_30_reg_25864 = add_ln58_30_fu_14468_p2.read();
        add_ln58_3_reg_24376 = add_ln58_3_fu_2429_p2.read();
        add_ln58_43_reg_26348 = add_ln58_43_fu_19196_p2.read();
        add_ln58_44_reg_26375 = add_ln58_44_fu_19413_p2.read();
        add_ln58_4_reg_24403 = add_ln58_4_fu_2648_p2.read();
        add_ln58_56_reg_26706 = add_ln58_56_fu_22247_p2.read();
        add_ln58_57_reg_26732 = add_ln58_57_fu_22462_p2.read();
        add_ln62_15_reg_25060 = add_ln62_15_fu_7075_p2.read();
        add_ln62_16_reg_25075 = add_ln62_16_fu_7187_p2.read();
        add_ln62_1_reg_24360 = add_ln62_1_fu_2199_p2.read();
        add_ln62_29_reg_25844 = add_ln62_29_fu_14344_p2.read();
        add_ln62_2_reg_24367 = add_ln62_2_fu_2312_p2.read();
        add_ln62_3_reg_24383 = add_ln62_3_fu_2441_p2.read();
        add_ln62_42_reg_26339 = add_ln62_42_fu_19084_p2.read();
        add_ln62_43_reg_26355 = add_ln62_43_fu_19207_p2.read();
        add_ln62_55_reg_26697 = add_ln62_55_fu_22144_p2.read();
        add_ln62_56_reg_26712 = add_ln62_56_fu_22256_p2.read();
        ctx_state_0_read_1_reg_24300 = ap_port_reg_ctx_state_0_read.read();
        ctx_state_0_read_1_reg_24300_pp0_iter1_reg = ctx_state_0_read_1_reg_24300.read();
        ctx_state_0_read_1_reg_24300_pp0_iter2_reg = ctx_state_0_read_1_reg_24300_pp0_iter1_reg.read();
        ctx_state_0_read_1_reg_24300_pp0_iter3_reg = ctx_state_0_read_1_reg_24300_pp0_iter2_reg.read();
        ctx_state_0_read_1_reg_24300_pp0_iter4_reg = ctx_state_0_read_1_reg_24300_pp0_iter3_reg.read();
        m_17_reg_25028 = m_17_fu_6752_p2.read();
        m_18_reg_25034 = m_18_fu_6765_p2.read();
        m_36_reg_25731 = m_36_fu_13085_p2.read();
        m_38_reg_25737 = m_38_fu_13169_p2.read();
        m_39_reg_25743 = m_39_fu_13179_p2.read();
        m_40_reg_25750 = m_40_fu_13263_p2.read();
        m_41_reg_25756 = m_41_fu_13348_p2.read();
        m_42_reg_25763 = m_42_fu_13433_p2.read();
        m_43_reg_25770 = m_43_fu_13519_p2.read();
        m_45_reg_25787 = m_45_fu_13679_p2.read();
        m_45_reg_25787_pp0_iter3_reg = m_45_reg_25787.read();
        m_4_reg_24305 = m_4_fu_1789_p5.read();
        m_4_reg_24305_pp0_iter1_reg = m_4_reg_24305.read();
        xor_ln40_113_reg_25777 = xor_ln40_113_fu_13589_p2.read();
        xor_ln40_125_reg_25794 = xor_ln40_125_fu_13749_p2.read();
        xor_ln40_13_reg_25040 = xor_ln40_13_fu_6835_p2.read();
        xor_ln40_143_reg_25804 = xor_ln40_143_fu_13824_p2.read();
        xor_ln40_151_reg_25809 = xor_ln40_151_fu_13894_p2.read();
        xor_ln40_155_reg_25814 = xor_ln40_155_fu_13964_p2.read();
        xor_ln40_159_reg_25819 = xor_ln40_159_fu_14034_p2.read();
        xor_ln40_15_reg_24350 = xor_ln40_15_fu_1887_p2.read();
        xor_ln40_15_reg_24350_pp0_iter1_reg = xor_ln40_15_reg_24350.read();
        xor_ln40_163_reg_25824 = xor_ln40_163_fu_14104_p2.read();
        xor_ln40_167_reg_25829 = xor_ln40_167_fu_14174_p2.read();
        xor_ln40_171_reg_25834 = xor_ln40_171_fu_14244_p2.read();
        xor_ln40_179_reg_25839 = xor_ln40_179_fu_14314_p2.read();
        xor_ln40_17_reg_25045 = xor_ln40_17_fu_6905_p2.read();
        xor_ln40_19_reg_24355 = xor_ln40_19_fu_1979_p2.read();
        xor_ln40_19_reg_24355_pp0_iter1_reg = xor_ln40_19_reg_24355.read();
        xor_ln40_67_reg_25050 = xor_ln40_67_fu_6975_p2.read();
        xor_ln40_71_reg_25055 = xor_ln40_71_fu_7045_p2.read();
        xor_ln53_181_reg_26384 = xor_ln53_181_fu_19490_p2.read();
        xor_ln53_21_reg_24412 = xor_ln53_21_fu_2726_p2.read();
        xor_ln53_233_reg_26739 = xor_ln53_233_fu_22539_p2.read();
        xor_ln53_73_reg_25102 = xor_ln53_73_fu_7471_p2.read();
        xor_ln54_121_reg_25859 = xor_ln54_121_fu_14462_p2.read();
        xor_ln54_177_reg_26370 = xor_ln54_177_fu_19407_p2.read();
        xor_ln54_17_reg_24398 = xor_ln54_17_fu_2642_p2.read();
        xor_ln54_229_reg_26727 = xor_ln54_229_fu_22456_p2.read();
        xor_ln54_69_reg_25090 = xor_ln54_69_fu_7388_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        add_ln53_143_reg_26124 = add_ln53_143_fu_17210_p2.read();
        add_ln53_147_reg_26141 = add_ln53_147_fu_17415_p2.read();
        add_ln53_199_reg_26505 = add_ln53_199_fu_20508_p2.read();
        add_ln53_254_reg_26147 = add_ln53_254_fu_17426_p2.read();
        add_ln53_254_reg_26147_pp0_iter3_reg = add_ln53_254_reg_26147.read();
        add_ln53_256_reg_26832 = add_ln53_256_fu_23837_p2.read();
        add_ln53_257_reg_26837 = add_ln53_257_fu_23842_p2.read();
        add_ln53_39_reg_24718 = add_ln53_39_fu_4376_p2.read();
        add_ln53_91_reg_25310 = add_ln53_91_fu_9253_p2.read();
        add_ln53_94_reg_25332 = add_ln53_94_fu_9449_p2.read();
        add_ln58_21_reg_25294 = add_ln58_21_fu_9121_p2.read();
        add_ln58_22_reg_25320 = add_ln58_22_fu_9337_p2.read();
        add_ln58_35_reg_26134 = add_ln58_35_fu_17294_p2.read();
        add_ln58_48_reg_26488 = add_ln58_48_fu_20375_p2.read();
        add_ln58_49_reg_26515 = add_ln58_49_fu_20592_p2.read();
        add_ln58_8_reg_24701 = add_ln58_8_fu_4242_p2.read();
        add_ln58_9_reg_24728 = add_ln58_9_fu_4460_p2.read();
        add_ln62_20_reg_25285 = add_ln62_20_fu_9018_p2.read();
        add_ln62_21_reg_25300 = add_ln62_21_fu_9130_p2.read();
        add_ln62_34_reg_26114 = add_ln62_34_fu_17170_p2.read();
        add_ln62_47_reg_26479 = add_ln62_47_fu_20263_p2.read();
        add_ln62_48_reg_26495 = add_ln62_48_fu_20386_p2.read();
        add_ln62_7_reg_24692 = add_ln62_7_fu_4130_p2.read();
        add_ln62_8_reg_24708 = add_ln62_8_fu_4253_p2.read();
        add_ln66_reg_26852 = add_ln66_fu_23950_p2.read();
        add_ln67_reg_26857 = add_ln67_fu_23955_p2.read();
        add_ln68_reg_26862 = add_ln68_fu_23960_p2.read();
        add_ln70_reg_26867 = add_ln70_fu_23965_p2.read();
        add_ln71_reg_26872 = add_ln71_fu_23970_p2.read();
        add_ln72_reg_26877 = add_ln72_fu_23975_p2.read();
        m_10_reg_24628 = m_10_fu_3898_p5.read();
        m_10_reg_24628_pp0_iter1_reg = m_10_reg_24628.read();
        m_11_reg_24635 = m_11_fu_3910_p5.read();
        m_11_reg_24635_pp0_iter1_reg = m_11_reg_24635.read();
        m_22_reg_25253 = m_22_fu_8695_p2.read();
        m_23_reg_25259 = m_23_fu_8708_p2.read();
        m_56_reg_26098 = m_56_fu_16900_p2.read();
        m_56_reg_26098_pp0_iter3_reg = m_56_reg_26098.read();
        m_58_reg_26104 = m_58_fu_16985_p2.read();
        m_58_reg_26104_pp0_iter3_reg = m_58_reg_26104.read();
        m_60_reg_26109 = m_60_fu_17070_p2.read();
        m_60_reg_26109_pp0_iter3_reg = m_60_reg_26109.read();
        m_9_reg_24622 = m_9_fu_3886_p5.read();
        m_9_reg_24622_pp0_iter1_reg = m_9_reg_24622.read();
        xor_ln40_33_reg_25265 = xor_ln40_33_fu_8778_p2.read();
        xor_ln40_37_reg_25270 = xor_ln40_37_fu_8848_p2.read();
        xor_ln40_39_reg_24682 = xor_ln40_39_fu_4008_p2.read();
        xor_ln40_39_reg_24682_pp0_iter1_reg = xor_ln40_39_reg_24682.read();
        xor_ln40_43_reg_24687 = xor_ln40_43_fu_4100_p2.read();
        xor_ln40_43_reg_24687_pp0_iter1_reg = xor_ln40_43_reg_24687.read();
        xor_ln40_87_reg_25275 = xor_ln40_87_fu_8918_p2.read();
        xor_ln40_91_reg_25280 = xor_ln40_91_fu_8988_p2.read();
        xor_ln53_201_reg_26524 = xor_ln53_201_fu_20669_p2.read();
        xor_ln53_41_reg_24737 = xor_ln53_41_fu_4537_p2.read();
        xor_ln53_93_reg_25327 = xor_ln53_93_fu_9414_p2.read();
        xor_ln54_141_reg_26129 = xor_ln54_141_fu_17288_p2.read();
        xor_ln54_197_reg_26510 = xor_ln54_197_fu_20586_p2.read();
        xor_ln54_253_reg_26842 = xor_ln54_253_fu_23920_p2.read();
        xor_ln54_255_reg_26847 = xor_ln54_255_fu_23944_p2.read();
        xor_ln54_37_reg_24723 = xor_ln54_37_fu_4454_p2.read();
        xor_ln54_89_reg_25315 = xor_ln54_89_fu_9331_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_port_reg_ctx_state_0_read = ctx_state_0_read.read();
        ap_port_reg_ctx_state_1_read = ctx_state_1_read.read();
        ap_port_reg_ctx_state_2_read = ctx_state_2_read.read();
        ap_port_reg_ctx_state_3_read = ctx_state_3_read.read();
        ap_port_reg_ctx_state_4_read = ctx_state_4_read.read();
        ap_port_reg_ctx_state_5_read = ctx_state_5_read.read();
        ap_port_reg_ctx_state_6_read = ctx_state_6_read.read();
        ap_port_reg_ctx_state_7_read = ctx_state_7_read.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)))) {
        reg_944 = data_0_q1.read();
        reg_948 = data_1_q1.read();
        reg_952 = data_2_q1.read();
        reg_956 = data_3_q1.read();
    }
}

void sha256_transform::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_1to4.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 2 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 16 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            }
            break;
        case 32 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage5_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            }
            break;
        case 64 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage6_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            }
            break;
        case 128 : 
            if (((esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read())) || (esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}

