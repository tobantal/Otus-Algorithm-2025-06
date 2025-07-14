set(TEST_SOURCES
    main_test.cpp
    AlgebraicAlgorithmsTests.cpp
)


set(TEST_DATA ${PROJECT_SOURCE_DIR}/data/test_cases.csv)
set(GENERATED_FILE ${CMAKE_BINARY_DIR}/generated/GeneratedTests.cpp)

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/generated)

# TODO
# ƒобавить:
# -DCLASSUNDERTEST - класс, который будет тестироватьс€
# -DMETHODUNDERTEST - метод тестировани€
# -DPARAMSSIZE - кол-во входных параметров
add_custom_command(
OUTPUT ${GENERATED_FILE}
COMMAND ${CMAKE_COMMAND}
-DINPUT_FILE=${TEST_DATA}
-DOUTPUT_FILE=${GENERATED_FILE}
-P ${PROJECT_SOURCE_DIR}/cmake/GenerateTests.cmake
DEPENDS ${TEST_DATA} ${PROJECT_SOURCE_DIR}/cmake/GenerateTests.cmake
COMMENT "Generating test cases from ${TEST_DATA}"
)


add_executable(AlgebraicAlgorithmsTests ${TEST_SOURCES}
    ${GENERATED_FILE}
    ../src/SquareEquationSolver.cpp
)

target_include_directories(AlgebraicAlgorithmsTests PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(AlgebraicAlgorithmsTests gtest_main)

include(GoogleTest)
gtest_discover_tests(AlgebraicAlgorithmsTests)

add_test(NAME AlgebraicAlgorithmsTests COMMAND AlgebraicAlgorithmsTests)
