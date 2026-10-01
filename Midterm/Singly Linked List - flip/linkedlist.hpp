#include <cstdlib>
#include <iostream>
#include "list.hpp"

using namespace std;

class LinkedList : public List {
    node* head;
    node* tail;
    int size;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    node* add(int num) {
        node* n = (node*) calloc(1, sizeof(node));
        n->elem = num;
        if (size == 0) {
            head = n;
            tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        size++;
        return n;
    }

    int get(int pos) {
        // IGNORE for now
        return 0;
    }

    int remove(int num) {
        node* curr = head;
        node* prev = nullptr;
        while (curr) {
            if (curr->elem == num) {
                if (prev) {
                    prev->next = curr->next;
                } else {
                    head = curr->next;
                }
                if (curr == tail) {
                    tail = prev;
                }
                free(curr);
                size--;
                return 0;
            }
            prev = curr;
            curr = curr->next;
        }
        return -1;
    }
    
    void flip() {
        if (size <= 1) {
            return;
        }

        tail = head; // Old head becomes the new tail

        node* prev = nullptr;
        node* curr = head;
        node* next = nullptr;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev; // Old tail becomes the new head
    }

    // DO NOT modify the code below.
    void print() {
        node* curr = head;
        if (size == 0) {
            cout << "Empty" << endl;
        } else {
            while (true) {
                cout << curr->elem;
                if (curr != tail) {
                    cout << " -> ";
                } else {
                    cout << endl;
                    break;
                }
                curr = curr->next;
            }
        }
    }
};
