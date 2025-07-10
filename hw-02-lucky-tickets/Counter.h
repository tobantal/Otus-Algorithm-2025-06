#pragma once

/* Абстрактный класс для подсчета чего-то. */
class Counter {
public:
	/* Что-то считает */
	virtual long long count(int n) const = 0LL;

	virtual ~Counter() = default;
};