/**
 * @file binary_search_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 704: Binary search.
 *
 * Verifies correct results for standard, edge, and empty-array cases.
 */

#include <cassert>
#include <vector>

#include "../src/binary_search.cpp"

int main() {
	Solution solution;

	std::vector<int> values{-1, 0, 3, 5, 9, 12};
	assert(solution.search(values, 9) == 4);
	assert(solution.search(values, -1) == 0);
	assert(solution.search(values, 12) == 5);
	assert(solution.search(values, 2) == -1);
	assert(solution.search(values, -2) == -1);
	assert(solution.search(values, 13) == -1);

	std::vector<int> empty;
	assert(solution.search(empty, 1) == -1);

	std::vector<int> single{7};
	assert(solution.search(single, 7) == 0);
	assert(solution.search(single, 8) == -1);
}
