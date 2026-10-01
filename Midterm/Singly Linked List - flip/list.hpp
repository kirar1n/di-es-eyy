#include "node.hpp"

class List {
public:
    virtual node* add(int) = 0;
    virtual int get(int pos) = 0;
    virtual int remove(int num) = 0;
    virtual void print() = 0;
    virtual void flip() = 0;
};
