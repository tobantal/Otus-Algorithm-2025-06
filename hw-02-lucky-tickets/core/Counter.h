#pragma once

/* ����������� ����� ��� �������� ����-��. */
class Counter {
public:
	/* ���-�� ������� */
	virtual int64_t count(int n) const = 0LL;

	virtual ~Counter() = default;
};