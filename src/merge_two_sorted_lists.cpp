/**
 * @file merge_two_sorted_lists.cpp
 * @author Sanjeev Maharjan
 * @brief Leetcode 21: Merge Two Sorted Lists.
 * 
 * Time Complexity: O(m + n)
 * Space Complexity: O(1)
 */

#include "data_structure/linked_list.h"

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* currentNode = &dummy;
        ListNode* i1 = list1;
        ListNode* i2 = list2;

        while (i1 != nullptr && i2 != nullptr) {
            if (i1->val <= i2->val) {
                currentNode->next = i1;
                i1 = i1->next;
            } else {
                currentNode->next = i2;
                i2 = i2->next;
            }

            currentNode = currentNode->next;
        }

        if (i1 != nullptr) {
            currentNode->next = i1;
        }

        if (i2 != nullptr) {
            currentNode->next = i2;
        }

        return dummy.next;
    }
};