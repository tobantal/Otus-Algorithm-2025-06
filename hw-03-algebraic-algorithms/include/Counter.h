#pragma once

#include <string>
#include <stdexcept>

/* ��������� ���-�� � ����������� �� n */
class Counter {
public:
	// n_str � ������� �������� (����� �����)
	virtual std::string compute(const std::string& n_str) const {
		throw "Counter::compute not implemented";
	}

	~Counter() = default;
};