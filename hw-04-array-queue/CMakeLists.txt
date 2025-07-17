project(ArrayQueue)

# Подключаем интерфейсы из папки include
include_directories(include)
include_directories(benchmarks)

# Основное приложение
add_executable(ArrayQueue
    src/main.cpp
 "include/Array.h" "include/SingleArray.h" "src/SingleArray.cpp" "include/VectorArray.h" "include/FactorArray.h" "include/MatrixArray.h" "src/FactorArray.cpp" "src/MatrixArray.cpp" "benchmarks/Benchmark.h" "benchmarks/Benchmark.cpp" "include/LinkedList.h")

# Добавляем тесты
add_subdirectory(tests)