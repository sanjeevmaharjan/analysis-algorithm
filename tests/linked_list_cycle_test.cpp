/**
 * @file linked_list_cycle_test.cpp
 * @author Sanjeev Maharjan
 * @brief Test suite for Leetcode 141: Linked List Cycle.
 *
 * Verifies cycle detection for cyclic and acyclic list structures.
 */

#include <cassert>
#include <initializer_list>

#include "../src/data_structure/linked_list.h"
#include "../src/linked_list_cycle.cpp"

namespace {
ListNode* makeCycle(std::initializer_list<int> values, int cycleIndex) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    ListNode* cycleStart = nullptr;

    int index = 0;
    for (int value : values) {
        ListNode* node = new ListNode(value);
        if (head == nullptr) {
            head = node;
            tail = node;
            if (index == cycleIndex) {
                cycleStart = node;
            }
        } else {
            tail->next = node;
            tail = node;
            if (index == cycleIndex) {
                cycleStart = node;
            }
        }
        ++index;
    }

    if (cycleStart != nullptr && head != nullptr) {
        tail->next = cycleStart;
    }

    return head;
}

ListNode* makeList(std::initializer_list<int> values) {
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

void deleteList(ListNode* head, bool hasCycle = false) {
    if (!hasCycle || head == nullptr) {
        while (head != nullptr) {
            ListNode* next = head->next;
            delete head;
            head = next;
        }
        return;
    }

    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }

    if (slow == nullptr || fast == nullptr) {
        while (head != nullptr) {
            ListNode* next = head->next;
            delete head;
            head = next;
        }
        return;
    }

    ListNode* start = head;
    while (start != slow) {
        start = start->next;
        slow = slow->next;
    }

    ListNode* node = start;
    while (true) {
        ListNode* next = node->next;
        if (next == start) {
            node->next = nullptr;
            break;
        }
        node = next;
    }

    while (head != nullptr) {
        ListNode* next = head->next;
        delete head;
        head = next;
    }
}
}  // namespace

int main() {
    Solution solution;

    ListNode* cycle1 = makeCycle({3, 2, 0, -4}, 1);
    assert(solution.hasCycle(cycle1));
    deleteList(cycle1, true);

    ListNode* acyclic1 = makeList({1, 2, 3, 4});
    assert(!solution.hasCycle(acyclic1));
    deleteList(acyclic1);

    ListNode* cycle2 = makeCycle({1}, 0);
    assert(solution.hasCycle(cycle2));
    deleteList(cycle2, true);

    ListNode* acyclic2 = nullptr;
    assert(!solution.hasCycle(acyclic2));

    ListNode* cycle3 = makeCycle({1, 2, 3}, 0);
    assert(solution.hasCycle(cycle3));
    deleteList(cycle3, true);
}
