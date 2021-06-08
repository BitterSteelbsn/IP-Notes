#include"Headers/BST.h"

int main(int argc, char const *argv[]) {
    BST bst;
    bst.createBST();
    int count = 0;
    bst.kThSmallAndLarge(bst.getRoot(), count, 2);
    return 0;
}
