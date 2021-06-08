#include"Headers/BST.h"

BST::BST() {
    this->root = NULL;
}

Node* BST::getRoot() {
    return this->root;
}

Node* BST::insert(Node* p, int x) {
    if (p == NULL) {
        return new Node(x);
    } else if (p->getData() > x) {
        p->setLeft(insert(p->getLeft(), x));
    } else if (p->getData() < x) {
        p->setRight(insert(p->getRight(), x));
    }
    return p;
}

void BST::createBST() {
    int x;
    
    while (x != -1) {
        cout << "Enter element to insert: ";
        cin >> x;
        if (x == -1) {
            cout << "Created BST successfully\nBST: ";
            displayIn();
            return;
        } else {
            this->root = insert(this->root, x);
        }
    }
    
}

void BST::inOrder(Node* p) {
    if (p != NULL) {
        inOrder(p->getLeft());
        cout << p->getData() << " ";
        inOrder(p->getRight());
    }
}

void BST::displayIn() {
    this->inOrder(this->root);
    cout << endl;
}

void BST::kThSmallAndLarge(Node* p, int& count, int k) {
    if (p != NULL) {
        kThSmallAndLarge(p->getLeft(), count, k);
        if (count == k - 1) {
            cout << k <<"'th Smallest: " << p->getData() << "\n";
        } else if (count == 7 - k) {
            cout << k <<"'th Largest: " << p->getData() << "\n";
        }
        count++;
        kThSmallAndLarge(p->getRight(), count, k);
    }
}

void BST::bfs() {
    cout << "BFS: ";
    vector<Node*> que;
    que.push_back(root);
    while (!que.empty()) {
        cout << que.front()->getData() << " ";
        if (que.front()->getLeft() != NULL) 
            que.push_back(que.front()->getLeft());
        if (que.front()->getRight() != NULL)
            que.push_back(que.front()->getRight());
        que.erase(que.begin());
    }
    cout << endl;
}

BST::~BST() { }