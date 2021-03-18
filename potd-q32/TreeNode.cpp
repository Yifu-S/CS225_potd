#include "TreeNode.h"

int getHeight(TreeNode* root)
{
  if (root == nullptr)  return 0;
  else return getHeight(root->left_) > getHeight(root->right_) ? 1+getHeight(root->left_) : 1+getHeight(root->right_);
}

bool isHeightBalanced(TreeNode* root) {
  if ((getHeight(root->left_) - getHeight(root->right_) > 1) || (getHeight(root->left_) - getHeight(root->right_) < -1))  return false;
  return true;
}

TreeNode* findLastUnbalancedHelper(TreeNode* curNode, TreeNode*& curResult, int& curResultHeight) {
  if (isHeightBalanced(curNode) == false && getHeight(curNode) < curResultHeight)
  {
    curResult = curNode;
    curResultHeight = getHeight(curNode);
  }

  if (curNode->left_ == nullptr && curNode->right_ == nullptr); // is leaf
  else // not a leaf
  {
    if (curNode->left_ != nullptr)    findLastUnbalancedHelper(curNode->left_, curResult, curResultHeight);
    if (curNode->right_ != nullptr)  findLastUnbalancedHelper(curNode->right_, curResult, curResultHeight);
  }
  
  return curResult;
}

TreeNode* findLastUnbalanced(TreeNode* root) {
  // your code here
  TreeNode* result = nullptr;
  int resultHeight = __INT_MAX__;
  return findLastUnbalancedHelper(root, result, resultHeight);
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}

