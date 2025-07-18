#pragma once

#include "Array.h"
#include <stdexcept>

// ���������� ������������� ������� � ����������� ������� �� ������������� ���
template<typename T>
class VectorArray : public Array<T> {
private:
    T* data;
    int capacity;
    int count;
    const int capacityIncr = 10; // ��� ����������� ������

    void resize() {
        T* newData = new T[capacity + capacityIncr];
        for (int i = 0; i < count; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity += capacityIncr;
    }

public:
    VectorArray() : data(nullptr), capacity(0), count(0) {}

    ~VectorArray() {
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