#include <gtest/gtest.h>
#include "SingleArray.h"

// ���������� � �����
TEST(SingleArrayBasicTests, AddToEnd) {
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
TEST(SingleArrayBasicTests, AddToBeginning) {
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
TEST(SingleArrayBasicTests, AddToMiddle) {
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
TEST(SingleArrayBasicTests, RemoveElement) {
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
TEST(SingleArrayBasicTests, RemoveFromStart) {
    SingleArray<int> array;
    array.add(100, 0);
    array.add(200, 1);

    int removed = array.remove(0);
    EXPECT_EQ(removed, 100);
    EXPECT_EQ(array.get(0), 200);
}

// �������� � �����
TEST(SingleArrayBasicTests, RemoveFromEnd) {
    SingleArray<int> array;
    array.add(5, 0);
    array.add(10, 1);

    int removed = array.remove(1);
    EXPECT_EQ(removed, 10);
    EXPECT_EQ(array.size(), 1);
}

// ������ ��� add �� ��������� ���������
TEST(SingleArrayBasicTests, AddOutOfBounds) {
    SingleArray<int> array;
    EXPECT_THROW(array.add(1, 1), std::out_of_range); // ������, ����� ������ � 0
}

// ������ ��� remove �� ��������� ���������
TEST(SingleArrayBasicTests, RemoveOutOfBounds) {
    SingleArray<int> array;
    array.add(1, 0);
    EXPECT_THROW(array.remove(1), std::out_of_range);
}

// ������ ��� get �� ��������� ���������
TEST(SingleArrayBasicTests, GetOutOfBounds) {
    SingleArray<int> array;
    EXPECT_THROW(array.get(0), std::out_of_range);
}
