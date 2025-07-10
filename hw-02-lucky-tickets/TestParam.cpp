#include "TestParam.h"

TestParam::TestParam(const std::string& name, int in, long long out) :
	name{ name }, in{ in }, out{ out } {
};

std::string TestParam::getName() const { return name; }
int TestParam::getIn() const { return in; }
long long TestParam::getOut() const { return out; }
