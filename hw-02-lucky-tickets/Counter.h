#pragma once

/* ����������� ����� ��� �������� ����-��. */
class Counter {
public:
	/* ���-�� ������� */
	virtual long long count(int n) const = 0LL;

	virtual ~Counter() = default;
};