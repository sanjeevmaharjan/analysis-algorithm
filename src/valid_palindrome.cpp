/**
 * @file valid_palindrome.cpp
 * @author Sanjeev Maharjan
 * @brief Leetcode 125: Valid Palindrome.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(n) (For reversed string)
 *      Can reduce to O(1) by using two pointers exhausting the non-alphanumeric characters.
 */

#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string converted = "";
        for (char c: s) {
            if (c >= 'a' && c <= 'z') converted += c;
            if (c >='A' && c <= 'Z') converted += (c + 'a' - 'A');
            if (c >= '0' && c <= '9') converted += c;
        }

        int n = converted.length();
        for (int i = 0; i < n/2; ++i) {
            char c1 = converted[i];
            char c2 = converted[n - i - 1];

            if (c1 != c2) return false;
        }

        return true;
    }
};
