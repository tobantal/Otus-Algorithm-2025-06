#include "LuckyTicketCounter.h"

#include <iostream>
#include <string>


long long LuckyTicketCounter::count(int n) const {

    std::vector<long long> sums = { 1LL };

    for (int i = 0; i < n; ++i) {
        sums = nextVector(sums);
    }

	return sumOfSquares(sums);
}


long long LuckyTicketCounter::sumOfSquares(const std::vector<long long>& vec) const {
    long long sum = 0;
    /*
    int i = 0;
    int halffSize = vec.size() / 2;
    bool existCenter = vec.size() % 2 == 1;
    int center = 0;
    */

    for (long long val : vec) {
        /*
        if (++i > halffSize) {
            center = val * val;
            break;
        }
        */

        sum += val * val;
    }

    /*
    * sum *= 2;
    if (existCenter) {
        sum += center;
    }
    */

    return sum;
}

std::vector<long long> LuckyTicketCounter::nextVector(std::vector<long long> inVector) const {
    //printMatrix({ inVector });

    std::vector<std::vector<long long>> mat = createMatrixWithPadding(inVector);
    //printMatrix(mat);

    std::vector<long long> sums = sumColumns(mat);
    //printMatrix({ sums });

    //printMatrix({ { (long long)sums.size()} });

    return sums;
}

std::vector<long long> LuckyTicketCounter::sumColumns(const std::vector<std::vector<long long>>& matrix) const {
    if (matrix.empty()) return {};

    size_t numRows = matrix.size();
    size_t numCols = matrix[0].size();
    std::vector<long long> columnSums(numCols, 0);

    for (size_t col = 0; col < numCols; ++col) {
        for (size_t row = 0; row < numRows; ++row) {
            columnSums[col] += matrix[row][col];
        }
    }

    return columnSums;
}

void LuckyTicketCounter::printMatrix(const std::vector<std::vector<long long>>& matrix) const {
    for (const auto& row : matrix) {
        for (long long value : row) {
            std::cout << value << "\t"; // \t для выравнивания столбцов
        }
        std::cout << std::endl;
    }
    std::cout << "------" << std::endl;
}

std::vector<long long> LuckyTicketCounter::addPadding(const std::vector<long long>& input, int zerosLeft, int zerosRight) const {
    std::vector<long long> result;

   // Добавляем нули слева
    result.insert(result.end(), zerosLeft, 0);

    // Добавляем исходные элементы
    result.insert(result.end(), input.begin(), input.end());

    // Добавляем нули справа
    result.insert(result.end(), zerosRight, 0);

    return result;
}

std::vector<std::vector<long long>> LuckyTicketCounter::createMatrixWithPadding(const std::vector<long long>& vec) const {
    std::vector<std::vector<long long>> matrix;

    int rows_num = 10;

    for (int i = 0; i < rows_num; ++i) {
        matrix.push_back(addPadding(vec, i, 9 - i));
    }

    return matrix;
}