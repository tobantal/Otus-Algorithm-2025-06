# CMakeList.txt: проект CMake для Otus-Algorithm-2025-06; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Otus-Algorithm-2025-06-hw-01 "Otus_Algorithm_hw_01.cpp" "Strategy25ChatGptAi_Printer.cpp" "Printer.cpp" "Printer.h" "Strategy.h" "Strategy.cpp" "GlobalSettings.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Otus-Algorithm-2025-06-hw-01 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
