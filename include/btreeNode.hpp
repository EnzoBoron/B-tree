#include <iostream>
#include <queue>
using namespace std;

#define T 2

class BTreeNode {
public:
    int *keys;
    int t;
    BTreeNode **C;
    int n;
    bool leaf;

    BTreeNode(int _t, bool _leaf);
    ~BTreeNode();

    void traverse();
    BTreeNode* search(int k);

    void insertNonFull(int k);
    void splitChild(int i, BTreeNode *y);

    void printLevelOrder();
    void printPretty(int indent = 0);

    void remove(int k);
    int findKey(int k);

    void removeFromLeaf(int idx);
    void removeFromNonLeaf(int idx);

    int getPred(int idx);
    int getSucc(int idx);

    void fill(int idx);
    void borrowFromPrev(int idx);
    void borrowFromNext(int idx);
    void merge(int idx);

    BTreeNode(const BTreeNode&) = delete;
    BTreeNode& operator=(const BTreeNode&) = delete;
};
