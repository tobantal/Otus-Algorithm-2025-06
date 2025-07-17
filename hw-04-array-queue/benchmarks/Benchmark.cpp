#include "Benchmark.h"

std::vector<int> generateSorted(int n) {
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) v[i] = i;
    return v;
}

std::vector<int> generateReversed(int n) {
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) v[i] = n - i;
    return v;
}

std::vector<int> generateRandom(int n) {
    std::vector<int> v(n);
    std::mt19937 gen(42);
    std::uniform_int_distribution<> dis(0, 1000000);
    for (int i = 0; i < n; ++i) v[i] = dis(gen);
    return v;
}
