#include <gtest/gtest.h>
#include "SingleArray.h"

// ���������� � �����
TEST(SingleArrayTest, AddToEnd) {
    SingleArray<int> array;
    array.add(10, 0);
    array.add(20, 1);
    array.add(30, 2);

    EXPECT_EQ(array.size(), 3);
    EXPECT_EQ(array.get(0), 10);
    EXPECT_EQ(array.get(1), 20);
    EXPECT_EQ(array.get(2), 30);
}

// ���������� � ������
TEST(SingleArrayTest, AddToBeginning) {
    SingleArray<int> array;
    array.add(10, 0);
    array.add(20, 0);
    array.add(30, 0);

    EXPECT_EQ(array.size(), 3);
    EXPECT_EQ(array.get(0), 30);
    EXPECT_EQ(array.get(1), 20);
    EXPECT_EQ(array.get(2), 10);
}

// ���������� � ��������
TEST(SingleArrayTest, AddToMiddle) {
    SingleArray<int> array;
    array.add(1, 0);
    array.add(3, 1);
    array.add(2, 1); // ����� 1 � 3

    EXPECT_EQ(array.size(), 3);
    EXPECT_EQ(array.get(0), 1);
    EXPECT_EQ(array.get(1), 2);
    EXPECT_EQ(array.get(2), 3);
}

// �������� ��������
TEST(SingleArrayTest, RemoveElement) {
    SingleArray<int> array;
    array.add(1, 0);
    array.add(2, 1);
    array.add(3, 2);

    int removed = array.remove(1);
    EXPECT_EQ(removed, 2);
    EXPECT_EQ(array.size(), 2);
    EXPECT_EQ(array.get(0), 1);
    EXPECT_EQ(array.get(1), 3);
}

// �������� � ������
TEST(SingleArrayTest, RemoveFromStart) {
    SingleArray<int> array;
    array.add(100, 0);
    array.add(200, 1);

    int removed = array.remove(0);
    EXPECT_EQ(removed, 100);
    EXPECT_EQ(array.get(0), 200);
}

// �������� � �����
TEST(SingleArrayTest, RemoveFromEnd) {
    SingleArray<int> array;
    array.add(5, 0);
    array.add(10, 1);

    int removed = array.remove(1);
    EXPECT_EQ(removed, 10);
    EXPECT_EQ(array.size(), 1);
}

// ������ ��� add �� ��������� ���������
TEST(SingleArrayTest, AddOutOfBounds) {
    SingleArray<int> array;
    EXPECT_THROW(array.add(1, 1), std::out_of_range); // ������, ����� ������ � 0
}

// ������ ��� remove �� ��������� ���������
TEST(SingleArrayTest, RemoveOutOfBounds) {
    SingleArray<int> array;
    array.add(1, 0);
    EXPECT_THROW(array.remove(1), std::out_of_range);
}

// ������ ��� get �� ��������� ���������
TEST(SingleArrayTest, GetOutOfBounds) {
    SingleArray<int> array;
    EXPECT_THROW(array.get(0), std::out_of_range);
}
