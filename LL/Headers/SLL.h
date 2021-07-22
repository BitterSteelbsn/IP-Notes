#ifndef SLL_H
#define SLL_H

#include"Node.h"

class SLL {
    private:
        Node* head;
    public:
        SLL();
        void addToEnd(int);
        void display();
};

#endif