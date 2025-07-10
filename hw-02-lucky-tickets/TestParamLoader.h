#pragma once

#include <iostream>
#include <vector>

#include "TestParam.h"


/* Загрузчик тестов из файлов */
class TestParamLoader {
public:
	std::vector <TestParam> loadTestParams(const std::string& dir);
};