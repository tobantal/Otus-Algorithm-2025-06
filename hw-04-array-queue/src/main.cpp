#include "Benchmark.h"
#include "SingleArray.h"
#include "VectorArray.h"
#include "FactorArray.h"
#include "MatrixArray.h"
#include "LinkedList.h"

#include <iostream>

int main() {
    const int N = 10000;
    auto sorted = generateSorted(N);
    auto reversed = generateReversed(N);
    auto random = generateRandom(N);

    std::cout << "--- Sorted ---\n";
    benchmark<SingleArray>("SingleArray", sorted);
    benchmark<VectorArray>("VectorArray", sorted);
    benchmark<FactorArray>("FactorArray", sorted);
    benchmark<MatrixArray>("MatrixArray", sorted);

    benchmark<MatrixArray>("LinkedList", sorted);

    std::cout << "\n--- Reversed ---\n";
    benchmark<SingleArray>("SingleArray", reversed);
    benchmark<VectorArray>("VectorArray", reversed);
    benchmark<FactorArray>("FactorArray", reversed);
    benchmark<MatrixArray>("MatrixArray", reversed);

    benchmark<MatrixArray>("LinkedList", reversed);

    std::cout << "\n--- Random ---\n";
    benchmark<SingleArray>("SingleArray", random);
    benchmark<VectorArray>("VectorArray", random);
    benchmark<FactorArray>("FactorArray", random);
    benchmark<MatrixArray>("MatrixArray", random);

    benchmark<MatrixArray>("LinkedList", random);

    return 0;
}