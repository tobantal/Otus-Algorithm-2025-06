#pragma once

#include <vector>

#include "Counter.h"

class LuckyTicketCounter : public Counter {
public:

	/* ������� ���������� ���������� 2n-������� */
	long long count(int n) const override;

	/* ������� ��������� ����� ��������� ��������� ������� */
	long long sumOfSquares(const std::vector<long long>& vec) const;

	/* �������� ���������� ������� �� �������� */
	std::vector<long long> nextVector(std::vector<long long> inVector) const;
	
	/* ��������� �������� �� �������� ������� */
	std::vector<long long> sumColumns(const std::vector<std::vector<long long>>& matrix) const;
	
	/* ������� ��� ������ ������� �� ����� */
	void printMatrix(const std::vector<std::vector<long long>>& matrix) const;
	
	/* ��������� zerosLeft ����� � zerosRight ������ � ������� */
	std::vector<long long> addPadding(const std::vector<long long>& input, int zerosLeft, int zerosRight) const;
	
	/* �������� ������� �� ������ �� ������� */
	std::vector<std::vector<long long>> createMatrixWithPadding(const std::vector<long long>& input) const;
};