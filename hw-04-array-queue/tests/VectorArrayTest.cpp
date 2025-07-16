#include <gtest/gtest.h>
#include "VectorArray.h"

TEST(VectorArrayTest, BasicAddAndGet) {
    VectorArray<int> array;
    array.add(10, 0);
    array.add(20, 1);
    array.add(15, 1); // вставка в середину

    EXPECT_EQ(array.size(), 3);
    EXPECT_EQ(array.get(0), 10);
    EXPECT_EQ(array.get(1), 15);
    EXPECT_EQ(array.get(2), 20);
}

TEST(VectorArrayTest, RemoveElement) {
    VectorArray<int> array;
    array.add(1, 0);
    array.add(2, 1);
    array.add(3, 2);

    int removed = array.remove(1);
    EXPECT_EQ(removed, 2);
    EXPECT_EQ(array.size(), 2);
    EXPECT_EQ(array.get(0), 1);
    EXPECT_EQ(array.get(1), 3);
}

TEST(VectorArrayTest, OutOfBounds) {
    VectorArray<int> array;
    EXPECT_THROW(array.get(0), std::out_of_range);
    EXPECT_THROW(array.remove(0), std::out_of_range);
    EXPECT_THROW(array.add(5, 1), std::out_of_range);
}
