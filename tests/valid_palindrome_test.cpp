/**
 * @file valid_palindrome_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 125: Valid Palindrome.
 *
 * Verifies palindrome detection after filtering non-alphanumeric characters.
 */

#include <cassert>
#include <string>

#include "../src/valid_palindrome.cpp"

int main() {
    Solution solution;

    assert(solution.isPalindrome("A man, a plan, a canal: Panama"));
    assert(solution.isPalindrome("racecar"));
    assert(!solution.isPalindrome("hello"));
    assert(solution.isPalindrome(" "));
    assert(!solution.isPalindrome("0P"));
    assert(!solution.isPalindrome("abc"));
    assert(!solution.isPalindrome("ab2a"));
    assert(!solution.isPalindrome("1a2"));
}
