#include "leet/tree.hpp"

#include <vector>
#include <iostream>
#include <queue>

namespace tree {
TreeNode::TreeNode()
    : val(0), left(nullptr), right(nullptr)
{
}
TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr)
{
}
TreeNode::TreeNode(int x, TreeNode* left, TreeNode* right)
    : val(x), left(left), right(right)
{
}

void preorder(TreeNode* node) {
    if (node == NULL) return;
    std::cout<<node->val << " ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(TreeNode* node) {
    if (node == NULL) return;
    inorder(node->left);
    std::cout<< node->val << ",";
    inorder(node->right);
}

void postorder(TreeNode* node) {
    if (node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    std::cout<<node->val << " ";
}

void printLevelOrder(TreeNode* root) {
    if (!root) {
        std::cout << "null\n";
        return;
    }

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node) {
            std::cout << node->val << " ";
            q.push(node->left);
            q.push(node->right);
        } else {
            std::cout << "null ";
        }
    }
    std::cout << "\n";
}

TreeNode* buildTree(const std::vector<int*>& arr) {
    if (arr.empty() || arr[0] == nullptr)
        return nullptr;

    TreeNode* root = new TreeNode(*arr[0]);
    std::queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < arr.size()) {
        TreeNode* node = q.front();
        q.pop();

        if (arr[i] != nullptr) {
            node->left = new TreeNode(*arr[i]);
            q.push(node->left);
        }
        i++;

        if (i < arr.size() && arr[i] != nullptr) {
            node->right = new TreeNode(*arr[i]);
            q.push(node->right);
        }
        i++;
    }

    return root;
}

bool isSameTree(TreeNode* p, TreeNode* q) {


    return true;
}

bool isSymmetric(TreeNode* root) {

    return true;
}

bool isBalanced(TreeNode* root)
{
    return true;
}

std::vector<std::vector<int>> pathSum(TreeNode* root, int targetSum) {
    std::vector<std::vector<int>> res;


    return res;
}
} // namespace tree