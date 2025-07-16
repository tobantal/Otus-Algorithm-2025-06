#pragma once

#include <string>
#include <stdexcept>

// ����������� ��������� ��� �������, ��������� ���-���� �� ����� n.
class Counter {
public:
    // n_str � ������, �������������� ����� ����� (��������� uint64_t)
    virtual std::string compute(const std::string& n_str) const {
        throw "Counter::compute not implemented";
    }

    virtual ~Counter() = default;
};