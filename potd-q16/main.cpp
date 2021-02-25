#include "potd.h"
#include <iostream>
using namespace std;

int main() {
  // Test 1: An empty list
  Node * head = NULL;
  cout << stringList(head) << endl;

  // Test 2: A list with exactly one node
  head = new Node;
  head->data_ = 1;
  head->next_ = nullptr;
  cout << stringList(head) << endl;

  // Test 3: A list with more than one node
  head = new Node;
  head->data_ = 1;
  head->next_ = new Node;
  head->next_->data_ = 2;
  head->next_->next_ = nullptr;
  cout << stringList(head) << endl;
  return 0;
}
