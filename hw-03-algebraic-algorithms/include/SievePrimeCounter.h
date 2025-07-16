#pragma once
#include "Counter.h"

// ������� ���������� ������� ����� �� 1 �� n (uint64_t), ��������� ������ ���������� �� ���������� O(n log log n).
class SievePrimeCounter : public Counter {
public:
    std::string compute(const std::string& n_str) const override;
};