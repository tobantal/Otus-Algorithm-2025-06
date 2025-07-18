#pragma once

#include "Array.h"
#include <stdexcept>
#include <memory> // Для std::unique_ptr

// Реализация массива с увеличением емкости в k раз
template<typename T>
class FactorArray : public Array<T> {
private:
    T* data;
    int capacity;
    int count;
    const int factor = 2; // коэффициент увеличения емкости

    void resize() {
		// 0.	Определение нового размера
        int newCapacity = (capacity == 0) ? 1 : capacity * factor;
        // 1.	Создание нового массива с умным указателем
        std::unique_ptr<T[]> newData(new T[newCapacity]);
		// 2.	Копирование старых данных в новый массив
        for (int i = 0; i < count; ++i) {
            newData[i] = data[i];
        }
		// 3.	Освобождение старого массива и присвоение нового
        delete[] data;
		// 4.	Переназначение указателя на новый массив
        data = newData.release();
		// 5.	Обновление емкости
        capacity = newCapacity;
    }

    // Проверка индекса для доступа и удаления
    void check_index(int index) const {
        if (index < 0 || index >= count)
            throw std::out_of_range("Index out of bounds");
    }

    // Проверка индекса для вставки
    void check_index_for_insert(int index) const {
        if (index < 0 || index > count)
            throw std::out_of_range("Index out of bounds");
    }

public:
    FactorArray() : data(nullptr), capacity(0), count(0) {}

    ~FactorArray() {
        delete[] data;
    }

    void add(T item, int index) override {
        check_index_for_insert(index);
        if (count >= capacity) resize();

        for (int i = count; i > index; --i) {
            data[i] = data[i - 1];
        }

        data[index] = item;
        ++count;
    }

    T remove(int index) override {
        check_index(index);

        T removed = data[index];
        for (int i = index; i < count - 1; ++i) {
            data[i] = data[i + 1];
        }
        --count;
        return removed;
    }

    T get(int index) const override {
        check_index(index);
        return data[index];
    }

    int size() const override {
        return count;
    }
};

