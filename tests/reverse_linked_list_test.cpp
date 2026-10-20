/**
 * @file reverse_linked_list_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 206: Reverse Linked List.
 *
 * Verifies list reversal for standard, single-node, and empty lists.
 */

#include <cassert>
#include <initializer_list>
#include <vector>

#include "../src/data_structure/linked_list.h"
#include "../src/reverse_linked_list.cpp"

namespace {
ListNode* buildList(std::initializer_list<int> values) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int value : values) {
        ListNode* node = new ListNode(value);
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    return head;
}

std::vector<int> toVector(ListNode* head) {
    std::vector<int> values;
    while (head != nullptr) {
        values.push_back(head->val);
        head = head->next;
    }
    return values;
}

void deleteList(ListNode* head) {
    while (head != nullptr) {
        ListNode* next = head->next;
        delete head;
        head = next;
    }
}
}  // namespace

int main() {
    Solution solution;

    ListNode* list1 = buildList({1, 2, 3, 4, 5});
    ListNode* reversed1 = solution.reverseList(list1);
    assert(toVector(reversed1) == std::vector<int>({5, 4, 3, 2, 1}));
    deleteList(reversed1);

    ListNode* list2 = buildList({1});
    ListNode* reversed2 = solution.reverseList(list2);
    assert(toVector(reversed2) == std::vector<int>({1}));
    deleteList(reversed2);

    ListNode* list3 = nullptr;
    ListNode* reversed3 = solution.reverseList(list3);
    assert(reversed3 == nullptr);

    ListNode* list4 = buildList({1, 2});
    ListNode* reversed4 = solution.reverseList(list4);
    assert(toVector(reversed4) == std::vector<int>({2, 1}));
    deleteList(reversed4);
}
