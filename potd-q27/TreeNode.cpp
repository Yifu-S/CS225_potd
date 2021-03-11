#include "TreeNode.h"

#include <cstddef>
#include <iostream>
using namespace std;

TreeNode::TreeNode() : left_(NULL), right_(NULL) { }

int treeHeight(TreeNode * curNode)
{
  if (curNode != nullptr)
    return 1+max(treeHeight(curNode->left_),treeHeight(curNode->right_));
  else 
    return 0;
}

int TreeNode::getHeight() {
  return treeHeight(this)-1;
}

