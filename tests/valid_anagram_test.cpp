/**
 * @file valid_anagram_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 242: Valid Anagram.
 *
 * Verifies anagram detection using a fixed-size frequency table.
 */

#include <gtest/gtest.h>
#include <string>

#include "../src/valid_anagram.cpp"

TEST(ValidAnagramTest, comparesCharacterFrequencies) {
    Solution solution;

    EXPECT_TRUE(solution.isAnagram("anagram", "nagaram"));
    EXPECT_FALSE(solution.isAnagram("rat", "car"));
    EXPECT_FALSE(solution.isAnagram("hello", "ell"));
    EXPECT_TRUE(solution.isAnagram("a", "a"));
    EXPECT_FALSE(solution.isAnagram("ab", "aa"));
    EXPECT_TRUE(solution.isAnagram("abcc", "ccba"));
    EXPECT_FALSE(solution.isAnagram("", "a"));
    EXPECT_TRUE(solution.isAnagram("", ""));
}
