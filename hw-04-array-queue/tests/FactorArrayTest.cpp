#include <gtest/gtest.h>
#include "FactorArray.h"

TEST(FactorArrayTest, BasicAddAndGet) {
    FactorArray<int> array;
    array.add(100, 0);
    array.add(200, 1);
    array.add(150, 1);

    EXPECT_EQ(array.size(), 3);
    EXPECT_EQ(array.get(0), 100);
    EXPECT_EQ(array.get(1), 150);
    EXPECT_EQ(array.get(2), 200);
}

TEST(FactorArrayTest, RemoveAndResize) {
    FactorArray<int> array;
    for (int i = 0; i < 10; ++i) {
        array.add(i, i);
    }

    EXPECT_EQ(array.size(), 10);
    int removed = array.remove(5);
    EXPECT_EQ(removed, 5);
    EXPECT_EQ(array.get(5), 6);
    EXPECT_EQ(array.size(), 9);
}

TEST(FactorArrayTest, ExceptionTest) {
    FactorArray<int> array;
    EXPECT_THROW(array.get(1), std::out_of_range);
    EXPECT_THROW(array.remove(0), std::out_of_range);
}
