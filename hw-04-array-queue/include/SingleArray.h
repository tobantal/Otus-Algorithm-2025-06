// SingleArray.h
#ifndef SINGLEARRAY_H
#define SINGLEARRAY_H

#include "Array.h"
#include <stdexcept>

// ����� � ����������� ������� �� 1 ��� ���������� ������ ��������
template<typename T>
class SingleArray : public Array<T> {
private:
    T* data;         // ��������� �� ������
    int capacity;    // ������� �����������
    int count;       // ���-�� ���������

    // ����� ���������� ������� �� 1
    void resize() {
        T* newData = new T[capacity + 1];
        for (int i = 0; i < count; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity += 1;
    }

public:
    SingleArray() : data(nullptr), capacity(0), count(0) {}

    ~SingleArray() {
        delete[] data;
    }

    void add(T item, int index) override {
        if (index < 0 || index > count) {
            throw std::out_of_range("Index out of bounds");
        }
        resize(); // ����������� �� 1

        for (int i = count; i > index; --i) {
            data[i] = data[i - 1];
        }

        data[index] = item;
        ++count;
    }

    T remove(int index) override {
        if (index < 0 || index >= count) {
            throw std::out_of_range("Index out of bounds");
        }

        T removed = data[index];

        for (int i = index; i < count - 1; ++i) {
            data[i] = data[i + 1];
        }

        --count;
        return removed;
    }

    T get(int index) const override {
        if (index < 0 || index >= count) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    int size() const override {
        return count;
    }
};

#endif // SINGLEARRAY_H
