#pragma once

#include <string>
#include <stdexcept>

/* Вычисляет что-то в зависимости от n */
class Counter {
public:
	// n_str — входной параметр (целое число)
	virtual std::string compute(const std::string& n_str) const {
		throw "Counter::compute not implemented";
	}

	~Counter() = default;
};