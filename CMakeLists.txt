cmake_minimum_required(VERSION 3.16)

project(analysis_algorithm LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(binary_search_test
    tests/binary_search_test.cpp
)

add_executable(two_sum_test
    tests/two_sum_test.cpp
)

target_include_directories(binary_search_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_include_directories(two_sum_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

enable_testing()
add_test(NAME binary_search_test COMMAND binary_search_test)
add_test(NAME two_sum_test COMMAND two_sum_test)
