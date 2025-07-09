#include "Printer.h"
#include "Strategy.cpp"

/**
 * �����, ���������� �� ���������� �������� � �������.
 */
class Printer {
public:
	void print(Strategy& strategy) {
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < N; x++) {
				if (strategy.apply(x, y))
					std::cout << "#";
				else
					std::cout << ".";
			}
			std::cout << std::endl;
		}
	}
};