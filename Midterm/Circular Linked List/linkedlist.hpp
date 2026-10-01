#include <iostream>
#include "list.hpp"
#include "node.hpp"

using namespace std;

class CircularLL : public List {
    node* tail;
    int size;

public:
    CircularLL() {
        tail = nullptr;
        size = 0;
    }

    void add(int num) {
        addFirst(num);
    }

     // TODO implement addFirst() at O(1)
    void addFirst(int num) {
        node* n = new node{num, nullptr};
        if (tail == nullptr) {
            n->next = n;
            tail = n;
        } else {
            n->next = tail->next;
            tail->next = n;
        }
        size++;
    }

     // TODO implement addLast() at O(1)
    void addLast(int num) {
        addFirst(num);
        tail = tail->next;
    }

    int get(int pos) {
        // IGNORE
        return 0;
    }

    // TODO implement getTail() at O(1)
    int getTail() {
        if (tail == nullptr) {
            return -1;
        }
        return tail->elem;
    }

    // TODO implement rotate() at O(1)
    void rotate() {
        if (tail != nullptr) {
            tail = tail->next;
        }
    }

    int remove(int num) {
        // IGNORE
        return 0;
    }

     // TODO implement removeFirst at O(1)
    int removeFirst() {
        if (tail == nullptr) {
            return -1;
        }

        node* head = tail->next;
        int elem = head->elem;

        if (tail == head) {
            tail = nullptr;
        } else {
            tail->next = head->next;
        }

        delete head;
        size--;
        return elem;
    }

    // TODO implement printing of elements using rotate()
    void print() {
        cout << "Size: " << size << endl;
        if (size == 0) {
            cout << "Empty" << endl;
            return;
        }

        for (int i = 0; i < size; i++) {
            cout << tail->next->elem << "->";
            rotate();
        }
        cout << tail->next->elem << endl;
    }
};





