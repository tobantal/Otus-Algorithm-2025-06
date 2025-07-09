#include "Printer.cpp"
#include <stdexcept>
#include <cmath>
#include "Strategy.cpp"


// Размер квадрата
#define N 25

class Strategy01: public Strategy {
public:
	bool apply(int x, int y) {
		return y < x;
	}
};

class Strategy02: public Strategy {
public:
	bool apply(int x, int y) {
		return x == y;
	}
};

class Strategy03: public Strategy {
public:
	bool apply(int x, int y) {
		return x + y + 1 == N;
	}
};

class Strategy04: public Strategy {
public:
	bool apply(int x, int y) {
		return x + y <= N + 4;
	}
};

class Strategy05: public Strategy {
public:
	bool apply(int x, int y) {
		return (x == 2 * y) || (x == 2 * y + 1);
	}
};

class Strategy06: public Strategy {
public:
	bool apply(int x, int y)  {
		return (x < 10) || (y < 10);
	}
};

class Strategy07: public Strategy {
public:
	bool apply(int x, int y)  {
		return (x >= N - 9) && (y >= N - 9);
	}
};

class Strategy08: public Strategy {
public:
	bool apply(int x, int y)  {
		return (x == 0) || (y == 0);
	}
};

class Strategy09: public Strategy {
public:
	bool apply(int x, int y)  {
		return std::abs(y - x) >= 11;
	}
};

class Strategy10: public Strategy {
public:
	bool apply(int x, int y) {
		return (x - y >= 1) && (x <= 2 * y + 1);
	}
};

class Strategy11: public Strategy {
public:
	bool apply(int x, int y) {
		return (x == 1) || (y == 1) || (x == N - 2) || (y == N - 2);
	}
};

class Strategy12: public Strategy {
public:
	bool apply(int x, int y) {
		return x * x + y * y <= 400;
	}
};

class Strategy13: public Strategy {
public:
	bool apply(int x, int y) {
		return std::abs(N - 1 - y - x) <= 4;
	}
};

class Strategy14: public Strategy {
public:
	bool apply(int x, int y) {
		// TODO: предположительно что-то с синусом
		throw std::invalid_argument("Strategy not supported yet.");
	}
};

class Strategy15: public Strategy {
public:
	bool apply(int x, int y) {
		return std::abs(std::abs(y - x) - 15) <= 5;
	}
};

class Strategy16: public Strategy {
public:
	bool apply(int x, int y) {
		int a = 9;
		return (std::abs(x - y) <= a) && (std::abs( N - 1 - x - y) <= a);
	}
};

class Strategy17: public Strategy {
public:
	bool apply(int x, int y) {
		// TODO: предположительно что-то с синусом
		throw std::invalid_argument("Strategy not supported yet.");
	}
};

class Strategy18: public Strategy {
public:
	bool apply(int x, int y) {
		if ((x == 0) && (y == 0))
			return false;
		return (x <= 1) || (y <= 1);
	}
};

class Strategy19: public Strategy {
public:
	bool apply(int x, int y) {
		return (x == 0) || (y == 0) || (N - 1 - x == 0) || (N - 1 - y == 0);
	}
};

class Strategy20: public Strategy {
public:
	bool apply(int x, int y) {
		return (x + y) % 2 == 0;
	}
};

class Strategy21: public Strategy {
public:
	bool apply(int x, int y) {
		// TODO: какая-то жесть
		throw std::invalid_argument("Strategy not supported yet.");
	}
};

class Strategy22: public Strategy {
public:
	bool apply(int x, int y) {
		return (x + y) % 3 == 0;
	}
};

class Strategy23: public Strategy {
public:
	bool apply(int x, int y) {
		return (x % 2 == 0) && (y % 3 == 0);
	}
};

class Strategy24: public Strategy {
public:
	bool apply(int x, int y) {
		return (x == y) || (N - 1 - x == y);
	}
};

class Strategy25: public Strategy {
public:
	bool apply(int x, int y) {
		return (x % 6 == 0) || (y % 6 == 0);
	}
};



int main() {
	// выбираем конкретную стратегию
	Strategy23 s { };

	// печатаем квадрат с выбранной стартегией
	Printer { }.print(s);

	return 0;
}
