#include"Headers/Node.h"

Node::Node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
}

Node::~Node() { }

void Node::setData(int data) {
    this->data = data;
}

int Node::getData() {
    return this->data;
}

void Node::setLeft(Node* ptr) {
    this->left = ptr;
}

void Node::setRight(Node* ptr) {
    this->right = ptr;
}

Node* Node::getLeft() {
    return this->left;
}

Node* Node::getRight() {
    return this->right;
}

