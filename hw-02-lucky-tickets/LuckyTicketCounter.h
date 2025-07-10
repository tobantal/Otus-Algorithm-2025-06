#pragma once

#include <vector>

#include "Counter.h"

class LuckyTicketCounter : public Counter {
public:

	/* Считает количество счастливых 2n-билетов */
	long long count(int n) const override;

	/* Функция вычисляет сумму квадратов элементов вектора */
	long long sumOfSquares(const std::vector<long long>& vec) const;

	/* Создание следующего вектора из текущего */
	std::vector<long long> nextVector(std::vector<long long> inVector) const;
	
	/* Суммирует элементы по столбцам матрицы */
	std::vector<long long> sumColumns(const std::vector<std::vector<long long>>& matrix) const;
	
	/* Функция для вывода матрицы на экран */
	void printMatrix(const std::vector<std::vector<long long>>& matrix) const;
	
	/* Добавляет zerosLeft слева и zerosRight справа к вектору */
	std::vector<long long> addPadding(const std::vector<long long>& input, int zerosLeft, int zerosRight) const;
	
	/* Создание матрицы из ветора со сдвигом */
	std::vector<std::vector<long long>> createMatrixWithPadding(const std::vector<long long>& input) const;
};