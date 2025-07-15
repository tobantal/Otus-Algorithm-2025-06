#pragma once
#include <string>
#include <cstdint>

/* ��������� ��� ���� ����� ����� � ������� ��������� ������� � �������� */
class EuclidianGCDDiv {
public:
	std::string compute(const std::string& a_str, const std::string& b_str) const;

private:
	uint64_t gcd(uint64_t a, uint64_t b) const;
};

