#include"Headers/Node.h"

Node::Node(int data) {
    this->data = data;
    this->next = NULL;
    cout << 1 << endl;
}

void Node::setData(int data) {
    this->data = data;
    cout << 2 << endl;
}

void Node::setNext(Node* next) {
    this->next = next;
    cout << 3 << endl;
}

int Node::getData() {
    cout << 4 << endl;
    return this->data;
}

Node* Node::getNext() {
    cout << 5 << endl;
    return this->next;
}


