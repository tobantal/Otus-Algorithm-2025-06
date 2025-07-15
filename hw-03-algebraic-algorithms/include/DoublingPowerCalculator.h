#pragma once
#include "PowerCalculator.h"

/* ������ ���������� � ������� ����� ������� ������ � ����������� */
class DoublingPowerCalculator : public PowerCalculator {
public:
	long double compute(const std::string& a_str, const std::string& n_str) const override;
};