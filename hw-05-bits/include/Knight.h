#pragma once
#include "Moveable.h"

// ����� ��� ���������� ��������� ����� ���� �� ��������� �����
class Knight : public Moveable {
public:
    // ���������� ������������ ������
    std::pair<int, uint64_t> getMoves(int position) const override;
};