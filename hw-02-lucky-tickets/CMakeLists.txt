# CMakeList.txt: проект CMake для Otus-Algorithm-2025-06; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (hw-02-lucky-tickets "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET hw-02-lucky-tickets PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
