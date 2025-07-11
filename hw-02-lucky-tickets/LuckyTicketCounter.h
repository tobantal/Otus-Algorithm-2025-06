#pragma once

#include <vector>

#include "core/Counter.h"

class LuckyTicketCounter : public Counter {
public:

	/* ������� ���������� ���������� 2n-������� */
	int64_t count(int n) const override;

	/* ������� ��������� ����� ��������� ��������� ������� */
	int64_t sumOfSquares(const std::vector<int64_t>& vec) const;

	/* �������� ���������� ������� �� �������� */
	std::vector<int64_t> nextVector(std::vector<int64_t> inVector) const;
	
	/* ��������� �������� �� �������� ������� */
	std::vector<int64_t> sumColumns(const std::vector<std::vector<int64_t>>& matrix) const;
	
	/* ������� ��� ������ ������� �� ����� */
	void printMatrix(const std::vector<std::vector<int64_t>>& matrix) const;
	
	/* ��������� zerosLeft ����� � zerosRight ������ � ������� */
	std::vector<int64_t> addPadding(const std::vector<int64_t>& input, int zerosLeft, int zerosRight) const;
	
	/* �������� ������� �� ������ �� ������� */
	std::vector<std::vector<int64_t>> createMatrixWithPadding(const std::vector<int64_t>& input) const;
};