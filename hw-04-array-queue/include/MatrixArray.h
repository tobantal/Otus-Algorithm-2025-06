#ifndef MATRIXARRAY_H
#define MATRIXARRAY_H

#include "Array.h"
#include <stdexcept>

// ���������� ������� �������� (�������)
template<typename T>
class MatrixArray : public Array<T> {
private:
    T** blocks;         // ������ ���������� �� �����
    int blockSize = 10; // ������ ������ �����
    int blockCount;     // ���-�� ���������� ������
    int count;          // ����� ����� ���������

    void allocateNewBlock() {
        T** newBlocks = new T * [blockCount + 1];
        for (int i = 0; i < blockCount; ++i) {
            newBlocks[i] = blocks[i];
        }

        newBlocks[blockCount] = new T[blockSize]; // ����� ����
        delete[] blocks;
        blocks = newBlocks;
        ++blockCount;
    }

public:
    MatrixArray() : blocks(nullptr), blockCount(0), count(0) {}

    ~MatrixArray() {
        for (int i = 0; i < blockCount; ++i) {
            delete[] blocks[i];
        }
        delete[] blocks;
    }

    void add(T item, int index) override {
        if (index < 0 || index > count) throw std::out_of_range("Index out of bounds");

        if (count == blockCount * blockSize) {
            allocateNewBlock();
        }

        // �������� �������� ������ ������� � �����
        for (int i = count; i > index; --i) {
            set(i, get(i - 1));
        }

        set(index, item);
        ++count;
    }

    T remove(int index) override {
        if (index < 0 || index >= count) throw std::out_of_range("Index out of bounds");

        T removed = get(index);

        for (int i = index; i < count - 1; ++i) {
            set(i, get(i + 1));
        }

        --count;
        return removed;
    }

    T get(int index) const override {
        if (index < 0 || index >= count) throw std::out_of_range("Index out of bounds");

        int block = index / blockSize;
        int offset = index % blockSize;
        return blocks[block][offset];
    }

    void set(int index, T value) {
        int block = index / blockSize;
        int offset = index % blockSize;
        blocks[block][offset] = value;
    }

    int size() const override {
        return count;
    }
};

#endif // MATRIXARRAY_H
