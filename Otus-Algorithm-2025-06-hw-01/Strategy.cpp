#include "Strategy.h"

/**
 * Интерефейс стратегии окрашивания точки.
 */
class Strategy {
public:
	/**
	 * Возвращает true, когда нужно отобразить #.
	 * В противном случае необходимо отобразить точку.
	 */
	bool apply(int x, int y) {
		return false;
	}
};