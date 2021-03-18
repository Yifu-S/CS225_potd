#include "TreeNode.h"

int getHeight(TreeNode* root)
{
  if (root == nullptr)  return 0;
  else return getHeight(root->left_) > getHeight(root->right_) ? 1+getHeight(root->left_) : 1+getHeight(root->right_);
}

bool isHeightBalanced(TreeNode* root) {
  // your code here
  if ((getHeight(root->left_) - getHeight(root->right_) > 1) || (getHeight(root->left_) - getHeight(root->right_) < -1))  return false;
  return true;
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}

