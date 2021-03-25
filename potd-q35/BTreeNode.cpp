#include <vector>
#include "BTreeNode.h"


BTreeNode* find(BTreeNode* root, int key) {
    // Your Code Here
  if (root == nullptr) return root;
  unsigned i = 0;
  for (i; i < root->elements_.size();i++)
  {
    if (root->elements_[i] == key)  return root;
    else if (root->elements_[i] > key)  break;
    else /* root->elements_[i] < key */ continue;
  }
  if (!root->is_leaf_)  return find(root->children_[i], key);
  return nullptr;
}
