#include "GoldenRatioFibCounter.h"
#include <cmath>
#include <string>


std::string GoldenRatioFibCounter::compute(const std::string& n_str) const {
	long long n = std::stoll(n_str);
	
	long double sqrt5 = std::sqrtl(5.0L);
	long double phi = (1.0L + sqrt5) / 2.0L;

	long double result = std::round(std::powl(phi, n) / sqrt5);
	return std::to_string(static_cast<uint64_t>(result));
}