#ifndef NODE_H
#define NODE_H

#include<bits/stdc++.h>
using namespace std;

class Node {
    private:
        int data;
        Node* next;

    public:
        Node(int);
        int getData();
        void setData(int);
        Node* getNext();
        void setNext(Node*);
};


#endif