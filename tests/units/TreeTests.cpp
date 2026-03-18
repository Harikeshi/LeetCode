#include "leet/tree.hpp"

#include <Leet/two.hpp>
#include <gtest/gtest.h>
// bool isSameTree(TreeNode* p, TreeNode* q);
// bool isSymmetric(TreeNode* root);
// bool isBalanced(TreeNode* root);
// std::vector<std::vector<int>> pathSum(TreeNode* root, int targetSum);
namespace tree {
TEST(TreeTest, IsSameTree1)
{
    tree::TreeNode* tree1 = new tree::TreeNode(1, new tree::TreeNode(2), new tree::TreeNode(3));
    tree::TreeNode* tree2 = new tree::TreeNode(1, new tree::TreeNode(2), new tree::TreeNode(3));
    EXPECT_TRUE(tree::isSameTree(tree1, tree2));
}

TEST(TreeTest, IsSameTree2)
{
    tree::TreeNode* tree1 = new tree::TreeNode(1, new tree::TreeNode(2), nullptr);
    tree::TreeNode* tree2 = new tree::TreeNode(1, nullptr, new tree::TreeNode(2));
    EXPECT_FALSE(tree::isSameTree(tree1, tree2));
}

TEST(TreeTest, IsSameTree3)
{
    tree::TreeNode* tree1 = new tree::TreeNode(1, new tree::TreeNode(2), new tree::TreeNode(1));
    tree::TreeNode* tree2 = new tree::TreeNode(1, new tree::TreeNode(1), new tree::TreeNode(2));
    EXPECT_FALSE(tree::isSameTree(tree1, tree2));
}
TEST(TreeTest, IsSymmetric1)
{
    std::vector<int*> arr = {new int(1), new int(2), new int(2), new int(3), new int(4), new int(4), new int(3)};
    tree::TreeNode* tree = tree::buildTree(arr);
    EXPECT_TRUE(tree::isSymmetric(tree));
}
TEST(TreeTest, IsSymmetric2)
{
    std::vector<int*> arr = {new int(1), new int(2), new int(2), nullptr, new int(3), nullptr, new int(3)};
    tree::TreeNode* tree = tree::buildTree(arr);
    EXPECT_FALSE(tree::isSymmetric(tree));
}
TEST(TreeTest, IsBalanced1)
{
    std::vector<int*> arr = {new int(3), new int(9), new int(20), nullptr, nullptr, new int(15), new int(7)};
    tree::TreeNode* tree = tree::buildTree(arr);
    EXPECT_TRUE(tree::isBalanced(tree));
}
TEST(TreeTest, IsBalanced2)
{
    std::vector<int*> arr = {new int(1), new int(2), new int(2), new int(3), new int(3), nullptr, nullptr, new int(4), new int(4)};
    tree::TreeNode* tree = tree::buildTree(arr);
    EXPECT_FALSE(tree::isBalanced(tree));
}
TEST(TreeTest, IsBalanced3)
{
    std::vector<int*> arr = {};
    tree::TreeNode* tree = tree::buildTree(arr);
    EXPECT_TRUE(tree::isBalanced(tree));
}
TEST(TreeTest, PathSum1)
{
    std::vector<int*> arr = {new int(5), new int(4), new int(8), new int(11), nullptr, new int(13), new int(4), new int(7), new int(2), nullptr, nullptr, new int(5), new int(1)};
    auto targetSum = 22.;
    std::vector<std::vector<int>> result{{5, 4, 11, 2}, {5, 8, 4, 5}};
    tree::TreeNode* tree = tree::buildTree(arr);
    EXPECT_TRUE(tree::pathSum(tree, targetSum) == result);
}
TEST(TreeTest, PathSum2)
{
    auto targetSum = 5.;
    std::vector<std::vector<int>> result{};
    tree::TreeNode* tree = new tree::TreeNode(1, new tree::TreeNode(2), new tree::TreeNode(3));
    EXPECT_TRUE(tree::pathSum(tree, targetSum) == result);
}
TEST(TreeTest, PathSum3)
{
    auto targetSum = 0.;
    std::vector<std::vector<int>> result{};
    tree::TreeNode* tree = new tree::TreeNode(1, new tree::TreeNode(2), nullptr);
    EXPECT_TRUE(tree::pathSum(tree, targetSum) == result);
}
} // namespace tree