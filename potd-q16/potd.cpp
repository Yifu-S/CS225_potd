#include "potd.h"
#include <iostream>

using namespace std;

string stringList(Node *head) {
    // your code here    
    if (head == nullptr)
        return "Empty list";

    string myList = "";
    Node * curNode = head;
    int count = 0;
    while(true)
    {
        if (count != 0)
            myList = myList + " -> ";
        myList = myList + "Node " + to_string(count) + ": " + to_string(curNode->data_);
        count++;
        if (curNode->next_ != nullptr)
            curNode = curNode->next_;
        else
            break;
    }
    return myList;
}
