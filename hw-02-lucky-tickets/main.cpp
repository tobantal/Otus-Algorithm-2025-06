#include <iostream>
#include <vector>

#include "FileReader.h"
#include "TestParamLoader.h"
#include "TestParam.h"

#define TEST_DIR "C:\\Users\\toban\\source\\repos\\Otus-Algorithm-2025-06\\hw-02-lucky-tickets\\test-params"

int main() {
	
	TestParamLoader loader;
	
	std::vector<TestParam> params = loader.loadTestParams(TEST_DIR);
	std::vector<TestParam>::iterator it;

	for (it = params.begin(); it != params.end(); ++it) {
		std::cout << "Name: " << it->getName() << std::endl;
		std::cout << "in: " << std::to_string(it->getIn()) << std::endl;
		std::cout << "out: " << std::to_string(it->getOut()) << std::endl;
		std::cout << "------------------"<< std::endl;
	}

	return 0;
}