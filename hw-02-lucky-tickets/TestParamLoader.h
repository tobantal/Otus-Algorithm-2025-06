#pragma once

#include <iostream>
#include <vector>

#include "TestParam.h"


/* Загрузчик тестов из файлов */
class TestParamLoader {
public:
	// dir - полный путь до папки с тестовыми данными (in, out)
	std::vector <TestParam> loadTestParams(const std::string& dir);
};