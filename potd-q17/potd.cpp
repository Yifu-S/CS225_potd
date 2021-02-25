#include "potd.h"
#include <iostream>

using namespace std;

void insertSorted(Node **head, Node *insert) {
  // your code here!
  if (*head == nullptr)
  {
    *head = insert;
    insert->next_ = nullptr;
  }
  else if (insert->data_ < (*head)->data_)
  {
    insert->next_ = *head;
    *head = insert;
  }

  else
  {
    Node * curNode = *head;
    while (true)
    {
      if (curNode->next_ == nullptr)
      {
        curNode->next_ = insert;
        insert->next_ = nullptr;
        break;
      }
      else if (insert->data_ >= curNode->data_ && insert->data_ <= curNode->next_->data_)
      {
        insert->next_ = curNode->next_;
        curNode->next_ = insert;
        break;
      }
      else
      {
        curNode = curNode->next_;
      }
    }
  }
}
