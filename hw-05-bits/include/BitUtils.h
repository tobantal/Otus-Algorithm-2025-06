#pragma once
#include <cstdint>

// ��������������� ����� ��� ������� ��������
class BitUtils {
public:
    // ������� ���������� ������������� ����� � �����
    static int popcount(uint64_t x) {
        int count = 0;
        while (x) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    }
};