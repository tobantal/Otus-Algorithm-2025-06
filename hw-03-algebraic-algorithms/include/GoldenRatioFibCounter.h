#pragma once
#include "Counter.h"

/* ���������� ����� ���������� ����� ������� ���� (�������� �������, �����������) */
class GoldenRatioFibCounter : public Counter {
public:
	std::string compute(const std::string& n_str) const override;
};