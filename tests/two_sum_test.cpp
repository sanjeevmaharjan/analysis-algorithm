
/**
 * @file two_sum_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 1: Two Sum.
 *
 * Verifies correct index pairs for valid and invalid target cases.
 */

#include <cassert>
#include <vector>

#include "../src/two_sum.cpp"

int main() {
    Solution solution;

    std::vector<int> nums1{2, 7, 11, 15};
    std::vector<int> result1 = solution.twoSum(nums1, 9);
    assert((result1[0] == 0 && result1[1] == 1) ||
           (result1[0] == 1 && result1[1] == 0));

    std::vector<int> nums2{3, 2, 4};
    std::vector<int> result2 = solution.twoSum(nums2, 6);
    assert((result2[0] == 1 && result2[1] == 2) ||
           (result2[0] == 2 && result2[1] == 1));

    std::vector<int> nums3{3, 3};
    std::vector<int> result3 = solution.twoSum(nums3, 6);
    assert((result3[0] == 0 && result3[1] == 1) ||
           (result3[0] == 1 && result3[1] == 0));

    std::vector<int> nums4{1, 2, 3, 4, 5};
    std::vector<int> result4 = solution.twoSum(nums4, 7);
    assert((result4[0] == 2 && result4[1] == 3) ||
           (result4[0] == 3 && result4[1] == 2));

    std::vector<int> nums5{5, 1, 2, 3};
    std::vector<int> result5 = solution.twoSum(nums5, 4);
    assert((result5[0] == 1 && result5[1] == 3) ||
           (result5[0] == 3 && result5[1] == 1));

    std::vector<int> nums6{1, 2, 3};
    std::vector<int> result6 = solution.twoSum(nums6, 10);
    assert(result6[0] == -1 && result6[1] == -1);
}
