/**
 * @file search_a_2d_matrix_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 74: Search a 2D Matrix.
 *
 * Verifies target lookup across row-major sorted matrix values.
 */

#include <gtest/gtest.h>
#include <vector>

#include "../src/search_a_2d_matrix.cpp"

TEST(SearchMatrixTest, findsValuesAndHandlesBoundaries) {
    Solution solution;

    std::vector<std::vector<int>> matrix1{{1, 3, 5, 7},
                                         {10, 11, 16, 20},
                                         {23, 30, 34, 60}};
    EXPECT_TRUE(solution.searchMatrix(matrix1, 3));
    EXPECT_TRUE(solution.searchMatrix(matrix1, 10));
    EXPECT_TRUE(solution.searchMatrix(matrix1, 60));
    EXPECT_FALSE(solution.searchMatrix(matrix1, 13));
    EXPECT_FALSE(solution.searchMatrix(matrix1, 61));

    std::vector<std::vector<int>> matrix2{{1}};
    EXPECT_TRUE(solution.searchMatrix(matrix2, 1));
    EXPECT_FALSE(solution.searchMatrix(matrix2, 0));

    std::vector<std::vector<int>> matrix3{{1, 2},
                                         {3, 4},
                                         {5, 6}};
    EXPECT_TRUE(solution.searchMatrix(matrix3, 6));
    EXPECT_FALSE(solution.searchMatrix(matrix3, 7));
}
