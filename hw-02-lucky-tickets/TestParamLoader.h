#pragma once

#include <iostream>
#include <vector>

#include "TestParam.h"


/* ��������� ������ �� ������ */
class TestParamLoader {
public:
	std::vector <TestParam> loadTestParams(const std::string& dir);
};