#ifndef NODE_H
#define NODE_H

#include<bits/stdc++.h>
using namespace std;

class Node {
    private:
        int data;
        Node* left;
        Node* right;
    public:
        Node(int data);
        void setData(int data);
        int getData();
        Node* getLeft();
        Node* getRight();
        void setLeft(Node* left);
        void setRight(Node* right);
        ~Node();
};

#endif