#include <gtest/gtest.h>
#include "Knight.h"
#include "BitUtils.h"

// �������� ������� a1 (0)
TEST(KnightTest, PositionA1) {
    Knight knight;
    auto result = knight.getMoves(0);
    EXPECT_EQ(result.first, 2);
    EXPECT_EQ(result.second, 132096); // d2 � b3
}

// �������� ������� b1 (1)
TEST(KnightTest, PositionB1) {
    Knight knight;
    auto result = knight.getMoves(1);
    EXPECT_EQ(result.first, 3);
    EXPECT_EQ(result.second, 329728); // a3, d2, c3
}

// �������� ������� d4 (27)
TEST(KnightTest, PositionD4) {
    Knight knight;
    auto result = knight.getMoves(27);
    EXPECT_EQ(result.first, 8);
    EXPECT_EQ(BitUtils::popcount(result.second), 8);
}

// �������� ������� h8 (63)
TEST(KnightTest, PositionH8) {
    Knight knight;
    auto result = knight.getMoves(63);
    EXPECT_EQ(result.first, 2);
    EXPECT_EQ(result.second, 9077567998918656ULL); // f7, g6
}

// �������� ������������ �������
TEST(KnightTest, InvalidPosition) {
    Knight knight;
    auto result = knight.getMoves(-1);
    EXPECT_EQ(result.first, 0);
    EXPECT_EQ(result.second, 0);
    result = knight.getMoves(64);
    EXPECT_EQ(result.first, 0);
    EXPECT_EQ(result.second, 0);
}