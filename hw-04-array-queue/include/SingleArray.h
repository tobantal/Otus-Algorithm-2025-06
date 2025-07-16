#pragma once

#include "Array.h"

// ���������� ������������� ������� � ����������� �� ������ ��������
template<typename T>
class SingleArray : public Array<T> {
private:
    T* data;
    int capacity;
    int count;

    void resize(); // ��������� ������� �� 1

public:
    SingleArray();
    ~SingleArray();

    void add(T item, int index) override;
    T remove(int index) override;
    T get(int index) const override;
    int size() const override;
};
