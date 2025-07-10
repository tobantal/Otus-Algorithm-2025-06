#include "TestAssert.h"

bool TestAssert::assert(const TestParam& testParam, long long calcResult)
{
	return testParam.getOut() == calcResult;
}
