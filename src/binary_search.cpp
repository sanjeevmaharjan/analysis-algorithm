/**
 * @file binary_search.cpp
 * @author Sanjeev Maharjan
 * @brief Leetcode 704: Binary search.
 * 
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */

#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        if (nums.empty()) return -1;

        int lo = 0, hi = nums.size() - 1;
        int mid;
        while (lo <= hi) {
            mid = lo + ((hi - lo) / 2);
            int node = nums[mid];
            if (node == target) return mid;

            if (target > node) lo = mid + 1;
            else hi = mid - 1;
        }

        return -1;
    }
};
