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

add_executable(contains_duplicate_test
    tests/contains_duplicate_test.cpp
)

add_executable(search_a_2d_matrix_test
    tests/search_a_2d_matrix_test.cpp
)

add_executable(valid_anagram_test
    tests/valid_anagram_test.cpp
)

add_executable(merge_two_sorted_lists_test
    tests/merge_two_sorted_lists_test.cpp
)

add_executable(valid_palindrome_test
    tests/valid_palindrome_test.cpp
)

add_executable(reverse_linked_list_test
    tests/reverse_linked_list_test.cpp
)

add_executable(linked_list_cycle_test
    tests/linked_list_cycle_test.cpp
)

target_include_directories(binary_search_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_include_directories(two_sum_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_include_directories(contains_duplicate_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_include_directories(search_a_2d_matrix_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_include_directories(valid_anagram_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_include_directories(merge_two_sorted_lists_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_include_directories(valid_palindrome_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_include_directories(reverse_linked_list_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_include_directories(linked_list_cycle_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

enable_testing()
add_test(NAME binary_search_test COMMAND binary_search_test)
add_test(NAME two_sum_test COMMAND two_sum_test)
add_test(NAME contains_duplicate_test COMMAND contains_duplicate_test)
add_test(NAME search_a_2d_matrix_test COMMAND search_a_2d_matrix_test)
add_test(NAME valid_anagram_test COMMAND valid_anagram_test)
add_test(NAME merge_two_sorted_lists_test COMMAND merge_two_sorted_lists_test)
add_test(NAME valid_palindrome_test COMMAND valid_palindrome_test)
add_test(NAME reverse_linked_list_test COMMAND reverse_linked_list_test)
add_test(NAME linked_list_cycle_test COMMAND linked_list_cycle_test)
