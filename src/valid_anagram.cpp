/**
 * @file valid_anagram.cpp
 * @author Sanjeev Maharjan
 * @brief Leetcode 242: Valid Anagram.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <string>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::vector<int> counts('z' - 'a' + 1, 0);

        for (char c: s)
            counts[c - 'a']++;

        for (char c: t)
            counts[c - 'a']--;
        
        for (int f: counts) {
            if (f != 0) return false;
        }

        return true;
    }
};
