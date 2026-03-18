#pragma once

#include <vector>
#include <iostream>

class Btree {
private:
    std::vector<int> keys;
    std::vector<Btree*> children;
    bool is_leaf;
    int t;

public:
    Btree(int t, bool is_leaf) : t(t*2-1), is_leaf(is_leaf) {}
    ~Btree() {}
    void splitChild(int index, Btree* child);
    void insertNonFull(int key);
    void insert(int key);
    void display(void);
};

void Btree::insert(int key) {
    
}

void Btree::display(void) {
    for (int key : this->keys) {
        std::cout << key << " " << std::endl;
    }
}