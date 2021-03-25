#include <vector>
#include "BTreeNode.h"


void traverseHelper(BTreeNode* root, std::vector<int>& v) {
    
    unsigned i = 0;
    for (i=0; i < root->elements_.size(); i++)
    {
        if (!root->is_leaf_)    traverseHelper(root->children_[i], v);
        v.push_back(root->elements_[i]);
    }
    if (!root->is_leaf_)    traverseHelper(root->children_[i], v);
}

std::vector<int> traverse(BTreeNode* root)
{
    std::vector<int> v;
    traverseHelper(root, v);
    return v;
}