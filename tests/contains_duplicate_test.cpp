/**
 * @file contains_duplicate_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 217: Contains Duplicate.
 *
 * Verifies duplicate detection for both duplicate and non-duplicate inputs.
 */

#include <cassert>
#include <vector>

#include "../src/contains_duplicate.cpp"

int main() {
    Solution solution;

    std::vector<int> nums1{1, 2, 3, 1};
    assert(solution.containsDuplicate(nums1));

    std::vector<int> nums2{1, 2, 3, 4};
    assert(!solution.containsDuplicate(nums2));

    std::vector<int> nums3{1, 1, 1, 1};
    assert(solution.containsDuplicate(nums3));

    std::vector<int> nums4{};
    assert(!solution.containsDuplicate(nums4));

    std::vector<int> nums5{-1, -2, -3, -4, -5};
    assert(!solution.containsDuplicate(nums5));

    std::vector<int> nums6{1, -1, 2, -2, 3, -3, 1};
    assert(solution.containsDuplicate(nums6));
}
