project(AlgebraicAlgorithms)

# Подключаем include
include_directories(include)

# Основное приложение
add_executable(AlgebraicAlgorithms
    src/main.cpp
    "include/EuclidianGCDDiv.h" "src/EuclidianGCDDiv.cpp" "include/SteinGCD.h" "src/SteinGCD.cpp" "include/StringToUint64Parser.h" "src/StringToUint64Parser.cpp"  "include/PowerCalculator.h" "src/IterativePowerCalculator.cpp" "include/IterativePowerCalculator.h" "include/MathSettings.h" "include/DoublingPowerCalculator.h" "src/DoublingPowerCalculator.cpp" "include/BinaryPowerCalculator.h" "src/BinaryPowerCalculator.cpp" "include/Counter.h" "include/RecursiveFibCounter.h" "src/RecursiveFibCounter.cpp" "include/IterativeFibCounter.h" "src/IterativeFibCounter.cpp" "include/GoldenRatioFibCounter.h" "src/GoldenRatioFibCounter.cpp" "include/MatrixFibCounter.h" "src/MatrixFibCounter.cpp")

# Добавляем тесты
add_subdirectory(tests)