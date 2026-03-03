#include <Leet/list.hpp>
#include <gtest/gtest.h>

namespace list {
TEST(ListTest, Equal1)
{
    list::ListNode* l1 = new list::ListNode({1, 2, 3, 4, 5});
    list::ListNode* l2 = new list::ListNode({1, 2, 3, 4, 5});

    EXPECT_TRUE(l1->operator==(*l2));
}

TEST(ListTest, Equal2)
{
    list::ListNode* l1 = new list::ListNode({1, 2, 3, 4, 5});
    list::ListNode* l2 = new list::ListNode({1, 2, 2, 4, 5});

    EXPECT_FALSE(l1->operator==(*l2));
}

TEST(ListTest, Equal3)
{
    list::ListNode* l1 = new list::ListNode({1, 2, 3, 4});
    list::ListNode* l2 = new list::ListNode({1, 2, 2, 4, 5});

    EXPECT_FALSE(l1->operator==(*l2));
}

TEST(ListTest, Equal4)
{
    list::ListNode* l1 = new list::ListNode({1, 2, 3, 4});
    list::ListNode* l2 = new list::ListNode({1, 2, 2});

    EXPECT_FALSE(l1->operator==(*l2));
}

TEST(ListTest, Reverse)
{
    list::ListNode* lst = new list::ListNode({1, 2, 3, 4, 5});

    auto* l1 = list::reverseList(lst);
    auto* l2 = new ListNode({5, 4, 3, 2, 1});
    EXPECT_TRUE(l1->operator==(*l2));
}

TEST(ListTest, AddTwoNumbers1)
{
    list::ListNode* l1 = new list::ListNode({2, 4, 3});
    list::ListNode* l2 = new list::ListNode({5, 6, 4});

    auto* ls1 = list::addTwoNumbers(l1, l2);
    auto* ls2 = new ListNode({7, 0, 8});
    EXPECT_TRUE(ls1->operator==(*ls2));
}

TEST(ListTest, AddTwoNumbers2)
{
    list::ListNode* l1 = new list::ListNode({9, 9, 9, 9, 9, 9, 9});
    list::ListNode* l2 = new list::ListNode({9, 9, 9, 9});

    auto* ls1 = list::addTwoNumbers(l1, l2);
    auto* ls2 = new ListNode({8, 9, 9, 9, 0, 0, 0, 1});
    EXPECT_TRUE(ls1->operator==(*ls2));
}

TEST(ListTest, HasCycle1)
{
    //head = [3,2,0,-4], pos = 1
    list::ListNode* l = new list::ListNode({3, 2, 0, -4});
    auto* temp = l;
    temp->add(l->next);

    EXPECT_TRUE(list::hasCycle(l));
}

TEST(ListTest, HasCycle2)
{
    //head = [1,2], pos = 0
    list::ListNode* l = new list::ListNode({1, 2});
    auto* temp = l;
    temp->add(l);

    EXPECT_TRUE(list::hasCycle(l));
}

TEST(ListTest, HasCycle3)
{
    //head = [1], pos = -1
    list::ListNode* l = new list::ListNode(1);

    EXPECT_FALSE(list::hasCycle(l));
}
} // namespace list
