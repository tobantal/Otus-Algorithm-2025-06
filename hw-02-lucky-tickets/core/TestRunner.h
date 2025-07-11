#pragma once

#include <string>
#include "Counter.h"

class TestRunner {
public:
	/* ������ ������. */
	// counter - ������ ������������
	// dir - ����� � ����������� ������ (����� in, out)
	// n - ���������� ����������� ������
	void runTests(const Counter& counter, const std::string& dir, int n);
};