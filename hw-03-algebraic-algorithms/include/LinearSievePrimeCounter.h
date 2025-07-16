#pragma once
#include "Counter.h"

// ������� ���������� ������� ����� �� 1 �� n (uint64_t), ��������� ������ ���������� � �������� ���������� O(n).
class LinearSievePrimeCounter : public Counter {
public:
    std::string compute(const std::string& n_str) const override;
};
