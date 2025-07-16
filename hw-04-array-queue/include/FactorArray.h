#pragma once

#include "Array.h"
#include <stdexcept>

// Реализация массива с увеличением емкости в k раз
template<typename T>
class FactorArray : public Array<T> {
private:
    T* data;
    int capacity;
    int count;
    const int factor = 2; // коэффициент увеличения емкости

    void resize() {
        int newCapacity = (capacity == 0) ? 1 : capacity * factor;
        T* newData = new T[newCapacity];
        for (int i = 0; i < count; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    FactorArray() : data(nullptr), capacity(0), count(0) {}

    ~FactorArray() {
        delete[] data;
    }

    void add(T item, int index) override {
        if (index < 0 || index > count) throw std::out_of_range("Index out of bounds");
        if (count >= capacity) resize();

        for (int i = count; i > index; --i) {
            data[i] = data[i - 1];
        }

        data[index] = item;
        ++count;
    }

    T remove(int index) override {
        if (index < 0 || index >= count) throw std::out_of_range("Index out of bounds");

        T removed = data[index];
        for (int i = index; i < count - 1; ++i) {
            data[i] = data[i + 1];
        }
        --count;
        return removed;
    }

    T get(int index) const override {
        if (index < 0 || index >= count) throw std::out_of_range("Index out of bounds");
        return data[index];
    }

    int size() const override {
        return count;
    }
};

