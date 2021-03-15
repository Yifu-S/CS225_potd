#include "HuffmanNode.h"
#include "HuffmanUtils.h"
#include <string>

using std::string;

/**
 * binaryToString
 *
 * Write a function that takes in the root to a huffman tree
 * and a binary string.
 *
 * Remember 0s in the string mean left and 1s mean right.
 */

string binaryToString(string binaryString, HuffmanNode* huffmanTree) {
    /* TODO: Your code here */
    string result = "";
    HuffmanNode* curNode = huffmanTree;
    for (unsigned i = 0; i < binaryString.size(); i++)
    {
        if (binaryString[i] == '0') curNode = curNode->left_;
        if (binaryString[i] == '1') curNode = curNode->right_;
        if (curNode->left_ == nullptr && curNode->right_ == nullptr)
        {
            result += curNode->char_;
            curNode = huffmanTree;
        }
    }
    return result;
}

/**
 * stringToBinary
 *
 * Write a function that takes in the root to a huffman tree
 * and a character string. Return the binary representation of the string
 * using the huffman tree.
 *
 * Remember 0s in the binary string mean left and 1s mean right
 */

string getChar(char currChar, string charString, HuffmanNode* curr) {
  if (!curr) return "";
  if (!curr->left_ && !curr->right_) {
    if (curr->char_ == currChar) return charString;
    return "";
  }
  string left = curr->left_ ? getChar(currChar, charString + "0", curr->left_) : "";
  string right = curr->right_ ? getChar(currChar, charString + "1", curr->right_) : "";
  if (left != "") return left;
  if (right != "") return right;
  return "";
}

string stringToBinary(string charString, HuffmanNode* huffmanTree) {
    /* TODO: Your code here */
    string result = "";
    for (const char& c : charString) {
      result += getChar(c, "", huffmanTree);
    }
    return result;
}
© 2021 GitHub, Inc.