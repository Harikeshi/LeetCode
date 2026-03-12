#pragma once

#include <vector>

namespace tree {
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode();
    TreeNode(int x);
    TreeNode(int x, TreeNode* left, TreeNode* right);

};

void preorder(TreeNode* node); ;
void inorder(TreeNode* node); ;
void postorder(TreeNode* node);

void printLevelOrder(TreeNode* root);
TreeNode* buildTree(const std::vector<int*>& arr);

bool isSameTree(TreeNode* p, TreeNode* q);
bool isSymmetric(TreeNode* root);
bool isBalanced(TreeNode* root);
std::vector<std::vector<int>> pathSum(TreeNode* root, int targetSum);
} // namespace tree