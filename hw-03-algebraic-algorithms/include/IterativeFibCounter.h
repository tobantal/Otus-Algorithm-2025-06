#pragma once
#include "Counter.h"

/* �����������(��������) ����� ����� ��������� */
class IterativeFibCounter : public Counter {
public:
	std::string compute(const std::string& n_str) const override;
};