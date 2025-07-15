# ќписание параметров AutoGenerateTest.cmake

auto_generate_tests(
DATA_DIR path/to/data <путь до папки с параметрами тестов: in, out-файлами>
CLASS_NAME MyClass <им€ класса, который тестируетс€>
METHOD_NAME myMethod <им€ метода, который тестируетс€>
OUTPUT_FILE path/to/output_test.cpp <путь до сгенерированного файла с тестами>
STRONG_ASSERT 1 (точность сравнени€ 1 - строкое равенство, 0 - сравнение с точностью EPS)
)