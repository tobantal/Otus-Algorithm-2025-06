#pragma once

#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <random>

std::vector<int> generateSorted(int n);
std::vector<int> generateReversed(int n);
std::vector<int> generateRandom(int n);

template <template <typename> class ArrayType>
void benchmark(const std::string& name, const std::vector<int>& data) {
    using Clock = std::chrono::high_resolution_clock;
    ArrayType<int> array;

    auto start = Clock::now();
    for (int i = 0; i < data.size(); ++i) {
        array.add(data[i], array.size());
    }
    auto end = Clock::now();
    auto add_duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    start = Clock::now();
    for (int i = 0; i < data.size(); i += std::max(1, (int)data.size() / 10)) {
        array.get(i);
    }
    end = Clock::now();
    auto get_duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    start = Clock::now();
    while (array.size() > 0) {
        array.remove(array.size() / 2);
    }
    end = Clock::now();
    auto remove_duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << name
        << " | add(): " << add_duration << " μs"
        << " | get(): " << get_duration << " μs"
        << " | remove(): " << remove_duration << " μs"
        << std::endl;
}