// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "data"
#define AUTOTB_TVIN_data  "../tv/cdatafile/c.sha256.autotvin_data.dat"
// wrapc file define: "base_offset"
#define AUTOTB_TVIN_base_offset  "../tv/cdatafile/c.sha256.autotvin_base_offset.dat"
// wrapc file define: "bytes"
#define AUTOTB_TVIN_bytes  "../tv/cdatafile/c.sha256.autotvin_bytes.dat"
// wrapc file define: "digest"
#define AUTOTB_TVOUT_digest  "../tv/cdatafile/c.sha256.autotvout_digest.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "digest"
#define AUTOTB_TVOUT_PC_digest  "../tv/rtldatafile/rtl.sha256.autotvout_digest.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			data_depth = 0;
			base_offset_depth = 0;
			bytes_depth = 0;
			digest_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{data " << data_depth << "}\n";
			total_list << "{base_offset " << base_offset_depth << "}\n";
			total_list << "{bytes " << bytes_depth << "}\n";
			total_list << "{digest " << digest_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int data_depth;
		int base_offset_depth;
		int bytes_depth;
		int digest_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void sha256 (
char data[256],
int base_offset,
int bytes,
char digest[32]);

extern "C" void AESL_WRAP_sha256 (
char data[256],
int base_offset,
int bytes,
char digest[32])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "digest"
		aesl_fh.read(AUTOTB_TVOUT_PC_digest, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_digest, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_digest, AESL_token); // data

			sc_bv<8> *digest_pc_buffer = new sc_bv<8>[32];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'digest', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'digest', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					digest_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_digest, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_digest))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: digest
				{
					// bitslice(7, 0)
					// {
						// celement: digest(7, 0)
						// {
							sc_lv<8>* digest_lv0_0_31_1 = new sc_lv<8>[32];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: digest(7, 0)
						{
							// carray: (0) => (31) @ (1)
							for (int i_0 = 0; i_0 <= 31; i_0 += 1)
							{
								if (&(digest[0]) != NULL) // check the null address if the c port is array or others
								{
									digest_lv0_0_31_1[hls_map_index].range(7, 0) = sc_bv<8>(digest_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: digest(7, 0)
						{
							// carray: (0) => (31) @ (1)
							for (int i_0 = 0; i_0 <= 31; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : digest[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : digest[0]
								// output_left_conversion : digest[i_0]
								// output_type_conversion : (digest_lv0_0_31_1[hls_map_index]).to_uint64()
								if (&(digest[0]) != NULL) // check the null address if the c port is array or others
								{
									digest[i_0] = (digest_lv0_0_31_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] digest_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "data"
		char* tvin_data = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_data);

		// "base_offset"
		char* tvin_base_offset = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_base_offset);

		// "bytes"
		char* tvin_bytes = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_bytes);

		// "digest"
		char* tvout_digest = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_digest);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_data, tvin_data);

		sc_bv<8>* data_tvin_wrapc_buffer = new sc_bv<8>[256];

		// RTL Name: data
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: data(7, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : data[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : data[0]
						// regulate_c_name       : data
						// input_type_conversion : data[i_0]
						if (&(data[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> data_tmp_mem;
							data_tmp_mem = data[i_0];
							data_tvin_wrapc_buffer[hls_map_index].range(7, 0) = data_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_data, "%s\n", (data_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_data, tvin_data);
		}

		tcl_file.set_num(256, &tcl_file.data_depth);
		sprintf(tvin_data, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_data, tvin_data);

		// release memory allocation
		delete [] data_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_base_offset, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_base_offset, tvin_base_offset);

		sc_bv<32> base_offset_tvin_wrapc_buffer;

		// RTL Name: base_offset
		{
			// bitslice(31, 0)
			{
				// celement: base_offset(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : base_offset
						// sub_1st_elem          : 
						// ori_name_1st_elem     : base_offset
						// regulate_c_name       : base_offset
						// input_type_conversion : base_offset
						if (&(base_offset) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> base_offset_tmp_mem;
							base_offset_tmp_mem = base_offset;
							base_offset_tvin_wrapc_buffer.range(31, 0) = base_offset_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_base_offset, "%s\n", (base_offset_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_base_offset, tvin_base_offset);
		}

		tcl_file.set_num(1, &tcl_file.base_offset_depth);
		sprintf(tvin_base_offset, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_base_offset, tvin_base_offset);

		// [[transaction]]
		sprintf(tvin_bytes, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_bytes, tvin_bytes);

		sc_bv<32> bytes_tvin_wrapc_buffer;

		// RTL Name: bytes
		{
			// bitslice(31, 0)
			{
				// celement: bytes(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : bytes
						// sub_1st_elem          : 
						// ori_name_1st_elem     : bytes
						// regulate_c_name       : bytes
						// input_type_conversion : bytes
						if (&(bytes) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> bytes_tmp_mem;
							bytes_tmp_mem = bytes;
							bytes_tvin_wrapc_buffer.range(31, 0) = bytes_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_bytes, "%s\n", (bytes_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_bytes, tvin_bytes);
		}

		tcl_file.set_num(1, &tcl_file.bytes_depth);
		sprintf(tvin_bytes, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_bytes, tvin_bytes);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		sha256(data, base_offset, bytes, digest);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_digest, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_digest, tvout_digest);

		sc_bv<8>* digest_tvout_wrapc_buffer = new sc_bv<8>[32];

		// RTL Name: digest
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: digest(7, 0)
				{
					// carray: (0) => (31) @ (1)
					for (int i_0 = 0; i_0 <= 31; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : digest[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : digest[0]
						// regulate_c_name       : digest
						// input_type_conversion : digest[i_0]
						if (&(digest[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> digest_tmp_mem;
							digest_tmp_mem = digest[i_0];
							digest_tvout_wrapc_buffer[hls_map_index].range(7, 0) = digest_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 32; i++)
		{
			sprintf(tvout_digest, "%s\n", (digest_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_digest, tvout_digest);
		}

		tcl_file.set_num(32, &tcl_file.digest_depth);
		sprintf(tvout_digest, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_digest, tvout_digest);

		// release memory allocation
		delete [] digest_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "data"
		delete [] tvin_data;
		// release memory allocation: "base_offset"
		delete [] tvin_base_offset;
		// release memory allocation: "bytes"
		delete [] tvin_bytes;
		// release memory allocation: "digest"
		delete [] tvout_digest;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

