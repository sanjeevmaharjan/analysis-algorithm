/**
 * @file merge_two_sorted_lists_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 21: Merge Two Sorted Lists.
 *
 * Verifies correct merging for sorted linked lists with and without null inputs.
 */

#include <cassert>
#include <initializer_list>
#include <vector>

#include "../src/data_structure/linked_list.h"
#include "../src/merge_two_sorted_lists.cpp"

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

    ListNode* list1 = buildList({1, 2, 4});
    ListNode* list2 = buildList({1, 3, 4});
    ListNode* merged = solution.mergeTwoLists(list1, list2);

    std::vector<int> expected1{1, 1, 2, 3, 4, 4};
    assert(toVector(merged) == expected1);
    deleteList(merged);

    ListNode* emptyList1 = nullptr;
    ListNode* list3 = buildList({0});
    ListNode* merged2 = solution.mergeTwoLists(emptyList1, list3);
    assert(toVector(merged2) == std::vector<int>{0});
    deleteList(merged2);

    ListNode* list4 = buildList({});
    ListNode* list5 = buildList({});
    ListNode* merged3 = solution.mergeTwoLists(list4, list5);
    assert(toVector(merged3).empty());
    deleteList(merged3);
}
