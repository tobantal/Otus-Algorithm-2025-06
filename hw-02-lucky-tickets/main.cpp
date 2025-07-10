#include "TestRunner.h"
#include "LuckyTicketCounter.h"

// ������� ������ ���� �� ����� � �������
constexpr auto TEST_PARAMS_DIR = "C:\\Users\\toban\\source\\repos\\Otus-Algorithm-2025-06\\hw-02-lucky-tickets\\test-params";

// ���������� ������
constexpr auto TEST_NUMBERS = 10;

int main() {
	
	// class under test
	LuckyTicketCounter luckyTicketCounter;

	// tets runner
	TestRunner testRunner;
	
	testRunner.runTests(luckyTicketCounter, TEST_PARAMS_DIR, TEST_NUMBERS);

	return 0;
}