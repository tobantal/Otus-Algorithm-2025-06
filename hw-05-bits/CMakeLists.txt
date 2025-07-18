cmake_minimum_required(VERSION 3.15)
project(hw-05-bits)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(King src/King.cpp)
add_library(Knight src/Knight.cpp)

target_include_directories(King PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(Knight PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# TODO: Add tests for BitUtils
# create all_test_runner.cpp

add_executable(KingTest tests/KingMovesTest.cpp)
add_executable(KnightTest tests/KnightTest.cpp)
#add_executable(BitUtilsTest tests/BitUtilsTest.cpp)
target_link_libraries(KingTest King gtest_main)
target_link_libraries(KnightTest Knight gtest_main)
#target_link_libraries(BitUtilsTest gtest_main)