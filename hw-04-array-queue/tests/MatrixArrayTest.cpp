#include <gtest/gtest.h>
#include "MatrixArray.h"

TEST(MatrixArrayTest, AddAcrossBlocks) {
    MatrixArray<int> array;

    // Заполняем больше одного блока (например, blockSize = 10)
    for (int i = 0; i < 25; ++i) {
        array.add(i, i);
    }

    EXPECT_EQ(array.size(), 25);
    EXPECT_EQ(array.get(0), 0);
    EXPECT_EQ(array.get(10), 10);
    EXPECT_EQ(array.get(24), 24);
}

TEST(MatrixArrayTest, InsertMiddle) {
    MatrixArray<int> array;
    for (int i = 0; i < 5; ++i) {
        array.add(i * 10, i);
    }

    array.add(25, 2); // вставка между 10 и 20

    EXPECT_EQ(array.get(0), 0);
    EXPECT_EQ(array.get(1), 10);
    EXPECT_EQ(array.get(2), 25);
    EXPECT_EQ(array.get(3), 20);
    EXPECT_EQ(array.get(5), 40);
}

TEST(MatrixArrayTest, RemoveFromMiddle) {
    MatrixArray<int> array;
    for (int i = 0; i < 5; ++i) {
        array.add(i, i);
    }

    int removed = array.remove(2);
    EXPECT_EQ(removed, 2);
    EXPECT_EQ(array.get(2), 3);
    EXPECT_EQ(array.size(), 4);
}

TEST(MatrixArrayTest, OutOfBounds) {
    MatrixArray<int> array;
    EXPECT_THROW(array.get(0), std::out_of_range);
    EXPECT_THROW(array.remove(0), std::out_of_range);
    EXPECT_THROW(array.add(1, 1), std::out_of_range);
}
