/**
 * @file search_a_2d_matrix.cpp
 * @author Sanjeev Maharjan
 * @brief Leetcode 74: Search a 2D Matrix.
 *
 * Time Complexity: O(log(m*n))
 * Space Complexity: O(1)
 */

#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int x = m * n;

        int lo = 0, hi = x - 1, mid;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;

            int i_m = mid % m;
            int i_n = mid / m;
            int val = matrix[i_n][i_m];

            if (target == val) return true;
            else if (target < val) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }

        return false;
    }
};
