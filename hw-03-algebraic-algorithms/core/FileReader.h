#pragma once

#include <string>

class FileReader {
public:
	// ������ ���������� ����� � ���������� ��� ��� ������.
	// ������� std::runtime_error � ������ ������.
	std::string readFile(const std::string& filename) const;
};