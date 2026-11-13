/**
 * @file valid_palindrome_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 125: Valid Palindrome.
 *
 * Verifies palindrome detection after filtering non-alphanumeric characters.
 */

#include <gtest/gtest.h>
#include <string>

#include "../src/valid_palindrome.cpp"

TEST(ValidPalindromeTest, identifiesPalindromesIgnoringPunctuation) {
    Solution solution;

    EXPECT_TRUE(solution.isPalindrome("A man, a plan, a canal: Panama"));
    EXPECT_TRUE(solution.isPalindrome("racecar"));
    EXPECT_FALSE(solution.isPalindrome("hello"));
    EXPECT_TRUE(solution.isPalindrome(" "));
    EXPECT_FALSE(solution.isPalindrome("0P"));
    EXPECT_FALSE(solution.isPalindrome("abc"));
    EXPECT_FALSE(solution.isPalindrome("ab2a"));
    EXPECT_FALSE(solution.isPalindrome("1a2"));
}
