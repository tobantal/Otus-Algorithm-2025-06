#pragma once

#include "Array.h"
#include <stdexcept>
#include <memory> // ��� std::unique_ptr

// ���������� ������� � ����������� ������� � k ���
template<typename T>
class FactorArray : public Array<T> {
private:
    T* data;
    int capacity;
    int count;
    const int factor = 2; // ����������� ���������� �������

    void resize() {
		// 0.	����������� ������ �������
        int newCapacity = (capacity == 0) ? 1 : capacity * factor;
        // 1.	�������� ������ ������� � ����� ����������
        std::unique_ptr<T[]> newData(new T[newCapacity]);
		// 2.	����������� ������ ������ � ����� ������
        for (int i = 0; i < count; ++i) {
            newData[i] = data[i];
        }
		// 3.	������������ ������� ������� � ���������� ������
        delete[] data;
		// 4.	�������������� ��������� �� ����� ������
        data = newData.release();
		// 5.	���������� �������
        capacity = newCapacity;
    }

public:
    FactorArray() : data(nullptr), capacity(0), count(0) {}

    ~FactorArray() {
        delete[] data;
    }

    void add(T item, int index) override {
        check_index_for_insert(index, count);
        if (count >= capacity) resize();

        for (int i = count; i > index; --i) {
            data[i] = data[i - 1];
        }

        data[index] = item;
        ++count;
    }

    T remove(int index) override {
        check_index(index, count);

        T removed = data[index];
        for (int i = index; i < count - 1; ++i) {
            data[i] = data[i + 1];
        }
        --count;
        return removed;
    }

    T get(int index) const override {
        check_index(index, count);
        return data[index];
    }

    int size() const override {
        return count;
    }
};

