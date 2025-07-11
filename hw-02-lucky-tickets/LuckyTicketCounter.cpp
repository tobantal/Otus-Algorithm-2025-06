#include "LuckyTicketCounter.h"

#include <iostream>
#include <string>


int64_t LuckyTicketCounter::count(int n) const {

    std::vector<int64_t> sums = { 1LL };

    for (int i = 0; i < n; ++i) {
        sums = nextVector(sums);
    }

	return sumOfSquares(sums);
}


int64_t LuckyTicketCounter::sumOfSquares(const std::vector<int64_t>& vec) const {
    int64_t sum = 0;
    /*
    int i = 0;
    int halffSize = vec.size() / 2;
    bool existCenter = vec.size() % 2 == 1;
    int center = 0;
    */

    for (int64_t val : vec) {
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

std::vector<int64_t> LuckyTicketCounter::nextVector(std::vector<int64_t> inVector) const {
    //printMatrix({ inVector });

    std::vector<std::vector<int64_t>> mat = createMatrixWithPadding(inVector);
    //printMatrix(mat);

    std::vector<int64_t> sums = sumColumns(mat);
    //printMatrix({ sums });

    //printMatrix({ { (int64_t)sums.size()} });

    return sums;
}

std::vector<int64_t> LuckyTicketCounter::sumColumns(const std::vector<std::vector<int64_t>>& matrix) const {
    if (matrix.empty()) return {};

    size_t numRows = matrix.size();
    size_t numCols = matrix[0].size();
    std::vector<int64_t> columnSums(numCols, 0);

    for (size_t col = 0; col < numCols; ++col) {
        for (size_t row = 0; row < numRows; ++row) {
            columnSums[col] += matrix[row][col];
        }
    }

    return columnSums;
}

void LuckyTicketCounter::printMatrix(const std::vector<std::vector<int64_t>>& matrix) const {
    for (const auto& row : matrix) {
        for (int64_t value : row) {
            std::cout << value << "\t"; // \t для выравнивания столбцов
        }
        std::cout << std::endl;
    }
    std::cout << "------" << std::endl;
}

std::vector<int64_t> LuckyTicketCounter::addPadding(const std::vector<int64_t>& input, int zerosLeft, int zerosRight) const {
    std::vector<int64_t> result;

   // Добавляем нули слева
    result.insert(result.end(), zerosLeft, 0);

    // Добавляем исходные элементы
    result.insert(result.end(), input.begin(), input.end());

    // Добавляем нули справа
    result.insert(result.end(), zerosRight, 0);

    return result;
}

std::vector<std::vector<int64_t>> LuckyTicketCounter::createMatrixWithPadding(const std::vector<int64_t>& vec) const {
    std::vector<std::vector<int64_t>> matrix;

    int rows_num = 10;

    for (int i = 0; i < rows_num; ++i) {
        matrix.push_back(addPadding(vec, i, 9 - i));
    }

    return matrix;
}