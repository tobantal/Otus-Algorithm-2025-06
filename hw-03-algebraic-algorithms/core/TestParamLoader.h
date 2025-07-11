#pragma once

#include <iostream>
#include <vector>

#include "TestParam.h"


/* ��������� ������ �� ������ */
class TestParamLoader {
public:
	// dir - ������ ���� �� ����� � ��������� ������� (in, out)
	// n - ���������� ������ ��� ��������
	std::vector <TestParam> loadTestParams(const std::string& dir, int n);
};