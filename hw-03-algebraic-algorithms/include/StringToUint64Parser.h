#pragma once
#include <cstdint>
#include <string>

/* ��������� string � uint64_t */
class StringToUint64Parser {
public:
	uint64_t parse_uint64(const std::string& str) const;
};