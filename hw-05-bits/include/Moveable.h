#pragma once
#include <cstdint>
#include <utility>

// ����������� ����� ��� ������, ��������� ��������� ����
class Moveable {
public:
    virtual ~Moveable() = default;
    // ���������� ����: (���������� �����, ������� ����� �����)
    virtual std::pair<int, uint64_t> getMoves(int position) const = 0;
};