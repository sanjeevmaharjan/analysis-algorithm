/**
 * @file binary_search_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 704: Binary search.
 *
 * Verifies correct results for standard, edge, and empty-array cases.
 */

#include <gtest/gtest.h>
#include <vector>

#include "../src/binary_search.cpp"

TEST(BinarySearchTest, findsValuesAndHandlesMissingAndEmptyInputs) {
	Solution solution;

	std::vector<int> values{-1, 0, 3, 5, 9, 12};
	EXPECT_EQ(solution.search(values, 9), 4);
	EXPECT_EQ(solution.search(values, -1), 0);
	EXPECT_EQ(solution.search(values, 12), 5);
	EXPECT_EQ(solution.search(values, 2), -1);
	EXPECT_EQ(solution.search(values, -2), -1);
	EXPECT_EQ(solution.search(values, 13), -1);

	std::vector<int> empty;
	EXPECT_EQ(solution.search(empty, 1), -1);

	std::vector<int> single{7};
	EXPECT_EQ(solution.search(single, 7), 0);
	EXPECT_EQ(solution.search(single, 8), -1);
}
