#include <Leet/list.hpp>

#include <iostream>

namespace list {
ListNode::ListNode()
    : val(0), next(nullptr)
{
}

ListNode::ListNode(int x)
    : val(x), next(nullptr)
{
}

ListNode::ListNode(int x, ListNode* next)
    : val(x), next(next)
{
}

ListNode::ListNode(std::initializer_list<int> lst)
{
    auto* temp = new list::ListNode();
    for (auto l : lst)
    {
        temp->add(l);
    }

    if (temp->next)
    {
        val = temp->next->val;
        next = temp->next->next;
    }
    delete temp;
}

bool ListNode::operator==(const ListNode& other) const
{
    auto* lst = this;
    auto* o = &other;
    while (lst || o)
    {
        if ((lst && !o) || (!lst && o))
        {
            return false;
        }

        if (lst->val != o->val)
        {
            return false;
        }

        o = o->next;
        lst = lst->next;
    }

    return true;
}

void ListNode::show()
{
    ListNode* temp = this;

    while (temp)
    {
        std::cout << temp->val << ",";
        temp = temp->next;
    }
    std::cout << std::endl;
    delete temp;
}

void ListNode::add(int data)
{
    ListNode* temp = this;

    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = new ListNode(data);
}

void ListNode::add(ListNode* lst)
{
    ListNode* temp = this;

    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = new ListNode(lst->val, lst->next);
}

using ListNode = list::ListNode;

ListNode* reverseList(ListNode* head)
{
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;

        curr = next;
    }

    return prev;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* result = new ListNode();
    ListNode* temp = result;

    int one = 0;
    while (l1 || l2)
    {
        // Сложить два числа прибавить остаток
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + one;
        one = sum / 10;
        temp->next = new ListNode(sum % 10);
        temp = temp->next;
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }

    if (one)
        temp->next = new ListNode(one);

    return result->next;
}

bool hasCycle(ListNode* head)
{
    auto* slow = head;
    auto* fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}
} // namespace list
