#pragma once
#include "Counter.h"

// ������� ���������� ������� ����� �� 1 �� n (uint64_t), ��������� ������ ������� ���������.
class BruteForcePrimeCounter : public Counter {
public:
	std::string compute(const std::string& n_str) const override;
private:
	bool is_prime(uint64_t n) const;
};