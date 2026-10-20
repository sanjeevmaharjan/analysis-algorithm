/**
 * @file linked_list_cycle.cpp
 * @author Sanjeev Maharjan
 * @brief Leetcode 141: Linked List Cycle.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) return false;

        ListNode* fast = head->next;
        ListNode* slow = head;

        while(slow != nullptr && fast != nullptr) {
            if (slow == fast) return true;
            slow = slow->next;
            if (fast->next == nullptr) return false;
            fast = fast->next->next;
        }

        return false;
    }
};
