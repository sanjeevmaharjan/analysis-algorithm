/**
 * @file reverse_linked_list.cpp
 * @author Sanjeev Maharjan
 * @brief Leetcode 206: Reverse Linked List.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include "data_structure/linked_list.h"

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* tail = head;
        ListNode* prev = nullptr;

        while (tail != nullptr) {
            ListNode* h_next = tail->next;
            tail->next = prev;
            prev = tail;
            tail = h_next;
        }

        return prev;
    }
};