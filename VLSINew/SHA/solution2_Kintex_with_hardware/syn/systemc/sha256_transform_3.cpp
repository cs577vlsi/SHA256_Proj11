#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_add_ln40_100_fu_14858_p2() {
    add_ln40_100_fu_14858_p2 = (!m_42_reg_25763.read().is_01() || !m_33_reg_25598.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_25763.read()) + sc_biguint<32>(m_33_reg_25598.read()));
}

void sha256_transform::thread_add_ln40_102_fu_14938_p2() {
    add_ln40_102_fu_14938_p2 = (!xor_ln40_137_fu_14932_p2.read().is_01() || !xor_ln40_139_reg_25671.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_137_fu_14932_p2.read()) + sc_biguint<32>(xor_ln40_139_reg_25671.read()));
}

void sha256_transform::thread_add_ln40_103_fu_14943_p2() {
    add_ln40_103_fu_14943_p2 = (!m_43_reg_25770.read().is_01() || !m_34_reg_25605.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_25770.read()) + sc_biguint<32>(m_34_reg_25605.read()));
}

void sha256_transform::thread_add_ln40_105_fu_15023_p2() {
    add_ln40_105_fu_15023_p2 = (!xor_ln40_141_fu_15017_p2.read().is_01() || !xor_ln40_143_reg_25804.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_141_fu_15017_p2.read()) + sc_biguint<32>(xor_ln40_143_reg_25804.read()));
}

void sha256_transform::thread_add_ln40_106_fu_15028_p2() {
    add_ln40_106_fu_15028_p2 = (!m_44_fu_14599_p2.read().is_01() || !m_35_reg_25612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_fu_14599_p2.read()) + sc_biguint<32>(m_35_reg_25612.read()));
}

void sha256_transform::thread_add_ln40_108_fu_16016_p2() {
    add_ln40_108_fu_16016_p2 = (!xor_ln40_145_reg_25919.read().is_01() || !xor_ln40_147_reg_25676.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_145_reg_25919.read()) + sc_biguint<32>(xor_ln40_147_reg_25676.read()));
}

void sha256_transform::thread_add_ln40_109_fu_16020_p2() {
    add_ln40_109_fu_16020_p2 = (!m_45_reg_25787.read().is_01() || !m_36_reg_25731.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_25787.read()) + sc_biguint<32>(m_36_reg_25731.read()));
}

void sha256_transform::thread_add_ln40_10_fu_7516_p2() {
    add_ln40_10_fu_7516_p2 = (!m_12_reg_24742.read().is_01() || !m_3_reg_24217_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_24742.read()) + sc_biguint<32>(m_3_reg_24217_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_111_fu_15179_p2() {
    add_ln40_111_fu_15179_p2 = (!xor_ln40_149_fu_15173_p2.read().is_01() || !xor_ln40_151_reg_25809.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_149_fu_15173_p2.read()) + sc_biguint<32>(xor_ln40_151_reg_25809.read()));
}

void sha256_transform::thread_add_ln40_112_fu_15184_p2() {
    add_ln40_112_fu_15184_p2 = (!m_46_fu_14683_p2.read().is_01() || !m_37_reg_25629.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_fu_14683_p2.read()) + sc_biguint<32>(m_37_reg_25629.read()));
}

void sha256_transform::thread_add_ln40_114_fu_16100_p2() {
    add_ln40_114_fu_16100_p2 = (!xor_ln40_153_fu_16094_p2.read().is_01() || !xor_ln40_155_reg_25814.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_153_fu_16094_p2.read()) + sc_biguint<32>(xor_ln40_155_reg_25814.read()));
}

void sha256_transform::thread_add_ln40_115_fu_16105_p2() {
    add_ln40_115_fu_16105_p2 = (!m_47_reg_25888.read().is_01() || !m_38_reg_25737.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_25888.read()) + sc_biguint<32>(m_38_reg_25737.read()));
}

void sha256_transform::thread_add_ln40_117_fu_16115_p2() {
    add_ln40_117_fu_16115_p2 = (!xor_ln40_157_reg_25930.read().is_01() || !xor_ln40_159_reg_25819.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_157_reg_25930.read()) + sc_biguint<32>(xor_ln40_159_reg_25819.read()));
}

void sha256_transform::thread_add_ln40_118_fu_16119_p2() {
    add_ln40_118_fu_16119_p2 = (!m_48_reg_25895.read().is_01() || !m_39_reg_25743.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_25895.read()) + sc_biguint<32>(m_39_reg_25743.read()));
}

void sha256_transform::thread_add_ln40_120_fu_16892_p2() {
    add_ln40_120_fu_16892_p2 = (!xor_ln40_161_reg_26023.read().is_01() || !xor_ln40_163_reg_25824.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_161_reg_26023.read()) + sc_biguint<32>(xor_ln40_163_reg_25824.read()));
}

void sha256_transform::thread_add_ln40_121_fu_16896_p2() {
    add_ln40_121_fu_16896_p2 = (!m_49_reg_25901.read().is_01() || !m_40_reg_25750.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_25901.read()) + sc_biguint<32>(m_40_reg_25750.read()));
}

void sha256_transform::thread_add_ln40_123_fu_16269_p2() {
    add_ln40_123_fu_16269_p2 = (!xor_ln40_165_fu_16263_p2.read().is_01() || !xor_ln40_167_reg_25829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_165_fu_16263_p2.read()) + sc_biguint<32>(xor_ln40_167_reg_25829.read()));
}

void sha256_transform::thread_add_ln40_124_fu_16274_p2() {
    add_ln40_124_fu_16274_p2 = (!m_50_reg_25907.read().is_01() || !m_41_reg_25756.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_25907.read()) + sc_biguint<32>(m_41_reg_25756.read()));
}

void sha256_transform::thread_add_ln40_126_fu_16976_p2() {
    add_ln40_126_fu_16976_p2 = (!xor_ln40_169_fu_16970_p2.read().is_01() || !xor_ln40_171_reg_25834.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_169_fu_16970_p2.read()) + sc_biguint<32>(xor_ln40_171_reg_25834.read()));
}

void sha256_transform::thread_add_ln40_127_fu_16981_p2() {
    add_ln40_127_fu_16981_p2 = (!m_51_reg_25913.read().is_01() || !m_42_reg_25763.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_25913.read()) + sc_biguint<32>(m_42_reg_25763.read()));
}

void sha256_transform::thread_add_ln40_129_fu_16354_p2() {
    add_ln40_129_fu_16354_p2 = (!xor_ln40_173_fu_16348_p2.read().is_01() || !xor_ln40_175_reg_25935.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_173_fu_16348_p2.read()) + sc_biguint<32>(xor_ln40_175_reg_25935.read()));
}

void sha256_transform::thread_add_ln40_12_fu_8107_p2() {
    add_ln40_12_fu_8107_p2 = (!xor_ln40_17_reg_25045.read().is_01() || !xor_ln40_19_reg_24355_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_17_reg_25045.read()) + sc_biguint<32>(xor_ln40_19_reg_24355_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_130_fu_16359_p2() {
    add_ln40_130_fu_16359_p2 = (!m_52_fu_16024_p2.read().is_01() || !m_43_reg_25770.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_fu_16024_p2.read()) + sc_biguint<32>(m_43_reg_25770.read()));
}

void sha256_transform::thread_add_ln40_132_fu_17061_p2() {
    add_ln40_132_fu_17061_p2 = (!xor_ln40_177_fu_17055_p2.read().is_01() || !xor_ln40_179_reg_25839.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_177_fu_17055_p2.read()) + sc_biguint<32>(xor_ln40_179_reg_25839.read()));
}

void sha256_transform::thread_add_ln40_133_fu_17066_p2() {
    add_ln40_133_fu_17066_p2 = (!m_53_reg_25924.read().is_01() || !m_44_reg_25877.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_25924.read()) + sc_biguint<32>(m_44_reg_25877.read()));
}

void sha256_transform::thread_add_ln40_135_fu_16440_p2() {
    add_ln40_135_fu_16440_p2 = (!xor_ln40_181_fu_16434_p2.read().is_01() || !xor_ln40_183_reg_25940.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_181_fu_16434_p2.read()) + sc_biguint<32>(xor_ln40_183_reg_25940.read()));
}

void sha256_transform::thread_add_ln40_136_fu_16445_p2() {
    add_ln40_136_fu_16445_p2 = (!m_54_fu_16109_p2.read().is_01() || !m_45_reg_25787.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_fu_16109_p2.read()) + sc_biguint<32>(m_45_reg_25787.read()));
}

void sha256_transform::thread_add_ln40_13_fu_7526_p2() {
    add_ln40_13_fu_7526_p2 = (!m_13_reg_24832.read().is_01() || !m_4_reg_24305_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_13_reg_24832.read()) + sc_biguint<32>(m_4_reg_24305_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_15_fu_8116_p2() {
    add_ln40_15_fu_8116_p2 = (!xor_ln40_21_reg_25123.read().is_01() || !xor_ln40_23_reg_24467_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_21_reg_25123.read()) + sc_biguint<32>(xor_ln40_23_reg_24467_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_16_fu_8120_p2() {
    add_ln40_16_fu_8120_p2 = (!m_14_reg_24838.read().is_01() || !m_5_reg_24417_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_14_reg_24838.read()) + sc_biguint<32>(m_5_reg_24417_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_18_fu_8691_p2() {
    add_ln40_18_fu_8691_p2 = (!xor_ln40_25_reg_25195.read().is_01() || !xor_ln40_27_reg_24472_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_25_reg_25195.read()) + sc_biguint<32>(xor_ln40_27_reg_24472_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_19_fu_8200_p2() {
    add_ln40_19_fu_8200_p2 = (!m_15_reg_24845.read().is_01() || !m_6_reg_24422_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_24845.read()) + sc_biguint<32>(m_6_reg_24422_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_1_fu_6318_p2() {
    add_ln40_1_fu_6318_p2 = (!m_9_reg_24622.read().is_01() || !m_0_reg_24123_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_24622.read()) + sc_biguint<32>(m_0_reg_24123_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_21_fu_8700_p2() {
    add_ln40_21_fu_8700_p2 = (!xor_ln40_29_reg_25205.read().is_01() || !xor_ln40_31_reg_24560_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_29_reg_25205.read()) + sc_biguint<32>(xor_ln40_31_reg_24560_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_22_fu_8704_p2() {
    add_ln40_22_fu_8704_p2 = (!m_16_reg_24974.read().is_01() || !m_7_reg_24510_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_24974.read()) + sc_biguint<32>(m_7_reg_24510_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_24_fu_9455_p2() {
    add_ln40_24_fu_9455_p2 = (!xor_ln40_33_reg_25265.read().is_01() || !xor_ln40_35_reg_24565_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_33_reg_25265.read()) + sc_biguint<32>(xor_ln40_35_reg_24565_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_25_fu_9459_p2() {
    add_ln40_25_fu_9459_p2 = (!m_17_reg_25028.read().is_01() || !m_8_reg_24515_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_25028.read()) + sc_biguint<32>(m_8_reg_24515_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_27_fu_10050_p2() {
    add_ln40_27_fu_10050_p2 = (!xor_ln40_37_reg_25270.read().is_01() || !xor_ln40_39_reg_24682_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_37_reg_25270.read()) + sc_biguint<32>(xor_ln40_39_reg_24682_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_28_fu_9469_p2() {
    add_ln40_28_fu_9469_p2 = (!m_18_reg_25034.read().is_01() || !m_9_reg_24622_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_25034.read()) + sc_biguint<32>(m_9_reg_24622_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_30_fu_10059_p2() {
    add_ln40_30_fu_10059_p2 = (!xor_ln40_41_reg_25348.read().is_01() || !xor_ln40_43_reg_24687_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_41_reg_25348.read()) + sc_biguint<32>(xor_ln40_43_reg_24687_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_31_fu_10063_p2() {
    add_ln40_31_fu_10063_p2 = (!m_19_reg_25112.read().is_01() || !m_10_reg_24628_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_25112.read()) + sc_biguint<32>(m_10_reg_24628_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_33_fu_10634_p2() {
    add_ln40_33_fu_10634_p2 = (!xor_ln40_45_reg_25420.read().is_01() || !xor_ln40_47_reg_24789_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_45_reg_25420.read()) + sc_biguint<32>(xor_ln40_47_reg_24789_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_34_fu_10143_p2() {
    add_ln40_34_fu_10143_p2 = (!m_20_reg_25183.read().is_01() || !m_11_reg_24635_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_25183.read()) + sc_biguint<32>(m_11_reg_24635_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_36_fu_10643_p2() {
    add_ln40_36_fu_10643_p2 = (!xor_ln40_49_reg_25430.read().is_01() || !xor_ln40_51_reg_24794_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_49_reg_25430.read()) + sc_biguint<32>(xor_ln40_51_reg_24794_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_37_fu_10647_p2() {
    add_ln40_37_fu_10647_p2 = (!m_21_reg_25189.read().is_01() || !m_12_reg_24742_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_25189.read()) + sc_biguint<32>(m_12_reg_24742_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_39_fu_10727_p2() {
    add_ln40_39_fu_10727_p2 = (!xor_ln40_53_fu_10721_p2.read().is_01() || !xor_ln40_55_reg_24862_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_53_fu_10721_p2.read()) + sc_biguint<32>(xor_ln40_55_reg_24862_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln40_3_fu_6748_p2() {
    add_ln40_3_fu_6748_p2 = (!xor_ln40_5_reg_24857.read().is_01() || !xor_ln40_7_reg_24262_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_5_reg_24857.read()) + sc_biguint<32>(xor_ln40_7_reg_24262_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_40_fu_10732_p2() {
    add_ln40_40_fu_10732_p2 = (!m_22_reg_25253.read().is_01() || !m_13_reg_24832_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_25253.read()) + sc_biguint<32>(m_13_reg_24832_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln40_42_fu_11557_p2() {
    add_ln40_42_fu_11557_p2 = (!xor_ln40_57_reg_25497.read().is_01() || !xor_ln40_59_reg_24867_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_57_reg_25497.read()) + sc_biguint<32>(xor_ln40_59_reg_24867_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln40_43_fu_11561_p2() {
    add_ln40_43_fu_11561_p2 = (!m_23_reg_25259.read().is_01() || !m_14_reg_24838_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_25259.read()) + sc_biguint<32>(m_14_reg_24838_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln40_45_fu_11571_p2() {
    add_ln40_45_fu_11571_p2 = (!xor_ln40_61_reg_25502.read().is_01() || !xor_ln40_63_reg_24990.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_61_reg_25502.read()) + sc_biguint<32>(xor_ln40_63_reg_24990.read()));
}

void sha256_transform::thread_add_ln40_46_fu_10882_p2() {
    add_ln40_46_fu_10882_p2 = (!m_24_reg_25337.read().is_01() || !m_15_reg_24845_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_24_reg_25337.read()) + sc_biguint<32>(m_15_reg_24845_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln40_48_fu_11650_p2() {
    add_ln40_48_fu_11650_p2 = (!xor_ln40_65_fu_11644_p2.read().is_01() || !xor_ln40_67_reg_25050.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_65_fu_11644_p2.read()) + sc_biguint<32>(xor_ln40_67_reg_25050.read()));
}

void sha256_transform::thread_add_ln40_49_fu_11655_p2() {
    add_ln40_49_fu_11655_p2 = (!m_25_reg_25408.read().is_01() || !m_16_reg_24974.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_reg_25408.read()) + sc_biguint<32>(m_16_reg_24974.read()));
}

void sha256_transform::thread_add_ln40_4_fu_6328_p2() {
    add_ln40_4_fu_6328_p2 = (!m_10_reg_24628.read().is_01() || !m_1_reg_24128_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_24628.read()) + sc_biguint<32>(m_1_reg_24128_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_51_fu_11735_p2() {
    add_ln40_51_fu_11735_p2 = (!xor_ln40_69_fu_11729_p2.read().is_01() || !xor_ln40_71_reg_25055.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_69_fu_11729_p2.read()) + sc_biguint<32>(xor_ln40_71_reg_25055.read()));
}

void sha256_transform::thread_add_ln40_52_fu_11740_p2() {
    add_ln40_52_fu_11740_p2 = (!m_26_reg_25414.read().is_01() || !m_17_reg_25028.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_reg_25414.read()) + sc_biguint<32>(m_17_reg_25028.read()));
}

void sha256_transform::thread_add_ln40_54_fu_11820_p2() {
    add_ln40_54_fu_11820_p2 = (!xor_ln40_73_fu_11814_p2.read().is_01() || !xor_ln40_75_reg_25128.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_73_fu_11814_p2.read()) + sc_biguint<32>(xor_ln40_75_reg_25128.read()));
}

void sha256_transform::thread_add_ln40_55_fu_11825_p2() {
    add_ln40_55_fu_11825_p2 = (!m_27_reg_25478.read().is_01() || !m_18_reg_25034.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_reg_25478.read()) + sc_biguint<32>(m_18_reg_25034.read()));
}

void sha256_transform::thread_add_ln40_57_fu_11905_p2() {
    add_ln40_57_fu_11905_p2 = (!xor_ln40_77_fu_11899_p2.read().is_01() || !xor_ln40_79_reg_25210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_77_fu_11899_p2.read()) + sc_biguint<32>(xor_ln40_79_reg_25210.read()));
}

void sha256_transform::thread_add_ln40_58_fu_11910_p2() {
    add_ln40_58_fu_11910_p2 = (!m_28_reg_25484.read().is_01() || !m_19_reg_25112.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_25484.read()) + sc_biguint<32>(m_19_reg_25112.read()));
}

void sha256_transform::thread_add_ln40_60_fu_13081_p2() {
    add_ln40_60_fu_13081_p2 = (!xor_ln40_81_reg_25619.read().is_01() || !xor_ln40_83_reg_25215.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_81_reg_25619.read()) + sc_biguint<32>(xor_ln40_83_reg_25215.read()));
}

void sha256_transform::thread_add_ln40_61_fu_11990_p2() {
    add_ln40_61_fu_11990_p2 = (!m_29_reg_25490.read().is_01() || !m_20_reg_25183.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_25490.read()) + sc_biguint<32>(m_20_reg_25183.read()));
}

void sha256_transform::thread_add_ln40_63_fu_12064_p2() {
    add_ln40_63_fu_12064_p2 = (!xor_ln40_85_fu_12058_p2.read().is_01() || !xor_ln40_87_reg_25275.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_85_fu_12058_p2.read()) + sc_biguint<32>(xor_ln40_87_reg_25275.read()));
}

void sha256_transform::thread_add_ln40_64_fu_12069_p2() {
    add_ln40_64_fu_12069_p2 = (!m_30_fu_11565_p2.read().is_01() || !m_21_reg_25189.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_fu_11565_p2.read()) + sc_biguint<32>(m_21_reg_25189.read()));
}

void sha256_transform::thread_add_ln40_66_fu_13160_p2() {
    add_ln40_66_fu_13160_p2 = (!xor_ln40_89_fu_13154_p2.read().is_01() || !xor_ln40_91_reg_25280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_89_fu_13154_p2.read()) + sc_biguint<32>(xor_ln40_91_reg_25280.read()));
}

void sha256_transform::thread_add_ln40_67_fu_13165_p2() {
    add_ln40_67_fu_13165_p2 = (!m_31_reg_25585.read().is_01() || !m_22_reg_25253.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_25585.read()) + sc_biguint<32>(m_22_reg_25253.read()));
}

void sha256_transform::thread_add_ln40_69_fu_13175_p2() {
    add_ln40_69_fu_13175_p2 = (!xor_ln40_93_reg_25636.read().is_01() || !xor_ln40_95_reg_25353.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_93_reg_25636.read()) + sc_biguint<32>(xor_ln40_95_reg_25353.read()));
}

void sha256_transform::thread_add_ln40_6_fu_6757_p2() {
    add_ln40_6_fu_6757_p2 = (!xor_ln40_9_reg_24985.read().is_01() || !xor_ln40_11_reg_24267_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_9_reg_24985.read()) + sc_biguint<32>(xor_ln40_11_reg_24267_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_70_fu_12150_p2() {
    add_ln40_70_fu_12150_p2 = (!m_32_fu_11659_p2.read().is_01() || !m_23_reg_25259.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_fu_11659_p2.read()) + sc_biguint<32>(m_23_reg_25259.read()));
}

void sha256_transform::thread_add_ln40_72_fu_13254_p2() {
    add_ln40_72_fu_13254_p2 = (!xor_ln40_97_fu_13248_p2.read().is_01() || !xor_ln40_99_reg_25435.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_97_fu_13248_p2.read()) + sc_biguint<32>(xor_ln40_99_reg_25435.read()));
}

void sha256_transform::thread_add_ln40_73_fu_13259_p2() {
    add_ln40_73_fu_13259_p2 = (!m_33_reg_25598.read().is_01() || !m_24_reg_25337.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_25598.read()) + sc_biguint<32>(m_24_reg_25337.read()));
}

void sha256_transform::thread_add_ln40_75_fu_13339_p2() {
    add_ln40_75_fu_13339_p2 = (!xor_ln40_101_fu_13333_p2.read().is_01() || !xor_ln40_103_reg_25440.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_101_fu_13333_p2.read()) + sc_biguint<32>(xor_ln40_103_reg_25440.read()));
}

void sha256_transform::thread_add_ln40_76_fu_13344_p2() {
    add_ln40_76_fu_13344_p2 = (!m_34_reg_25605.read().is_01() || !m_25_reg_25408.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_25605.read()) + sc_biguint<32>(m_25_reg_25408.read()));
}

void sha256_transform::thread_add_ln40_78_fu_13424_p2() {
    add_ln40_78_fu_13424_p2 = (!xor_ln40_105_fu_13418_p2.read().is_01() || !xor_ln40_107_reg_25512.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_105_fu_13418_p2.read()) + sc_biguint<32>(xor_ln40_107_reg_25512.read()));
}

void sha256_transform::thread_add_ln40_79_fu_13429_p2() {
    add_ln40_79_fu_13429_p2 = (!m_35_reg_25612.read().is_01() || !m_26_reg_25414.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_25612.read()) + sc_biguint<32>(m_26_reg_25414.read()));
}

void sha256_transform::thread_add_ln40_7_fu_6761_p2() {
    add_ln40_7_fu_6761_p2 = (!m_11_reg_24635.read().is_01() || !m_2_reg_24212_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_24635.read()) + sc_biguint<32>(m_2_reg_24212_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_81_fu_13509_p2() {
    add_ln40_81_fu_13509_p2 = (!xor_ln40_109_fu_13503_p2.read().is_01() || !xor_ln40_111_reg_25517.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_109_fu_13503_p2.read()) + sc_biguint<32>(xor_ln40_111_reg_25517.read()));
}

void sha256_transform::thread_add_ln40_82_fu_13514_p2() {
    add_ln40_82_fu_13514_p2 = (!m_36_fu_13085_p2.read().is_01() || !m_27_reg_25478.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_fu_13085_p2.read()) + sc_biguint<32>(m_27_reg_25478.read()));
}

void sha256_transform::thread_add_ln40_84_fu_14595_p2() {
    add_ln40_84_fu_14595_p2 = (!xor_ln40_113_reg_25777.read().is_01() || !xor_ln40_115_reg_25522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_113_reg_25777.read()) + sc_biguint<32>(xor_ln40_115_reg_25522.read()));
}

void sha256_transform::thread_add_ln40_85_fu_13595_p2() {
    add_ln40_85_fu_13595_p2 = (!m_37_reg_25629.read().is_01() || !m_28_reg_25484.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_25629.read()) + sc_biguint<32>(m_28_reg_25484.read()));
}

void sha256_transform::thread_add_ln40_87_fu_13669_p2() {
    add_ln40_87_fu_13669_p2 = (!xor_ln40_117_fu_13663_p2.read().is_01() || !xor_ln40_119_reg_25646.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_117_fu_13663_p2.read()) + sc_biguint<32>(xor_ln40_119_reg_25646.read()));
}

void sha256_transform::thread_add_ln40_88_fu_13674_p2() {
    add_ln40_88_fu_13674_p2 = (!m_38_fu_13169_p2.read().is_01() || !m_29_reg_25490.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_fu_13169_p2.read()) + sc_biguint<32>(m_29_reg_25490.read()));
}

void sha256_transform::thread_add_ln40_90_fu_14674_p2() {
    add_ln40_90_fu_14674_p2 = (!xor_ln40_121_fu_14668_p2.read().is_01() || !xor_ln40_123_reg_25651.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_121_fu_14668_p2.read()) + sc_biguint<32>(xor_ln40_123_reg_25651.read()));
}

void sha256_transform::thread_add_ln40_91_fu_14679_p2() {
    add_ln40_91_fu_14679_p2 = (!m_39_reg_25743.read().is_01() || !m_30_reg_25579.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_reg_25743.read()) + sc_biguint<32>(m_30_reg_25579.read()));
}

void sha256_transform::thread_add_ln40_93_fu_14689_p2() {
    add_ln40_93_fu_14689_p2 = (!xor_ln40_125_reg_25794.read().is_01() || !xor_ln40_127_reg_25656.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_125_reg_25794.read()) + sc_biguint<32>(xor_ln40_127_reg_25656.read()));
}

void sha256_transform::thread_add_ln40_94_fu_13755_p2() {
    add_ln40_94_fu_13755_p2 = (!m_40_fu_13263_p2.read().is_01() || !m_31_reg_25585.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_fu_13263_p2.read()) + sc_biguint<32>(m_31_reg_25585.read()));
}

void sha256_transform::thread_add_ln40_96_fu_14768_p2() {
    add_ln40_96_fu_14768_p2 = (!xor_ln40_129_fu_14762_p2.read().is_01() || !xor_ln40_131_reg_25661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_129_fu_14762_p2.read()) + sc_biguint<32>(xor_ln40_131_reg_25661.read()));
}

void sha256_transform::thread_add_ln40_97_fu_14773_p2() {
    add_ln40_97_fu_14773_p2 = (!m_41_reg_25756.read().is_01() || !m_32_reg_25592.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_reg_25756.read()) + sc_biguint<32>(m_32_reg_25592.read()));
}

void sha256_transform::thread_add_ln40_99_fu_14853_p2() {
    add_ln40_99_fu_14853_p2 = (!xor_ln40_133_fu_14847_p2.read().is_01() || !xor_ln40_135_reg_25666.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_133_fu_14847_p2.read()) + sc_biguint<32>(xor_ln40_135_reg_25666.read()));
}

void sha256_transform::thread_add_ln40_9_fu_7512_p2() {
    add_ln40_9_fu_7512_p2 = (!xor_ln40_13_reg_25040.read().is_01() || !xor_ln40_15_reg_24350_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_13_reg_25040.read()) + sc_biguint<32>(xor_ln40_15_reg_24350_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_fu_6314_p2() {
    add_ln40_fu_6314_p2 = (!xor_ln40_1_reg_24852.read().is_01() || !xor_ln40_3_reg_24173_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_1_reg_24852.read()) + sc_biguint<32>(xor_ln40_3_reg_24173_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln53_100_fu_10406_p2() {
    add_ln53_100_fu_10406_p2 = (!ap_const_lv32_A831C66D.is_01() || !xor_ln53_101_reg_25403.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_A831C66D) + sc_biguint<32>(xor_ln53_101_reg_25403.read()));
}

void sha256_transform::thread_add_ln53_101_fu_10411_p2() {
    add_ln53_101_fu_10411_p2 = (!xor_ln53_103_fu_10400_p2.read().is_01() || !m_25_fu_10054_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_103_fu_10400_p2.read()) + sc_biguint<32>(m_25_fu_10054_p2.read()));
}

void sha256_transform::thread_add_ln53_102_fu_10417_p2() {
    add_ln53_102_fu_10417_p2 = (!add_ln53_101_fu_10411_p2.read().is_01() || !add_ln58_21_reg_25294.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_101_fu_10411_p2.read()) + sc_biguint<32>(add_ln58_21_reg_25294.read()));
}

void sha256_transform::thread_add_ln53_103_fu_10422_p2() {
    add_ln53_103_fu_10422_p2 = (!add_ln53_102_fu_10417_p2.read().is_01() || !add_ln53_100_fu_10406_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_102_fu_10417_p2.read()) + sc_biguint<32>(add_ln53_100_fu_10406_p2.read()));
}

void sha256_transform::thread_add_ln53_104_fu_10611_p2() {
    add_ln53_104_fu_10611_p2 = (!ap_const_lv32_B00327C8.is_01() || !xor_ln53_105_fu_10583_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_B00327C8) + sc_biguint<32>(xor_ln53_105_fu_10583_p2.read()));
}

void sha256_transform::thread_add_ln53_105_fu_10617_p2() {
    add_ln53_105_fu_10617_p2 = (!xor_ln53_107_fu_10605_p2.read().is_01() || !m_26_fu_10067_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_107_fu_10605_p2.read()) + sc_biguint<32>(m_26_fu_10067_p2.read()));
}

void sha256_transform::thread_add_ln53_106_fu_10623_p2() {
    add_ln53_106_fu_10623_p2 = (!add_ln53_105_fu_10617_p2.read().is_01() || !add_ln58_22_reg_25320.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_105_fu_10617_p2.read()) + sc_biguint<32>(add_ln58_22_reg_25320.read()));
}

void sha256_transform::thread_add_ln53_107_fu_10628_p2() {
    add_ln53_107_fu_10628_p2 = (!add_ln53_106_fu_10623_p2.read().is_01() || !add_ln53_104_fu_10611_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_106_fu_10623_p2.read()) + sc_biguint<32>(add_ln53_104_fu_10611_p2.read()));
}

void sha256_transform::thread_add_ln53_108_fu_11338_p2() {
    add_ln53_108_fu_11338_p2 = (!ap_const_lv32_BF597FC7.is_01() || !xor_ln53_109_fu_11310_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_BF597FC7) + sc_biguint<32>(xor_ln53_109_fu_11310_p2.read()));
}

void sha256_transform::thread_add_ln53_109_fu_11344_p2() {
    add_ln53_109_fu_11344_p2 = (!xor_ln53_111_fu_11332_p2.read().is_01() || !m_27_fu_10638_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_111_fu_11332_p2.read()) + sc_biguint<32>(m_27_fu_10638_p2.read()));
}

void sha256_transform::thread_add_ln53_10_fu_1659_p2() {
    add_ln53_10_fu_1659_p2 = (!ctx_state_5_read_1_reg_24105.read().is_01() || !add_ln53_9_fu_1653_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_5_read_1_reg_24105.read()) + sc_biguint<32>(add_ln53_9_fu_1653_p2.read()));
}

void sha256_transform::thread_add_ln53_110_fu_11350_p2() {
    add_ln53_110_fu_11350_p2 = (!add_ln53_109_fu_11344_p2.read().is_01() || !add_ln58_23_reg_25367.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_109_fu_11344_p2.read()) + sc_biguint<32>(add_ln58_23_reg_25367.read()));
}

void sha256_transform::thread_add_ln53_111_fu_11355_p2() {
    add_ln53_111_fu_11355_p2 = (!add_ln53_110_fu_11350_p2.read().is_01() || !add_ln53_108_fu_11338_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_110_fu_11350_p2.read()) + sc_biguint<32>(add_ln53_108_fu_11338_p2.read()));
}

void sha256_transform::thread_add_ln53_112_fu_12674_p2() {
    add_ln53_112_fu_12674_p2 = (!xor_ln53_113_reg_25569.read().is_01() || !add_ln58_24_reg_25394.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_113_reg_25569.read()) + sc_biguint<32>(add_ln58_24_reg_25394.read()));
}

void sha256_transform::thread_add_ln53_113_fu_11545_p2() {
    add_ln53_113_fu_11545_p2 = (!ap_const_lv32_C6E00BF3.is_01() || !m_28_fu_10651_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C6E00BF3) + sc_biguint<32>(m_28_fu_10651_p2.read()));
}

void sha256_transform::thread_add_ln53_114_fu_11551_p2() {
    add_ln53_114_fu_11551_p2 = (!add_ln53_113_fu_11545_p2.read().is_01() || !xor_ln53_115_fu_11539_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_113_fu_11545_p2.read()) + sc_biguint<32>(xor_ln53_115_fu_11539_p2.read()));
}

void sha256_transform::thread_add_ln53_115_fu_12678_p2() {
    add_ln53_115_fu_12678_p2 = (!add_ln53_114_reg_25574.read().is_01() || !add_ln53_112_fu_12674_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_114_reg_25574.read()) + sc_biguint<32>(add_ln53_112_fu_12674_p2.read()));
}

void sha256_transform::thread_add_ln53_116_fu_12898_p2() {
    add_ln53_116_fu_12898_p2 = (!xor_ln53_117_fu_12870_p2.read().is_01() || !add_ln58_25_reg_25465.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_117_fu_12870_p2.read()) + sc_biguint<32>(add_ln58_25_reg_25465.read()));
}

void sha256_transform::thread_add_ln53_117_fu_12903_p2() {
    add_ln53_117_fu_12903_p2 = (!ap_const_lv32_D5A79147.is_01() || !m_29_reg_25490.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_D5A79147) + sc_biguint<32>(m_29_reg_25490.read()));
}

void sha256_transform::thread_add_ln53_118_fu_12908_p2() {
    add_ln53_118_fu_12908_p2 = (!add_ln53_117_fu_12903_p2.read().is_01() || !xor_ln53_119_fu_12892_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_117_fu_12903_p2.read()) + sc_biguint<32>(xor_ln53_119_fu_12892_p2.read()));
}

void sha256_transform::thread_add_ln53_119_fu_12914_p2() {
    add_ln53_119_fu_12914_p2 = (!add_ln53_118_fu_12908_p2.read().is_01() || !add_ln53_116_fu_12898_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_118_fu_12908_p2.read()) + sc_biguint<32>(add_ln53_116_fu_12898_p2.read()));
}

void sha256_transform::thread_add_ln53_11_fu_1664_p2() {
    add_ln53_11_fu_1664_p2 = (!add_ln53_10_fu_1659_p2.read().is_01() || !add_ln53_8_fu_1647_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_10_fu_1659_p2.read()) + sc_biguint<32>(add_ln53_8_fu_1647_p2.read()));
}

void sha256_transform::thread_add_ln53_120_fu_14369_p2() {
    add_ln53_120_fu_14369_p2 = (!xor_ln53_121_reg_25726.read().is_01() || !add_ln58_26_reg_25536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_121_reg_25726.read()) + sc_biguint<32>(add_ln58_26_reg_25536.read()));
}

void sha256_transform::thread_add_ln53_121_fu_14373_p2() {
    add_ln53_121_fu_14373_p2 = (!ap_const_lv32_6CA6351.is_01() || !m_30_reg_25579.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_6CA6351) + sc_biguint<32>(m_30_reg_25579.read()));
}

void sha256_transform::thread_add_ln53_122_fu_14378_p2() {
    add_ln53_122_fu_14378_p2 = (!add_ln53_121_fu_14373_p2.read().is_01() || !xor_ln53_123_fu_14363_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_121_fu_14373_p2.read()) + sc_biguint<32>(xor_ln53_123_fu_14363_p2.read()));
}

void sha256_transform::thread_add_ln53_123_fu_14384_p2() {
    add_ln53_123_fu_14384_p2 = (!add_ln53_122_fu_14378_p2.read().is_01() || !add_ln53_120_fu_14369_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_122_fu_14378_p2.read()) + sc_biguint<32>(add_ln53_120_fu_14369_p2.read()));
}

void sha256_transform::thread_add_ln53_124_fu_14573_p2() {
    add_ln53_124_fu_14573_p2 = (!xor_ln53_125_fu_14545_p2.read().is_01() || !add_ln58_27_reg_25562.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_125_fu_14545_p2.read()) + sc_biguint<32>(add_ln58_27_reg_25562.read()));
}

void sha256_transform::thread_add_ln53_125_fu_14578_p2() {
    add_ln53_125_fu_14578_p2 = (!ap_const_lv32_14292967.is_01() || !m_31_reg_25585.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_14292967) + sc_biguint<32>(m_31_reg_25585.read()));
}

void sha256_transform::thread_add_ln53_126_fu_14583_p2() {
    add_ln53_126_fu_14583_p2 = (!add_ln53_125_fu_14578_p2.read().is_01() || !xor_ln53_127_fu_14567_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_125_fu_14578_p2.read()) + sc_biguint<32>(xor_ln53_127_fu_14567_p2.read()));
}

void sha256_transform::thread_add_ln53_127_fu_14589_p2() {
    add_ln53_127_fu_14589_p2 = (!add_ln53_126_fu_14583_p2.read().is_01() || !add_ln53_124_fu_14573_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_126_fu_14583_p2.read()) + sc_biguint<32>(add_ln53_124_fu_14573_p2.read()));
}

void sha256_transform::thread_add_ln53_128_fu_15787_p2() {
    add_ln53_128_fu_15787_p2 = (!xor_ln53_129_fu_15759_p2.read().is_01() || !add_ln58_28_reg_25690.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_129_fu_15759_p2.read()) + sc_biguint<32>(add_ln58_28_reg_25690.read()));
}

void sha256_transform::thread_add_ln53_129_fu_15792_p2() {
    add_ln53_129_fu_15792_p2 = (!ap_const_lv32_27B70A85.is_01() || !m_32_reg_25592.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_27B70A85) + sc_biguint<32>(m_32_reg_25592.read()));
}

void sha256_transform::thread_add_ln53_12_fu_2318_p2() {
    add_ln53_12_fu_2318_p2 = (!ctx_state_4_read_1_reg_24111.read().is_01() || !xor_ln53_13_reg_24290.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_4_read_1_reg_24111.read()) + sc_biguint<32>(xor_ln53_13_reg_24290.read()));
}

void sha256_transform::thread_add_ln53_130_fu_15797_p2() {
    add_ln53_130_fu_15797_p2 = (!add_ln53_129_fu_15792_p2.read().is_01() || !xor_ln53_131_fu_15781_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_129_fu_15792_p2.read()) + sc_biguint<32>(xor_ln53_131_fu_15781_p2.read()));
}

void sha256_transform::thread_add_ln53_131_fu_15803_p2() {
    add_ln53_131_fu_15803_p2 = (!add_ln53_130_fu_15797_p2.read().is_01() || !add_ln53_128_fu_15787_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_130_fu_15797_p2.read()) + sc_biguint<32>(add_ln53_128_fu_15787_p2.read()));
}

void sha256_transform::thread_add_ln53_132_fu_16485_p2() {
    add_ln53_132_fu_16485_p2 = (!xor_ln53_133_reg_25987.read().is_01() || !add_ln58_29_reg_25717.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_133_reg_25987.read()) + sc_biguint<32>(add_ln58_29_reg_25717.read()));
}

void sha256_transform::thread_add_ln53_133_fu_15993_p2() {
    add_ln53_133_fu_15993_p2 = (!ap_const_lv32_2E1B2138.is_01() || !m_33_reg_25598.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2E1B2138) + sc_biguint<32>(m_33_reg_25598.read()));
}

void sha256_transform::thread_add_ln53_134_fu_15998_p2() {
    add_ln53_134_fu_15998_p2 = (!add_ln53_133_fu_15993_p2.read().is_01() || !xor_ln53_135_fu_15987_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_133_fu_15993_p2.read()) + sc_biguint<32>(xor_ln53_135_fu_15987_p2.read()));
}

void sha256_transform::thread_add_ln53_135_fu_16489_p2() {
    add_ln53_135_fu_16489_p2 = (!add_ln53_134_reg_25992.read().is_01() || !add_ln53_132_fu_16485_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_134_reg_25992.read()) + sc_biguint<32>(add_ln53_132_fu_16485_p2.read()));
}

void sha256_transform::thread_add_ln53_136_fu_16709_p2() {
    add_ln53_136_fu_16709_p2 = (!xor_ln53_137_fu_16681_p2.read().is_01() || !add_ln58_30_reg_25864.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_137_fu_16681_p2.read()) + sc_biguint<32>(add_ln58_30_reg_25864.read()));
}

void sha256_transform::thread_add_ln53_137_fu_16714_p2() {
    add_ln53_137_fu_16714_p2 = (!ap_const_lv32_4D2C6DFC.is_01() || !m_34_reg_25605.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_4D2C6DFC) + sc_biguint<32>(m_34_reg_25605.read()));
}

void sha256_transform::thread_add_ln53_138_fu_16719_p2() {
    add_ln53_138_fu_16719_p2 = (!add_ln53_137_fu_16714_p2.read().is_01() || !xor_ln53_139_fu_16703_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_137_fu_16714_p2.read()) + sc_biguint<32>(xor_ln53_139_fu_16703_p2.read()));
}

void sha256_transform::thread_add_ln53_139_fu_16725_p2() {
    add_ln53_139_fu_16725_p2 = (!add_ln53_138_fu_16719_p2.read().is_01() || !add_ln53_136_fu_16709_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_138_fu_16719_p2.read()) + sc_biguint<32>(add_ln53_136_fu_16709_p2.read()));
}

void sha256_transform::thread_add_ln53_13_fu_1777_p2() {
    add_ln53_13_fu_1777_p2 = (!ap_const_lv32_E9B5DBA5.is_01() || !m_3_fu_1346_p5.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_E9B5DBA5) + sc_biguint<32>(m_3_fu_1346_p5.read()));
}

void sha256_transform::thread_add_ln53_140_fu_17195_p2() {
    add_ln53_140_fu_17195_p2 = (!xor_ln53_141_reg_26093.read().is_01() || !add_ln58_31_reg_25954.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_141_reg_26093.read()) + sc_biguint<32>(add_ln58_31_reg_25954.read()));
}

void sha256_transform::thread_add_ln53_141_fu_17199_p2() {
    add_ln53_141_fu_17199_p2 = (!ap_const_lv32_53380D13.is_01() || !m_35_reg_25612.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_53380D13) + sc_biguint<32>(m_35_reg_25612.read()));
}

void sha256_transform::thread_add_ln53_142_fu_17204_p2() {
    add_ln53_142_fu_17204_p2 = (!add_ln53_141_fu_17199_p2.read().is_01() || !xor_ln53_143_fu_17189_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_141_fu_17199_p2.read()) + sc_biguint<32>(xor_ln53_143_fu_17189_p2.read()));
}

void sha256_transform::thread_add_ln53_143_fu_17210_p2() {
    add_ln53_143_fu_17210_p2 = (!add_ln53_142_fu_17204_p2.read().is_01() || !add_ln53_140_fu_17195_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_142_fu_17204_p2.read()) + sc_biguint<32>(add_ln53_140_fu_17195_p2.read()));
}

void sha256_transform::thread_add_ln53_144_fu_17399_p2() {
    add_ln53_144_fu_17399_p2 = (!xor_ln53_145_fu_17371_p2.read().is_01() || !add_ln58_32_reg_25980.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_145_fu_17371_p2.read()) + sc_biguint<32>(add_ln58_32_reg_25980.read()));
}

void sha256_transform::thread_add_ln53_145_fu_17404_p2() {
    add_ln53_145_fu_17404_p2 = (!ap_const_lv32_650A7354.is_01() || !m_36_reg_25731.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_650A7354) + sc_biguint<32>(m_36_reg_25731.read()));
}

void sha256_transform::thread_add_ln53_146_fu_17409_p2() {
    add_ln53_146_fu_17409_p2 = (!add_ln53_145_fu_17404_p2.read().is_01() || !xor_ln53_147_fu_17393_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_145_fu_17404_p2.read()) + sc_biguint<32>(xor_ln53_147_fu_17393_p2.read()));
}

void sha256_transform::thread_add_ln53_147_fu_17415_p2() {
    add_ln53_147_fu_17415_p2 = (!add_ln53_146_fu_17409_p2.read().is_01() || !add_ln53_144_fu_17399_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_146_fu_17409_p2.read()) + sc_biguint<32>(add_ln53_144_fu_17399_p2.read()));
}

void sha256_transform::thread_add_ln53_148_fu_17673_p2() {
    add_ln53_148_fu_17673_p2 = (!xor_ln53_149_fu_17645_p2.read().is_01() || !add_ln58_33_reg_26057.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_149_fu_17645_p2.read()) + sc_biguint<32>(add_ln58_33_reg_26057.read()));
}

void sha256_transform::thread_add_ln53_149_fu_17678_p2() {
    add_ln53_149_fu_17678_p2 = (!ap_const_lv32_766A0ABB.is_01() || !m_37_reg_25629.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_766A0ABB) + sc_biguint<32>(m_37_reg_25629.read()));
}

void sha256_transform::thread_add_ln53_14_fu_1783_p2() {
    add_ln53_14_fu_1783_p2 = (!add_ln53_13_fu_1777_p2.read().is_01() || !xor_ln53_15_fu_1771_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_13_fu_1777_p2.read()) + sc_biguint<32>(xor_ln53_15_fu_1771_p2.read()));
}

void sha256_transform::thread_add_ln53_150_fu_17683_p2() {
    add_ln53_150_fu_17683_p2 = (!add_ln53_149_fu_17678_p2.read().is_01() || !xor_ln53_151_fu_17667_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_149_fu_17678_p2.read()) + sc_biguint<32>(xor_ln53_151_fu_17667_p2.read()));
}

void sha256_transform::thread_add_ln53_151_fu_17689_p2() {
    add_ln53_151_fu_17689_p2 = (!add_ln53_150_fu_17683_p2.read().is_01() || !add_ln53_148_fu_17673_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_150_fu_17683_p2.read()) + sc_biguint<32>(add_ln53_148_fu_17673_p2.read()));
}

void sha256_transform::thread_add_ln53_152_fu_17918_p2() {
    add_ln53_152_fu_17918_p2 = (!ap_const_lv32_81C2C92E.is_01() || !xor_ln53_153_reg_26194.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_81C2C92E) + sc_biguint<32>(xor_ln53_153_reg_26194.read()));
}

void sha256_transform::thread_add_ln53_153_fu_17879_p2() {
    add_ln53_153_fu_17879_p2 = (!xor_ln53_155_fu_17873_p2.read().is_01() || !m_38_reg_25737.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_155_fu_17873_p2.read()) + sc_biguint<32>(m_38_reg_25737.read()));
}

void sha256_transform::thread_add_ln53_154_fu_17884_p2() {
    add_ln53_154_fu_17884_p2 = (!add_ln53_153_fu_17879_p2.read().is_01() || !add_ln58_34_reg_26084.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_153_fu_17879_p2.read()) + sc_biguint<32>(add_ln58_34_reg_26084.read()));
}

void sha256_transform::thread_add_ln53_155_fu_17923_p2() {
    add_ln53_155_fu_17923_p2 = (!add_ln53_154_reg_26199.read().is_01() || !add_ln53_152_fu_17918_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_154_reg_26199.read()) + sc_biguint<32>(add_ln53_152_fu_17918_p2.read()));
}

void sha256_transform::thread_add_ln53_156_fu_18143_p2() {
    add_ln53_156_fu_18143_p2 = (!ap_const_lv32_92722C85.is_01() || !xor_ln53_157_fu_18115_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_92722C85) + sc_biguint<32>(xor_ln53_157_fu_18115_p2.read()));
}

void sha256_transform::thread_add_ln53_157_fu_18149_p2() {
    add_ln53_157_fu_18149_p2 = (!xor_ln53_159_fu_18137_p2.read().is_01() || !m_39_reg_25743.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_159_fu_18137_p2.read()) + sc_biguint<32>(m_39_reg_25743.read()));
}

void sha256_transform::thread_add_ln53_158_fu_18154_p2() {
    add_ln53_158_fu_18154_p2 = (!add_ln53_157_fu_18149_p2.read().is_01() || !add_ln58_35_reg_26134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_157_fu_18149_p2.read()) + sc_biguint<32>(add_ln58_35_reg_26134.read()));
}

void sha256_transform::thread_add_ln53_159_fu_18159_p2() {
    add_ln53_159_fu_18159_p2 = (!add_ln53_158_fu_18154_p2.read().is_01() || !add_ln53_156_fu_18143_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_158_fu_18154_p2.read()) + sc_biguint<32>(add_ln53_156_fu_18143_p2.read()));
}

void sha256_transform::thread_add_ln53_15_fu_2322_p2() {
    add_ln53_15_fu_2322_p2 = (!add_ln53_14_reg_24295.read().is_01() || !add_ln53_12_fu_2318_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_14_reg_24295.read()) + sc_biguint<32>(add_ln53_12_fu_2318_p2.read()));
}

void sha256_transform::thread_add_ln53_160_fu_18375_p2() {
    add_ln53_160_fu_18375_p2 = (!ap_const_lv32_A2BFE8A1.is_01() || !xor_ln53_161_reg_26249.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_A2BFE8A1) + sc_biguint<32>(xor_ln53_161_reg_26249.read()));
}

void sha256_transform::thread_add_ln53_161_fu_18380_p2() {
    add_ln53_161_fu_18380_p2 = (!xor_ln53_163_fu_18369_p2.read().is_01() || !m_40_reg_25750.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_163_fu_18369_p2.read()) + sc_biguint<32>(m_40_reg_25750.read()));
}

void sha256_transform::thread_add_ln53_162_fu_18385_p2() {
    add_ln53_162_fu_18385_p2 = (!add_ln53_161_fu_18380_p2.read().is_01() || !add_ln58_36_reg_26161.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_161_fu_18380_p2.read()) + sc_biguint<32>(add_ln58_36_reg_26161.read()));
}

void sha256_transform::thread_add_ln53_163_fu_18390_p2() {
    add_ln53_163_fu_18390_p2 = (!add_ln53_162_fu_18385_p2.read().is_01() || !add_ln53_160_fu_18375_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_162_fu_18385_p2.read()) + sc_biguint<32>(add_ln53_160_fu_18375_p2.read()));
}

void sha256_transform::thread_add_ln53_164_fu_18579_p2() {
    add_ln53_164_fu_18579_p2 = (!ap_const_lv32_A81A664B.is_01() || !xor_ln53_165_fu_18551_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_A81A664B) + sc_biguint<32>(xor_ln53_165_fu_18551_p2.read()));
}

void sha256_transform::thread_add_ln53_165_fu_18585_p2() {
    add_ln53_165_fu_18585_p2 = (!xor_ln53_167_fu_18573_p2.read().is_01() || !m_41_reg_25756.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_167_fu_18573_p2.read()) + sc_biguint<32>(m_41_reg_25756.read()));
}

void sha256_transform::thread_add_ln53_166_fu_18590_p2() {
    add_ln53_166_fu_18590_p2 = (!add_ln53_165_fu_18585_p2.read().is_01() || !add_ln58_37_reg_26187.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_165_fu_18585_p2.read()) + sc_biguint<32>(add_ln58_37_reg_26187.read()));
}

void sha256_transform::thread_add_ln53_167_fu_18595_p2() {
    add_ln53_167_fu_18595_p2 = (!add_ln53_166_fu_18590_p2.read().is_01() || !add_ln53_164_fu_18579_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_166_fu_18590_p2.read()) + sc_biguint<32>(add_ln53_164_fu_18579_p2.read()));
}

void sha256_transform::thread_add_ln53_168_fu_18843_p2() {
    add_ln53_168_fu_18843_p2 = (!xor_ln53_169_fu_18815_p2.read().is_01() || !add_ln58_38_reg_26213.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_169_fu_18815_p2.read()) + sc_biguint<32>(add_ln58_38_reg_26213.read()));
}

void sha256_transform::thread_add_ln53_169_fu_18848_p2() {
    add_ln53_169_fu_18848_p2 = (!ap_const_lv32_C24B8B70.is_01() || !m_42_reg_25763.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C24B8B70) + sc_biguint<32>(m_42_reg_25763.read()));
}

void sha256_transform::thread_add_ln53_16_fu_2547_p2() {
    add_ln53_16_fu_2547_p2 = (!xor_ln53_17_fu_2519_p2.read().is_01() || !add_ln58_reg_24183.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_17_fu_2519_p2.read()) + sc_biguint<32>(add_ln58_reg_24183.read()));
}

void sha256_transform::thread_add_ln53_170_fu_18853_p2() {
    add_ln53_170_fu_18853_p2 = (!add_ln53_169_fu_18848_p2.read().is_01() || !xor_ln53_171_fu_18837_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_169_fu_18848_p2.read()) + sc_biguint<32>(xor_ln53_171_fu_18837_p2.read()));
}

void sha256_transform::thread_add_ln53_171_fu_18859_p2() {
    add_ln53_171_fu_18859_p2 = (!add_ln53_170_fu_18853_p2.read().is_01() || !add_ln53_168_fu_18843_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_170_fu_18853_p2.read()) + sc_biguint<32>(add_ln53_168_fu_18843_p2.read()));
}

void sha256_transform::thread_add_ln53_172_fu_19089_p2() {
    add_ln53_172_fu_19089_p2 = (!xor_ln53_173_reg_26329.read().is_01() || !add_ln58_39_reg_26240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_173_reg_26329.read()) + sc_biguint<32>(add_ln58_39_reg_26240.read()));
}

void sha256_transform::thread_add_ln53_173_fu_19049_p2() {
    add_ln53_173_fu_19049_p2 = (!ap_const_lv32_C76C51A3.is_01() || !m_43_reg_25770.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C76C51A3) + sc_biguint<32>(m_43_reg_25770.read()));
}

void sha256_transform::thread_add_ln53_174_fu_19054_p2() {
    add_ln53_174_fu_19054_p2 = (!add_ln53_173_fu_19049_p2.read().is_01() || !xor_ln53_175_fu_19043_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_173_fu_19049_p2.read()) + sc_biguint<32>(xor_ln53_175_fu_19043_p2.read()));
}

void sha256_transform::thread_add_ln53_175_fu_19093_p2() {
    add_ln53_175_fu_19093_p2 = (!add_ln53_174_reg_26334.read().is_01() || !add_ln53_172_fu_19089_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_174_reg_26334.read()) + sc_biguint<32>(add_ln53_172_fu_19089_p2.read()));
}

void sha256_transform::thread_add_ln53_176_fu_19313_p2() {
    add_ln53_176_fu_19313_p2 = (!xor_ln53_177_fu_19285_p2.read().is_01() || !add_ln58_40_reg_26274.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_177_fu_19285_p2.read()) + sc_biguint<32>(add_ln58_40_reg_26274.read()));
}

void sha256_transform::thread_add_ln53_177_fu_19318_p2() {
    add_ln53_177_fu_19318_p2 = (!ap_const_lv32_D192E819.is_01() || !m_44_reg_25877.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_D192E819) + sc_biguint<32>(m_44_reg_25877.read()));
}

void sha256_transform::thread_add_ln53_178_fu_19323_p2() {
    add_ln53_178_fu_19323_p2 = (!add_ln53_177_fu_19318_p2.read().is_01() || !xor_ln53_179_fu_19307_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_177_fu_19318_p2.read()) + sc_biguint<32>(xor_ln53_179_fu_19307_p2.read()));
}

void sha256_transform::thread_add_ln53_179_fu_19329_p2() {
    add_ln53_179_fu_19329_p2 = (!add_ln53_178_fu_19323_p2.read().is_01() || !add_ln53_176_fu_19313_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_178_fu_19323_p2.read()) + sc_biguint<32>(add_ln53_176_fu_19313_p2.read()));
}

void sha256_transform::thread_add_ln53_17_fu_2552_p2() {
    add_ln53_17_fu_2552_p2 = (!ap_const_lv32_3956C25B.is_01() || !m_4_fu_1789_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_3956C25B) + sc_biguint<32>(m_4_fu_1789_p5.read()));
}

void sha256_transform::thread_add_ln53_180_fu_19545_p2() {
    add_ln53_180_fu_19545_p2 = (!xor_ln53_181_reg_26384.read().is_01() || !add_ln58_41_reg_26296.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_181_reg_26384.read()) + sc_biguint<32>(add_ln58_41_reg_26296.read()));
}

void sha256_transform::thread_add_ln53_181_fu_19549_p2() {
    add_ln53_181_fu_19549_p2 = (!ap_const_lv32_D6990624.is_01() || !m_45_reg_25787_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_D6990624) + sc_biguint<32>(m_45_reg_25787_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_182_fu_19554_p2() {
    add_ln53_182_fu_19554_p2 = (!add_ln53_181_fu_19549_p2.read().is_01() || !xor_ln53_183_fu_19539_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_181_fu_19549_p2.read()) + sc_biguint<32>(xor_ln53_183_fu_19539_p2.read()));
}

void sha256_transform::thread_add_ln53_183_fu_19560_p2() {
    add_ln53_183_fu_19560_p2 = (!add_ln53_182_fu_19554_p2.read().is_01() || !add_ln53_180_fu_19545_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_182_fu_19554_p2.read()) + sc_biguint<32>(add_ln53_180_fu_19545_p2.read()));
}

void sha256_transform::thread_add_ln53_184_fu_19749_p2() {
    add_ln53_184_fu_19749_p2 = (!xor_ln53_185_fu_19721_p2.read().is_01() || !add_ln58_42_reg_26322.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_185_fu_19721_p2.read()) + sc_biguint<32>(add_ln58_42_reg_26322.read()));
}

void sha256_transform::thread_add_ln53_185_fu_19754_p2() {
    add_ln53_185_fu_19754_p2 = (!ap_const_lv32_F40E3585.is_01() || !m_46_reg_25883.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_F40E3585) + sc_biguint<32>(m_46_reg_25883.read()));
}

void sha256_transform::thread_add_ln53_186_fu_19759_p2() {
    add_ln53_186_fu_19759_p2 = (!add_ln53_185_fu_19754_p2.read().is_01() || !xor_ln53_187_fu_19743_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_185_fu_19754_p2.read()) + sc_biguint<32>(xor_ln53_187_fu_19743_p2.read()));
}

void sha256_transform::thread_add_ln53_187_fu_19765_p2() {
    add_ln53_187_fu_19765_p2 = (!add_ln53_186_fu_19759_p2.read().is_01() || !add_ln53_184_fu_19749_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_186_fu_19759_p2.read()) + sc_biguint<32>(add_ln53_184_fu_19749_p2.read()));
}

void sha256_transform::thread_add_ln53_188_fu_20013_p2() {
    add_ln53_188_fu_20013_p2 = (!xor_ln53_189_fu_19985_p2.read().is_01() || !add_ln58_43_reg_26348.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_189_fu_19985_p2.read()) + sc_biguint<32>(add_ln58_43_reg_26348.read()));
}

void sha256_transform::thread_add_ln53_189_fu_20018_p2() {
    add_ln53_189_fu_20018_p2 = (!ap_const_lv32_106AA070.is_01() || !m_47_reg_25888_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_106AA070) + sc_biguint<32>(m_47_reg_25888_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_18_fu_2558_p2() {
    add_ln53_18_fu_2558_p2 = (!add_ln53_17_fu_2552_p2.read().is_01() || !xor_ln53_19_fu_2541_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_17_fu_2552_p2.read()) + sc_biguint<32>(xor_ln53_19_fu_2541_p2.read()));
}

void sha256_transform::thread_add_ln53_190_fu_20023_p2() {
    add_ln53_190_fu_20023_p2 = (!add_ln53_189_fu_20018_p2.read().is_01() || !xor_ln53_191_fu_20007_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_189_fu_20018_p2.read()) + sc_biguint<32>(xor_ln53_191_fu_20007_p2.read()));
}

void sha256_transform::thread_add_ln53_191_fu_20029_p2() {
    add_ln53_191_fu_20029_p2 = (!add_ln53_190_fu_20023_p2.read().is_01() || !add_ln53_188_fu_20013_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_190_fu_20023_p2.read()) + sc_biguint<32>(add_ln53_188_fu_20013_p2.read()));
}

void sha256_transform::thread_add_ln53_192_fu_20268_p2() {
    add_ln53_192_fu_20268_p2 = (!xor_ln53_193_reg_26464.read().is_01() || !add_ln58_44_reg_26375.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_193_reg_26464.read()) + sc_biguint<32>(add_ln58_44_reg_26375.read()));
}

void sha256_transform::thread_add_ln53_193_fu_20219_p2() {
    add_ln53_193_fu_20219_p2 = (!ap_const_lv32_19A4C116.is_01() || !m_48_reg_25895_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19A4C116) + sc_biguint<32>(m_48_reg_25895_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_194_fu_20224_p2() {
    add_ln53_194_fu_20224_p2 = (!add_ln53_193_fu_20219_p2.read().is_01() || !xor_ln53_195_fu_20213_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_193_fu_20219_p2.read()) + sc_biguint<32>(xor_ln53_195_fu_20213_p2.read()));
}

void sha256_transform::thread_add_ln53_195_fu_20272_p2() {
    add_ln53_195_fu_20272_p2 = (!add_ln53_194_reg_26469.read().is_01() || !add_ln53_192_fu_20268_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_194_reg_26469.read()) + sc_biguint<32>(add_ln53_192_fu_20268_p2.read()));
}

void sha256_transform::thread_add_ln53_196_fu_20492_p2() {
    add_ln53_196_fu_20492_p2 = (!xor_ln53_197_fu_20464_p2.read().is_01() || !add_ln58_45_reg_26409.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_197_fu_20464_p2.read()) + sc_biguint<32>(add_ln58_45_reg_26409.read()));
}

void sha256_transform::thread_add_ln53_197_fu_20497_p2() {
    add_ln53_197_fu_20497_p2 = (!ap_const_lv32_1E376C08.is_01() || !m_49_reg_25901_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1E376C08) + sc_biguint<32>(m_49_reg_25901_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_198_fu_20502_p2() {
    add_ln53_198_fu_20502_p2 = (!add_ln53_197_fu_20497_p2.read().is_01() || !xor_ln53_199_fu_20486_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_197_fu_20497_p2.read()) + sc_biguint<32>(xor_ln53_199_fu_20486_p2.read()));
}

void sha256_transform::thread_add_ln53_199_fu_20508_p2() {
    add_ln53_199_fu_20508_p2 = (!add_ln53_198_fu_20502_p2.read().is_01() || !add_ln53_196_fu_20492_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_198_fu_20502_p2.read()) + sc_biguint<32>(add_ln53_196_fu_20492_p2.read()));
}

void sha256_transform::thread_add_ln53_19_fu_2564_p2() {
    add_ln53_19_fu_2564_p2 = (!add_ln53_18_fu_2558_p2.read().is_01() || !add_ln53_16_fu_2547_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_18_fu_2558_p2.read()) + sc_biguint<32>(add_ln53_16_fu_2547_p2.read()));
}

void sha256_transform::thread_add_ln53_1_fu_1184_p2() {
    add_ln53_1_fu_1184_p2 = (!ap_const_lv32_428A2F98.is_01() || !m_0_fu_960_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_428A2F98) + sc_biguint<32>(m_0_fu_960_p5.read()));
}

void sha256_transform::thread_add_ln53_200_fu_20724_p2() {
    add_ln53_200_fu_20724_p2 = (!xor_ln53_201_reg_26524.read().is_01() || !add_ln58_46_reg_26431.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_201_reg_26524.read()) + sc_biguint<32>(add_ln58_46_reg_26431.read()));
}

void sha256_transform::thread_add_ln53_201_fu_20728_p2() {
    add_ln53_201_fu_20728_p2 = (!ap_const_lv32_2748774C.is_01() || !m_50_reg_25907_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2748774C) + sc_biguint<32>(m_50_reg_25907_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_202_fu_20733_p2() {
    add_ln53_202_fu_20733_p2 = (!add_ln53_201_fu_20728_p2.read().is_01() || !xor_ln53_203_fu_20718_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_201_fu_20728_p2.read()) + sc_biguint<32>(xor_ln53_203_fu_20718_p2.read()));
}

void sha256_transform::thread_add_ln53_203_fu_20739_p2() {
    add_ln53_203_fu_20739_p2 = (!add_ln53_202_fu_20733_p2.read().is_01() || !add_ln53_200_fu_20724_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_202_fu_20733_p2.read()) + sc_biguint<32>(add_ln53_200_fu_20724_p2.read()));
}

void sha256_transform::thread_add_ln53_204_fu_20928_p2() {
    add_ln53_204_fu_20928_p2 = (!xor_ln53_205_fu_20900_p2.read().is_01() || !add_ln58_47_reg_26457.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_205_fu_20900_p2.read()) + sc_biguint<32>(add_ln58_47_reg_26457.read()));
}

void sha256_transform::thread_add_ln53_205_fu_20933_p2() {
    add_ln53_205_fu_20933_p2 = (!ap_const_lv32_34B0BCB5.is_01() || !m_51_reg_25913_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_34B0BCB5) + sc_biguint<32>(m_51_reg_25913_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_206_fu_20938_p2() {
    add_ln53_206_fu_20938_p2 = (!add_ln53_205_fu_20933_p2.read().is_01() || !xor_ln53_207_fu_20922_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_205_fu_20933_p2.read()) + sc_biguint<32>(xor_ln53_207_fu_20922_p2.read()));
}

void sha256_transform::thread_add_ln53_207_fu_20944_p2() {
    add_ln53_207_fu_20944_p2 = (!add_ln53_206_fu_20938_p2.read().is_01() || !add_ln53_204_fu_20928_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_206_fu_20938_p2.read()) + sc_biguint<32>(add_ln53_204_fu_20928_p2.read()));
}

void sha256_transform::thread_add_ln53_208_fu_21192_p2() {
    add_ln53_208_fu_21192_p2 = (!xor_ln53_209_fu_21164_p2.read().is_01() || !add_ln58_48_reg_26488.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_209_fu_21164_p2.read()) + sc_biguint<32>(add_ln58_48_reg_26488.read()));
}

void sha256_transform::thread_add_ln53_209_fu_21197_p2() {
    add_ln53_209_fu_21197_p2 = (!ap_const_lv32_391C0CB3.is_01() || !m_52_reg_26007_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_391C0CB3) + sc_biguint<32>(m_52_reg_26007_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_20_fu_2989_p2() {
    add_ln53_20_fu_2989_p2 = (!xor_ln53_21_reg_24412.read().is_01() || !add_ln58_1_reg_24272.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_21_reg_24412.read()) + sc_biguint<32>(add_ln58_1_reg_24272.read()));
}

void sha256_transform::thread_add_ln53_210_fu_21202_p2() {
    add_ln53_210_fu_21202_p2 = (!add_ln53_209_fu_21197_p2.read().is_01() || !xor_ln53_211_fu_21186_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_209_fu_21197_p2.read()) + sc_biguint<32>(xor_ln53_211_fu_21186_p2.read()));
}

void sha256_transform::thread_add_ln53_211_fu_21208_p2() {
    add_ln53_211_fu_21208_p2 = (!add_ln53_210_fu_21202_p2.read().is_01() || !add_ln53_208_fu_21192_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_210_fu_21202_p2.read()) + sc_biguint<32>(add_ln53_208_fu_21192_p2.read()));
}

void sha256_transform::thread_add_ln53_212_fu_21438_p2() {
    add_ln53_212_fu_21438_p2 = (!xor_ln53_213_reg_26604.read().is_01() || !add_ln58_49_reg_26515.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_213_reg_26604.read()) + sc_biguint<32>(add_ln58_49_reg_26515.read()));
}

void sha256_transform::thread_add_ln53_213_fu_21398_p2() {
    add_ln53_213_fu_21398_p2 = (!ap_const_lv32_4ED8AA4A.is_01() || !m_53_reg_25924_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_4ED8AA4A) + sc_biguint<32>(m_53_reg_25924_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_214_fu_21403_p2() {
    add_ln53_214_fu_21403_p2 = (!add_ln53_213_fu_21398_p2.read().is_01() || !xor_ln53_215_fu_21392_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_213_fu_21398_p2.read()) + sc_biguint<32>(xor_ln53_215_fu_21392_p2.read()));
}

void sha256_transform::thread_add_ln53_215_fu_21442_p2() {
    add_ln53_215_fu_21442_p2 = (!add_ln53_214_reg_26609.read().is_01() || !add_ln53_212_fu_21438_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_214_reg_26609.read()) + sc_biguint<32>(add_ln53_212_fu_21438_p2.read()));
}

void sha256_transform::thread_add_ln53_216_fu_21662_p2() {
    add_ln53_216_fu_21662_p2 = (!xor_ln53_217_fu_21634_p2.read().is_01() || !add_ln58_50_reg_26549.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_217_fu_21634_p2.read()) + sc_biguint<32>(add_ln58_50_reg_26549.read()));
}

void sha256_transform::thread_add_ln53_217_fu_21667_p2() {
    add_ln53_217_fu_21667_p2 = (!ap_const_lv32_5B9CCA4F.is_01() || !m_54_reg_26012_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_5B9CCA4F) + sc_biguint<32>(m_54_reg_26012_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_218_fu_21672_p2() {
    add_ln53_218_fu_21672_p2 = (!add_ln53_217_fu_21667_p2.read().is_01() || !xor_ln53_219_fu_21656_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_217_fu_21667_p2.read()) + sc_biguint<32>(xor_ln53_219_fu_21656_p2.read()));
}

void sha256_transform::thread_add_ln53_219_fu_21678_p2() {
    add_ln53_219_fu_21678_p2 = (!add_ln53_218_fu_21672_p2.read().is_01() || !add_ln53_216_fu_21662_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_218_fu_21672_p2.read()) + sc_biguint<32>(add_ln53_216_fu_21662_p2.read()));
}

void sha256_transform::thread_add_ln53_21_fu_2993_p2() {
    add_ln53_21_fu_2993_p2 = (!ap_const_lv32_59F111F1.is_01() || !m_5_fu_2732_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_59F111F1) + sc_biguint<32>(m_5_fu_2732_p5.read()));
}

void sha256_transform::thread_add_ln53_220_fu_21894_p2() {
    add_ln53_220_fu_21894_p2 = (!xor_ln53_221_reg_26659.read().is_01() || !add_ln58_51_reg_26571.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_221_reg_26659.read()) + sc_biguint<32>(add_ln58_51_reg_26571.read()));
}

void sha256_transform::thread_add_ln53_221_fu_21898_p2() {
    add_ln53_221_fu_21898_p2 = (!ap_const_lv32_682E6FF3.is_01() || !m_55_reg_26017_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_682E6FF3) + sc_biguint<32>(m_55_reg_26017_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_222_fu_21903_p2() {
    add_ln53_222_fu_21903_p2 = (!add_ln53_221_fu_21898_p2.read().is_01() || !xor_ln53_223_fu_21888_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_221_fu_21898_p2.read()) + sc_biguint<32>(xor_ln53_223_fu_21888_p2.read()));
}

void sha256_transform::thread_add_ln53_223_fu_21909_p2() {
    add_ln53_223_fu_21909_p2 = (!add_ln53_222_fu_21903_p2.read().is_01() || !add_ln53_220_fu_21894_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_222_fu_21903_p2.read()) + sc_biguint<32>(add_ln53_220_fu_21894_p2.read()));
}

void sha256_transform::thread_add_ln53_224_fu_22098_p2() {
    add_ln53_224_fu_22098_p2 = (!xor_ln53_225_fu_22070_p2.read().is_01() || !add_ln58_52_reg_26597.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_225_fu_22070_p2.read()) + sc_biguint<32>(add_ln58_52_reg_26597.read()));
}

void sha256_transform::thread_add_ln53_225_fu_22103_p2() {
    add_ln53_225_fu_22103_p2 = (!ap_const_lv32_748F82EE.is_01() || !m_56_reg_26098_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_748F82EE) + sc_biguint<32>(m_56_reg_26098_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_226_fu_22108_p2() {
    add_ln53_226_fu_22108_p2 = (!add_ln53_225_fu_22103_p2.read().is_01() || !xor_ln53_227_fu_22092_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_225_fu_22103_p2.read()) + sc_biguint<32>(xor_ln53_227_fu_22092_p2.read()));
}

void sha256_transform::thread_add_ln53_227_fu_22114_p2() {
    add_ln53_227_fu_22114_p2 = (!add_ln53_226_fu_22108_p2.read().is_01() || !add_ln53_224_fu_22098_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_226_fu_22108_p2.read()) + sc_biguint<32>(add_ln53_224_fu_22098_p2.read()));
}

void sha256_transform::thread_add_ln53_228_fu_22362_p2() {
    add_ln53_228_fu_22362_p2 = (!xor_ln53_229_fu_22334_p2.read().is_01() || !add_ln58_53_reg_26623.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_229_fu_22334_p2.read()) + sc_biguint<32>(add_ln58_53_reg_26623.read()));
}

void sha256_transform::thread_add_ln53_229_fu_22367_p2() {
    add_ln53_229_fu_22367_p2 = (!ap_const_lv32_78A5636F.is_01() || !m_57_reg_26028_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_78A5636F) + sc_biguint<32>(m_57_reg_26028_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_22_fu_2999_p2() {
    add_ln53_22_fu_2999_p2 = (!add_ln53_21_fu_2993_p2.read().is_01() || !xor_ln53_23_fu_2983_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_21_fu_2993_p2.read()) + sc_biguint<32>(xor_ln53_23_fu_2983_p2.read()));
}

void sha256_transform::thread_add_ln53_230_fu_22372_p2() {
    add_ln53_230_fu_22372_p2 = (!add_ln53_229_fu_22367_p2.read().is_01() || !xor_ln53_231_fu_22356_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_229_fu_22367_p2.read()) + sc_biguint<32>(xor_ln53_231_fu_22356_p2.read()));
}

void sha256_transform::thread_add_ln53_231_fu_22378_p2() {
    add_ln53_231_fu_22378_p2 = (!add_ln53_230_fu_22372_p2.read().is_01() || !add_ln53_228_fu_22362_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_230_fu_22372_p2.read()) + sc_biguint<32>(add_ln53_228_fu_22362_p2.read()));
}

void sha256_transform::thread_add_ln53_232_fu_22607_p2() {
    add_ln53_232_fu_22607_p2 = (!ap_const_lv32_84C87814.is_01() || !xor_ln53_233_reg_26739.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_84C87814) + sc_biguint<32>(xor_ln53_233_reg_26739.read()));
}

void sha256_transform::thread_add_ln53_233_fu_22568_p2() {
    add_ln53_233_fu_22568_p2 = (!xor_ln53_235_fu_22562_p2.read().is_01() || !m_58_reg_26104_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_235_fu_22562_p2.read()) + sc_biguint<32>(m_58_reg_26104_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_234_fu_22573_p2() {
    add_ln53_234_fu_22573_p2 = (!add_ln53_233_fu_22568_p2.read().is_01() || !add_ln58_54_reg_26650.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_233_fu_22568_p2.read()) + sc_biguint<32>(add_ln58_54_reg_26650.read()));
}

void sha256_transform::thread_add_ln53_235_fu_22612_p2() {
    add_ln53_235_fu_22612_p2 = (!add_ln53_234_reg_26744.read().is_01() || !add_ln53_232_fu_22607_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_234_reg_26744.read()) + sc_biguint<32>(add_ln53_232_fu_22607_p2.read()));
}

void sha256_transform::thread_add_ln53_236_fu_22832_p2() {
    add_ln53_236_fu_22832_p2 = (!ap_const_lv32_8CC70208.is_01() || !xor_ln53_237_fu_22804_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_8CC70208) + sc_biguint<32>(xor_ln53_237_fu_22804_p2.read()));
}

void sha256_transform::thread_add_ln53_237_fu_22838_p2() {
    add_ln53_237_fu_22838_p2 = (!xor_ln53_239_fu_22826_p2.read().is_01() || !m_59_reg_26033_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_239_fu_22826_p2.read()) + sc_biguint<32>(m_59_reg_26033_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_238_fu_22843_p2() {
    add_ln53_238_fu_22843_p2 = (!add_ln53_237_fu_22838_p2.read().is_01() || !add_ln58_55_reg_26684.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_237_fu_22838_p2.read()) + sc_biguint<32>(add_ln58_55_reg_26684.read()));
}

void sha256_transform::thread_add_ln53_239_fu_22848_p2() {
    add_ln53_239_fu_22848_p2 = (!add_ln53_238_fu_22843_p2.read().is_01() || !add_ln53_236_fu_22832_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_238_fu_22843_p2.read()) + sc_biguint<32>(add_ln53_236_fu_22832_p2.read()));
}

void sha256_transform::thread_add_ln53_23_fu_3005_p2() {
    add_ln53_23_fu_3005_p2 = (!add_ln53_22_fu_2999_p2.read().is_01() || !add_ln53_20_fu_2989_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_22_fu_2999_p2.read()) + sc_biguint<32>(add_ln53_20_fu_2989_p2.read()));
}

void sha256_transform::thread_add_ln53_240_fu_23064_p2() {
    add_ln53_240_fu_23064_p2 = (!ap_const_lv32_90BEFFFA.is_01() || !xor_ln53_241_reg_26794.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_90BEFFFA) + sc_biguint<32>(xor_ln53_241_reg_26794.read()));
}

void sha256_transform::thread_add_ln53_241_fu_23069_p2() {
    add_ln53_241_fu_23069_p2 = (!xor_ln53_243_fu_23058_p2.read().is_01() || !m_60_reg_26109_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_243_fu_23058_p2.read()) + sc_biguint<32>(m_60_reg_26109_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_242_fu_23074_p2() {
    add_ln53_242_fu_23074_p2 = (!add_ln53_241_fu_23069_p2.read().is_01() || !add_ln58_56_reg_26706.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_241_fu_23069_p2.read()) + sc_biguint<32>(add_ln58_56_reg_26706.read()));
}

void sha256_transform::thread_add_ln53_243_fu_23079_p2() {
    add_ln53_243_fu_23079_p2 = (!add_ln53_242_fu_23074_p2.read().is_01() || !add_ln53_240_fu_23064_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_242_fu_23074_p2.read()) + sc_biguint<32>(add_ln53_240_fu_23064_p2.read()));
}

void sha256_transform::thread_add_ln53_244_fu_23268_p2() {
    add_ln53_244_fu_23268_p2 = (!ap_const_lv32_A4506CEB.is_01() || !xor_ln53_245_fu_23240_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_A4506CEB) + sc_biguint<32>(xor_ln53_245_fu_23240_p2.read()));
}

void sha256_transform::thread_add_ln53_245_fu_23274_p2() {
    add_ln53_245_fu_23274_p2 = (!xor_ln53_247_fu_23262_p2.read().is_01() || !m_61_reg_26038_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_247_fu_23262_p2.read()) + sc_biguint<32>(m_61_reg_26038_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_246_fu_23279_p2() {
    add_ln53_246_fu_23279_p2 = (!add_ln53_245_fu_23274_p2.read().is_01() || !add_ln58_57_reg_26732.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_245_fu_23274_p2.read()) + sc_biguint<32>(add_ln58_57_reg_26732.read()));
}

void sha256_transform::thread_add_ln53_247_fu_23284_p2() {
    add_ln53_247_fu_23284_p2 = (!add_ln53_246_fu_23279_p2.read().is_01() || !add_ln53_244_fu_23268_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_246_fu_23279_p2.read()) + sc_biguint<32>(add_ln53_244_fu_23268_p2.read()));
}

void sha256_transform::thread_add_ln53_248_fu_23597_p2() {
    add_ln53_248_fu_23597_p2 = (!ap_const_lv32_BEF9A3F7.is_01() || !xor_ln53_249_fu_23569_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_BEF9A3F7) + sc_biguint<32>(xor_ln53_249_fu_23569_p2.read()));
}

void sha256_transform::thread_add_ln53_249_fu_23603_p2() {
    add_ln53_249_fu_23603_p2 = (!add_ln58_58_reg_26758.read().is_01() || !xor_ln53_251_fu_23591_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln58_58_reg_26758.read()) + sc_biguint<32>(xor_ln53_251_fu_23591_p2.read()));
}

void sha256_transform::thread_add_ln53_24_fu_3194_p2() {
    add_ln53_24_fu_3194_p2 = (!ap_const_lv32_923F82A4.is_01() || !xor_ln53_25_fu_3166_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_923F82A4) + sc_biguint<32>(xor_ln53_25_fu_3166_p2.read()));
}

void sha256_transform::thread_add_ln53_250_fu_23608_p2() {
    add_ln53_250_fu_23608_p2 = (!add_ln53_249_fu_23603_p2.read().is_01() || !add_ln53_248_fu_23597_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_249_fu_23603_p2.read()) + sc_biguint<32>(add_ln53_248_fu_23597_p2.read()));
}

void sha256_transform::thread_add_ln53_251_fu_17421_p2() {
    add_ln53_251_fu_17421_p2 = (!xor_ln40_185_fu_17140_p2.read().is_01() || !m_55_reg_26017.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_185_fu_17140_p2.read()) + sc_biguint<32>(m_55_reg_26017.read()));
}

void sha256_transform::thread_add_ln53_252_fu_23614_p2() {
    add_ln53_252_fu_23614_p2 = (!add_ln53_254_reg_26147_pp0_iter3_reg.read().is_01() || !add_ln53_250_fu_23608_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_254_reg_26147_pp0_iter3_reg.read()) + sc_biguint<32>(add_ln53_250_fu_23608_p2.read()));
}

void sha256_transform::thread_add_ln53_253_fu_16004_p2() {
    add_ln53_253_fu_16004_p2 = (!m_46_fu_14683_p2.read().is_01() || !xor_ln40_187_fu_15469_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_fu_14683_p2.read()) + sc_biguint<32>(xor_ln40_187_fu_15469_p2.read()));
}

void sha256_transform::thread_add_ln53_254_fu_17426_p2() {
    add_ln53_254_fu_17426_p2 = (!add_ln53_253_reg_25997.read().is_01() || !add_ln53_251_fu_17421_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_253_reg_25997.read()) + sc_biguint<32>(add_ln53_251_fu_17421_p2.read()));
}

void sha256_transform::thread_add_ln53_255_fu_23983_p2() {
    add_ln53_255_fu_23983_p2 = (!add_ln53_261_reg_26474_pp0_iter4_reg.read().is_01() || !add_ln53_258_fu_23979_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_261_reg_26474_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln53_258_fu_23979_p2.read()));
}

void sha256_transform::thread_add_ln53_256_fu_23837_p2() {
    add_ln53_256_fu_23837_p2 = (!xor_ln53_253_fu_23808_p2.read().is_01() || !add_ln58_59_reg_26785.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_253_fu_23808_p2.read()) + sc_biguint<32>(add_ln58_59_reg_26785.read()));
}

void sha256_transform::thread_add_ln53_257_fu_23842_p2() {
    add_ln53_257_fu_23842_p2 = (!xor_ln53_255_fu_23831_p2.read().is_01() || !xor_ln40_189_fu_23349_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_255_fu_23831_p2.read()) + sc_biguint<32>(xor_ln40_189_fu_23349_p2.read()));
}

void sha256_transform::thread_add_ln53_258_fu_23979_p2() {
    add_ln53_258_fu_23979_p2 = (!add_ln53_257_reg_26837.read().is_01() || !add_ln53_256_reg_26832.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_257_reg_26837.read()) + sc_biguint<32>(add_ln53_256_reg_26832.read()));
}

void sha256_transform::thread_add_ln53_259_fu_20230_p2() {
    add_ln53_259_fu_20230_p2 = (!m_56_reg_26098.read().is_01() || !m_47_reg_25888_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_26098.read()) + sc_biguint<32>(m_47_reg_25888_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln53_25_fu_3200_p2() {
    add_ln53_25_fu_3200_p2 = (!xor_ln53_27_fu_3188_p2.read().is_01() || !m_6_fu_2744_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_27_fu_3188_p2.read()) + sc_biguint<32>(m_6_fu_2744_p5.read()));
}

void sha256_transform::thread_add_ln53_260_fu_16010_p2() {
    add_ln53_260_fu_16010_p2 = (!ap_const_lv32_C67178F2.is_01() || !xor_ln40_191_fu_15539_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C67178F2) + sc_biguint<32>(xor_ln40_191_fu_15539_p2.read()));
}

void sha256_transform::thread_add_ln53_261_fu_20234_p2() {
    add_ln53_261_fu_20234_p2 = (!add_ln53_260_reg_26002_pp0_iter3_reg.read().is_01() || !add_ln53_259_fu_20230_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_260_reg_26002_pp0_iter3_reg.read()) + sc_biguint<32>(add_ln53_259_fu_20230_p2.read()));
}

void sha256_transform::thread_add_ln53_26_fu_3206_p2() {
    add_ln53_26_fu_3206_p2 = (!add_ln53_25_fu_3200_p2.read().is_01() || !add_ln58_2_reg_24283.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_25_fu_3200_p2.read()) + sc_biguint<32>(add_ln58_2_reg_24283.read()));
}

void sha256_transform::thread_add_ln53_27_fu_3211_p2() {
    add_ln53_27_fu_3211_p2 = (!add_ln53_26_fu_3206_p2.read().is_01() || !add_ln53_24_fu_3194_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_26_fu_3206_p2.read()) + sc_biguint<32>(add_ln53_24_fu_3194_p2.read()));
}

void sha256_transform::thread_add_ln53_28_fu_3667_p2() {
    add_ln53_28_fu_3667_p2 = (!ap_const_lv32_AB1C5ED5.is_01() || !xor_ln53_29_fu_3639_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_AB1C5ED5) + sc_biguint<32>(xor_ln53_29_fu_3639_p2.read()));
}

void sha256_transform::thread_add_ln53_29_fu_3673_p2() {
    add_ln53_29_fu_3673_p2 = (!xor_ln53_31_fu_3661_p2.read().is_01() || !m_7_fu_3217_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_31_fu_3661_p2.read()) + sc_biguint<32>(m_7_fu_3217_p5.read()));
}

void sha256_transform::thread_add_ln53_2_fu_1190_p2() {
    add_ln53_2_fu_1190_p2 = (!add_ln53_1_fu_1184_p2.read().is_01() || !xor_ln53_3_fu_1172_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_1_fu_1184_p2.read()) + sc_biguint<32>(xor_ln53_3_fu_1172_p2.read()));
}

void sha256_transform::thread_add_ln53_30_fu_3679_p2() {
    add_ln53_30_fu_3679_p2 = (!add_ln53_29_fu_3673_p2.read().is_01() || !add_ln58_3_reg_24376.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_29_fu_3673_p2.read()) + sc_biguint<32>(add_ln58_3_reg_24376.read()));
}

void sha256_transform::thread_add_ln53_31_fu_3684_p2() {
    add_ln53_31_fu_3684_p2 = (!add_ln53_30_fu_3679_p2.read().is_01() || !add_ln53_28_fu_3667_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_30_fu_3679_p2.read()) + sc_biguint<32>(add_ln53_28_fu_3667_p2.read()));
}

void sha256_transform::thread_add_ln53_32_fu_4135_p2() {
    add_ln53_32_fu_4135_p2 = (!xor_ln53_33_reg_24612.read().is_01() || !add_ln58_4_reg_24403.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_33_reg_24612.read()) + sc_biguint<32>(add_ln58_4_reg_24403.read()));
}

void sha256_transform::thread_add_ln53_33_fu_3874_p2() {
    add_ln53_33_fu_3874_p2 = (!ap_const_lv32_D807AA98.is_01() || !m_8_fu_3229_p5.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_D807AA98) + sc_biguint<32>(m_8_fu_3229_p5.read()));
}

void sha256_transform::thread_add_ln53_34_fu_3880_p2() {
    add_ln53_34_fu_3880_p2 = (!add_ln53_33_fu_3874_p2.read().is_01() || !xor_ln53_35_fu_3868_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_33_fu_3874_p2.read()) + sc_biguint<32>(xor_ln53_35_fu_3868_p2.read()));
}

void sha256_transform::thread_add_ln53_35_fu_4139_p2() {
    add_ln53_35_fu_4139_p2 = (!add_ln53_34_reg_24617.read().is_01() || !add_ln53_32_fu_4135_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_34_reg_24617.read()) + sc_biguint<32>(add_ln53_32_fu_4135_p2.read()));
}

void sha256_transform::thread_add_ln53_36_fu_4359_p2() {
    add_ln53_36_fu_4359_p2 = (!xor_ln53_37_fu_4331_p2.read().is_01() || !add_ln58_5_reg_24497.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_37_fu_4331_p2.read()) + sc_biguint<32>(add_ln58_5_reg_24497.read()));
}

void sha256_transform::thread_add_ln53_37_fu_4364_p2() {
    add_ln53_37_fu_4364_p2 = (!ap_const_lv32_12835B01.is_01() || !m_9_fu_3886_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_12835B01) + sc_biguint<32>(m_9_fu_3886_p5.read()));
}

void sha256_transform::thread_add_ln53_38_fu_4370_p2() {
    add_ln53_38_fu_4370_p2 = (!add_ln53_37_fu_4364_p2.read().is_01() || !xor_ln53_39_fu_4353_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_37_fu_4364_p2.read()) + sc_biguint<32>(xor_ln53_39_fu_4353_p2.read()));
}

void sha256_transform::thread_add_ln53_39_fu_4376_p2() {
    add_ln53_39_fu_4376_p2 = (!add_ln53_38_fu_4370_p2.read().is_01() || !add_ln53_36_fu_4359_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_38_fu_4370_p2.read()) + sc_biguint<32>(add_ln53_36_fu_4359_p2.read()));
}

void sha256_transform::thread_add_ln53_3_fu_1196_p2() {
    add_ln53_3_fu_1196_p2 = (!add_ln53_2_fu_1190_p2.read().is_01() || !add_ln53_fu_1178_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_2_fu_1190_p2.read()) + sc_biguint<32>(add_ln53_fu_1178_p2.read()));
}

void sha256_transform::thread_add_ln53_40_fu_4788_p2() {
    add_ln53_40_fu_4788_p2 = (!xor_ln53_41_reg_24737.read().is_01() || !add_ln58_6_reg_24579.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_41_reg_24737.read()) + sc_biguint<32>(add_ln58_6_reg_24579.read()));
}

void sha256_transform::thread_add_ln53_41_fu_4792_p2() {
    add_ln53_41_fu_4792_p2 = (!ap_const_lv32_243185BE.is_01() || !m_10_reg_24628.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_243185BE) + sc_biguint<32>(m_10_reg_24628.read()));
}

void sha256_transform::thread_add_ln53_42_fu_4797_p2() {
    add_ln53_42_fu_4797_p2 = (!add_ln53_41_fu_4792_p2.read().is_01() || !xor_ln53_43_fu_4782_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_41_fu_4792_p2.read()) + sc_biguint<32>(xor_ln53_43_fu_4782_p2.read()));
}

void sha256_transform::thread_add_ln53_43_fu_4803_p2() {
    add_ln53_43_fu_4803_p2 = (!add_ln53_42_fu_4797_p2.read().is_01() || !add_ln53_40_fu_4788_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_42_fu_4797_p2.read()) + sc_biguint<32>(add_ln53_40_fu_4788_p2.read()));
}

void sha256_transform::thread_add_ln53_44_fu_4992_p2() {
    add_ln53_44_fu_4992_p2 = (!xor_ln53_45_fu_4964_p2.read().is_01() || !add_ln58_7_reg_24605.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_45_fu_4964_p2.read()) + sc_biguint<32>(add_ln58_7_reg_24605.read()));
}

void sha256_transform::thread_add_ln53_45_fu_4997_p2() {
    add_ln53_45_fu_4997_p2 = (!ap_const_lv32_550C7DC3.is_01() || !m_11_reg_24635.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_550C7DC3) + sc_biguint<32>(m_11_reg_24635.read()));
}

void sha256_transform::thread_add_ln53_46_fu_5002_p2() {
    add_ln53_46_fu_5002_p2 = (!add_ln53_45_fu_4997_p2.read().is_01() || !xor_ln53_47_fu_4986_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_45_fu_4997_p2.read()) + sc_biguint<32>(xor_ln53_47_fu_4986_p2.read()));
}

void sha256_transform::thread_add_ln53_47_fu_5008_p2() {
    add_ln53_47_fu_5008_p2 = (!add_ln53_46_fu_5002_p2.read().is_01() || !add_ln53_44_fu_4992_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_46_fu_5002_p2.read()) + sc_biguint<32>(add_ln53_44_fu_4992_p2.read()));
}

void sha256_transform::thread_add_ln53_48_fu_5660_p2() {
    add_ln53_48_fu_5660_p2 = (!xor_ln53_49_fu_5632_p2.read().is_01() || !add_ln58_8_reg_24701.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_49_fu_5632_p2.read()) + sc_biguint<32>(add_ln58_8_reg_24701.read()));
}

void sha256_transform::thread_add_ln53_49_fu_5665_p2() {
    add_ln53_49_fu_5665_p2 = (!ap_const_lv32_72BE5D74.is_01() || !m_12_reg_24742.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_72BE5D74) + sc_biguint<32>(m_12_reg_24742.read()));
}

void sha256_transform::thread_add_ln53_4_fu_1310_p2() {
    add_ln53_4_fu_1310_p2 = (!ap_port_reg_ctx_state_6_read.read().is_01() || !xor_ln53_5_fu_1280_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_6_read.read()) + sc_biguint<32>(xor_ln53_5_fu_1280_p2.read()));
}

void sha256_transform::thread_add_ln53_50_fu_5670_p2() {
    add_ln53_50_fu_5670_p2 = (!add_ln53_49_fu_5665_p2.read().is_01() || !xor_ln53_51_fu_5654_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_49_fu_5665_p2.read()) + sc_biguint<32>(xor_ln53_51_fu_5654_p2.read()));
}

void sha256_transform::thread_add_ln53_51_fu_5676_p2() {
    add_ln53_51_fu_5676_p2 = (!add_ln53_50_fu_5670_p2.read().is_01() || !add_ln53_48_fu_5660_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_50_fu_5670_p2.read()) + sc_biguint<32>(add_ln53_48_fu_5660_p2.read()));
}

void sha256_transform::thread_add_ln53_52_fu_5906_p2() {
    add_ln53_52_fu_5906_p2 = (!ap_const_lv32_80DEB1FE.is_01() || !xor_ln53_53_reg_24914.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_80DEB1FE) + sc_biguint<32>(xor_ln53_53_reg_24914.read()));
}

void sha256_transform::thread_add_ln53_53_fu_5866_p2() {
    add_ln53_53_fu_5866_p2 = (!xor_ln53_55_fu_5860_p2.read().is_01() || !m_13_fu_5014_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_55_fu_5860_p2.read()) + sc_biguint<32>(m_13_fu_5014_p5.read()));
}

void sha256_transform::thread_add_ln53_54_fu_5872_p2() {
    add_ln53_54_fu_5872_p2 = (!add_ln53_53_fu_5866_p2.read().is_01() || !add_ln58_9_reg_24728.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_53_fu_5866_p2.read()) + sc_biguint<32>(add_ln58_9_reg_24728.read()));
}

void sha256_transform::thread_add_ln53_55_fu_5911_p2() {
    add_ln53_55_fu_5911_p2 = (!add_ln53_54_reg_24919.read().is_01() || !add_ln53_52_fu_5906_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_54_reg_24919.read()) + sc_biguint<32>(add_ln53_52_fu_5906_p2.read()));
}

void sha256_transform::thread_add_ln53_56_fu_6131_p2() {
    add_ln53_56_fu_6131_p2 = (!ap_const_lv32_9BDC06A7.is_01() || !xor_ln53_57_fu_6103_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_9BDC06A7) + sc_biguint<32>(xor_ln53_57_fu_6103_p2.read()));
}

void sha256_transform::thread_add_ln53_57_fu_6137_p2() {
    add_ln53_57_fu_6137_p2 = (!xor_ln53_59_fu_6125_p2.read().is_01() || !m_14_reg_24838.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_59_fu_6125_p2.read()) + sc_biguint<32>(m_14_reg_24838.read()));
}

void sha256_transform::thread_add_ln53_58_fu_6142_p2() {
    add_ln53_58_fu_6142_p2 = (!add_ln53_57_fu_6137_p2.read().is_01() || !add_ln58_10_reg_24819.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_57_fu_6137_p2.read()) + sc_biguint<32>(add_ln58_10_reg_24819.read()));
}

void sha256_transform::thread_add_ln53_59_fu_6147_p2() {
    add_ln53_59_fu_6147_p2 = (!add_ln53_58_fu_6142_p2.read().is_01() || !add_ln53_56_fu_6131_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_58_fu_6142_p2.read()) + sc_biguint<32>(add_ln53_56_fu_6131_p2.read()));
}

void sha256_transform::thread_add_ln53_5_fu_1316_p2() {
    add_ln53_5_fu_1316_p2 = (!ap_const_lv32_71374491.is_01() || !m_1_fu_972_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_71374491) + sc_biguint<32>(m_1_fu_972_p5.read()));
}

void sha256_transform::thread_add_ln53_60_fu_6521_p2() {
    add_ln53_60_fu_6521_p2 = (!xor_ln53_61_reg_24969.read().is_01() || !add_ln58_11_reg_24881.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_61_reg_24969.read()) + sc_biguint<32>(add_ln58_11_reg_24881.read()));
}

void sha256_transform::thread_add_ln53_61_fu_6525_p2() {
    add_ln53_61_fu_6525_p2 = (!ap_const_lv32_C19BF174.is_01() || !m_15_reg_24845.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C19BF174) + sc_biguint<32>(m_15_reg_24845.read()));
}

void sha256_transform::thread_add_ln53_62_fu_6530_p2() {
    add_ln53_62_fu_6530_p2 = (!add_ln53_61_fu_6525_p2.read().is_01() || !xor_ln53_63_fu_6515_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_61_fu_6525_p2.read()) + sc_biguint<32>(xor_ln53_63_fu_6515_p2.read()));
}

void sha256_transform::thread_add_ln53_63_fu_6536_p2() {
    add_ln53_63_fu_6536_p2 = (!add_ln53_62_fu_6530_p2.read().is_01() || !add_ln53_60_fu_6521_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_62_fu_6530_p2.read()) + sc_biguint<32>(add_ln53_60_fu_6521_p2.read()));
}

void sha256_transform::thread_add_ln53_64_fu_6725_p2() {
    add_ln53_64_fu_6725_p2 = (!xor_ln53_65_fu_6697_p2.read().is_01() || !add_ln58_12_reg_24907.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_65_fu_6697_p2.read()) + sc_biguint<32>(add_ln58_12_reg_24907.read()));
}

void sha256_transform::thread_add_ln53_65_fu_6730_p2() {
    add_ln53_65_fu_6730_p2 = (!ap_const_lv32_E49B69C1.is_01() || !m_16_fu_6322_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_E49B69C1) + sc_biguint<32>(m_16_fu_6322_p2.read()));
}

void sha256_transform::thread_add_ln53_66_fu_6736_p2() {
    add_ln53_66_fu_6736_p2 = (!add_ln53_65_fu_6730_p2.read().is_01() || !xor_ln53_67_fu_6719_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_65_fu_6730_p2.read()) + sc_biguint<32>(xor_ln53_67_fu_6719_p2.read()));
}

void sha256_transform::thread_add_ln53_67_fu_6742_p2() {
    add_ln53_67_fu_6742_p2 = (!add_ln53_66_fu_6736_p2.read().is_01() || !add_ln53_64_fu_6725_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_66_fu_6736_p2.read()) + sc_biguint<32>(add_ln53_64_fu_6725_p2.read()));
}

void sha256_transform::thread_add_ln53_68_fu_7293_p2() {
    add_ln53_68_fu_7293_p2 = (!xor_ln53_69_fu_7265_p2.read().is_01() || !add_ln58_13_reg_24933.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_69_fu_7265_p2.read()) + sc_biguint<32>(add_ln58_13_reg_24933.read()));
}

void sha256_transform::thread_add_ln53_69_fu_7298_p2() {
    add_ln53_69_fu_7298_p2 = (!ap_const_lv32_EFBE4786.is_01() || !m_17_fu_6752_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_EFBE4786) + sc_biguint<32>(m_17_fu_6752_p2.read()));
}

void sha256_transform::thread_add_ln53_6_fu_1322_p2() {
    add_ln53_6_fu_1322_p2 = (!add_ln53_5_fu_1316_p2.read().is_01() || !xor_ln53_7_fu_1304_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_5_fu_1316_p2.read()) + sc_biguint<32>(xor_ln53_7_fu_1304_p2.read()));
}

void sha256_transform::thread_add_ln53_70_fu_7304_p2() {
    add_ln53_70_fu_7304_p2 = (!add_ln53_69_fu_7298_p2.read().is_01() || !xor_ln53_71_fu_7287_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_69_fu_7298_p2.read()) + sc_biguint<32>(xor_ln53_71_fu_7287_p2.read()));
}

void sha256_transform::thread_add_ln53_71_fu_7310_p2() {
    add_ln53_71_fu_7310_p2 = (!add_ln53_70_fu_7304_p2.read().is_01() || !add_ln53_68_fu_7293_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_70_fu_7304_p2.read()) + sc_biguint<32>(add_ln53_68_fu_7293_p2.read()));
}

void sha256_transform::thread_add_ln53_72_fu_7699_p2() {
    add_ln53_72_fu_7699_p2 = (!xor_ln53_73_reg_25102.read().is_01() || !add_ln58_14_reg_24960.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_73_reg_25102.read()) + sc_biguint<32>(add_ln58_14_reg_24960.read()));
}

void sha256_transform::thread_add_ln53_73_fu_7500_p2() {
    add_ln53_73_fu_7500_p2 = (!ap_const_lv32_FC19DC6.is_01() || !m_18_fu_6765_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FC19DC6) + sc_biguint<32>(m_18_fu_6765_p2.read()));
}

void sha256_transform::thread_add_ln53_74_fu_7506_p2() {
    add_ln53_74_fu_7506_p2 = (!add_ln53_73_fu_7500_p2.read().is_01() || !xor_ln53_75_fu_7494_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_73_fu_7500_p2.read()) + sc_biguint<32>(xor_ln53_75_fu_7494_p2.read()));
}

void sha256_transform::thread_add_ln53_75_fu_7703_p2() {
    add_ln53_75_fu_7703_p2 = (!add_ln53_74_reg_25107.read().is_01() || !add_ln53_72_fu_7699_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_74_reg_25107.read()) + sc_biguint<32>(add_ln53_72_fu_7699_p2.read()));
}

void sha256_transform::thread_add_ln53_76_fu_7923_p2() {
    add_ln53_76_fu_7923_p2 = (!xor_ln53_77_fu_7895_p2.read().is_01() || !add_ln58_15_reg_25015.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_77_fu_7895_p2.read()) + sc_biguint<32>(add_ln58_15_reg_25015.read()));
}

void sha256_transform::thread_add_ln53_77_fu_7928_p2() {
    add_ln53_77_fu_7928_p2 = (!ap_const_lv32_240CA1CC.is_01() || !m_19_fu_7520_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_240CA1CC) + sc_biguint<32>(m_19_fu_7520_p2.read()));
}

void sha256_transform::thread_add_ln53_78_fu_7934_p2() {
    add_ln53_78_fu_7934_p2 = (!add_ln53_77_fu_7928_p2.read().is_01() || !xor_ln53_79_fu_7917_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_77_fu_7928_p2.read()) + sc_biguint<32>(xor_ln53_79_fu_7917_p2.read()));
}

void sha256_transform::thread_add_ln53_79_fu_7940_p2() {
    add_ln53_79_fu_7940_p2 = (!add_ln53_78_fu_7934_p2.read().is_01() || !add_ln53_76_fu_7923_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_78_fu_7934_p2.read()) + sc_biguint<32>(add_ln53_76_fu_7923_p2.read()));
}

void sha256_transform::thread_add_ln53_7_fu_1328_p2() {
    add_ln53_7_fu_1328_p2 = (!add_ln53_6_fu_1322_p2.read().is_01() || !add_ln53_4_fu_1310_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_6_fu_1322_p2.read()) + sc_biguint<32>(add_ln53_4_fu_1310_p2.read()));
}

void sha256_transform::thread_add_ln53_80_fu_8463_p2() {
    add_ln53_80_fu_8463_p2 = (!xor_ln53_81_reg_25178.read().is_01() || !add_ln58_16_reg_25069.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_81_reg_25178.read()) + sc_biguint<32>(add_ln58_16_reg_25069.read()));
}

void sha256_transform::thread_add_ln53_81_fu_8467_p2() {
    add_ln53_81_fu_8467_p2 = (!ap_const_lv32_2DE92C6F.is_01() || !m_20_fu_8111_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2DE92C6F) + sc_biguint<32>(m_20_fu_8111_p2.read()));
}

void sha256_transform::thread_add_ln53_82_fu_8473_p2() {
    add_ln53_82_fu_8473_p2 = (!add_ln53_81_fu_8467_p2.read().is_01() || !xor_ln53_83_fu_8457_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_81_fu_8467_p2.read()) + sc_biguint<32>(xor_ln53_83_fu_8457_p2.read()));
}

void sha256_transform::thread_add_ln53_83_fu_8479_p2() {
    add_ln53_83_fu_8479_p2 = (!add_ln53_82_fu_8473_p2.read().is_01() || !add_ln53_80_fu_8463_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_82_fu_8473_p2.read()) + sc_biguint<32>(add_ln53_80_fu_8463_p2.read()));
}

void sha256_transform::thread_add_ln53_84_fu_8668_p2() {
    add_ln53_84_fu_8668_p2 = (!xor_ln53_85_fu_8640_p2.read().is_01() || !add_ln58_17_reg_25095.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_85_fu_8640_p2.read()) + sc_biguint<32>(add_ln58_17_reg_25095.read()));
}

void sha256_transform::thread_add_ln53_85_fu_8673_p2() {
    add_ln53_85_fu_8673_p2 = (!ap_const_lv32_4A7484AA.is_01() || !m_21_fu_8124_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_4A7484AA) + sc_biguint<32>(m_21_fu_8124_p2.read()));
}

void sha256_transform::thread_add_ln53_86_fu_8679_p2() {
    add_ln53_86_fu_8679_p2 = (!add_ln53_85_fu_8673_p2.read().is_01() || !xor_ln53_87_fu_8662_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_85_fu_8673_p2.read()) + sc_biguint<32>(xor_ln53_87_fu_8662_p2.read()));
}

void sha256_transform::thread_add_ln53_87_fu_8685_p2() {
    add_ln53_87_fu_8685_p2 = (!add_ln53_86_fu_8679_p2.read().is_01() || !add_ln53_84_fu_8668_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_86_fu_8679_p2.read()) + sc_biguint<32>(add_ln53_84_fu_8668_p2.read()));
}

void sha256_transform::thread_add_ln53_88_fu_9236_p2() {
    add_ln53_88_fu_9236_p2 = (!xor_ln53_89_fu_9208_p2.read().is_01() || !add_ln58_18_reg_25142.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_89_fu_9208_p2.read()) + sc_biguint<32>(add_ln58_18_reg_25142.read()));
}

void sha256_transform::thread_add_ln53_89_fu_9241_p2() {
    add_ln53_89_fu_9241_p2 = (!ap_const_lv32_5CB0A9DC.is_01() || !m_22_fu_8695_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_5CB0A9DC) + sc_biguint<32>(m_22_fu_8695_p2.read()));
}

void sha256_transform::thread_add_ln53_8_fu_1647_p2() {
    add_ln53_8_fu_1647_p2 = (!ap_const_lv32_B5C0FBCF.is_01() || !xor_ln53_9_fu_1619_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_B5C0FBCF) + sc_biguint<32>(xor_ln53_9_fu_1619_p2.read()));
}

void sha256_transform::thread_add_ln53_90_fu_9247_p2() {
    add_ln53_90_fu_9247_p2 = (!add_ln53_89_fu_9241_p2.read().is_01() || !xor_ln53_91_fu_9230_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_89_fu_9241_p2.read()) + sc_biguint<32>(xor_ln53_91_fu_9230_p2.read()));
}

void sha256_transform::thread_add_ln53_91_fu_9253_p2() {
    add_ln53_91_fu_9253_p2 = (!add_ln53_90_fu_9247_p2.read().is_01() || !add_ln53_88_fu_9236_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_90_fu_9247_p2.read()) + sc_biguint<32>(add_ln53_88_fu_9236_p2.read()));
}

void sha256_transform::thread_add_ln53_92_fu_9642_p2() {
    add_ln53_92_fu_9642_p2 = (!xor_ln53_93_reg_25327.read().is_01() || !add_ln58_19_reg_25169.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_93_reg_25327.read()) + sc_biguint<32>(add_ln58_19_reg_25169.read()));
}

void sha256_transform::thread_add_ln53_93_fu_9443_p2() {
    add_ln53_93_fu_9443_p2 = (!ap_const_lv32_76F988DA.is_01() || !m_23_fu_8708_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_76F988DA) + sc_biguint<32>(m_23_fu_8708_p2.read()));
}

void sha256_transform::thread_add_ln53_94_fu_9449_p2() {
    add_ln53_94_fu_9449_p2 = (!add_ln53_93_fu_9443_p2.read().is_01() || !xor_ln53_95_fu_9437_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_93_fu_9443_p2.read()) + sc_biguint<32>(xor_ln53_95_fu_9437_p2.read()));
}

void sha256_transform::thread_add_ln53_95_fu_9646_p2() {
    add_ln53_95_fu_9646_p2 = (!add_ln53_94_reg_25332.read().is_01() || !add_ln53_92_fu_9642_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_94_reg_25332.read()) + sc_biguint<32>(add_ln53_92_fu_9642_p2.read()));
}

void sha256_transform::thread_add_ln53_96_fu_9866_p2() {
    add_ln53_96_fu_9866_p2 = (!ap_const_lv32_983E5152.is_01() || !xor_ln53_97_fu_9838_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_983E5152) + sc_biguint<32>(xor_ln53_97_fu_9838_p2.read()));
}

void sha256_transform::thread_add_ln53_97_fu_9872_p2() {
    add_ln53_97_fu_9872_p2 = (!xor_ln53_99_fu_9860_p2.read().is_01() || !m_24_fu_9463_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_99_fu_9860_p2.read()) + sc_biguint<32>(m_24_fu_9463_p2.read()));
}

void sha256_transform::thread_add_ln53_98_fu_9878_p2() {
    add_ln53_98_fu_9878_p2 = (!add_ln53_97_fu_9872_p2.read().is_01() || !add_ln58_20_reg_25240.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_97_fu_9872_p2.read()) + sc_biguint<32>(add_ln58_20_reg_25240.read()));
}

void sha256_transform::thread_add_ln53_99_fu_9883_p2() {
    add_ln53_99_fu_9883_p2 = (!add_ln53_98_fu_9878_p2.read().is_01() || !add_ln53_96_fu_9866_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_98_fu_9878_p2.read()) + sc_biguint<32>(add_ln53_96_fu_9866_p2.read()));
}

void sha256_transform::thread_add_ln53_9_fu_1653_p2() {
    add_ln53_9_fu_1653_p2 = (!xor_ln53_11_fu_1641_p2.read().is_01() || !m_2_fu_1334_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_11_fu_1641_p2.read()) + sc_biguint<32>(m_2_fu_1334_p5.read()));
}

void sha256_transform::thread_add_ln53_fu_1178_p2() {
    add_ln53_fu_1178_p2 = (!ap_port_reg_ctx_state_7_read.read().is_01() || !xor_ln53_1_fu_1148_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_7_read.read()) + sc_biguint<32>(xor_ln53_1_fu_1148_p2.read()));
}

void sha256_transform::thread_add_ln58_10_fu_4887_p2() {
    add_ln58_10_fu_4887_p2 = (!add_ln53_43_fu_4803_p2.read().is_01() || !add_ln62_6_reg_24585.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_43_fu_4803_p2.read()) + sc_biguint<32>(add_ln62_6_reg_24585.read()));
}

void sha256_transform::thread_add_ln58_11_fu_5545_p2() {
    add_ln58_11_fu_5545_p2 = (!add_ln53_47_reg_24826.read().is_01() || !add_ln62_7_reg_24692.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_47_reg_24826.read()) + sc_biguint<32>(add_ln62_7_reg_24692.read()));
}

void sha256_transform::thread_add_ln58_12_fu_5760_p2() {
    add_ln58_12_fu_5760_p2 = (!add_ln53_51_fu_5676_p2.read().is_01() || !add_ln62_8_reg_24708.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_51_fu_5676_p2.read()) + sc_biguint<32>(add_ln62_8_reg_24708.read()));
}

void sha256_transform::thread_add_ln58_13_fu_6014_p2() {
    add_ln58_13_fu_6014_p2 = (!add_ln53_55_fu_5911_p2.read().is_01() || !add_ln62_9_reg_24799.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_55_fu_5911_p2.read()) + sc_biguint<32>(add_ln62_9_reg_24799.read()));
}

void sha256_transform::thread_add_ln58_14_fu_6231_p2() {
    add_ln58_14_fu_6231_p2 = (!add_ln53_59_fu_6147_p2.read().is_01() || !add_ln62_10_reg_24872.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_59_fu_6147_p2.read()) + sc_biguint<32>(add_ln62_10_reg_24872.read()));
}

void sha256_transform::thread_add_ln58_15_fu_6620_p2() {
    add_ln58_15_fu_6620_p2 = (!add_ln53_63_fu_6536_p2.read().is_01() || !add_ln62_11_reg_24887.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_63_fu_6536_p2.read()) + sc_biguint<32>(add_ln62_11_reg_24887.read()));
}

void sha256_transform::thread_add_ln58_16_fu_7178_p2() {
    add_ln58_16_fu_7178_p2 = (!add_ln53_67_reg_25022.read().is_01() || !add_ln62_12_reg_24924.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_67_reg_25022.read()) + sc_biguint<32>(add_ln62_12_reg_24924.read()));
}

void sha256_transform::thread_add_ln58_17_fu_7394_p2() {
    add_ln58_17_fu_7394_p2 = (!add_ln53_71_fu_7310_p2.read().is_01() || !add_ln62_13_reg_24940.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_71_fu_7310_p2.read()) + sc_biguint<32>(add_ln62_13_reg_24940.read()));
}

void sha256_transform::thread_add_ln58_18_fu_7806_p2() {
    add_ln58_18_fu_7806_p2 = (!add_ln53_75_fu_7703_p2.read().is_01() || !add_ln62_14_reg_24995.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_75_fu_7703_p2.read()) + sc_biguint<32>(add_ln62_14_reg_24995.read()));
}

void sha256_transform::thread_add_ln58_19_fu_8024_p2() {
    add_ln58_19_fu_8024_p2 = (!add_ln53_79_fu_7940_p2.read().is_01() || !add_ln62_15_reg_25060.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_79_fu_7940_p2.read()) + sc_biguint<32>(add_ln62_15_reg_25060.read()));
}

void sha256_transform::thread_add_ln58_1_fu_1542_p2() {
    add_ln58_1_fu_1542_p2 = (!ap_port_reg_ctx_state_2_read.read().is_01() || !add_ln53_7_reg_24190.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_2_read.read()) + sc_biguint<32>(add_ln53_7_reg_24190.read()));
}

void sha256_transform::thread_add_ln58_20_fu_8563_p2() {
    add_ln58_20_fu_8563_p2 = (!add_ln53_83_fu_8479_p2.read().is_01() || !add_ln62_16_reg_25075.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_83_fu_8479_p2.read()) + sc_biguint<32>(add_ln62_16_reg_25075.read()));
}

void sha256_transform::thread_add_ln58_21_fu_9121_p2() {
    add_ln58_21_fu_9121_p2 = (!add_ln53_87_reg_25247.read().is_01() || !add_ln62_17_reg_25133.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_87_reg_25247.read()) + sc_biguint<32>(add_ln62_17_reg_25133.read()));
}

void sha256_transform::thread_add_ln58_22_fu_9337_p2() {
    add_ln58_22_fu_9337_p2 = (!add_ln53_91_fu_9253_p2.read().is_01() || !add_ln62_18_reg_25149.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_91_fu_9253_p2.read()) + sc_biguint<32>(add_ln62_18_reg_25149.read()));
}

void sha256_transform::thread_add_ln58_23_fu_9749_p2() {
    add_ln58_23_fu_9749_p2 = (!add_ln53_95_fu_9646_p2.read().is_01() || !add_ln62_19_reg_25220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_95_fu_9646_p2.read()) + sc_biguint<32>(add_ln62_19_reg_25220.read()));
}

void sha256_transform::thread_add_ln58_24_fu_9967_p2() {
    add_ln58_24_fu_9967_p2 = (!add_ln53_99_fu_9883_p2.read().is_01() || !add_ln62_20_reg_25285.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_99_fu_9883_p2.read()) + sc_biguint<32>(add_ln62_20_reg_25285.read()));
}

void sha256_transform::thread_add_ln58_25_fu_10506_p2() {
    add_ln58_25_fu_10506_p2 = (!add_ln53_103_fu_10422_p2.read().is_01() || !add_ln62_21_reg_25300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_103_fu_10422_p2.read()) + sc_biguint<32>(add_ln62_21_reg_25300.read()));
}

void sha256_transform::thread_add_ln58_26_fu_11223_p2() {
    add_ln58_26_fu_11223_p2 = (!add_ln53_107_reg_25472.read().is_01() || !add_ln62_22_reg_25358.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_107_reg_25472.read()) + sc_biguint<32>(add_ln62_22_reg_25358.read()));
}

void sha256_transform::thread_add_ln58_27_fu_11439_p2() {
    add_ln58_27_fu_11439_p2 = (!add_ln53_111_fu_11355_p2.read().is_01() || !add_ln62_23_reg_25374.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_111_fu_11355_p2.read()) + sc_biguint<32>(add_ln62_23_reg_25374.read()));
}

void sha256_transform::thread_add_ln58_28_fu_12781_p2() {
    add_ln58_28_fu_12781_p2 = (!add_ln53_115_fu_12678_p2.read().is_01() || !add_ln62_24_reg_25445.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_115_fu_12678_p2.read()) + sc_biguint<32>(add_ln62_24_reg_25445.read()));
}

void sha256_transform::thread_add_ln58_29_fu_12998_p2() {
    add_ln58_29_fu_12998_p2 = (!add_ln53_119_fu_12914_p2.read().is_01() || !add_ln62_25_reg_25527.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_119_fu_12914_p2.read()) + sc_biguint<32>(add_ln62_25_reg_25527.read()));
}

void sha256_transform::thread_add_ln58_2_fu_1670_p2() {
    add_ln58_2_fu_1670_p2 = (!ap_port_reg_ctx_state_1_read.read().is_01() || !add_ln53_11_fu_1664_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_1_read.read()) + sc_biguint<32>(add_ln53_11_fu_1664_p2.read()));
}

void sha256_transform::thread_add_ln58_30_fu_14468_p2() {
    add_ln58_30_fu_14468_p2 = (!add_ln53_123_fu_14384_p2.read().is_01() || !add_ln62_26_reg_25542.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_123_fu_14384_p2.read()) + sc_biguint<32>(add_ln62_26_reg_25542.read()));
}

void sha256_transform::thread_add_ln58_31_fu_15672_p2() {
    add_ln58_31_fu_15672_p2 = (!add_ln53_127_reg_25871.read().is_01() || !add_ln62_27_reg_25681.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_127_reg_25871.read()) + sc_biguint<32>(add_ln62_27_reg_25681.read()));
}

void sha256_transform::thread_add_ln58_32_fu_15887_p2() {
    add_ln58_32_fu_15887_p2 = (!add_ln53_131_fu_15803_p2.read().is_01() || !add_ln62_28_reg_25697.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_131_fu_15803_p2.read()) + sc_biguint<32>(add_ln62_28_reg_25697.read()));
}

void sha256_transform::thread_add_ln58_33_fu_16592_p2() {
    add_ln58_33_fu_16592_p2 = (!add_ln53_135_fu_16489_p2.read().is_01() || !add_ln62_29_reg_25844.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_135_fu_16489_p2.read()) + sc_biguint<32>(add_ln62_29_reg_25844.read()));
}

void sha256_transform::thread_add_ln58_34_fu_16809_p2() {
    add_ln58_34_fu_16809_p2 = (!add_ln53_139_fu_16725_p2.read().is_01() || !add_ln62_30_reg_25945.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_139_fu_16725_p2.read()) + sc_biguint<32>(add_ln62_30_reg_25945.read()));
}

void sha256_transform::thread_add_ln58_35_fu_17294_p2() {
    add_ln58_35_fu_17294_p2 = (!add_ln53_143_fu_17210_p2.read().is_01() || !add_ln62_31_reg_25960.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_143_fu_17210_p2.read()) + sc_biguint<32>(add_ln62_31_reg_25960.read()));
}

void sha256_transform::thread_add_ln58_36_fu_17558_p2() {
    add_ln58_36_fu_17558_p2 = (!add_ln53_147_reg_26141.read().is_01() || !add_ln62_32_reg_26048.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_147_reg_26141.read()) + sc_biguint<32>(add_ln62_32_reg_26048.read()));
}

void sha256_transform::thread_add_ln58_37_fu_17773_p2() {
    add_ln58_37_fu_17773_p2 = (!add_ln53_151_fu_17689_p2.read().is_01() || !add_ln62_33_reg_26064.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_151_fu_17689_p2.read()) + sc_biguint<32>(add_ln62_33_reg_26064.read()));
}

void sha256_transform::thread_add_ln58_38_fu_18026_p2() {
    add_ln58_38_fu_18026_p2 = (!add_ln53_155_fu_17923_p2.read().is_01() || !add_ln62_34_reg_26114.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_155_fu_17923_p2.read()) + sc_biguint<32>(add_ln62_34_reg_26114.read()));
}

void sha256_transform::thread_add_ln58_39_fu_18243_p2() {
    add_ln58_39_fu_18243_p2 = (!add_ln53_159_fu_18159_p2.read().is_01() || !add_ln62_35_reg_26152.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_159_fu_18159_p2.read()) + sc_biguint<32>(add_ln62_35_reg_26152.read()));
}

void sha256_transform::thread_add_ln58_3_fu_2429_p2() {
    add_ln58_3_fu_2429_p2 = (!ap_port_reg_ctx_state_0_read.read().is_01() || !add_ln53_15_fu_2322_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_0_read.read()) + sc_biguint<32>(add_ln53_15_fu_2322_p2.read()));
}

void sha256_transform::thread_add_ln58_40_fu_18474_p2() {
    add_ln58_40_fu_18474_p2 = (!add_ln53_163_fu_18390_p2.read().is_01() || !add_ln62_36_reg_26167.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_163_fu_18390_p2.read()) + sc_biguint<32>(add_ln62_36_reg_26167.read()));
}

void sha256_transform::thread_add_ln58_41_fu_18728_p2() {
    add_ln58_41_fu_18728_p2 = (!add_ln53_167_reg_26281.read().is_01() || !add_ln62_37_reg_26204.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_167_reg_26281.read()) + sc_biguint<32>(add_ln62_37_reg_26204.read()));
}

void sha256_transform::thread_add_ln58_42_fu_18943_p2() {
    add_ln58_42_fu_18943_p2 = (!add_ln53_171_fu_18859_p2.read().is_01() || !add_ln62_38_reg_26220.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_171_fu_18859_p2.read()) + sc_biguint<32>(add_ln62_38_reg_26220.read()));
}

void sha256_transform::thread_add_ln58_43_fu_19196_p2() {
    add_ln58_43_fu_19196_p2 = (!add_ln53_175_fu_19093_p2.read().is_01() || !add_ln62_39_reg_26254.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_175_fu_19093_p2.read()) + sc_biguint<32>(add_ln62_39_reg_26254.read()));
}

void sha256_transform::thread_add_ln58_44_fu_19413_p2() {
    add_ln58_44_fu_19413_p2 = (!add_ln53_179_fu_19329_p2.read().is_01() || !add_ln62_40_reg_26287.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_179_fu_19329_p2.read()) + sc_biguint<32>(add_ln62_40_reg_26287.read()));
}

void sha256_transform::thread_add_ln58_45_fu_19644_p2() {
    add_ln58_45_fu_19644_p2 = (!add_ln53_183_fu_19560_p2.read().is_01() || !add_ln62_41_reg_26302.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_183_fu_19560_p2.read()) + sc_biguint<32>(add_ln62_41_reg_26302.read()));
}

void sha256_transform::thread_add_ln58_46_fu_19898_p2() {
    add_ln58_46_fu_19898_p2 = (!add_ln53_187_reg_26416.read().is_01() || !add_ln62_42_reg_26339.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_187_reg_26416.read()) + sc_biguint<32>(add_ln62_42_reg_26339.read()));
}

void sha256_transform::thread_add_ln58_47_fu_20113_p2() {
    add_ln58_47_fu_20113_p2 = (!add_ln53_191_fu_20029_p2.read().is_01() || !add_ln62_43_reg_26355.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_191_fu_20029_p2.read()) + sc_biguint<32>(add_ln62_43_reg_26355.read()));
}

void sha256_transform::thread_add_ln58_48_fu_20375_p2() {
    add_ln58_48_fu_20375_p2 = (!add_ln53_195_fu_20272_p2.read().is_01() || !add_ln62_44_reg_26389.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_195_fu_20272_p2.read()) + sc_biguint<32>(add_ln62_44_reg_26389.read()));
}

void sha256_transform::thread_add_ln58_49_fu_20592_p2() {
    add_ln58_49_fu_20592_p2 = (!add_ln53_199_fu_20508_p2.read().is_01() || !add_ln62_45_reg_26422.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_199_fu_20508_p2.read()) + sc_biguint<32>(add_ln62_45_reg_26422.read()));
}

void sha256_transform::thread_add_ln58_4_fu_2648_p2() {
    add_ln58_4_fu_2648_p2 = (!add_ln53_19_fu_2564_p2.read().is_01() || !add_ln62_fu_2088_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_19_fu_2564_p2.read()) + sc_biguint<32>(add_ln62_fu_2088_p2.read()));
}

void sha256_transform::thread_add_ln58_50_fu_20823_p2() {
    add_ln58_50_fu_20823_p2 = (!add_ln53_203_fu_20739_p2.read().is_01() || !add_ln62_46_reg_26437.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_203_fu_20739_p2.read()) + sc_biguint<32>(add_ln62_46_reg_26437.read()));
}

void sha256_transform::thread_add_ln58_51_fu_21077_p2() {
    add_ln58_51_fu_21077_p2 = (!add_ln53_207_reg_26556.read().is_01() || !add_ln62_47_reg_26479.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_207_reg_26556.read()) + sc_biguint<32>(add_ln62_47_reg_26479.read()));
}

void sha256_transform::thread_add_ln58_52_fu_21292_p2() {
    add_ln58_52_fu_21292_p2 = (!add_ln53_211_fu_21208_p2.read().is_01() || !add_ln62_48_reg_26495.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_211_fu_21208_p2.read()) + sc_biguint<32>(add_ln62_48_reg_26495.read()));
}

void sha256_transform::thread_add_ln58_53_fu_21545_p2() {
    add_ln58_53_fu_21545_p2 = (!add_ln53_215_fu_21442_p2.read().is_01() || !add_ln62_49_reg_26529.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_215_fu_21442_p2.read()) + sc_biguint<32>(add_ln62_49_reg_26529.read()));
}

void sha256_transform::thread_add_ln58_54_fu_21762_p2() {
    add_ln58_54_fu_21762_p2 = (!add_ln53_219_fu_21678_p2.read().is_01() || !add_ln62_50_reg_26562.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_219_fu_21678_p2.read()) + sc_biguint<32>(add_ln62_50_reg_26562.read()));
}

void sha256_transform::thread_add_ln58_55_fu_21993_p2() {
    add_ln58_55_fu_21993_p2 = (!add_ln53_223_fu_21909_p2.read().is_01() || !add_ln62_51_reg_26577.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_223_fu_21909_p2.read()) + sc_biguint<32>(add_ln62_51_reg_26577.read()));
}

void sha256_transform::thread_add_ln58_56_fu_22247_p2() {
    add_ln58_56_fu_22247_p2 = (!add_ln53_227_reg_26691.read().is_01() || !add_ln62_52_reg_26614.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_227_reg_26691.read()) + sc_biguint<32>(add_ln62_52_reg_26614.read()));
}

void sha256_transform::thread_add_ln58_57_fu_22462_p2() {
    add_ln58_57_fu_22462_p2 = (!add_ln53_231_fu_22378_p2.read().is_01() || !add_ln62_53_reg_26630.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_231_fu_22378_p2.read()) + sc_biguint<32>(add_ln62_53_reg_26630.read()));
}

void sha256_transform::thread_add_ln58_58_fu_22715_p2() {
    add_ln58_58_fu_22715_p2 = (!add_ln53_235_fu_22612_p2.read().is_01() || !add_ln62_54_reg_26664.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_235_fu_22612_p2.read()) + sc_biguint<32>(add_ln62_54_reg_26664.read()));
}

void sha256_transform::thread_add_ln58_59_fu_22932_p2() {
    add_ln58_59_fu_22932_p2 = (!add_ln53_239_fu_22848_p2.read().is_01() || !add_ln62_55_reg_26697.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_239_fu_22848_p2.read()) + sc_biguint<32>(add_ln62_55_reg_26697.read()));
}

void sha256_transform::thread_add_ln58_5_fu_3089_p2() {
    add_ln58_5_fu_3089_p2 = (!add_ln53_23_fu_3005_p2.read().is_01() || !add_ln62_1_reg_24360.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_23_fu_3005_p2.read()) + sc_biguint<32>(add_ln62_1_reg_24360.read()));
}

void sha256_transform::thread_add_ln58_60_fu_23163_p2() {
    add_ln58_60_fu_23163_p2 = (!add_ln53_243_fu_23079_p2.read().is_01() || !add_ln62_56_reg_26712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_243_fu_23079_p2.read()) + sc_biguint<32>(add_ln62_56_reg_26712.read()));
}

void sha256_transform::thread_add_ln58_61_fu_23482_p2() {
    add_ln58_61_fu_23482_p2 = (!add_ln53_247_reg_26826.read().is_01() || !add_ln62_57_reg_26749.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_247_reg_26826.read()) + sc_biguint<32>(add_ln62_57_reg_26749.read()));
}

void sha256_transform::thread_add_ln58_62_fu_23719_p2() {
    add_ln58_62_fu_23719_p2 = (!add_ln53_252_fu_23614_p2.read().is_01() || !add_ln62_58_reg_26765.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_252_fu_23614_p2.read()) + sc_biguint<32>(add_ln62_58_reg_26765.read()));
}

void sha256_transform::thread_add_ln58_6_fu_3552_p2() {
    add_ln58_6_fu_3552_p2 = (!add_ln53_27_reg_24504.read().is_01() || !add_ln62_2_reg_24367.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_27_reg_24504.read()) + sc_biguint<32>(add_ln62_2_reg_24367.read()));
}

void sha256_transform::thread_add_ln58_7_fu_3768_p2() {
    add_ln58_7_fu_3768_p2 = (!add_ln53_31_fu_3684_p2.read().is_01() || !add_ln62_3_reg_24383.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_31_fu_3684_p2.read()) + sc_biguint<32>(add_ln62_3_reg_24383.read()));
}

void sha256_transform::thread_add_ln58_8_fu_4242_p2() {
    add_ln58_8_fu_4242_p2 = (!add_ln53_35_fu_4139_p2.read().is_01() || !add_ln62_4_reg_24477.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_35_fu_4139_p2.read()) + sc_biguint<32>(add_ln62_4_reg_24477.read()));
}

void sha256_transform::thread_add_ln58_9_fu_4460_p2() {
    add_ln58_9_fu_4460_p2 = (!add_ln53_39_fu_4376_p2.read().is_01() || !add_ln62_5_reg_24570.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_39_fu_4376_p2.read()) + sc_biguint<32>(add_ln62_5_reg_24570.read()));
}

void sha256_transform::thread_add_ln58_fu_1202_p2() {
    add_ln58_fu_1202_p2 = (!ap_port_reg_ctx_state_3_read.read().is_01() || !add_ln53_3_fu_1196_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_3_read.read()) + sc_biguint<32>(add_ln53_3_fu_1196_p2.read()));
}

void sha256_transform::thread_add_ln62_100_fu_17908_p2() {
    add_ln62_100_fu_17908_p2 = (!xor_ln54_151_fu_17902_p2.read().is_01() || !add_ln53_151_reg_26177.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_151_fu_17902_p2.read()) + sc_biguint<32>(add_ln53_151_reg_26177.read()));
}

void sha256_transform::thread_add_ln62_101_fu_18031_p2() {
    add_ln62_101_fu_18031_p2 = (!xor_ln54_155_fu_18020_p2.read().is_01() || !add_ln53_155_fu_17923_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_155_fu_18020_p2.read()) + sc_biguint<32>(add_ln53_155_fu_17923_p2.read()));
}

void sha256_transform::thread_add_ln62_102_fu_18345_p2() {
    add_ln62_102_fu_18345_p2 = (!xor_ln54_159_fu_18339_p2.read().is_01() || !add_ln53_159_reg_26230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_159_fu_18339_p2.read()) + sc_biguint<32>(add_ln53_159_reg_26230.read()));
}

void sha256_transform::thread_add_ln62_103_fu_18620_p2() {
    add_ln62_103_fu_18620_p2 = (!xor_ln54_163_fu_18614_p2.read().is_01() || !add_ln53_163_reg_26264.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_163_fu_18614_p2.read()) + sc_biguint<32>(add_ln53_163_reg_26264.read()));
}

void sha256_transform::thread_add_ln62_104_fu_18732_p2() {
    add_ln62_104_fu_18732_p2 = (!xor_ln54_167_fu_18722_p2.read().is_01() || !add_ln53_167_reg_26281.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_167_fu_18722_p2.read()) + sc_biguint<32>(add_ln53_167_reg_26281.read()));
}

void sha256_transform::thread_add_ln62_105_fu_19079_p2() {
    add_ln62_105_fu_19079_p2 = (!xor_ln54_171_fu_19073_p2.read().is_01() || !add_ln53_171_reg_26312.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_171_fu_19073_p2.read()) + sc_biguint<32>(add_ln53_171_reg_26312.read()));
}

void sha256_transform::thread_add_ln62_106_fu_19201_p2() {
    add_ln62_106_fu_19201_p2 = (!xor_ln54_175_fu_19190_p2.read().is_01() || !add_ln53_175_fu_19093_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_175_fu_19190_p2.read()) + sc_biguint<32>(add_ln53_175_fu_19093_p2.read()));
}

void sha256_transform::thread_add_ln62_107_fu_19515_p2() {
    add_ln62_107_fu_19515_p2 = (!xor_ln54_179_fu_19509_p2.read().is_01() || !add_ln53_179_reg_26365.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_179_fu_19509_p2.read()) + sc_biguint<32>(add_ln53_179_reg_26365.read()));
}

void sha256_transform::thread_add_ln62_108_fu_19790_p2() {
    add_ln62_108_fu_19790_p2 = (!xor_ln54_183_fu_19784_p2.read().is_01() || !add_ln53_183_reg_26399.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_183_fu_19784_p2.read()) + sc_biguint<32>(add_ln53_183_reg_26399.read()));
}

void sha256_transform::thread_add_ln62_109_fu_19902_p2() {
    add_ln62_109_fu_19902_p2 = (!xor_ln54_187_fu_19892_p2.read().is_01() || !add_ln53_187_reg_26416.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_187_fu_19892_p2.read()) + sc_biguint<32>(add_ln53_187_reg_26416.read()));
}

void sha256_transform::thread_add_ln62_10_fu_5442_p2() {
    add_ln62_10_fu_5442_p2 = (!add_ln62_73_fu_5437_p2.read().is_01() || !xor_ln54_41_reg_24814.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_73_fu_5437_p2.read()) + sc_biguint<32>(xor_ln54_41_reg_24814.read()));
}

void sha256_transform::thread_add_ln62_110_fu_20258_p2() {
    add_ln62_110_fu_20258_p2 = (!xor_ln54_191_fu_20252_p2.read().is_01() || !add_ln53_191_reg_26447.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_191_fu_20252_p2.read()) + sc_biguint<32>(add_ln53_191_reg_26447.read()));
}

void sha256_transform::thread_add_ln62_111_fu_20380_p2() {
    add_ln62_111_fu_20380_p2 = (!xor_ln54_195_fu_20369_p2.read().is_01() || !add_ln53_195_fu_20272_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_195_fu_20369_p2.read()) + sc_biguint<32>(add_ln53_195_fu_20272_p2.read()));
}

void sha256_transform::thread_add_ln62_112_fu_20694_p2() {
    add_ln62_112_fu_20694_p2 = (!xor_ln54_199_fu_20688_p2.read().is_01() || !add_ln53_199_reg_26505.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_199_fu_20688_p2.read()) + sc_biguint<32>(add_ln53_199_reg_26505.read()));
}

void sha256_transform::thread_add_ln62_113_fu_20969_p2() {
    add_ln62_113_fu_20969_p2 = (!xor_ln54_203_fu_20963_p2.read().is_01() || !add_ln53_203_reg_26539.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_203_fu_20963_p2.read()) + sc_biguint<32>(add_ln53_203_reg_26539.read()));
}

void sha256_transform::thread_add_ln62_114_fu_21081_p2() {
    add_ln62_114_fu_21081_p2 = (!xor_ln54_207_fu_21071_p2.read().is_01() || !add_ln53_207_reg_26556.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_207_fu_21071_p2.read()) + sc_biguint<32>(add_ln53_207_reg_26556.read()));
}

void sha256_transform::thread_add_ln62_115_fu_21428_p2() {
    add_ln62_115_fu_21428_p2 = (!xor_ln54_211_fu_21422_p2.read().is_01() || !add_ln53_211_reg_26587.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_211_fu_21422_p2.read()) + sc_biguint<32>(add_ln53_211_reg_26587.read()));
}

void sha256_transform::thread_add_ln62_116_fu_21550_p2() {
    add_ln62_116_fu_21550_p2 = (!xor_ln54_215_fu_21539_p2.read().is_01() || !add_ln53_215_fu_21442_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_215_fu_21539_p2.read()) + sc_biguint<32>(add_ln53_215_fu_21442_p2.read()));
}

void sha256_transform::thread_add_ln62_117_fu_21864_p2() {
    add_ln62_117_fu_21864_p2 = (!xor_ln54_219_fu_21858_p2.read().is_01() || !add_ln53_219_reg_26640.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_219_fu_21858_p2.read()) + sc_biguint<32>(add_ln53_219_reg_26640.read()));
}

void sha256_transform::thread_add_ln62_118_fu_22139_p2() {
    add_ln62_118_fu_22139_p2 = (!xor_ln54_223_fu_22133_p2.read().is_01() || !add_ln53_223_reg_26674.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_223_fu_22133_p2.read()) + sc_biguint<32>(add_ln53_223_reg_26674.read()));
}

void sha256_transform::thread_add_ln62_119_fu_22251_p2() {
    add_ln62_119_fu_22251_p2 = (!xor_ln54_227_fu_22241_p2.read().is_01() || !add_ln53_227_reg_26691.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_227_fu_22241_p2.read()) + sc_biguint<32>(add_ln53_227_reg_26691.read()));
}

void sha256_transform::thread_add_ln62_11_fu_5554_p2() {
    add_ln62_11_fu_5554_p2 = (!add_ln62_74_fu_5549_p2.read().is_01() || !xor_ln54_45_fu_5519_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_74_fu_5549_p2.read()) + sc_biguint<32>(xor_ln54_45_fu_5519_p2.read()));
}

void sha256_transform::thread_add_ln62_120_fu_22597_p2() {
    add_ln62_120_fu_22597_p2 = (!xor_ln54_231_fu_22591_p2.read().is_01() || !add_ln53_231_reg_26722.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_231_fu_22591_p2.read()) + sc_biguint<32>(add_ln53_231_reg_26722.read()));
}

void sha256_transform::thread_add_ln62_121_fu_22720_p2() {
    add_ln62_121_fu_22720_p2 = (!xor_ln54_235_fu_22709_p2.read().is_01() || !add_ln53_235_fu_22612_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_235_fu_22709_p2.read()) + sc_biguint<32>(add_ln53_235_fu_22612_p2.read()));
}

void sha256_transform::thread_add_ln62_122_fu_23034_p2() {
    add_ln62_122_fu_23034_p2 = (!xor_ln54_239_fu_23028_p2.read().is_01() || !add_ln53_239_reg_26775.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_239_fu_23028_p2.read()) + sc_biguint<32>(add_ln53_239_reg_26775.read()));
}

void sha256_transform::thread_add_ln62_123_fu_23374_p2() {
    add_ln62_123_fu_23374_p2 = (!xor_ln54_243_fu_23368_p2.read().is_01() || !add_ln53_243_reg_26809.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_243_fu_23368_p2.read()) + sc_biguint<32>(add_ln53_243_reg_26809.read()));
}

void sha256_transform::thread_add_ln62_124_fu_23486_p2() {
    add_ln62_124_fu_23486_p2 = (!xor_ln54_247_fu_23476_p2.read().is_01() || !add_ln53_247_reg_26826.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_247_fu_23476_p2.read()) + sc_biguint<32>(add_ln53_247_reg_26826.read()));
}

void sha256_transform::thread_add_ln62_125_fu_23724_p2() {
    add_ln62_125_fu_23724_p2 = (!xor_ln54_251_fu_23713_p2.read().is_01() || !add_ln53_252_fu_23614_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_251_fu_23713_p2.read()) + sc_biguint<32>(add_ln53_252_fu_23614_p2.read()));
}

void sha256_transform::thread_add_ln62_12_fu_5901_p2() {
    add_ln62_12_fu_5901_p2 = (!add_ln62_75_fu_5896_p2.read().is_01() || !xor_ln54_49_reg_24902.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_75_fu_5896_p2.read()) + sc_biguint<32>(xor_ln54_49_reg_24902.read()));
}

void sha256_transform::thread_add_ln62_13_fu_6025_p2() {
    add_ln62_13_fu_6025_p2 = (!add_ln62_76_fu_6019_p2.read().is_01() || !xor_ln54_53_fu_5988_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_76_fu_6019_p2.read()) + sc_biguint<32>(xor_ln54_53_fu_5988_p2.read()));
}

void sha256_transform::thread_add_ln62_14_fu_6496_p2() {
    add_ln62_14_fu_6496_p2 = (!add_ln62_77_fu_6491_p2.read().is_01() || !xor_ln54_57_reg_24955.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_77_fu_6491_p2.read()) + sc_biguint<32>(xor_ln54_57_reg_24955.read()));
}

void sha256_transform::thread_add_ln62_15_fu_7075_p2() {
    add_ln62_15_fu_7075_p2 = (!add_ln62_78_fu_7070_p2.read().is_01() || !xor_ln54_61_reg_25010.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_78_fu_7070_p2.read()) + sc_biguint<32>(xor_ln54_61_reg_25010.read()));
}

void sha256_transform::thread_add_ln62_16_fu_7187_p2() {
    add_ln62_16_fu_7187_p2 = (!add_ln62_79_fu_7182_p2.read().is_01() || !xor_ln54_65_fu_7152_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_79_fu_7182_p2.read()) + sc_biguint<32>(xor_ln54_65_fu_7152_p2.read()));
}

void sha256_transform::thread_add_ln62_17_fu_7694_p2() {
    add_ln62_17_fu_7694_p2 = (!add_ln62_80_fu_7689_p2.read().is_01() || !xor_ln54_69_reg_25090.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_80_fu_7689_p2.read()) + sc_biguint<32>(xor_ln54_69_reg_25090.read()));
}

void sha256_transform::thread_add_ln62_18_fu_7817_p2() {
    add_ln62_18_fu_7817_p2 = (!add_ln62_81_fu_7811_p2.read().is_01() || !xor_ln54_73_fu_7780_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_81_fu_7811_p2.read()) + sc_biguint<32>(xor_ln54_73_fu_7780_p2.read()));
}

void sha256_transform::thread_add_ln62_19_fu_8438_p2() {
    add_ln62_19_fu_8438_p2 = (!add_ln62_82_fu_8433_p2.read().is_01() || !xor_ln54_77_reg_25164.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_82_fu_8433_p2.read()) + sc_biguint<32>(xor_ln54_77_reg_25164.read()));
}

void sha256_transform::thread_add_ln62_1_fu_2199_p2() {
    add_ln62_1_fu_2199_p2 = (!add_ln62_64_fu_2194_p2.read().is_01() || !xor_ln54_5_fu_2166_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_64_fu_2194_p2.read()) + sc_biguint<32>(xor_ln54_5_fu_2166_p2.read()));
}

void sha256_transform::thread_add_ln62_20_fu_9018_p2() {
    add_ln62_20_fu_9018_p2 = (!add_ln62_83_fu_9013_p2.read().is_01() || !xor_ln54_81_reg_25235.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_83_fu_9013_p2.read()) + sc_biguint<32>(xor_ln54_81_reg_25235.read()));
}

void sha256_transform::thread_add_ln62_21_fu_9130_p2() {
    add_ln62_21_fu_9130_p2 = (!add_ln62_84_fu_9125_p2.read().is_01() || !xor_ln54_85_fu_9095_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_84_fu_9125_p2.read()) + sc_biguint<32>(xor_ln54_85_fu_9095_p2.read()));
}

void sha256_transform::thread_add_ln62_22_fu_9637_p2() {
    add_ln62_22_fu_9637_p2 = (!add_ln62_85_fu_9632_p2.read().is_01() || !xor_ln54_89_reg_25315.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_85_fu_9632_p2.read()) + sc_biguint<32>(xor_ln54_89_reg_25315.read()));
}

void sha256_transform::thread_add_ln62_23_fu_9760_p2() {
    add_ln62_23_fu_9760_p2 = (!add_ln62_86_fu_9754_p2.read().is_01() || !xor_ln54_93_fu_9723_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_86_fu_9754_p2.read()) + sc_biguint<32>(xor_ln54_93_fu_9723_p2.read()));
}

void sha256_transform::thread_add_ln62_24_fu_10381_p2() {
    add_ln62_24_fu_10381_p2 = (!add_ln62_87_fu_10376_p2.read().is_01() || !xor_ln54_97_reg_25389.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_87_fu_10376_p2.read()) + sc_biguint<32>(xor_ln54_97_reg_25389.read()));
}

void sha256_transform::thread_add_ln62_25_fu_11120_p2() {
    add_ln62_25_fu_11120_p2 = (!add_ln62_88_fu_11115_p2.read().is_01() || !xor_ln54_101_reg_25460.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_88_fu_11115_p2.read()) + sc_biguint<32>(xor_ln54_101_reg_25460.read()));
}

void sha256_transform::thread_add_ln62_26_fu_11232_p2() {
    add_ln62_26_fu_11232_p2 = (!add_ln62_89_fu_11227_p2.read().is_01() || !xor_ln54_105_fu_11197_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_89_fu_11227_p2.read()) + sc_biguint<32>(xor_ln54_105_fu_11197_p2.read()));
}

void sha256_transform::thread_add_ln62_27_fu_12669_p2() {
    add_ln62_27_fu_12669_p2 = (!add_ln62_90_fu_12664_p2.read().is_01() || !xor_ln54_109_reg_25557.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_90_fu_12664_p2.read()) + sc_biguint<32>(xor_ln54_109_reg_25557.read()));
}

void sha256_transform::thread_add_ln62_28_fu_12792_p2() {
    add_ln62_28_fu_12792_p2 = (!add_ln62_91_fu_12786_p2.read().is_01() || !xor_ln54_113_fu_12755_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_91_fu_12786_p2.read()) + sc_biguint<32>(xor_ln54_113_fu_12755_p2.read()));
}

void sha256_transform::thread_add_ln62_29_fu_14344_p2() {
    add_ln62_29_fu_14344_p2 = (!add_ln62_92_fu_14339_p2.read().is_01() || !xor_ln54_117_reg_25712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_92_fu_14339_p2.read()) + sc_biguint<32>(xor_ln54_117_reg_25712.read()));
}

void sha256_transform::thread_add_ln62_2_fu_2312_p2() {
    add_ln62_2_fu_2312_p2 = (!add_ln62_65_fu_2307_p2.read().is_01() || !xor_ln54_9_fu_2277_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_65_fu_2307_p2.read()) + sc_biguint<32>(xor_ln54_9_fu_2277_p2.read()));
}

void sha256_transform::thread_add_ln62_30_fu_15569_p2() {
    add_ln62_30_fu_15569_p2 = (!add_ln62_93_fu_15564_p2.read().is_01() || !xor_ln54_121_reg_25859.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_93_fu_15564_p2.read()) + sc_biguint<32>(xor_ln54_121_reg_25859.read()));
}

void sha256_transform::thread_add_ln62_31_fu_15681_p2() {
    add_ln62_31_fu_15681_p2 = (!add_ln62_94_fu_15676_p2.read().is_01() || !xor_ln54_125_fu_15646_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_94_fu_15676_p2.read()) + sc_biguint<32>(xor_ln54_125_fu_15646_p2.read()));
}

void sha256_transform::thread_add_ln62_32_fu_16480_p2() {
    add_ln62_32_fu_16480_p2 = (!add_ln62_95_fu_16475_p2.read().is_01() || !xor_ln54_129_reg_25975.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_95_fu_16475_p2.read()) + sc_biguint<32>(xor_ln54_129_reg_25975.read()));
}

void sha256_transform::thread_add_ln62_33_fu_16603_p2() {
    add_ln62_33_fu_16603_p2 = (!add_ln62_96_fu_16597_p2.read().is_01() || !xor_ln54_133_fu_16566_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_96_fu_16597_p2.read()) + sc_biguint<32>(xor_ln54_133_fu_16566_p2.read()));
}

void sha256_transform::thread_add_ln62_34_fu_17170_p2() {
    add_ln62_34_fu_17170_p2 = (!add_ln62_97_fu_17165_p2.read().is_01() || !xor_ln54_137_reg_26079.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_97_fu_17165_p2.read()) + sc_biguint<32>(xor_ln54_137_reg_26079.read()));
}

void sha256_transform::thread_add_ln62_35_fu_17455_p2() {
    add_ln62_35_fu_17455_p2 = (!add_ln62_98_fu_17450_p2.read().is_01() || !xor_ln54_141_reg_26129.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_98_fu_17450_p2.read()) + sc_biguint<32>(xor_ln54_141_reg_26129.read()));
}

void sha256_transform::thread_add_ln62_36_fu_17567_p2() {
    add_ln62_36_fu_17567_p2 = (!add_ln62_99_fu_17562_p2.read().is_01() || !xor_ln54_145_fu_17532_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_99_fu_17562_p2.read()) + sc_biguint<32>(xor_ln54_145_fu_17532_p2.read()));
}

void sha256_transform::thread_add_ln62_37_fu_17913_p2() {
    add_ln62_37_fu_17913_p2 = (!add_ln62_100_fu_17908_p2.read().is_01() || !xor_ln54_149_reg_26182.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_100_fu_17908_p2.read()) + sc_biguint<32>(xor_ln54_149_reg_26182.read()));
}

void sha256_transform::thread_add_ln62_38_fu_18037_p2() {
    add_ln62_38_fu_18037_p2 = (!add_ln62_101_fu_18031_p2.read().is_01() || !xor_ln54_153_fu_18000_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_101_fu_18031_p2.read()) + sc_biguint<32>(xor_ln54_153_fu_18000_p2.read()));
}

void sha256_transform::thread_add_ln62_39_fu_18350_p2() {
    add_ln62_39_fu_18350_p2 = (!add_ln62_102_fu_18345_p2.read().is_01() || !xor_ln54_157_reg_26235.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_102_fu_18345_p2.read()) + sc_biguint<32>(xor_ln54_157_reg_26235.read()));
}

void sha256_transform::thread_add_ln62_3_fu_2441_p2() {
    add_ln62_3_fu_2441_p2 = (!add_ln62_66_fu_2435_p2.read().is_01() || !xor_ln54_13_fu_2399_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_66_fu_2435_p2.read()) + sc_biguint<32>(xor_ln54_13_fu_2399_p2.read()));
}

void sha256_transform::thread_add_ln62_40_fu_18625_p2() {
    add_ln62_40_fu_18625_p2 = (!add_ln62_103_fu_18620_p2.read().is_01() || !xor_ln54_161_reg_26269.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_103_fu_18620_p2.read()) + sc_biguint<32>(xor_ln54_161_reg_26269.read()));
}

void sha256_transform::thread_add_ln62_41_fu_18737_p2() {
    add_ln62_41_fu_18737_p2 = (!add_ln62_104_fu_18732_p2.read().is_01() || !xor_ln54_165_fu_18702_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_104_fu_18732_p2.read()) + sc_biguint<32>(xor_ln54_165_fu_18702_p2.read()));
}

void sha256_transform::thread_add_ln62_42_fu_19084_p2() {
    add_ln62_42_fu_19084_p2 = (!add_ln62_105_fu_19079_p2.read().is_01() || !xor_ln54_169_reg_26317.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_105_fu_19079_p2.read()) + sc_biguint<32>(xor_ln54_169_reg_26317.read()));
}

void sha256_transform::thread_add_ln62_43_fu_19207_p2() {
    add_ln62_43_fu_19207_p2 = (!add_ln62_106_fu_19201_p2.read().is_01() || !xor_ln54_173_fu_19170_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_106_fu_19201_p2.read()) + sc_biguint<32>(xor_ln54_173_fu_19170_p2.read()));
}

void sha256_transform::thread_add_ln62_44_fu_19520_p2() {
    add_ln62_44_fu_19520_p2 = (!add_ln62_107_fu_19515_p2.read().is_01() || !xor_ln54_177_reg_26370.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_107_fu_19515_p2.read()) + sc_biguint<32>(xor_ln54_177_reg_26370.read()));
}

void sha256_transform::thread_add_ln62_45_fu_19795_p2() {
    add_ln62_45_fu_19795_p2 = (!add_ln62_108_fu_19790_p2.read().is_01() || !xor_ln54_181_reg_26404.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_108_fu_19790_p2.read()) + sc_biguint<32>(xor_ln54_181_reg_26404.read()));
}

void sha256_transform::thread_add_ln62_46_fu_19907_p2() {
    add_ln62_46_fu_19907_p2 = (!add_ln62_109_fu_19902_p2.read().is_01() || !xor_ln54_185_fu_19872_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_109_fu_19902_p2.read()) + sc_biguint<32>(xor_ln54_185_fu_19872_p2.read()));
}

void sha256_transform::thread_add_ln62_47_fu_20263_p2() {
    add_ln62_47_fu_20263_p2 = (!add_ln62_110_fu_20258_p2.read().is_01() || !xor_ln54_189_reg_26452.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_110_fu_20258_p2.read()) + sc_biguint<32>(xor_ln54_189_reg_26452.read()));
}

void sha256_transform::thread_add_ln62_48_fu_20386_p2() {
    add_ln62_48_fu_20386_p2 = (!add_ln62_111_fu_20380_p2.read().is_01() || !xor_ln54_193_fu_20349_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_111_fu_20380_p2.read()) + sc_biguint<32>(xor_ln54_193_fu_20349_p2.read()));
}

void sha256_transform::thread_add_ln62_49_fu_20699_p2() {
    add_ln62_49_fu_20699_p2 = (!add_ln62_112_fu_20694_p2.read().is_01() || !xor_ln54_197_reg_26510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_112_fu_20694_p2.read()) + sc_biguint<32>(xor_ln54_197_reg_26510.read()));
}

void sha256_transform::thread_add_ln62_4_fu_2964_p2() {
    add_ln62_4_fu_2964_p2 = (!add_ln62_67_fu_2959_p2.read().is_01() || !xor_ln54_17_reg_24398.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_67_fu_2959_p2.read()) + sc_biguint<32>(xor_ln54_17_reg_24398.read()));
}

void sha256_transform::thread_add_ln62_50_fu_20974_p2() {
    add_ln62_50_fu_20974_p2 = (!add_ln62_113_fu_20969_p2.read().is_01() || !xor_ln54_201_reg_26544.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_113_fu_20969_p2.read()) + sc_biguint<32>(xor_ln54_201_reg_26544.read()));
}

void sha256_transform::thread_add_ln62_51_fu_21086_p2() {
    add_ln62_51_fu_21086_p2 = (!add_ln62_114_fu_21081_p2.read().is_01() || !xor_ln54_205_fu_21051_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_114_fu_21081_p2.read()) + sc_biguint<32>(xor_ln54_205_fu_21051_p2.read()));
}

void sha256_transform::thread_add_ln62_52_fu_21433_p2() {
    add_ln62_52_fu_21433_p2 = (!add_ln62_115_fu_21428_p2.read().is_01() || !xor_ln54_209_reg_26592.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_115_fu_21428_p2.read()) + sc_biguint<32>(xor_ln54_209_reg_26592.read()));
}

void sha256_transform::thread_add_ln62_53_fu_21556_p2() {
    add_ln62_53_fu_21556_p2 = (!add_ln62_116_fu_21550_p2.read().is_01() || !xor_ln54_213_fu_21519_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_116_fu_21550_p2.read()) + sc_biguint<32>(xor_ln54_213_fu_21519_p2.read()));
}

void sha256_transform::thread_add_ln62_54_fu_21869_p2() {
    add_ln62_54_fu_21869_p2 = (!add_ln62_117_fu_21864_p2.read().is_01() || !xor_ln54_217_reg_26645.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_117_fu_21864_p2.read()) + sc_biguint<32>(xor_ln54_217_reg_26645.read()));
}

void sha256_transform::thread_add_ln62_55_fu_22144_p2() {
    add_ln62_55_fu_22144_p2 = (!add_ln62_118_fu_22139_p2.read().is_01() || !xor_ln54_221_reg_26679.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_118_fu_22139_p2.read()) + sc_biguint<32>(xor_ln54_221_reg_26679.read()));
}

void sha256_transform::thread_add_ln62_56_fu_22256_p2() {
    add_ln62_56_fu_22256_p2 = (!add_ln62_119_fu_22251_p2.read().is_01() || !xor_ln54_225_fu_22221_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_119_fu_22251_p2.read()) + sc_biguint<32>(xor_ln54_225_fu_22221_p2.read()));
}

void sha256_transform::thread_add_ln62_57_fu_22602_p2() {
    add_ln62_57_fu_22602_p2 = (!add_ln62_120_fu_22597_p2.read().is_01() || !xor_ln54_229_reg_26727.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_120_fu_22597_p2.read()) + sc_biguint<32>(xor_ln54_229_reg_26727.read()));
}

void sha256_transform::thread_add_ln62_58_fu_22726_p2() {
    add_ln62_58_fu_22726_p2 = (!add_ln62_121_fu_22720_p2.read().is_01() || !xor_ln54_233_fu_22689_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_121_fu_22720_p2.read()) + sc_biguint<32>(xor_ln54_233_fu_22689_p2.read()));
}

void sha256_transform::thread_add_ln62_59_fu_23039_p2() {
    add_ln62_59_fu_23039_p2 = (!add_ln62_122_fu_23034_p2.read().is_01() || !xor_ln54_237_reg_26780.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_122_fu_23034_p2.read()) + sc_biguint<32>(xor_ln54_237_reg_26780.read()));
}

void sha256_transform::thread_add_ln62_5_fu_3449_p2() {
    add_ln62_5_fu_3449_p2 = (!add_ln62_68_fu_3444_p2.read().is_01() || !xor_ln54_21_reg_24492.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_68_fu_3444_p2.read()) + sc_biguint<32>(xor_ln54_21_reg_24492.read()));
}

void sha256_transform::thread_add_ln62_60_fu_23379_p2() {
    add_ln62_60_fu_23379_p2 = (!add_ln62_123_fu_23374_p2.read().is_01() || !xor_ln54_241_reg_26814.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_123_fu_23374_p2.read()) + sc_biguint<32>(xor_ln54_241_reg_26814.read()));
}

void sha256_transform::thread_add_ln62_61_fu_23491_p2() {
    add_ln62_61_fu_23491_p2 = (!add_ln62_124_fu_23486_p2.read().is_01() || !xor_ln54_245_fu_23456_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_124_fu_23486_p2.read()) + sc_biguint<32>(xor_ln54_245_fu_23456_p2.read()));
}

void sha256_transform::thread_add_ln62_62_fu_23730_p2() {
    add_ln62_62_fu_23730_p2 = (!add_ln62_125_fu_23724_p2.read().is_01() || !xor_ln54_249_fu_23691_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_125_fu_23724_p2.read()) + sc_biguint<32>(xor_ln54_249_fu_23691_p2.read()));
}

void sha256_transform::thread_add_ln62_63_fu_2083_p2() {
    add_ln62_63_fu_2083_p2 = (!xor_ln54_3_fu_2077_p2.read().is_01() || !add_ln53_3_reg_24178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_3_fu_2077_p2.read()) + sc_biguint<32>(add_ln53_3_reg_24178.read()));
}

void sha256_transform::thread_add_ln62_64_fu_2194_p2() {
    add_ln62_64_fu_2194_p2 = (!xor_ln54_7_fu_2188_p2.read().is_01() || !add_ln53_7_reg_24190.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_7_fu_2188_p2.read()) + sc_biguint<32>(add_ln53_7_reg_24190.read()));
}

void sha256_transform::thread_add_ln62_65_fu_2307_p2() {
    add_ln62_65_fu_2307_p2 = (!xor_ln54_11_fu_2301_p2.read().is_01() || !add_ln53_11_reg_24278.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_11_fu_2301_p2.read()) + sc_biguint<32>(add_ln53_11_reg_24278.read()));
}

void sha256_transform::thread_add_ln62_66_fu_2435_p2() {
    add_ln62_66_fu_2435_p2 = (!xor_ln54_15_fu_2423_p2.read().is_01() || !add_ln53_15_fu_2322_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_15_fu_2423_p2.read()) + sc_biguint<32>(add_ln53_15_fu_2322_p2.read()));
}

void sha256_transform::thread_add_ln62_67_fu_2959_p2() {
    add_ln62_67_fu_2959_p2 = (!xor_ln54_19_fu_2953_p2.read().is_01() || !add_ln53_19_reg_24393.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_19_fu_2953_p2.read()) + sc_biguint<32>(add_ln53_19_reg_24393.read()));
}

void sha256_transform::thread_add_ln62_68_fu_3444_p2() {
    add_ln62_68_fu_3444_p2 = (!xor_ln54_23_fu_3438_p2.read().is_01() || !add_ln53_23_reg_24487.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_23_fu_3438_p2.read()) + sc_biguint<32>(add_ln53_23_reg_24487.read()));
}

void sha256_transform::thread_add_ln62_69_fu_3556_p2() {
    add_ln62_69_fu_3556_p2 = (!xor_ln54_27_fu_3546_p2.read().is_01() || !add_ln53_27_reg_24504.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_27_fu_3546_p2.read()) + sc_biguint<32>(add_ln53_27_reg_24504.read()));
}

void sha256_transform::thread_add_ln62_6_fu_3561_p2() {
    add_ln62_6_fu_3561_p2 = (!add_ln62_69_fu_3556_p2.read().is_01() || !xor_ln54_25_fu_3526_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_69_fu_3556_p2.read()) + sc_biguint<32>(xor_ln54_25_fu_3526_p2.read()));
}

void sha256_transform::thread_add_ln62_70_fu_4125_p2() {
    add_ln62_70_fu_4125_p2 = (!xor_ln54_31_fu_4119_p2.read().is_01() || !add_ln53_31_reg_24595.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_31_fu_4119_p2.read()) + sc_biguint<32>(add_ln53_31_reg_24595.read()));
}

void sha256_transform::thread_add_ln62_71_fu_4247_p2() {
    add_ln62_71_fu_4247_p2 = (!xor_ln54_35_fu_4236_p2.read().is_01() || !add_ln53_35_fu_4139_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_35_fu_4236_p2.read()) + sc_biguint<32>(add_ln53_35_fu_4139_p2.read()));
}

void sha256_transform::thread_add_ln62_72_fu_4758_p2() {
    add_ln62_72_fu_4758_p2 = (!xor_ln54_39_fu_4752_p2.read().is_01() || !add_ln53_39_reg_24718.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_39_fu_4752_p2.read()) + sc_biguint<32>(add_ln53_39_reg_24718.read()));
}

void sha256_transform::thread_add_ln62_73_fu_5437_p2() {
    add_ln62_73_fu_5437_p2 = (!xor_ln54_43_fu_5431_p2.read().is_01() || !add_ln53_43_reg_24809.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_43_fu_5431_p2.read()) + sc_biguint<32>(add_ln53_43_reg_24809.read()));
}

void sha256_transform::thread_add_ln62_74_fu_5549_p2() {
    add_ln62_74_fu_5549_p2 = (!xor_ln54_47_fu_5539_p2.read().is_01() || !add_ln53_47_reg_24826.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_47_fu_5539_p2.read()) + sc_biguint<32>(add_ln53_47_reg_24826.read()));
}

void sha256_transform::thread_add_ln62_75_fu_5896_p2() {
    add_ln62_75_fu_5896_p2 = (!xor_ln54_51_fu_5890_p2.read().is_01() || !add_ln53_51_reg_24897.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_51_fu_5890_p2.read()) + sc_biguint<32>(add_ln53_51_reg_24897.read()));
}

void sha256_transform::thread_add_ln62_76_fu_6019_p2() {
    add_ln62_76_fu_6019_p2 = (!xor_ln54_55_fu_6008_p2.read().is_01() || !add_ln53_55_fu_5911_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_55_fu_6008_p2.read()) + sc_biguint<32>(add_ln53_55_fu_5911_p2.read()));
}

void sha256_transform::thread_add_ln62_77_fu_6491_p2() {
    add_ln62_77_fu_6491_p2 = (!xor_ln54_59_fu_6485_p2.read().is_01() || !add_ln53_59_reg_24950.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_59_fu_6485_p2.read()) + sc_biguint<32>(add_ln53_59_reg_24950.read()));
}

void sha256_transform::thread_add_ln62_78_fu_7070_p2() {
    add_ln62_78_fu_7070_p2 = (!xor_ln54_63_fu_7064_p2.read().is_01() || !add_ln53_63_reg_25005.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_63_fu_7064_p2.read()) + sc_biguint<32>(add_ln53_63_reg_25005.read()));
}

void sha256_transform::thread_add_ln62_79_fu_7182_p2() {
    add_ln62_79_fu_7182_p2 = (!xor_ln54_67_fu_7172_p2.read().is_01() || !add_ln53_67_reg_25022.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_67_fu_7172_p2.read()) + sc_biguint<32>(add_ln53_67_reg_25022.read()));
}

void sha256_transform::thread_add_ln62_7_fu_4130_p2() {
    add_ln62_7_fu_4130_p2 = (!add_ln62_70_fu_4125_p2.read().is_01() || !xor_ln54_29_reg_24600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_70_fu_4125_p2.read()) + sc_biguint<32>(xor_ln54_29_reg_24600.read()));
}

void sha256_transform::thread_add_ln62_80_fu_7689_p2() {
    add_ln62_80_fu_7689_p2 = (!xor_ln54_71_fu_7683_p2.read().is_01() || !add_ln53_71_reg_25085.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_71_fu_7683_p2.read()) + sc_biguint<32>(add_ln53_71_reg_25085.read()));
}

void sha256_transform::thread_add_ln62_81_fu_7811_p2() {
    add_ln62_81_fu_7811_p2 = (!xor_ln54_75_fu_7800_p2.read().is_01() || !add_ln53_75_fu_7703_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_75_fu_7800_p2.read()) + sc_biguint<32>(add_ln53_75_fu_7703_p2.read()));
}

void sha256_transform::thread_add_ln62_82_fu_8433_p2() {
    add_ln62_82_fu_8433_p2 = (!xor_ln54_79_fu_8427_p2.read().is_01() || !add_ln53_79_reg_25159.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_79_fu_8427_p2.read()) + sc_biguint<32>(add_ln53_79_reg_25159.read()));
}

void sha256_transform::thread_add_ln62_83_fu_9013_p2() {
    add_ln62_83_fu_9013_p2 = (!xor_ln54_83_fu_9007_p2.read().is_01() || !add_ln53_83_reg_25230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_83_fu_9007_p2.read()) + sc_biguint<32>(add_ln53_83_reg_25230.read()));
}

void sha256_transform::thread_add_ln62_84_fu_9125_p2() {
    add_ln62_84_fu_9125_p2 = (!xor_ln54_87_fu_9115_p2.read().is_01() || !add_ln53_87_reg_25247.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_87_fu_9115_p2.read()) + sc_biguint<32>(add_ln53_87_reg_25247.read()));
}

void sha256_transform::thread_add_ln62_85_fu_9632_p2() {
    add_ln62_85_fu_9632_p2 = (!xor_ln54_91_fu_9626_p2.read().is_01() || !add_ln53_91_reg_25310.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_91_fu_9626_p2.read()) + sc_biguint<32>(add_ln53_91_reg_25310.read()));
}

void sha256_transform::thread_add_ln62_86_fu_9754_p2() {
    add_ln62_86_fu_9754_p2 = (!xor_ln54_95_fu_9743_p2.read().is_01() || !add_ln53_95_fu_9646_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_95_fu_9743_p2.read()) + sc_biguint<32>(add_ln53_95_fu_9646_p2.read()));
}

void sha256_transform::thread_add_ln62_87_fu_10376_p2() {
    add_ln62_87_fu_10376_p2 = (!xor_ln54_99_fu_10370_p2.read().is_01() || !add_ln53_99_reg_25384.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_99_fu_10370_p2.read()) + sc_biguint<32>(add_ln53_99_reg_25384.read()));
}

void sha256_transform::thread_add_ln62_88_fu_11115_p2() {
    add_ln62_88_fu_11115_p2 = (!xor_ln54_103_fu_11109_p2.read().is_01() || !add_ln53_103_reg_25455.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_103_fu_11109_p2.read()) + sc_biguint<32>(add_ln53_103_reg_25455.read()));
}

void sha256_transform::thread_add_ln62_89_fu_11227_p2() {
    add_ln62_89_fu_11227_p2 = (!xor_ln54_107_fu_11217_p2.read().is_01() || !add_ln53_107_reg_25472.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_107_fu_11217_p2.read()) + sc_biguint<32>(add_ln53_107_reg_25472.read()));
}

void sha256_transform::thread_add_ln62_8_fu_4253_p2() {
    add_ln62_8_fu_4253_p2 = (!add_ln62_71_fu_4247_p2.read().is_01() || !xor_ln54_33_fu_4216_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_71_fu_4247_p2.read()) + sc_biguint<32>(xor_ln54_33_fu_4216_p2.read()));
}

void sha256_transform::thread_add_ln62_90_fu_12664_p2() {
    add_ln62_90_fu_12664_p2 = (!xor_ln54_111_fu_12658_p2.read().is_01() || !add_ln53_111_reg_25552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_111_fu_12658_p2.read()) + sc_biguint<32>(add_ln53_111_reg_25552.read()));
}

void sha256_transform::thread_add_ln62_91_fu_12786_p2() {
    add_ln62_91_fu_12786_p2 = (!xor_ln54_115_fu_12775_p2.read().is_01() || !add_ln53_115_fu_12678_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_115_fu_12775_p2.read()) + sc_biguint<32>(add_ln53_115_fu_12678_p2.read()));
}

void sha256_transform::thread_add_ln62_92_fu_14339_p2() {
    add_ln62_92_fu_14339_p2 = (!xor_ln54_119_fu_14333_p2.read().is_01() || !add_ln53_119_reg_25707.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_119_fu_14333_p2.read()) + sc_biguint<32>(add_ln53_119_reg_25707.read()));
}

void sha256_transform::thread_add_ln62_93_fu_15564_p2() {
    add_ln62_93_fu_15564_p2 = (!xor_ln54_123_fu_15558_p2.read().is_01() || !add_ln53_123_reg_25854.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_123_fu_15558_p2.read()) + sc_biguint<32>(add_ln53_123_reg_25854.read()));
}

void sha256_transform::thread_add_ln62_94_fu_15676_p2() {
    add_ln62_94_fu_15676_p2 = (!xor_ln54_127_fu_15666_p2.read().is_01() || !add_ln53_127_reg_25871.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_127_fu_15666_p2.read()) + sc_biguint<32>(add_ln53_127_reg_25871.read()));
}

void sha256_transform::thread_add_ln62_95_fu_16475_p2() {
    add_ln62_95_fu_16475_p2 = (!xor_ln54_131_fu_16469_p2.read().is_01() || !add_ln53_131_reg_25970.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_131_fu_16469_p2.read()) + sc_biguint<32>(add_ln53_131_reg_25970.read()));
}

void sha256_transform::thread_add_ln62_96_fu_16597_p2() {
    add_ln62_96_fu_16597_p2 = (!xor_ln54_135_fu_16586_p2.read().is_01() || !add_ln53_135_fu_16489_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_135_fu_16586_p2.read()) + sc_biguint<32>(add_ln53_135_fu_16489_p2.read()));
}

void sha256_transform::thread_add_ln62_97_fu_17165_p2() {
    add_ln62_97_fu_17165_p2 = (!xor_ln54_139_fu_17159_p2.read().is_01() || !add_ln53_139_reg_26074.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_139_fu_17159_p2.read()) + sc_biguint<32>(add_ln53_139_reg_26074.read()));
}

void sha256_transform::thread_add_ln62_98_fu_17450_p2() {
    add_ln62_98_fu_17450_p2 = (!xor_ln54_143_fu_17444_p2.read().is_01() || !add_ln53_143_reg_26124.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_143_fu_17444_p2.read()) + sc_biguint<32>(add_ln53_143_reg_26124.read()));
}

void sha256_transform::thread_add_ln62_99_fu_17562_p2() {
    add_ln62_99_fu_17562_p2 = (!xor_ln54_147_fu_17552_p2.read().is_01() || !add_ln53_147_reg_26141.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_147_fu_17552_p2.read()) + sc_biguint<32>(add_ln53_147_reg_26141.read()));
}

void sha256_transform::thread_add_ln62_9_fu_4763_p2() {
    add_ln62_9_fu_4763_p2 = (!add_ln62_72_fu_4758_p2.read().is_01() || !xor_ln54_37_reg_24723.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_72_fu_4758_p2.read()) + sc_biguint<32>(xor_ln54_37_reg_24723.read()));
}

void sha256_transform::thread_add_ln62_fu_2088_p2() {
    add_ln62_fu_2088_p2 = (!add_ln62_63_fu_2083_p2.read().is_01() || !xor_ln54_1_fu_2057_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_63_fu_2083_p2.read()) + sc_biguint<32>(xor_ln54_1_fu_2057_p2.read()));
}

void sha256_transform::thread_add_ln65_1_fu_23988_p2() {
    add_ln65_1_fu_23988_p2 = (!xor_ln54_253_reg_26842.read().is_01() || !xor_ln54_255_reg_26847.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_253_reg_26842.read()) + sc_biguint<32>(xor_ln54_255_reg_26847.read()));
}

void sha256_transform::thread_add_ln65_2_fu_23992_p2() {
    add_ln65_2_fu_23992_p2 = (!ctx_state_0_read_1_reg_24300_pp0_iter4_reg.read().is_01() || !add_ln53_255_fu_23983_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_0_read_1_reg_24300_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln53_255_fu_23983_p2.read()));
}

void sha256_transform::thread_add_ln65_fu_23997_p2() {
    add_ln65_fu_23997_p2 = (!add_ln65_2_fu_23992_p2.read().is_01() || !add_ln65_1_fu_23988_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln65_2_fu_23992_p2.read()) + sc_biguint<32>(add_ln65_1_fu_23988_p2.read()));
}

void sha256_transform::thread_add_ln66_fu_23950_p2() {
    add_ln66_fu_23950_p2 = (!ctx_state_1_read_1_reg_24203_pp0_iter4_reg.read().is_01() || !add_ln62_62_fu_23730_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_1_read_1_reg_24203_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln62_62_fu_23730_p2.read()));
}

void sha256_transform::thread_add_ln67_fu_23955_p2() {
    add_ln67_fu_23955_p2 = (!ctx_state_2_read_1_reg_24196_pp0_iter4_reg.read().is_01() || !add_ln62_61_fu_23491_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_2_read_1_reg_24196_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln62_61_fu_23491_p2.read()));
}

void sha256_transform::thread_add_ln68_fu_23960_p2() {
    add_ln68_fu_23960_p2 = (!ctx_state_3_read_1_reg_24118_pp0_iter4_reg.read().is_01() || !add_ln62_60_fu_23379_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_3_read_1_reg_24118_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln62_60_fu_23379_p2.read()));
}

void sha256_transform::thread_add_ln69_1_fu_24003_p2() {
    add_ln69_1_fu_24003_p2 = (!ctx_state_4_read_1_reg_24111_pp0_iter4_reg.read().is_01() || !add_ln62_59_reg_26799.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_4_read_1_reg_24111_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln62_59_reg_26799.read()));
}

void sha256_transform::thread_add_ln69_fu_24007_p2() {
    add_ln69_fu_24007_p2 = (!add_ln69_1_fu_24003_p2.read().is_01() || !add_ln53_255_fu_23983_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln69_1_fu_24003_p2.read()) + sc_biguint<32>(add_ln53_255_fu_23983_p2.read()));
}

void sha256_transform::thread_add_ln70_fu_23965_p2() {
    add_ln70_fu_23965_p2 = (!ctx_state_5_read_1_reg_24105_pp0_iter4_reg.read().is_01() || !add_ln58_62_fu_23719_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_5_read_1_reg_24105_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln58_62_fu_23719_p2.read()));
}

void sha256_transform::thread_add_ln71_fu_23970_p2() {
    add_ln71_fu_23970_p2 = (!ctx_state_6_read_1_reg_24100_pp0_iter4_reg.read().is_01() || !add_ln58_61_fu_23482_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_6_read_1_reg_24100_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln58_61_fu_23482_p2.read()));
}

void sha256_transform::thread_add_ln72_fu_23975_p2() {
    add_ln72_fu_23975_p2 = (!ctx_state_7_read_1_reg_24095_pp0_iter4_reg.read().is_01() || !add_ln58_60_reg_26819.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_7_read_1_reg_24095_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln58_60_reg_26819.read()));
}

void sha256_transform::thread_and_ln53_100_fu_17388_p2() {
    and_ln53_100_fu_17388_p2 = (add_ln58_33_reg_26057.read() & xor_ln53_146_fu_17382_p2.read());
}

void sha256_transform::thread_and_ln53_101_fu_17662_p2() {
    and_ln53_101_fu_17662_p2 = (add_ln58_34_reg_26084.read() & xor_ln53_150_fu_17656_p2.read());
}

void sha256_transform::thread_and_ln53_102_fu_17868_p2() {
    and_ln53_102_fu_17868_p2 = (add_ln58_35_reg_26134.read() & xor_ln53_154_fu_17862_p2.read());
}

void sha256_transform::thread_and_ln53_103_fu_18132_p2() {
    and_ln53_103_fu_18132_p2 = (add_ln58_36_reg_26161.read() & xor_ln53_158_fu_18126_p2.read());
}

void sha256_transform::thread_and_ln53_104_fu_18364_p2() {
    and_ln53_104_fu_18364_p2 = (add_ln58_37_reg_26187.read() & xor_ln53_162_fu_18359_p2.read());
}

void sha256_transform::thread_and_ln53_105_fu_18568_p2() {
    and_ln53_105_fu_18568_p2 = (add_ln58_38_reg_26213.read() & xor_ln53_166_fu_18562_p2.read());
}

void sha256_transform::thread_and_ln53_106_fu_18832_p2() {
    and_ln53_106_fu_18832_p2 = (add_ln58_39_reg_26240.read() & xor_ln53_170_fu_18826_p2.read());
}

void sha256_transform::thread_and_ln53_107_fu_19038_p2() {
    and_ln53_107_fu_19038_p2 = (add_ln58_40_reg_26274.read() & xor_ln53_174_fu_19032_p2.read());
}

void sha256_transform::thread_and_ln53_108_fu_19302_p2() {
    and_ln53_108_fu_19302_p2 = (add_ln58_41_reg_26296.read() & xor_ln53_178_fu_19296_p2.read());
}

void sha256_transform::thread_and_ln53_109_fu_19534_p2() {
    and_ln53_109_fu_19534_p2 = (add_ln58_42_reg_26322.read() & xor_ln53_182_fu_19529_p2.read());
}

void sha256_transform::thread_and_ln53_10_fu_4768_p2() {
    and_ln53_10_fu_4768_p2 = (add_ln58_9_reg_24728.read() & add_ln58_8_reg_24701.read());
}

void sha256_transform::thread_and_ln53_110_fu_19738_p2() {
    and_ln53_110_fu_19738_p2 = (add_ln58_43_reg_26348.read() & xor_ln53_186_fu_19732_p2.read());
}

void sha256_transform::thread_and_ln53_111_fu_20002_p2() {
    and_ln53_111_fu_20002_p2 = (add_ln58_44_reg_26375.read() & xor_ln53_190_fu_19996_p2.read());
}

void sha256_transform::thread_and_ln53_112_fu_20208_p2() {
    and_ln53_112_fu_20208_p2 = (add_ln58_45_reg_26409.read() & xor_ln53_194_fu_20202_p2.read());
}

void sha256_transform::thread_and_ln53_113_fu_20481_p2() {
    and_ln53_113_fu_20481_p2 = (add_ln58_46_reg_26431.read() & xor_ln53_198_fu_20475_p2.read());
}

void sha256_transform::thread_and_ln53_114_fu_20713_p2() {
    and_ln53_114_fu_20713_p2 = (add_ln58_47_reg_26457.read() & xor_ln53_202_fu_20708_p2.read());
}

void sha256_transform::thread_and_ln53_115_fu_20917_p2() {
    and_ln53_115_fu_20917_p2 = (add_ln58_48_reg_26488.read() & xor_ln53_206_fu_20911_p2.read());
}

void sha256_transform::thread_and_ln53_116_fu_21181_p2() {
    and_ln53_116_fu_21181_p2 = (add_ln58_49_reg_26515.read() & xor_ln53_210_fu_21175_p2.read());
}

void sha256_transform::thread_and_ln53_117_fu_21387_p2() {
    and_ln53_117_fu_21387_p2 = (add_ln58_50_reg_26549.read() & xor_ln53_214_fu_21381_p2.read());
}

void sha256_transform::thread_and_ln53_118_fu_21651_p2() {
    and_ln53_118_fu_21651_p2 = (add_ln58_51_reg_26571.read() & xor_ln53_218_fu_21645_p2.read());
}

void sha256_transform::thread_and_ln53_119_fu_21883_p2() {
    and_ln53_119_fu_21883_p2 = (add_ln58_52_reg_26597.read() & xor_ln53_222_fu_21878_p2.read());
}

void sha256_transform::thread_and_ln53_11_fu_4970_p2() {
    and_ln53_11_fu_4970_p2 = (add_ln58_10_fu_4887_p2.read() & add_ln58_9_reg_24728.read());
}

void sha256_transform::thread_and_ln53_120_fu_22087_p2() {
    and_ln53_120_fu_22087_p2 = (add_ln58_53_reg_26623.read() & xor_ln53_226_fu_22081_p2.read());
}

void sha256_transform::thread_and_ln53_121_fu_22351_p2() {
    and_ln53_121_fu_22351_p2 = (add_ln58_54_reg_26650.read() & xor_ln53_230_fu_22345_p2.read());
}

void sha256_transform::thread_and_ln53_122_fu_22557_p2() {
    and_ln53_122_fu_22557_p2 = (add_ln58_55_reg_26684.read() & xor_ln53_234_fu_22551_p2.read());
}

void sha256_transform::thread_and_ln53_123_fu_22821_p2() {
    and_ln53_123_fu_22821_p2 = (add_ln58_56_reg_26706.read() & xor_ln53_238_fu_22815_p2.read());
}

void sha256_transform::thread_and_ln53_124_fu_23053_p2() {
    and_ln53_124_fu_23053_p2 = (add_ln58_57_reg_26732.read() & xor_ln53_242_fu_23048_p2.read());
}

void sha256_transform::thread_and_ln53_125_fu_23257_p2() {
    and_ln53_125_fu_23257_p2 = (add_ln58_58_reg_26758.read() & xor_ln53_246_fu_23251_p2.read());
}

void sha256_transform::thread_and_ln53_126_fu_23586_p2() {
    and_ln53_126_fu_23586_p2 = (add_ln58_59_reg_26785.read() & xor_ln53_250_fu_23580_p2.read());
}

void sha256_transform::thread_and_ln53_127_fu_23826_p2() {
    and_ln53_127_fu_23826_p2 = (add_ln58_60_reg_26819.read() & xor_ln53_254_fu_23820_p2.read());
}

void sha256_transform::thread_and_ln53_12_fu_5638_p2() {
    and_ln53_12_fu_5638_p2 = (add_ln58_11_fu_5545_p2.read() & add_ln58_10_reg_24819.read());
}

void sha256_transform::thread_and_ln53_13_fu_5843_p2() {
    and_ln53_13_fu_5843_p2 = (add_ln58_12_fu_5760_p2.read() & add_ln58_11_fu_5545_p2.read());
}

void sha256_transform::thread_and_ln53_14_fu_6109_p2() {
    and_ln53_14_fu_6109_p2 = (add_ln58_13_fu_6014_p2.read() & add_ln58_12_reg_24907.read());
}

void sha256_transform::thread_and_ln53_15_fu_6501_p2() {
    and_ln53_15_fu_6501_p2 = (add_ln58_14_reg_24960.read() & add_ln58_13_reg_24933.read());
}

void sha256_transform::thread_and_ln53_16_fu_6703_p2() {
    and_ln53_16_fu_6703_p2 = (add_ln58_15_fu_6620_p2.read() & add_ln58_14_reg_24960.read());
}

void sha256_transform::thread_and_ln53_17_fu_7271_p2() {
    and_ln53_17_fu_7271_p2 = (add_ln58_16_fu_7178_p2.read() & add_ln58_15_reg_25015.read());
}

void sha256_transform::thread_and_ln53_18_fu_7477_p2() {
    and_ln53_18_fu_7477_p2 = (add_ln58_17_fu_7394_p2.read() & add_ln58_16_fu_7178_p2.read());
}

void sha256_transform::thread_and_ln53_19_fu_7901_p2() {
    and_ln53_19_fu_7901_p2 = (add_ln58_18_fu_7806_p2.read() & add_ln58_17_reg_25095.read());
}

void sha256_transform::thread_and_ln53_1_fu_1166_p2() {
    and_ln53_1_fu_1166_p2 = (ap_port_reg_ctx_state_6_read.read() & xor_ln53_2_fu_1160_p2.read());
}

void sha256_transform::thread_and_ln53_20_fu_8443_p2() {
    and_ln53_20_fu_8443_p2 = (add_ln58_19_reg_25169.read() & add_ln58_18_reg_25142.read());
}

void sha256_transform::thread_and_ln53_21_fu_8646_p2() {
    and_ln53_21_fu_8646_p2 = (add_ln58_20_fu_8563_p2.read() & add_ln58_19_reg_25169.read());
}

void sha256_transform::thread_and_ln53_22_fu_9214_p2() {
    and_ln53_22_fu_9214_p2 = (add_ln58_21_fu_9121_p2.read() & add_ln58_20_reg_25240.read());
}

void sha256_transform::thread_and_ln53_23_fu_9420_p2() {
    and_ln53_23_fu_9420_p2 = (add_ln58_22_fu_9337_p2.read() & add_ln58_21_fu_9121_p2.read());
}

void sha256_transform::thread_and_ln53_24_fu_9844_p2() {
    and_ln53_24_fu_9844_p2 = (add_ln58_23_fu_9749_p2.read() & add_ln58_22_reg_25320.read());
}

void sha256_transform::thread_and_ln53_25_fu_10386_p2() {
    and_ln53_25_fu_10386_p2 = (add_ln58_24_reg_25394.read() & add_ln58_23_reg_25367.read());
}

void sha256_transform::thread_and_ln53_26_fu_10589_p2() {
    and_ln53_26_fu_10589_p2 = (add_ln58_25_fu_10506_p2.read() & add_ln58_24_reg_25394.read());
}

void sha256_transform::thread_and_ln53_27_fu_11316_p2() {
    and_ln53_27_fu_11316_p2 = (add_ln58_26_fu_11223_p2.read() & add_ln58_25_reg_25465.read());
}

void sha256_transform::thread_and_ln53_28_fu_11522_p2() {
    and_ln53_28_fu_11522_p2 = (add_ln58_27_fu_11439_p2.read() & add_ln58_26_fu_11223_p2.read());
}

void sha256_transform::thread_and_ln53_29_fu_12876_p2() {
    and_ln53_29_fu_12876_p2 = (add_ln58_28_fu_12781_p2.read() & add_ln58_27_reg_25562.read());
}

void sha256_transform::thread_and_ln53_2_fu_1625_p2() {
    and_ln53_2_fu_1625_p2 = (add_ln58_1_fu_1542_p2.read() & add_ln58_reg_24183.read());
}

void sha256_transform::thread_and_ln53_30_fu_14349_p2() {
    and_ln53_30_fu_14349_p2 = (add_ln58_29_reg_25717.read() & add_ln58_28_reg_25690.read());
}

void sha256_transform::thread_and_ln53_31_fu_14551_p2() {
    and_ln53_31_fu_14551_p2 = (add_ln58_30_fu_14468_p2.read() & add_ln58_29_reg_25717.read());
}

void sha256_transform::thread_and_ln53_32_fu_15765_p2() {
    and_ln53_32_fu_15765_p2 = (add_ln58_31_fu_15672_p2.read() & add_ln58_30_reg_25864.read());
}

void sha256_transform::thread_and_ln53_33_fu_15970_p2() {
    and_ln53_33_fu_15970_p2 = (add_ln58_32_fu_15887_p2.read() & add_ln58_31_fu_15672_p2.read());
}

void sha256_transform::thread_and_ln53_34_fu_16687_p2() {
    and_ln53_34_fu_16687_p2 = (add_ln58_33_fu_16592_p2.read() & add_ln58_32_reg_25980.read());
}

void sha256_transform::thread_and_ln53_35_fu_17175_p2() {
    and_ln53_35_fu_17175_p2 = (add_ln58_34_reg_26084.read() & add_ln58_33_reg_26057.read());
}

void sha256_transform::thread_and_ln53_36_fu_17377_p2() {
    and_ln53_36_fu_17377_p2 = (add_ln58_35_fu_17294_p2.read() & add_ln58_34_reg_26084.read());
}

void sha256_transform::thread_and_ln53_37_fu_17651_p2() {
    and_ln53_37_fu_17651_p2 = (add_ln58_36_fu_17558_p2.read() & add_ln58_35_reg_26134.read());
}

void sha256_transform::thread_and_ln53_38_fu_17856_p2() {
    and_ln53_38_fu_17856_p2 = (add_ln58_37_fu_17773_p2.read() & add_ln58_36_fu_17558_p2.read());
}

void sha256_transform::thread_and_ln53_39_fu_18121_p2() {
    and_ln53_39_fu_18121_p2 = (add_ln58_38_fu_18026_p2.read() & add_ln58_37_reg_26187.read());
}

void sha256_transform::thread_and_ln53_3_fu_1754_p2() {
    and_ln53_3_fu_1754_p2 = (add_ln58_2_fu_1670_p2.read() & add_ln58_1_fu_1542_p2.read());
}

void sha256_transform::thread_and_ln53_40_fu_18355_p2() {
    and_ln53_40_fu_18355_p2 = (add_ln58_39_reg_26240.read() & add_ln58_38_reg_26213.read());
}

void sha256_transform::thread_and_ln53_41_fu_18557_p2() {
    and_ln53_41_fu_18557_p2 = (add_ln58_40_fu_18474_p2.read() & add_ln58_39_reg_26240.read());
}

void sha256_transform::thread_and_ln53_42_fu_18821_p2() {
    and_ln53_42_fu_18821_p2 = (add_ln58_41_fu_18728_p2.read() & add_ln58_40_reg_26274.read());
}

void sha256_transform::thread_and_ln53_43_fu_19026_p2() {
    and_ln53_43_fu_19026_p2 = (add_ln58_42_fu_18943_p2.read() & add_ln58_41_fu_18728_p2.read());
}

void sha256_transform::thread_and_ln53_44_fu_19291_p2() {
    and_ln53_44_fu_19291_p2 = (add_ln58_43_fu_19196_p2.read() & add_ln58_42_reg_26322.read());
}

void sha256_transform::thread_and_ln53_45_fu_19525_p2() {
    and_ln53_45_fu_19525_p2 = (add_ln58_44_reg_26375.read() & add_ln58_43_reg_26348.read());
}

void sha256_transform::thread_and_ln53_46_fu_19727_p2() {
    and_ln53_46_fu_19727_p2 = (add_ln58_45_fu_19644_p2.read() & add_ln58_44_reg_26375.read());
}

void sha256_transform::thread_and_ln53_47_fu_19991_p2() {
    and_ln53_47_fu_19991_p2 = (add_ln58_46_fu_19898_p2.read() & add_ln58_45_reg_26409.read());
}

void sha256_transform::thread_and_ln53_48_fu_20196_p2() {
    and_ln53_48_fu_20196_p2 = (add_ln58_47_fu_20113_p2.read() & add_ln58_46_fu_19898_p2.read());
}

void sha256_transform::thread_and_ln53_49_fu_20470_p2() {
    and_ln53_49_fu_20470_p2 = (add_ln58_48_fu_20375_p2.read() & add_ln58_47_reg_26457.read());
}

void sha256_transform::thread_and_ln53_4_fu_2525_p2() {
    and_ln53_4_fu_2525_p2 = (add_ln58_3_fu_2429_p2.read() & add_ln58_2_reg_24283.read());
}

void sha256_transform::thread_and_ln53_50_fu_20704_p2() {
    and_ln53_50_fu_20704_p2 = (add_ln58_49_reg_26515.read() & add_ln58_48_reg_26488.read());
}

void sha256_transform::thread_and_ln53_51_fu_20906_p2() {
    and_ln53_51_fu_20906_p2 = (add_ln58_50_fu_20823_p2.read() & add_ln58_49_reg_26515.read());
}

void sha256_transform::thread_and_ln53_52_fu_21170_p2() {
    and_ln53_52_fu_21170_p2 = (add_ln58_51_fu_21077_p2.read() & add_ln58_50_reg_26549.read());
}

void sha256_transform::thread_and_ln53_53_fu_21375_p2() {
    and_ln53_53_fu_21375_p2 = (add_ln58_52_fu_21292_p2.read() & add_ln58_51_fu_21077_p2.read());
}

void sha256_transform::thread_and_ln53_54_fu_21640_p2() {
    and_ln53_54_fu_21640_p2 = (add_ln58_53_fu_21545_p2.read() & add_ln58_52_reg_26597.read());
}

void sha256_transform::thread_and_ln53_55_fu_21874_p2() {
    and_ln53_55_fu_21874_p2 = (add_ln58_54_reg_26650.read() & add_ln58_53_reg_26623.read());
}

void sha256_transform::thread_and_ln53_56_fu_22076_p2() {
    and_ln53_56_fu_22076_p2 = (add_ln58_55_fu_21993_p2.read() & add_ln58_54_reg_26650.read());
}

void sha256_transform::thread_and_ln53_57_fu_22340_p2() {
    and_ln53_57_fu_22340_p2 = (add_ln58_56_fu_22247_p2.read() & add_ln58_55_reg_26684.read());
}

void sha256_transform::thread_and_ln53_58_fu_22545_p2() {
    and_ln53_58_fu_22545_p2 = (add_ln58_57_fu_22462_p2.read() & add_ln58_56_fu_22247_p2.read());
}

void sha256_transform::thread_and_ln53_59_fu_22810_p2() {
    and_ln53_59_fu_22810_p2 = (add_ln58_58_fu_22715_p2.read() & add_ln58_57_reg_26732.read());
}

void sha256_transform::thread_and_ln53_5_fu_2969_p2() {
    and_ln53_5_fu_2969_p2 = (add_ln58_4_reg_24403.read() & add_ln58_3_reg_24376.read());
}

void sha256_transform::thread_and_ln53_60_fu_23044_p2() {
    and_ln53_60_fu_23044_p2 = (add_ln58_59_reg_26785.read() & add_ln58_58_reg_26758.read());
}

void sha256_transform::thread_and_ln53_61_fu_23246_p2() {
    and_ln53_61_fu_23246_p2 = (add_ln58_60_fu_23163_p2.read() & add_ln58_59_reg_26785.read());
}

void sha256_transform::thread_and_ln53_62_fu_23575_p2() {
    and_ln53_62_fu_23575_p2 = (add_ln58_61_fu_23482_p2.read() & add_ln58_60_reg_26819.read());
}

void sha256_transform::thread_and_ln53_63_fu_23814_p2() {
    and_ln53_63_fu_23814_p2 = (add_ln58_62_fu_23719_p2.read() & add_ln58_61_fu_23482_p2.read());
}

void sha256_transform::thread_and_ln53_64_fu_1286_p2() {
    and_ln53_64_fu_1286_p2 = (add_ln58_fu_1202_p2.read() & ap_port_reg_ctx_state_4_read.read());
}

void sha256_transform::thread_and_ln53_65_fu_1298_p2() {
    and_ln53_65_fu_1298_p2 = (ap_port_reg_ctx_state_5_read.read() & xor_ln53_6_fu_1292_p2.read());
}

void sha256_transform::thread_and_ln53_66_fu_1636_p2() {
    and_ln53_66_fu_1636_p2 = (ctx_state_4_read_1_reg_24111.read() & xor_ln53_10_fu_1630_p2.read());
}

void sha256_transform::thread_and_ln53_67_fu_1766_p2() {
    and_ln53_67_fu_1766_p2 = (add_ln58_reg_24183.read() & xor_ln53_14_fu_1760_p2.read());
}

void sha256_transform::thread_and_ln53_68_fu_2536_p2() {
    and_ln53_68_fu_2536_p2 = (add_ln58_1_reg_24272.read() & xor_ln53_18_fu_2530_p2.read());
}

void sha256_transform::thread_and_ln53_69_fu_2978_p2() {
    and_ln53_69_fu_2978_p2 = (add_ln58_2_reg_24283.read() & xor_ln53_22_fu_2973_p2.read());
}

void sha256_transform::thread_and_ln53_6_fu_3172_p2() {
    and_ln53_6_fu_3172_p2 = (add_ln58_5_fu_3089_p2.read() & add_ln58_4_reg_24403.read());
}

void sha256_transform::thread_and_ln53_70_fu_3183_p2() {
    and_ln53_70_fu_3183_p2 = (add_ln58_3_reg_24376.read() & xor_ln53_26_fu_3177_p2.read());
}

void sha256_transform::thread_and_ln53_71_fu_3656_p2() {
    and_ln53_71_fu_3656_p2 = (add_ln58_4_reg_24403.read() & xor_ln53_30_fu_3650_p2.read());
}

void sha256_transform::thread_and_ln53_72_fu_3863_p2() {
    and_ln53_72_fu_3863_p2 = (add_ln58_5_reg_24497.read() & xor_ln53_34_fu_3857_p2.read());
}

void sha256_transform::thread_and_ln53_73_fu_4348_p2() {
    and_ln53_73_fu_4348_p2 = (add_ln58_6_reg_24579.read() & xor_ln53_38_fu_4342_p2.read());
}

void sha256_transform::thread_and_ln53_74_fu_4777_p2() {
    and_ln53_74_fu_4777_p2 = (add_ln58_7_reg_24605.read() & xor_ln53_42_fu_4772_p2.read());
}

void sha256_transform::thread_and_ln53_75_fu_4981_p2() {
    and_ln53_75_fu_4981_p2 = (add_ln58_8_reg_24701.read() & xor_ln53_46_fu_4975_p2.read());
}

void sha256_transform::thread_and_ln53_76_fu_5649_p2() {
    and_ln53_76_fu_5649_p2 = (add_ln58_9_reg_24728.read() & xor_ln53_50_fu_5643_p2.read());
}

void sha256_transform::thread_and_ln53_77_fu_5855_p2() {
    and_ln53_77_fu_5855_p2 = (add_ln58_10_reg_24819.read() & xor_ln53_54_fu_5849_p2.read());
}

void sha256_transform::thread_and_ln53_78_fu_6120_p2() {
    and_ln53_78_fu_6120_p2 = (add_ln58_11_reg_24881.read() & xor_ln53_58_fu_6114_p2.read());
}

void sha256_transform::thread_and_ln53_79_fu_6510_p2() {
    and_ln53_79_fu_6510_p2 = (add_ln58_12_reg_24907.read() & xor_ln53_62_fu_6505_p2.read());
}

void sha256_transform::thread_and_ln53_7_fu_3645_p2() {
    and_ln53_7_fu_3645_p2 = (add_ln58_6_fu_3552_p2.read() & add_ln58_5_reg_24497.read());
}

void sha256_transform::thread_and_ln53_80_fu_6714_p2() {
    and_ln53_80_fu_6714_p2 = (add_ln58_13_reg_24933.read() & xor_ln53_66_fu_6708_p2.read());
}

void sha256_transform::thread_and_ln53_81_fu_7282_p2() {
    and_ln53_81_fu_7282_p2 = (add_ln58_14_reg_24960.read() & xor_ln53_70_fu_7276_p2.read());
}

void sha256_transform::thread_and_ln53_82_fu_7489_p2() {
    and_ln53_82_fu_7489_p2 = (add_ln58_15_reg_25015.read() & xor_ln53_74_fu_7483_p2.read());
}

void sha256_transform::thread_and_ln53_83_fu_7912_p2() {
    and_ln53_83_fu_7912_p2 = (add_ln58_16_reg_25069.read() & xor_ln53_78_fu_7906_p2.read());
}

void sha256_transform::thread_and_ln53_84_fu_8452_p2() {
    and_ln53_84_fu_8452_p2 = (add_ln58_17_reg_25095.read() & xor_ln53_82_fu_8447_p2.read());
}

void sha256_transform::thread_and_ln53_85_fu_8657_p2() {
    and_ln53_85_fu_8657_p2 = (add_ln58_18_reg_25142.read() & xor_ln53_86_fu_8651_p2.read());
}

void sha256_transform::thread_and_ln53_86_fu_9225_p2() {
    and_ln53_86_fu_9225_p2 = (add_ln58_19_reg_25169.read() & xor_ln53_90_fu_9219_p2.read());
}

void sha256_transform::thread_and_ln53_87_fu_9432_p2() {
    and_ln53_87_fu_9432_p2 = (add_ln58_20_reg_25240.read() & xor_ln53_94_fu_9426_p2.read());
}

void sha256_transform::thread_and_ln53_88_fu_9855_p2() {
    and_ln53_88_fu_9855_p2 = (add_ln58_21_reg_25294.read() & xor_ln53_98_fu_9849_p2.read());
}

void sha256_transform::thread_and_ln53_89_fu_10395_p2() {
    and_ln53_89_fu_10395_p2 = (add_ln58_22_reg_25320.read() & xor_ln53_102_fu_10390_p2.read());
}

void sha256_transform::thread_and_ln53_8_fu_3851_p2() {
    and_ln53_8_fu_3851_p2 = (add_ln58_7_fu_3768_p2.read() & add_ln58_6_fu_3552_p2.read());
}

void sha256_transform::thread_and_ln53_90_fu_10600_p2() {
    and_ln53_90_fu_10600_p2 = (add_ln58_23_reg_25367.read() & xor_ln53_106_fu_10594_p2.read());
}

void sha256_transform::thread_and_ln53_91_fu_11327_p2() {
    and_ln53_91_fu_11327_p2 = (add_ln58_24_reg_25394.read() & xor_ln53_110_fu_11321_p2.read());
}

void sha256_transform::thread_and_ln53_92_fu_11534_p2() {
    and_ln53_92_fu_11534_p2 = (add_ln58_25_reg_25465.read() & xor_ln53_114_fu_11528_p2.read());
}

void sha256_transform::thread_and_ln53_93_fu_12887_p2() {
    and_ln53_93_fu_12887_p2 = (add_ln58_26_reg_25536.read() & xor_ln53_118_fu_12881_p2.read());
}

void sha256_transform::thread_and_ln53_94_fu_14358_p2() {
    and_ln53_94_fu_14358_p2 = (add_ln58_27_reg_25562.read() & xor_ln53_122_fu_14353_p2.read());
}

void sha256_transform::thread_and_ln53_95_fu_14562_p2() {
    and_ln53_95_fu_14562_p2 = (add_ln58_28_reg_25690.read() & xor_ln53_126_fu_14556_p2.read());
}

void sha256_transform::thread_and_ln53_96_fu_15776_p2() {
    and_ln53_96_fu_15776_p2 = (add_ln58_29_reg_25717.read() & xor_ln53_130_fu_15770_p2.read());
}

void sha256_transform::thread_and_ln53_97_fu_15982_p2() {
    and_ln53_97_fu_15982_p2 = (add_ln58_30_reg_25864.read() & xor_ln53_134_fu_15976_p2.read());
}

void sha256_transform::thread_and_ln53_98_fu_16698_p2() {
    and_ln53_98_fu_16698_p2 = (add_ln58_31_reg_25954.read() & xor_ln53_138_fu_16692_p2.read());
}

void sha256_transform::thread_and_ln53_99_fu_17184_p2() {
    and_ln53_99_fu_17184_p2 = (add_ln58_32_reg_25980.read() & xor_ln53_142_fu_17179_p2.read());
}

void sha256_transform::thread_and_ln53_9_fu_4337_p2() {
    and_ln53_9_fu_4337_p2 = (add_ln58_8_fu_4242_p2.read() & add_ln58_7_reg_24605.read());
}

void sha256_transform::thread_and_ln53_fu_1154_p2() {
    and_ln53_fu_1154_p2 = (ap_port_reg_ctx_state_4_read.read() & ap_port_reg_ctx_state_5_read.read());
}

void sha256_transform::thread_and_ln54_100_fu_17548_p2() {
    and_ln54_100_fu_17548_p2 = (add_ln62_34_reg_26114.read() & add_ln62_33_reg_26064.read());
}

void sha256_transform::thread_and_ln54_101_fu_17898_p2() {
    and_ln54_101_fu_17898_p2 = (add_ln62_35_reg_26152.read() & add_ln62_34_reg_26114.read());
}

void sha256_transform::thread_and_ln54_102_fu_18016_p2() {
    and_ln54_102_fu_18016_p2 = (add_ln62_36_reg_26167.read() & add_ln62_35_reg_26152.read());
}

void sha256_transform::thread_and_ln54_103_fu_18335_p2() {
    and_ln54_103_fu_18335_p2 = (add_ln62_37_reg_26204.read() & add_ln62_36_reg_26167.read());
}

void sha256_transform::thread_and_ln54_104_fu_18610_p2() {
    and_ln54_104_fu_18610_p2 = (add_ln62_38_reg_26220.read() & add_ln62_37_reg_26204.read());
}

void sha256_transform::thread_and_ln54_105_fu_18718_p2() {
    and_ln54_105_fu_18718_p2 = (add_ln62_39_reg_26254.read() & add_ln62_38_reg_26220.read());
}

void sha256_transform::thread_and_ln54_106_fu_19069_p2() {
    and_ln54_106_fu_19069_p2 = (add_ln62_40_reg_26287.read() & add_ln62_39_reg_26254.read());
}

void sha256_transform::thread_and_ln54_107_fu_19186_p2() {
    and_ln54_107_fu_19186_p2 = (add_ln62_41_reg_26302.read() & add_ln62_40_reg_26287.read());
}

void sha256_transform::thread_and_ln54_108_fu_19505_p2() {
    and_ln54_108_fu_19505_p2 = (add_ln62_42_reg_26339.read() & add_ln62_41_reg_26302.read());
}

void sha256_transform::thread_and_ln54_109_fu_19780_p2() {
    and_ln54_109_fu_19780_p2 = (add_ln62_43_reg_26355.read() & add_ln62_42_reg_26339.read());
}

void sha256_transform::thread_and_ln54_10_fu_5422_p2() {
    and_ln54_10_fu_5422_p2 = (add_ln62_9_reg_24799.read() & xor_ln54_42_fu_5418_p2.read());
}

void sha256_transform::thread_and_ln54_110_fu_19888_p2() {
    and_ln54_110_fu_19888_p2 = (add_ln62_44_reg_26389.read() & add_ln62_43_reg_26355.read());
}

void sha256_transform::thread_and_ln54_111_fu_20248_p2() {
    and_ln54_111_fu_20248_p2 = (add_ln62_45_reg_26422.read() & add_ln62_44_reg_26389.read());
}

void sha256_transform::thread_and_ln54_112_fu_20365_p2() {
    and_ln54_112_fu_20365_p2 = (add_ln62_46_reg_26437.read() & add_ln62_45_reg_26422.read());
}

void sha256_transform::thread_and_ln54_113_fu_20684_p2() {
    and_ln54_113_fu_20684_p2 = (add_ln62_47_reg_26479.read() & add_ln62_46_reg_26437.read());
}

void sha256_transform::thread_and_ln54_114_fu_20959_p2() {
    and_ln54_114_fu_20959_p2 = (add_ln62_48_reg_26495.read() & add_ln62_47_reg_26479.read());
}

void sha256_transform::thread_and_ln54_115_fu_21067_p2() {
    and_ln54_115_fu_21067_p2 = (add_ln62_49_reg_26529.read() & add_ln62_48_reg_26495.read());
}

void sha256_transform::thread_and_ln54_116_fu_21418_p2() {
    and_ln54_116_fu_21418_p2 = (add_ln62_50_reg_26562.read() & add_ln62_49_reg_26529.read());
}

void sha256_transform::thread_and_ln54_117_fu_21535_p2() {
    and_ln54_117_fu_21535_p2 = (add_ln62_51_reg_26577.read() & add_ln62_50_reg_26562.read());
}

void sha256_transform::thread_and_ln54_118_fu_21854_p2() {
    and_ln54_118_fu_21854_p2 = (add_ln62_52_reg_26614.read() & add_ln62_51_reg_26577.read());
}

void sha256_transform::thread_and_ln54_119_fu_22129_p2() {
    and_ln54_119_fu_22129_p2 = (add_ln62_53_reg_26630.read() & add_ln62_52_reg_26614.read());
}

void sha256_transform::thread_and_ln54_11_fu_5529_p2() {
    and_ln54_11_fu_5529_p2 = (add_ln62_10_fu_5442_p2.read() & xor_ln54_46_fu_5525_p2.read());
}

void sha256_transform::thread_and_ln54_120_fu_22237_p2() {
    and_ln54_120_fu_22237_p2 = (add_ln62_54_reg_26664.read() & add_ln62_53_reg_26630.read());
}

void sha256_transform::thread_and_ln54_121_fu_22587_p2() {
    and_ln54_121_fu_22587_p2 = (add_ln62_55_reg_26697.read() & add_ln62_54_reg_26664.read());
}

void sha256_transform::thread_and_ln54_122_fu_22705_p2() {
    and_ln54_122_fu_22705_p2 = (add_ln62_56_reg_26712.read() & add_ln62_55_reg_26697.read());
}

void sha256_transform::thread_and_ln54_123_fu_23024_p2() {
    and_ln54_123_fu_23024_p2 = (add_ln62_57_reg_26749.read() & add_ln62_56_reg_26712.read());
}

void sha256_transform::thread_and_ln54_124_fu_23364_p2() {
    and_ln54_124_fu_23364_p2 = (add_ln62_58_reg_26765.read() & add_ln62_57_reg_26749.read());
}

void sha256_transform::thread_and_ln54_125_fu_23472_p2() {
    and_ln54_125_fu_23472_p2 = (add_ln62_59_reg_26799.read() & add_ln62_58_reg_26765.read());
}

void sha256_transform::thread_and_ln54_126_fu_23708_p2() {
    and_ln54_126_fu_23708_p2 = (add_ln62_60_fu_23379_p2.read() & add_ln62_59_reg_26799.read());
}

void sha256_transform::thread_and_ln54_127_fu_23938_p2() {
    and_ln54_127_fu_23938_p2 = (add_ln62_61_fu_23491_p2.read() & add_ln62_60_fu_23379_p2.read());
}

void sha256_transform::thread_and_ln54_12_fu_5881_p2() {
    and_ln54_12_fu_5881_p2 = (add_ln62_11_reg_24887.read() & xor_ln54_50_fu_5877_p2.read());
}

void sha256_transform::thread_and_ln54_13_fu_5998_p2() {
    and_ln54_13_fu_5998_p2 = (add_ln62_12_fu_5901_p2.read() & xor_ln54_54_fu_5994_p2.read());
}

void sha256_transform::thread_and_ln54_14_fu_6476_p2() {
    and_ln54_14_fu_6476_p2 = (add_ln62_13_reg_24940.read() & xor_ln54_58_fu_6472_p2.read());
}

void sha256_transform::thread_and_ln54_15_fu_7055_p2() {
    and_ln54_15_fu_7055_p2 = (add_ln62_14_reg_24995.read() & xor_ln54_62_fu_7051_p2.read());
}

void sha256_transform::thread_and_ln54_16_fu_7162_p2() {
    and_ln54_16_fu_7162_p2 = (add_ln62_15_fu_7075_p2.read() & xor_ln54_66_fu_7158_p2.read());
}

void sha256_transform::thread_and_ln54_17_fu_7674_p2() {
    and_ln54_17_fu_7674_p2 = (add_ln62_16_reg_25075.read() & xor_ln54_70_fu_7670_p2.read());
}

void sha256_transform::thread_and_ln54_18_fu_7790_p2() {
    and_ln54_18_fu_7790_p2 = (add_ln62_17_fu_7694_p2.read() & xor_ln54_74_fu_7786_p2.read());
}

void sha256_transform::thread_and_ln54_19_fu_8418_p2() {
    and_ln54_19_fu_8418_p2 = (add_ln62_18_reg_25149.read() & xor_ln54_78_fu_8414_p2.read());
}

void sha256_transform::thread_and_ln54_1_fu_2073_p2() {
    and_ln54_1_fu_2073_p2 = (ctx_state_1_read_1_reg_24203.read() & ctx_state_2_read_1_reg_24196.read());
}

void sha256_transform::thread_and_ln54_20_fu_8998_p2() {
    and_ln54_20_fu_8998_p2 = (add_ln62_19_reg_25220.read() & xor_ln54_82_fu_8994_p2.read());
}

void sha256_transform::thread_and_ln54_21_fu_9105_p2() {
    and_ln54_21_fu_9105_p2 = (add_ln62_20_fu_9018_p2.read() & xor_ln54_86_fu_9101_p2.read());
}

void sha256_transform::thread_and_ln54_22_fu_9617_p2() {
    and_ln54_22_fu_9617_p2 = (add_ln62_21_reg_25300.read() & xor_ln54_90_fu_9613_p2.read());
}

void sha256_transform::thread_and_ln54_23_fu_9733_p2() {
    and_ln54_23_fu_9733_p2 = (add_ln62_22_fu_9637_p2.read() & xor_ln54_94_fu_9729_p2.read());
}

void sha256_transform::thread_and_ln54_24_fu_10361_p2() {
    and_ln54_24_fu_10361_p2 = (add_ln62_23_reg_25374.read() & xor_ln54_98_fu_10357_p2.read());
}

void sha256_transform::thread_and_ln54_25_fu_11100_p2() {
    and_ln54_25_fu_11100_p2 = (add_ln62_24_reg_25445.read() & xor_ln54_102_fu_11096_p2.read());
}

void sha256_transform::thread_and_ln54_26_fu_11207_p2() {
    and_ln54_26_fu_11207_p2 = (add_ln62_25_fu_11120_p2.read() & xor_ln54_106_fu_11203_p2.read());
}

void sha256_transform::thread_and_ln54_27_fu_12649_p2() {
    and_ln54_27_fu_12649_p2 = (add_ln62_26_reg_25542.read() & xor_ln54_110_fu_12645_p2.read());
}

void sha256_transform::thread_and_ln54_28_fu_12765_p2() {
    and_ln54_28_fu_12765_p2 = (add_ln62_27_fu_12669_p2.read() & xor_ln54_114_fu_12761_p2.read());
}

void sha256_transform::thread_and_ln54_29_fu_14324_p2() {
    and_ln54_29_fu_14324_p2 = (add_ln62_28_reg_25697.read() & xor_ln54_118_fu_14320_p2.read());
}

void sha256_transform::thread_and_ln54_2_fu_2289_p2() {
    and_ln54_2_fu_2289_p2 = (add_ln62_1_fu_2199_p2.read() & xor_ln54_10_fu_2283_p2.read());
}

void sha256_transform::thread_and_ln54_30_fu_15549_p2() {
    and_ln54_30_fu_15549_p2 = (add_ln62_29_reg_25844.read() & xor_ln54_122_fu_15545_p2.read());
}

void sha256_transform::thread_and_ln54_31_fu_15656_p2() {
    and_ln54_31_fu_15656_p2 = (add_ln62_30_fu_15569_p2.read() & xor_ln54_126_fu_15652_p2.read());
}

void sha256_transform::thread_and_ln54_32_fu_16460_p2() {
    and_ln54_32_fu_16460_p2 = (add_ln62_31_reg_25960.read() & xor_ln54_130_fu_16456_p2.read());
}

void sha256_transform::thread_and_ln54_33_fu_16576_p2() {
    and_ln54_33_fu_16576_p2 = (add_ln62_32_fu_16480_p2.read() & xor_ln54_134_fu_16572_p2.read());
}

void sha256_transform::thread_and_ln54_34_fu_17150_p2() {
    and_ln54_34_fu_17150_p2 = (add_ln62_33_reg_26064.read() & xor_ln54_138_fu_17146_p2.read());
}

void sha256_transform::thread_and_ln54_35_fu_17435_p2() {
    and_ln54_35_fu_17435_p2 = (add_ln62_34_reg_26114.read() & xor_ln54_142_fu_17431_p2.read());
}

void sha256_transform::thread_and_ln54_36_fu_17542_p2() {
    and_ln54_36_fu_17542_p2 = (add_ln62_35_fu_17455_p2.read() & xor_ln54_146_fu_17538_p2.read());
}

void sha256_transform::thread_and_ln54_37_fu_17893_p2() {
    and_ln54_37_fu_17893_p2 = (add_ln62_36_reg_26167.read() & xor_ln54_150_fu_17889_p2.read());
}

void sha256_transform::thread_and_ln54_38_fu_18010_p2() {
    and_ln54_38_fu_18010_p2 = (add_ln62_37_fu_17913_p2.read() & xor_ln54_154_fu_18006_p2.read());
}

void sha256_transform::thread_and_ln54_39_fu_18330_p2() {
    and_ln54_39_fu_18330_p2 = (add_ln62_38_reg_26220.read() & xor_ln54_158_fu_18326_p2.read());
}

void sha256_transform::thread_and_ln54_3_fu_2411_p2() {
    and_ln54_3_fu_2411_p2 = (add_ln62_2_fu_2312_p2.read() & xor_ln54_14_fu_2405_p2.read());
}

void sha256_transform::thread_and_ln54_40_fu_18605_p2() {
    and_ln54_40_fu_18605_p2 = (add_ln62_39_reg_26254.read() & xor_ln54_162_fu_18601_p2.read());
}

void sha256_transform::thread_and_ln54_41_fu_18712_p2() {
    and_ln54_41_fu_18712_p2 = (add_ln62_40_fu_18625_p2.read() & xor_ln54_166_fu_18708_p2.read());
}

void sha256_transform::thread_and_ln54_42_fu_19064_p2() {
    and_ln54_42_fu_19064_p2 = (add_ln62_41_reg_26302.read() & xor_ln54_170_fu_19060_p2.read());
}

void sha256_transform::thread_and_ln54_43_fu_19180_p2() {
    and_ln54_43_fu_19180_p2 = (add_ln62_42_fu_19084_p2.read() & xor_ln54_174_fu_19176_p2.read());
}

void sha256_transform::thread_and_ln54_44_fu_19500_p2() {
    and_ln54_44_fu_19500_p2 = (add_ln62_43_reg_26355.read() & xor_ln54_178_fu_19496_p2.read());
}

void sha256_transform::thread_and_ln54_45_fu_19775_p2() {
    and_ln54_45_fu_19775_p2 = (add_ln62_44_reg_26389.read() & xor_ln54_182_fu_19771_p2.read());
}

void sha256_transform::thread_and_ln54_46_fu_19882_p2() {
    and_ln54_46_fu_19882_p2 = (add_ln62_45_fu_19795_p2.read() & xor_ln54_186_fu_19878_p2.read());
}

void sha256_transform::thread_and_ln54_47_fu_20243_p2() {
    and_ln54_47_fu_20243_p2 = (add_ln62_46_reg_26437.read() & xor_ln54_190_fu_20239_p2.read());
}

void sha256_transform::thread_and_ln54_48_fu_20359_p2() {
    and_ln54_48_fu_20359_p2 = (add_ln62_47_fu_20263_p2.read() & xor_ln54_194_fu_20355_p2.read());
}

void sha256_transform::thread_and_ln54_49_fu_20679_p2() {
    and_ln54_49_fu_20679_p2 = (add_ln62_48_reg_26495.read() & xor_ln54_198_fu_20675_p2.read());
}

void sha256_transform::thread_and_ln54_4_fu_2944_p2() {
    and_ln54_4_fu_2944_p2 = (add_ln62_3_reg_24383.read() & xor_ln54_18_fu_2940_p2.read());
}

void sha256_transform::thread_and_ln54_50_fu_20954_p2() {
    and_ln54_50_fu_20954_p2 = (add_ln62_49_reg_26529.read() & xor_ln54_202_fu_20950_p2.read());
}

void sha256_transform::thread_and_ln54_51_fu_21061_p2() {
    and_ln54_51_fu_21061_p2 = (add_ln62_50_fu_20974_p2.read() & xor_ln54_206_fu_21057_p2.read());
}

void sha256_transform::thread_and_ln54_52_fu_21413_p2() {
    and_ln54_52_fu_21413_p2 = (add_ln62_51_reg_26577.read() & xor_ln54_210_fu_21409_p2.read());
}

void sha256_transform::thread_and_ln54_53_fu_21529_p2() {
    and_ln54_53_fu_21529_p2 = (add_ln62_52_fu_21433_p2.read() & xor_ln54_214_fu_21525_p2.read());
}

void sha256_transform::thread_and_ln54_54_fu_21849_p2() {
    and_ln54_54_fu_21849_p2 = (add_ln62_53_reg_26630.read() & xor_ln54_218_fu_21845_p2.read());
}

void sha256_transform::thread_and_ln54_55_fu_22124_p2() {
    and_ln54_55_fu_22124_p2 = (add_ln62_54_reg_26664.read() & xor_ln54_222_fu_22120_p2.read());
}

void sha256_transform::thread_and_ln54_56_fu_22231_p2() {
    and_ln54_56_fu_22231_p2 = (add_ln62_55_fu_22144_p2.read() & xor_ln54_226_fu_22227_p2.read());
}

void sha256_transform::thread_and_ln54_57_fu_22582_p2() {
    and_ln54_57_fu_22582_p2 = (add_ln62_56_reg_26712.read() & xor_ln54_230_fu_22578_p2.read());
}

void sha256_transform::thread_and_ln54_58_fu_22699_p2() {
    and_ln54_58_fu_22699_p2 = (add_ln62_57_fu_22602_p2.read() & xor_ln54_234_fu_22695_p2.read());
}

void sha256_transform::thread_and_ln54_59_fu_23019_p2() {
    and_ln54_59_fu_23019_p2 = (add_ln62_58_reg_26765.read() & xor_ln54_238_fu_23015_p2.read());
}

void sha256_transform::thread_and_ln54_5_fu_3429_p2() {
    and_ln54_5_fu_3429_p2 = (add_ln62_4_reg_24477.read() & xor_ln54_22_fu_3425_p2.read());
}

void sha256_transform::thread_and_ln54_60_fu_23359_p2() {
    and_ln54_60_fu_23359_p2 = (add_ln62_59_reg_26799.read() & xor_ln54_242_fu_23355_p2.read());
}

void sha256_transform::thread_and_ln54_61_fu_23466_p2() {
    and_ln54_61_fu_23466_p2 = (add_ln62_60_fu_23379_p2.read() & xor_ln54_246_fu_23462_p2.read());
}

void sha256_transform::thread_and_ln54_62_fu_23702_p2() {
    and_ln54_62_fu_23702_p2 = (add_ln62_61_fu_23491_p2.read() & xor_ln54_250_fu_23697_p2.read());
}

void sha256_transform::thread_and_ln54_63_fu_23932_p2() {
    and_ln54_63_fu_23932_p2 = (add_ln62_62_fu_23730_p2.read() & xor_ln54_254_fu_23926_p2.read());
}

void sha256_transform::thread_and_ln54_64_fu_2177_p2() {
    and_ln54_64_fu_2177_p2 = (add_ln62_fu_2088_p2.read() & xor_ln54_6_fu_2172_p2.read());
}

void sha256_transform::thread_and_ln54_65_fu_2183_p2() {
    and_ln54_65_fu_2183_p2 = (ap_port_reg_ctx_state_0_read.read() & ctx_state_1_read_1_reg_24203.read());
}

void sha256_transform::thread_and_ln54_66_fu_2295_p2() {
    and_ln54_66_fu_2295_p2 = (add_ln62_fu_2088_p2.read() & ap_port_reg_ctx_state_0_read.read());
}

void sha256_transform::thread_and_ln54_67_fu_2417_p2() {
    and_ln54_67_fu_2417_p2 = (add_ln62_1_fu_2199_p2.read() & add_ln62_fu_2088_p2.read());
}

void sha256_transform::thread_and_ln54_68_fu_2949_p2() {
    and_ln54_68_fu_2949_p2 = (add_ln62_2_reg_24367.read() & add_ln62_1_reg_24360.read());
}

void sha256_transform::thread_and_ln54_69_fu_3434_p2() {
    and_ln54_69_fu_3434_p2 = (add_ln62_3_reg_24383.read() & add_ln62_2_reg_24367.read());
}

void sha256_transform::thread_and_ln54_6_fu_3536_p2() {
    and_ln54_6_fu_3536_p2 = (add_ln62_5_fu_3449_p2.read() & xor_ln54_26_fu_3532_p2.read());
}

void sha256_transform::thread_and_ln54_70_fu_3542_p2() {
    and_ln54_70_fu_3542_p2 = (add_ln62_4_reg_24477.read() & add_ln62_3_reg_24383.read());
}

void sha256_transform::thread_and_ln54_71_fu_4115_p2() {
    and_ln54_71_fu_4115_p2 = (add_ln62_5_reg_24570.read() & add_ln62_4_reg_24477.read());
}

void sha256_transform::thread_and_ln54_72_fu_4232_p2() {
    and_ln54_72_fu_4232_p2 = (add_ln62_6_reg_24585.read() & add_ln62_5_reg_24570.read());
}

void sha256_transform::thread_and_ln54_73_fu_4748_p2() {
    and_ln54_73_fu_4748_p2 = (add_ln62_7_reg_24692.read() & add_ln62_6_reg_24585.read());
}

void sha256_transform::thread_and_ln54_74_fu_5427_p2() {
    and_ln54_74_fu_5427_p2 = (add_ln62_8_reg_24708.read() & add_ln62_7_reg_24692.read());
}

void sha256_transform::thread_and_ln54_75_fu_5535_p2() {
    and_ln54_75_fu_5535_p2 = (add_ln62_9_reg_24799.read() & add_ln62_8_reg_24708.read());
}

void sha256_transform::thread_and_ln54_76_fu_5886_p2() {
    and_ln54_76_fu_5886_p2 = (add_ln62_10_reg_24872.read() & add_ln62_9_reg_24799.read());
}

void sha256_transform::thread_and_ln54_77_fu_6004_p2() {
    and_ln54_77_fu_6004_p2 = (add_ln62_11_reg_24887.read() & add_ln62_10_reg_24872.read());
}

void sha256_transform::thread_and_ln54_78_fu_6481_p2() {
    and_ln54_78_fu_6481_p2 = (add_ln62_12_reg_24924.read() & add_ln62_11_reg_24887.read());
}

void sha256_transform::thread_and_ln54_79_fu_7060_p2() {
    and_ln54_79_fu_7060_p2 = (add_ln62_13_reg_24940.read() & add_ln62_12_reg_24924.read());
}

void sha256_transform::thread_and_ln54_7_fu_4110_p2() {
    and_ln54_7_fu_4110_p2 = (add_ln62_6_reg_24585.read() & xor_ln54_30_fu_4106_p2.read());
}

void sha256_transform::thread_and_ln54_80_fu_7168_p2() {
    and_ln54_80_fu_7168_p2 = (add_ln62_14_reg_24995.read() & add_ln62_13_reg_24940.read());
}

void sha256_transform::thread_and_ln54_81_fu_7679_p2() {
    and_ln54_81_fu_7679_p2 = (add_ln62_15_reg_25060.read() & add_ln62_14_reg_24995.read());
}

void sha256_transform::thread_and_ln54_82_fu_7796_p2() {
    and_ln54_82_fu_7796_p2 = (add_ln62_16_reg_25075.read() & add_ln62_15_reg_25060.read());
}

void sha256_transform::thread_and_ln54_83_fu_8423_p2() {
    and_ln54_83_fu_8423_p2 = (add_ln62_17_reg_25133.read() & add_ln62_16_reg_25075.read());
}

void sha256_transform::thread_and_ln54_84_fu_9003_p2() {
    and_ln54_84_fu_9003_p2 = (add_ln62_18_reg_25149.read() & add_ln62_17_reg_25133.read());
}

void sha256_transform::thread_and_ln54_85_fu_9111_p2() {
    and_ln54_85_fu_9111_p2 = (add_ln62_19_reg_25220.read() & add_ln62_18_reg_25149.read());
}

void sha256_transform::thread_and_ln54_86_fu_9622_p2() {
    and_ln54_86_fu_9622_p2 = (add_ln62_20_reg_25285.read() & add_ln62_19_reg_25220.read());
}

void sha256_transform::thread_and_ln54_87_fu_9739_p2() {
    and_ln54_87_fu_9739_p2 = (add_ln62_21_reg_25300.read() & add_ln62_20_reg_25285.read());
}

void sha256_transform::thread_and_ln54_88_fu_10366_p2() {
    and_ln54_88_fu_10366_p2 = (add_ln62_22_reg_25358.read() & add_ln62_21_reg_25300.read());
}

void sha256_transform::thread_and_ln54_89_fu_11105_p2() {
    and_ln54_89_fu_11105_p2 = (add_ln62_23_reg_25374.read() & add_ln62_22_reg_25358.read());
}

void sha256_transform::thread_and_ln54_8_fu_4226_p2() {
    and_ln54_8_fu_4226_p2 = (add_ln62_7_fu_4130_p2.read() & xor_ln54_34_fu_4222_p2.read());
}

void sha256_transform::thread_and_ln54_90_fu_11213_p2() {
    and_ln54_90_fu_11213_p2 = (add_ln62_24_reg_25445.read() & add_ln62_23_reg_25374.read());
}

void sha256_transform::thread_and_ln54_91_fu_12654_p2() {
    and_ln54_91_fu_12654_p2 = (add_ln62_25_reg_25527.read() & add_ln62_24_reg_25445.read());
}

void sha256_transform::thread_and_ln54_92_fu_12771_p2() {
    and_ln54_92_fu_12771_p2 = (add_ln62_26_reg_25542.read() & add_ln62_25_reg_25527.read());
}

void sha256_transform::thread_and_ln54_93_fu_14329_p2() {
    and_ln54_93_fu_14329_p2 = (add_ln62_27_reg_25681.read() & add_ln62_26_reg_25542.read());
}

void sha256_transform::thread_and_ln54_94_fu_15554_p2() {
    and_ln54_94_fu_15554_p2 = (add_ln62_28_reg_25697.read() & add_ln62_27_reg_25681.read());
}

void sha256_transform::thread_and_ln54_95_fu_15662_p2() {
    and_ln54_95_fu_15662_p2 = (add_ln62_29_reg_25844.read() & add_ln62_28_reg_25697.read());
}

void sha256_transform::thread_and_ln54_96_fu_16465_p2() {
    and_ln54_96_fu_16465_p2 = (add_ln62_30_reg_25945.read() & add_ln62_29_reg_25844.read());
}

void sha256_transform::thread_and_ln54_97_fu_16582_p2() {
    and_ln54_97_fu_16582_p2 = (add_ln62_31_reg_25960.read() & add_ln62_30_reg_25945.read());
}

void sha256_transform::thread_and_ln54_98_fu_17155_p2() {
    and_ln54_98_fu_17155_p2 = (add_ln62_32_reg_26048.read() & add_ln62_31_reg_25960.read());
}

void sha256_transform::thread_and_ln54_99_fu_17440_p2() {
    and_ln54_99_fu_17440_p2 = (add_ln62_33_reg_26064.read() & add_ln62_32_reg_26048.read());
}

void sha256_transform::thread_and_ln54_9_fu_4743_p2() {
    and_ln54_9_fu_4743_p2 = (add_ln62_8_reg_24708.read() & xor_ln54_38_fu_4739_p2.read());
}

void sha256_transform::thread_and_ln54_fu_2067_p2() {
    and_ln54_fu_2067_p2 = (xor_ln54_2_fu_2063_p2.read() & ap_port_reg_ctx_state_0_read.read());
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[1];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[2];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[3];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[4];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[5];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[6];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[7];
}

void sha256_transform::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void sha256_transform::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())));
}

void sha256_transform::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage5() {
    ap_block_pp0_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage6() {
    ap_block_pp0_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_state10_pp0_stage1_iter1() {
    ap_block_state10_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state11_pp0_stage2_iter1() {
    ap_block_state11_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state12_pp0_stage3_iter1() {
    ap_block_state12_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state13_pp0_stage4_iter1() {
    ap_block_state13_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state14_pp0_stage5_iter1() {
    ap_block_state14_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state15_pp0_stage6_iter1() {
    ap_block_state15_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state16_pp0_stage7_iter1() {
    ap_block_state16_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state17_pp0_stage0_iter2() {
    ap_block_state17_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state18_pp0_stage1_iter2() {
    ap_block_state18_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state19_pp0_stage2_iter2() {
    ap_block_state19_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void sha256_transform::thread_ap_block_state20_pp0_stage3_iter2() {
    ap_block_state20_pp0_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state21_pp0_stage4_iter2() {
    ap_block_state21_pp0_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state22_pp0_stage5_iter2() {
    ap_block_state22_pp0_stage5_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state23_pp0_stage6_iter2() {
    ap_block_state23_pp0_stage6_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state24_pp0_stage7_iter2() {
    ap_block_state24_pp0_stage7_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state25_pp0_stage0_iter3() {
    ap_block_state25_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state26_pp0_stage1_iter3() {
    ap_block_state26_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state27_pp0_stage2_iter3() {
    ap_block_state27_pp0_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state28_pp0_stage3_iter3() {
    ap_block_state28_pp0_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state29_pp0_stage4_iter3() {
    ap_block_state29_pp0_stage4_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state2_pp0_stage1_iter0() {
    ap_block_state2_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state30_pp0_stage5_iter3() {
    ap_block_state30_pp0_stage5_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state31_pp0_stage6_iter3() {
    ap_block_state31_pp0_stage6_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state32_pp0_stage7_iter3() {
    ap_block_state32_pp0_stage7_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state33_pp0_stage0_iter4() {
    ap_block_state33_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state34_pp0_stage1_iter4() {
    ap_block_state34_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state35_pp0_stage2_iter4() {
    ap_block_state35_pp0_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state36_pp0_stage3_iter4() {
    ap_block_state36_pp0_stage3_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state37_pp0_stage4_iter4() {
    ap_block_state37_pp0_stage4_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state38_pp0_stage5_iter4() {
    ap_block_state38_pp0_stage5_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state39_pp0_stage6_iter4() {
    ap_block_state39_pp0_stage6_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state3_pp0_stage2_iter0() {
    ap_block_state3_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state40_pp0_stage7_iter4() {
    ap_block_state40_pp0_stage7_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state4_pp0_stage3_iter0() {
    ap_block_state4_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state5_pp0_stage4_iter0() {
    ap_block_state5_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state6_pp0_stage5_iter0() {
    ap_block_state6_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state7_pp0_stage6_iter0() {
    ap_block_state7_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state8_pp0_stage7_iter0() {
    ap_block_state8_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state9_pp0_stage0_iter1() {
    ap_block_state9_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void sha256_transform::thread_ap_enable_reg_pp0_iter0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
        ap_enable_reg_pp0_iter0 = ap_start.read();
    } else {
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg.read();
    }
}

void sha256_transform::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_0to3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()))) {
        ap_idle_pp0_0to3 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to3 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_1to4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()))) {
        ap_idle_pp0_1to4 = ap_const_logic_1;
    } else {
        ap_idle_pp0_1to4 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to3.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_return_0() {
    ap_return_0 = add_ln65_fu_23997_p2.read();
}

void sha256_transform::thread_ap_return_1() {
    ap_return_1 = add_ln66_reg_26852.read();
}

void sha256_transform::thread_ap_return_2() {
    ap_return_2 = add_ln67_reg_26857.read();
}

void sha256_transform::thread_ap_return_3() {
    ap_return_3 = add_ln68_reg_26862.read();
}

void sha256_transform::thread_ap_return_4() {
    ap_return_4 = add_ln69_fu_24007_p2.read();
}

void sha256_transform::thread_ap_return_5() {
    ap_return_5 = add_ln70_reg_26867.read();
}

void sha256_transform::thread_ap_return_6() {
    ap_return_6 = add_ln71_reg_26872.read();
}

void sha256_transform::thread_ap_return_7() {
    ap_return_7 = add_ln72_reg_26877.read();
}

void sha256_transform::thread_data_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_0_address0 = "XXXX";
        }
    } else {
        data_0_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_0_address1 = "XXXX";
        }
    } else {
        data_0_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_0_ce0 = ap_const_logic_1;
    } else {
        data_0_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_0_ce1 = ap_const_logic_1;
    } else {
        data_0_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_1_address0 = "XXXX";
        }
    } else {
        data_1_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_1_address1 = "XXXX";
        }
    } else {
        data_1_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_1_ce0 = ap_const_logic_1;
    } else {
        data_1_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_1_ce1 = ap_const_logic_1;
    } else {
        data_1_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_2_address0 = "XXXX";
        }
    } else {
        data_2_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_2_address1 = "XXXX";
        }
    } else {
        data_2_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_2_ce0 = ap_const_logic_1;
    } else {
        data_2_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_2_ce1 = ap_const_logic_1;
    } else {
        data_2_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_3_address0 = "XXXX";
        }
    } else {
        data_3_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_3_address1 = "XXXX";
        }
    } else {
        data_3_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_3_ce0 = ap_const_logic_1;
    } else {
        data_3_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        data_3_ce1 = ap_const_logic_1;
    } else {
        data_3_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_lshr_ln1_fu_1985_p4() {
    lshr_ln1_fu_1985_p4 = ap_port_reg_ctx_state_0_read.read().range(31, 2);
}

void sha256_transform::thread_lshr_ln40_100_fu_11709_p4() {
    lshr_ln40_100_fu_11709_p4 = m_31_fu_11575_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_101_fu_6981_p4() {
    lshr_ln40_101_fu_6981_p4 = m_18_fu_6765_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_102_fu_7003_p4() {
    lshr_ln40_102_fu_7003_p4 = m_18_fu_6765_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_103_fu_7025_p4() {
    lshr_ln40_103_fu_7025_p4 = m_18_fu_6765_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_104_fu_11772_p4() {
    lshr_ln40_104_fu_11772_p4 = m_32_fu_11659_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_105_fu_11794_p4() {
    lshr_ln40_105_fu_11794_p4 = m_32_fu_11659_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_106_fu_7600_p4() {
    lshr_ln40_106_fu_7600_p4 = m_19_fu_7520_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_107_fu_7622_p4() {
    lshr_ln40_107_fu_7622_p4 = m_19_fu_7520_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_108_fu_7644_p4() {
    lshr_ln40_108_fu_7644_p4 = m_19_fu_7520_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_109_fu_11857_p4() {
    lshr_ln40_109_fu_11857_p4 = m_33_fu_11744_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_10_fu_9473_p4() {
    lshr_ln40_10_fu_9473_p4 = m_24_fu_9463_p2.read().range(31, 17);
}

void sha256_transform::thread_lshr_ln40_110_fu_11879_p4() {
    lshr_ln40_110_fu_11879_p4 = m_33_fu_11744_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_111_fu_8274_p4() {
    lshr_ln40_111_fu_8274_p4 = m_20_fu_8111_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_112_fu_8296_p4() {
    lshr_ln40_112_fu_8296_p4 = m_20_fu_8111_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_113_fu_8318_p4() {
    lshr_ln40_113_fu_8318_p4 = m_20_fu_8111_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_114_fu_11942_p4() {
    lshr_ln40_114_fu_11942_p4 = m_34_fu_11829_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_115_fu_11964_p4() {
    lshr_ln40_115_fu_11964_p4 = m_34_fu_11829_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_116_fu_8344_p4() {
    lshr_ln40_116_fu_8344_p4 = m_21_fu_8124_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_117_fu_8366_p4() {
    lshr_ln40_117_fu_8366_p4 = m_21_fu_8124_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_118_fu_8388_p4() {
    lshr_ln40_118_fu_8388_p4 = m_21_fu_8124_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_119_fu_12016_p4() {
    lshr_ln40_119_fu_12016_p4 = m_35_fu_11914_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_11_fu_10073_p4() {
    lshr_ln40_11_fu_10073_p4 = m_25_fu_10054_p2.read().range(31, 17);
}

void sha256_transform::thread_lshr_ln40_120_fu_12038_p4() {
    lshr_ln40_120_fu_12038_p4 = m_35_fu_11914_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_121_fu_8854_p4() {
    lshr_ln40_121_fu_8854_p4 = m_22_fu_8695_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_122_fu_8876_p4() {
    lshr_ln40_122_fu_8876_p4 = m_22_fu_8695_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_123_fu_8898_p4() {
    lshr_ln40_123_fu_8898_p4 = m_22_fu_8695_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_124_fu_13112_p4() {
    lshr_ln40_124_fu_13112_p4 = m_36_fu_13085_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_125_fu_13134_p4() {
    lshr_ln40_125_fu_13134_p4 = m_36_fu_13085_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_126_fu_8924_p4() {
    lshr_ln40_126_fu_8924_p4 = m_23_fu_8708_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_127_fu_8946_p4() {
    lshr_ln40_127_fu_8946_p4 = m_23_fu_8708_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_128_fu_8968_p4() {
    lshr_ln40_128_fu_8968_p4 = m_23_fu_8708_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_129_fu_12102_p4() {
    lshr_ln40_129_fu_12102_p4 = m_37_fu_12074_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_12_fu_10147_p4() {
    lshr_ln40_12_fu_10147_p4 = m_26_fu_10067_p2.read().range(31, 17);
}

void sha256_transform::thread_lshr_ln40_130_fu_12124_p4() {
    lshr_ln40_130_fu_12124_p4 = m_37_fu_12074_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_131_fu_9543_p4() {
    lshr_ln40_131_fu_9543_p4 = m_24_fu_9463_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_132_fu_9565_p4() {
    lshr_ln40_132_fu_9565_p4 = m_24_fu_9463_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_133_fu_9587_p4() {
    lshr_ln40_133_fu_9587_p4 = m_24_fu_9463_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_134_fu_13206_p4() {
    lshr_ln40_134_fu_13206_p4 = m_38_fu_13169_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_135_fu_13228_p4() {
    lshr_ln40_135_fu_13228_p4 = m_38_fu_13169_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_136_fu_10217_p4() {
    lshr_ln40_136_fu_10217_p4 = m_25_fu_10054_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_137_fu_10239_p4() {
    lshr_ln40_137_fu_10239_p4 = m_25_fu_10054_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_138_fu_10261_p4() {
    lshr_ln40_138_fu_10261_p4 = m_25_fu_10054_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_139_fu_13291_p4() {
    lshr_ln40_139_fu_13291_p4 = m_39_fu_13179_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_13_fu_10657_p4() {
    lshr_ln40_13_fu_10657_p4 = m_27_fu_10638_p2.read().range(31, 17);
}

void sha256_transform::thread_lshr_ln40_140_fu_13313_p4() {
    lshr_ln40_140_fu_13313_p4 = m_39_fu_13179_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_141_fu_10287_p4() {
    lshr_ln40_141_fu_10287_p4 = m_26_fu_10067_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_142_fu_10309_p4() {
    lshr_ln40_142_fu_10309_p4 = m_26_fu_10067_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_143_fu_10331_p4() {
    lshr_ln40_143_fu_10331_p4 = m_26_fu_10067_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_144_fu_13376_p4() {
    lshr_ln40_144_fu_13376_p4 = m_40_fu_13263_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_145_fu_13398_p4() {
    lshr_ln40_145_fu_13398_p4 = m_40_fu_13263_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_146_fu_10886_p4() {
    lshr_ln40_146_fu_10886_p4 = m_27_fu_10638_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_147_fu_10908_p4() {
    lshr_ln40_147_fu_10908_p4 = m_27_fu_10638_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_148_fu_10930_p4() {
    lshr_ln40_148_fu_10930_p4 = m_27_fu_10638_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_149_fu_13461_p4() {
    lshr_ln40_149_fu_13461_p4 = m_41_fu_13348_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_14_fu_10742_p4() {
    lshr_ln40_14_fu_10742_p4 = m_28_fu_10651_p2.read().range(31, 17);
}

void sha256_transform::thread_lshr_ln40_150_fu_13483_p4() {
    lshr_ln40_150_fu_13483_p4 = m_41_fu_13348_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_151_fu_10956_p4() {
    lshr_ln40_151_fu_10956_p4 = m_28_fu_10651_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_152_fu_10978_p4() {
    lshr_ln40_152_fu_10978_p4 = m_28_fu_10651_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_153_fu_11000_p4() {
    lshr_ln40_153_fu_11000_p4 = m_28_fu_10651_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_154_fu_13547_p4() {
    lshr_ln40_154_fu_13547_p4 = m_42_fu_13433_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_155_fu_13569_p4() {
    lshr_ln40_155_fu_13569_p4 = m_42_fu_13433_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_156_fu_11026_p4() {
    lshr_ln40_156_fu_11026_p4 = m_29_fu_10736_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_157_fu_11048_p4() {
    lshr_ln40_157_fu_11048_p4 = m_29_fu_10736_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_158_fu_11070_p4() {
    lshr_ln40_158_fu_11070_p4 = m_29_fu_10736_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_159_fu_13621_p4() {
    lshr_ln40_159_fu_13621_p4 = m_43_fu_13519_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_15_fu_10812_p4() {
    lshr_ln40_15_fu_10812_p4 = m_29_fu_10736_p2.read().range(31, 17);
}

void sha256_transform::thread_lshr_ln40_160_fu_13643_p4() {
    lshr_ln40_160_fu_13643_p4 = m_43_fu_13519_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_161_fu_12155_p4() {
    lshr_ln40_161_fu_12155_p4 = m_30_fu_11565_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_162_fu_12177_p4() {
    lshr_ln40_162_fu_12177_p4 = m_30_fu_11565_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_163_fu_12199_p4() {
    lshr_ln40_163_fu_12199_p4 = m_30_fu_11565_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_164_fu_14626_p4() {
    lshr_ln40_164_fu_14626_p4 = m_44_fu_14599_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_165_fu_14648_p4() {
    lshr_ln40_165_fu_14648_p4 = m_44_fu_14599_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_166_fu_12225_p4() {
    lshr_ln40_166_fu_12225_p4 = m_31_fu_11575_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_167_fu_12247_p4() {
    lshr_ln40_167_fu_12247_p4 = m_31_fu_11575_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_168_fu_12269_p4() {
    lshr_ln40_168_fu_12269_p4 = m_31_fu_11575_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_169_fu_13707_p4() {
    lshr_ln40_169_fu_13707_p4 = m_45_fu_13679_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_16_fu_11580_p4() {
    lshr_ln40_16_fu_11580_p4 = m_30_fu_11565_p2.read().range(31, 17);
}

void sha256_transform::thread_lshr_ln40_170_fu_13729_p4() {
    lshr_ln40_170_fu_13729_p4 = m_45_fu_13679_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_171_fu_12295_p4() {
    lshr_ln40_171_fu_12295_p4 = m_32_fu_11659_p2.read().range(31, 7);
}

void sha256_transform::thread_lshr_ln40_172_fu_12317_p4() {
    lshr_ln40_172_fu_12317_p4 = m_32_fu_11659_p2.read().range(31, 18);
}

void sha256_transform::thread_lshr_ln40_173_fu_12339_p4() {
    lshr_ln40_173_fu_12339_p4 = m_32_fu_11659_p2.read().range(31, 3);
}

void sha256_transform::thread_lshr_ln40_174_fu_14720_p4() {
    lshr_ln40_174_fu_14720_p4 = m_46_fu_14683_p2.read().range(31, 19);
}

void sha256_transform::thread_lshr_ln40_175_fu_14742_p4() {
    lshr_ln40_175_fu_14742_p4 = m_46_fu_14683_p2.read().range(31, 10);
}

void sha256_transform::thread_lshr_ln40_176_fu_12365_p4() {
    lshr_ln40_176_fu_12365_p4 = m_33_fu_11744_p2.read().range(31, 7);
}

}

