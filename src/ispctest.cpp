#include "kernel_ispc.h"
#include <cstdio>

int
main()
{
	constexpr unsigned const count = 9;
	double res[count] = { 0 };
	double in0[count] = { 1, 2, 3, 4, 5, 6, 7, 8, 1 };
	double in1[count] = { 3, 4, 2, 1, 5, 8, 6, 9, 2 };

	ispc::simple_add(res, in0, in1, count);
	std::fprintf(stdout, "Hello ISPC world\n");
	for (const auto & f : in0) {
		std::fprintf(stdout, " %f", f);
	}
	std::fprintf(stdout, "\n + \n");
	for (const auto & f : in1) {
		std::fprintf(stdout, " %f", f);
	}
	std::fprintf(stdout, "\n = \n");
	for (const auto & f : res) {
		std::fprintf(stdout, " %f", f);
	}
	std::fprintf(stdout, "\n");
}