#include "TreeNode.h"
#include <iostream>

TreeNode* findNode(TreeNode* root, int key)
{
  if (root == nullptr)  return nullptr;
  if (root->val_ == key)  return root;
  if (root->val_ < key) return findNode(root->left_, key);
  if (root->val_ > key) return findNode(root->right_, key);
  return nullptr;
}

TreeNode * minValueNode(TreeNode* node) {
  TreeNode * curr = node;
  while (curr->left_) curr=curr->left_;
  return curr;
}

TreeNode * deleteNode(TreeNode* root, int key) {
  if (!root) return root;
  if (key < root->val_) root->left_ = deleteNode (root->left_, key);
  else if (key > root->val_) root->right_ = deleteNode (root->right_, key);
  else {
    if (!root->left_) {
      TreeNode *temp = root->right_;
      delete root;
      return temp;
    } else if (!root->right_) {
      TreeNode *temp = root->left_;
      delete root;
      return temp;
    }
    TreeNode *temp = minValueNode(root->right_);
    root->val_ = temp->val_;
    root->right_ = deleteNode(root->right_, temp->val_);
  }
  return root;
}

/* TreeNode * findMin(TreeNode* node) {
  TreeNode * curr = node;
  while (curr->left_) curr=curr->left_;
  return curr;
}

TreeNode* deleteNode(TreeNode* root, int key) {
  // your code here
  if (root == nullptr)  return nullptr;
  TreeNode* curNode = findNode(root, key);
  if (curNode == nullptr) return root;
  if (curNode->left_ == nullptr && curNode->right_ == nullptr)  deleteTree(curNode);
  else if (curNode->left_ == nullptr && curNode->right_ != nullptr)
  {
    TreeNode* newNode = curNode->right_;
    delete curNode;
    curNode = newNode;
  }
  else if (curNode->left_ != nullptr && curNode->right_ == nullptr)
  {
    TreeNode* newNode = curNode->left_;
    delete curNode;
    curNode = newNode;
  }
  else // curNode->left_ != nullptr && curNode->right_ != nullptr
  {
    TreeNode* newNode = findMin(root->right_);
    newNode->val_ = newNode->val_;
    root->right_ = deleteNode(root->right_, newNode->val_);
  }
  return root;
} */

void inorderPrint(TreeNode* node)
{
    if (!node)  return;
    inorderPrint(node->left_);
    std::cout << node->val_ << " ";
    inorderPrint(node->right_);
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
