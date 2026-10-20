/**
 * @file valid_anagram_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 242: Valid Anagram.
 *
 * Verifies anagram detection using a fixed-size frequency table.
 */

#include <cassert>
#include <string>

#include "../src/valid_anagram.cpp"

int main() {
    Solution solution;

    assert(solution.isAnagram("anagram", "nagaram"));
    assert(!solution.isAnagram("rat", "car"));
    assert(!solution.isAnagram("hello", "ell"));
    assert(solution.isAnagram("a", "a"));
    assert(!solution.isAnagram("ab", "aa"));
    assert(solution.isAnagram("abcc", "ccba"));
    assert(!solution.isAnagram("", "a"));
    assert(solution.isAnagram("", ""));
}
