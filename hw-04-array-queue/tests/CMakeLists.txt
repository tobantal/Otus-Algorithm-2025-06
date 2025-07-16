set(TEST_SOURCES
    "all_test_runner.cpp"
    "SingleArrayTest.cpp"
    "VectorArrayTest.cpp"
    "FactorArrayTest.cpp"
    "MatrixArrayTest.cpp"
)

add_executable(ArrayQueueTests ${TEST_SOURCES}
    ../src/SingleArray.cpp
    ../src/VectorArray.cpp
    ../src/FactorArray.cpp
    ../src/MatrixArray.cpp
 )

target_include_directories(ArrayQueueTests PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(ArrayQueueTests gtest_main)

include(GoogleTest)
gtest_discover_tests(ArrayQueueTests)
