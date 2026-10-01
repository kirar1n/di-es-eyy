#include <iostream>
#include <cstdlib>
#include "list.hpp"
#include "node.hpp"
using namespace std;

class DoublyLL : public List {
    node *head, *tail;
    int size;

public:
    DoublyLL() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void combine(DoublyLL* other) {
        if (!other || other->size == 0) {
            return;
        }

        if (size == 0) {
            head = other->head;
        } else {
            tail->next = other->head;
            other->head->prev = tail;
        }

        tail = other->tail;
        size += other->size;

        // Reset the parameter list
        other->head = nullptr;
        other->tail = nullptr;
        other->size = 0;
    }

    void addFirst(int num) {
        node* n = (node*) calloc(1, sizeof(node));
        n->elem = num;
        n->next = head;
        if (head) {
            head->prev = n;
        }
        head = n;
        if (!tail) {
            tail = n;
        }
        size++;
    }

    void addLast(int num) {
        node* n = (node*) malloc(sizeof(node));
        n->elem = num;
        n->next = nullptr;
        n->prev = tail;
        if (tail) {
            tail->next = n;
        } else {
            head = n;
        }
        tail = n;
        size++;
    }

    void add(int num) {
        addLast(num);
    }

    int get(int pos) {
        node* curr = head;
        int ctr = 1;
        while (ctr < pos) {
            curr = curr->next;
            ctr++;
        }
        return curr->elem;
    }

    int remove(int num) {
        node* curr = head;
        int pos = 1;
        while (curr) {
            if (curr->elem == num) {
                if (pos == 1) {
                    removeFirst();
                    return pos;
                }
                if (pos == size) {
                    removeLast();
                    return pos;
                }
                node* pred = curr->prev;
                node* succ = curr->next;
                pred->next = succ;
                succ->prev = pred;
                free(curr);
                size--;
                return pos;
            }
            curr = curr->next;
            pos++;
        }
        return -1;
    }

    void removeFirst() {
        if (size == 0) {
            return;
        }
        head = head->next;
        if (head) {
            free(head->prev);
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        size--;
    }

    void removeLast() {
        if (size == 0) {
            return;
        }
        tail = tail->prev;
        if (tail) {
            free(tail->next);
            tail->next = nullptr;
        } else {
            head = nullptr;
        }
        size--;
    }

    void print() {
        node* curr = head;
        cout << "Size: " << size << endl;
        cout << "FROM HEAD: ";
        while (curr != nullptr) {
            cout << curr->elem;
            curr = curr->next;
            if (curr != nullptr) {
                cout << "->";
            }
        }
        curr = tail;
        cout << endl << "FROM TAIL: ";
        while (curr != nullptr) {
            cout << curr->elem;
            curr = curr->prev;
            if (curr != nullptr) {
                cout << "<-";
            }
        }
        cout << endl;
    }
};
