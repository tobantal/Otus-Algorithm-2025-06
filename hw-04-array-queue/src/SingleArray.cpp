#include "SingleArray.h"
#include <stdexcept>

// Конструктор
template<typename T>
SingleArray<T>::SingleArray() : data(nullptr), capacity(0), count(0) {}

// Деструктор
template<typename T>
SingleArray<T>::~SingleArray() {
    delete[] data;
}

// Увеличивает емкость массива на 1
template<typename T>
void SingleArray<T>::resize() {
    T* newData = new T[capacity + 1];
    for (int i = 0; i < count; ++i) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    capacity += 1;
}

// Добавление элемента по индексу
template<typename T>
void SingleArray<T>::add(T item, int index) {
    if (index < 0 || index > count) {
        throw std::out_of_range("Index out of bounds");
    }

    if (count >= capacity) {
        resize();
    }

    for (int i = count; i > index; --i) {
        data[i] = data[i - 1];
    }

    data[index] = item;
    ++count;
}

// Удаление элемента по индексу
template<typename T>
T SingleArray<T>::remove(int index) {
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

// Получение элемента по индексу
template<typename T>
T SingleArray<T>::get(int index) const {
    if (index < 0 || index >= count) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

// Размер массива
template<typename T>
int SingleArray<T>::size() const {
    return count;
}

// Явная инстанциация шаблона для int
template class SingleArray<int>;
