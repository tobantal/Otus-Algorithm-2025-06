#pragma once

#include <stdexcept>

// ��������� ������������� �������
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

protected:
	// �������� ������� ��� ������� � ��������
    void check_index(int index, int count) const {
        if (index < 0 || index >= count)
            throw std::out_of_range("Index out of bounds");
    }

	// �������� ������� ��� �������
    void check_index_for_insert(int index, int count) const {
        if (index < 0 || index > count)
            throw std::out_of_range("Index out of bounds");
    }
};
