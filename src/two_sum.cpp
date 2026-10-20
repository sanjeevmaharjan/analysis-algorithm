/**
 * @file two_sum.cpp
 * @author Sanjeev Maharjan
 * @brief Leetcode 1: Two Sum.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> complements;
        for (int i = 0; i < nums.size(); ++i) {
            int current = nums[i];

            if (complements.find(current) != complements.end()) {
                return {complements[current], i};
            }

            complements[target - current] = i;
        }

        return {-1, -1};
    }
};
