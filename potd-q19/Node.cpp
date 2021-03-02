#include "Node.h"

/** Create a new node and add it to the list, while keeping the list sorted.
*/
Node *insertSorted(Node *first, int data) {
    // your code here
    Node* newNode = new Node();
    newNode->data_ = data;
    if (data <= first->data_)
    {
        newNode->next_ = first;
        return newNode;
    }
    Node* curNode = new Node(*first);
    while (curNode != nullptr)
    {
        if (data > curNode->data_ && data <= curNode->next_->data_)
        {
            newNode->next_ = curNode->next_;
            curNode->next_ = newNode;
            break;
        }
        curNode = curNode->next_;   
    }
    return first;
}

Node *insertSorted_norepeat(Node *first, int data) {
    // your code here
    Node* newNode = new Node();
    newNode->data_ = data;
    if (first == nullptr || data < first->data_)
    {
        newNode->next_ = first;
        return newNode;
    }
    Node* curNode = first;
    while (curNode != nullptr)
    {
        if (data == curNode->data_)
        {
            break;
        }
        if (curNode->next_ == nullptr)
        {
            curNode->next_ = newNode;
            break;
        }
        if (data > curNode->data_ && data < curNode->next_->data_)
        {
            newNode->next_ = curNode->next_;
            curNode->next_ = newNode;
            break;
        }
        curNode = curNode->next_;   
    }

    return first;
}

/** Creates a new list (containing new nodes, allocated on the heap)
	that contains the set union of the values in both lists.
*/
Node *listUnion(Node *first, Node *second) {
    Node *out = NULL;

    while (first != NULL) {
        // your code here
        // hint: call insertSorted and update l1
        out = insertSorted_norepeat(out, first->data_);
        first = first->next_;
    }

    while (second != NULL) {
        // your code here
        out = insertSorted_norepeat(out, second->data_);
        second = second->next_;
    }

    return out;
}

Node::Node() {
    numNodes++;
}

Node::Node(const Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
