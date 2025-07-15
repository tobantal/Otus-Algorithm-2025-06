#pragma once

#include <string>
#include <stdexcept>

/* ��������� ������� ����� a^n */
class PowerCalculator {
public:
	// a_str � ��������� (������������), n_str � ������� (����� �����)
	virtual long double compute(const std::string& a_str, const std::string& n_str) const {
		throw "PowerCalculator::compute not implemented";
	}

	~PowerCalculator() = default;
};