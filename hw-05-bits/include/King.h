#pragma once
#include "Moveable.h"

// ����� ��� ���������� ��������� ����� ������ �� ��������� �����
class King : public Moveable {
public:
    // ���������� ������������ ������
    std::pair<int, uint64_t> getMoves(int position) const override;
};