#pragma once

// ����������� ����� ������������� �������
template<typename T>
class Array {
public:
    virtual ~Array() {}

    // ���������� �������� item �� ������� index
    virtual void add(T item, int index) = 0;

    // �������� �������� �� �������, ���������� ��������� �������
    virtual T remove(int index) = 0;

    // ��������� �������� �� �������
    virtual T get(int index) const = 0;

    // ������� ������ �������
    virtual int size() const = 0;
};
