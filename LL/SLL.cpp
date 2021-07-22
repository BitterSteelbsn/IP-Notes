#include"Headers/SLL.h"
SLL::SLL() {
    this->head = NULL;
}

void SLL::addToEnd(int data) {
    if (!head) {
        head = new Node(data);
        return;
    }
    Node* p = head;
    while (p->getNext() != NULL) {
        cout<<'-'<<endl;
        p->setNext(p->getNext());
    }
    p->setNext(new Node(data));
}

void SLL::display() {
    cout << "SLL: ";
    Node* p = head;
    while (p->getNext() != NULL) {
        cout << p->getData() << " -> ";
        p->setNext(p->getNext());
    }
    cout << endl;
}