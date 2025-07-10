#include "TestRunner.h"
#include "TestParamLoader.h"
#include "TestSettings.h"
#include "TestAssert.h"

#include "LuckyTicketCounter.h"
#include <sstream>
#include <chrono>

void TestRunner::runTests()
{
	LuckyTicketCounter luckyTicketCounter{}; //TODO: заменить на интерфейс Counter

	TestAssert testAssert;
	TestParamLoader loader;

	std::vector<TestParam> params = loader.loadTestParams(TEST_PARAMS_DIR);
	std::vector<TestParam>::iterator it;

	//for (it = params.begin(); it != params.end(); ++it) {
	for (TestParam param : params) {
		auto start = std::chrono::high_resolution_clock::now();  // Засекаем время

		long long calcResult = luckyTicketCounter.count(param.getIn());
		bool result = testAssert.assert(param, calcResult);

		auto end = std::chrono::high_resolution_clock::now();    // Фиксируем завершение

		// Вычисляем длительность
		auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

		std::cout << "############" << std::endl;

		std::cout << "test name = " << param.getName() << std::endl;
		std::cout << "in = " << std::to_string(param.getIn()) << std::endl;
		std::cout << "out = " << std::to_string(param.getOut()) << std::endl;
		
		std::cout << "calcResult = " << std::to_string(calcResult) << std::endl;
		std::cout << "test result = " << std::to_string(result) << std::endl;
		std::cout << "duration: " << duration.count() << " nanoseconds" << std::endl;

	}
}
