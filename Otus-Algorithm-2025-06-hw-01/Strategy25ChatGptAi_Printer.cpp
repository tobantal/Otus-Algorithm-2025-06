#include <iostream>

/**
 * Класс, сгенерированный ChatGpt для вывода стратегии 25.
 */
class Strategy25ChatGptAi_Printer {
public:
	void print() {

		const int block_rows = 4; // Количество блоков по вертикали
		const int block_cols = 4; // Количество блоков по горизонтали
		const int cell_height = 5; // Высота одной ячейки (без границы)
		const int cell_width = 5; // Ширина одной ячейки (без границы)

		// Всего будет block_rows блоков строк, каждый по cell_height строк + 1 строка границы
		for (int row_block = 0; row_block < block_rows; ++row_block) {
		    // Печатаем горизонтальную границу
		    for (int col_block = 0; col_block < block_cols; ++col_block) {
		        std::cout << "######";
		    }
		    std::cout << "#" << std::endl;

		    // Печатаем строки внутри блока
		    for (int h = 0; h < cell_height; ++h) {
		        for (int col_block = 0; col_block < block_cols; ++col_block) {
		            std::cout << "#.....";
		        }
		        std::cout << "#" << std::endl;
		    }
		}

		// Финальная нижняя граница
		for (int col_block = 0; col_block < block_cols; ++col_block) {
		    std::cout << "######";
		}
		std::cout << "#" << std::endl;

	}
};
