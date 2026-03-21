#include "./btreeNode.hpp"

class BTree {
public:
    BTreeNode *root;
    int t;

    BTree(int _t);

    void traverse();
    BTreeNode* search(int k);
    void insert(int k);

    void printTree();
    void printPretty();
    void remove(int k);
};
