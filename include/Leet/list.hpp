#pragma once

#include <vector>

namespace list {
struct ListNode
{
    int val;
    ListNode* next;

    ListNode();
    ListNode(int x);
    ListNode(int x, ListNode* next);
    ListNode(std::initializer_list<int> lst);

    ~ListNode() = default;

    bool operator==(const ListNode& other) const;
    void show();
    void add(int data);
    void add(ListNode* lst);
};

ListNode* reverseList(ListNode* head);
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
bool hasCycle(ListNode* head);
} // namespace list
