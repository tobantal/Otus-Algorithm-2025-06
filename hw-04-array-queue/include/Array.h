#pragma once

// Абстрактный класс динамического массива
template<typename T>
class Array {
public:
    virtual ~Array() {}

    // Добавление элемента item по индексу index
    virtual void add(T item, int index) = 0;

    // Удаление элемента по индексу, возвращает удаленный элемент
    virtual T remove(int index) = 0;

    // Получение элемента по индексу
    virtual T get(int index) const = 0;

    // Текущий размер массива
    virtual int size() const = 0;
};
