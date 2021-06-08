#ifndef BST_H
#define BST_H

#include"Node.h"

class BST {
private:
    Node* root;
public:
    BST();
    ~BST();

    Node* getRoot();

    void createBST();
    Node* insert(Node*, int );

    void inOrder(Node* );
    void displayIn();
    void bfs();
    void kThSmallAndLarge(Node*, int&, int);
};




#endif