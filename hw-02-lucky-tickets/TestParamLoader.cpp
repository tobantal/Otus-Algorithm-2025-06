#include "TestParamLoader.h"
#include "FileReader.h"

#include "TestSettings.h"

std::vector <TestParam> TestParamLoader::loadTestParams(const std::string& dir)
{
	std::vector <TestParam> v;
	FileReader fileReader;

	for (int i = 0; i < TEST_NUMBERS; ++i) {
		std::string basePath = dir + "\\test." + std::to_string(i);
		std::string inStr = fileReader.readFile(basePath + ".in");
		std::string outStr = fileReader.readFile(basePath + ".out");

		int in = std::stoi(inStr);
		long long out = std::stoll(outStr);

		v.push_back(TestParam{"test-" + std::to_string(i), in, out});
	}

	return v;
}
