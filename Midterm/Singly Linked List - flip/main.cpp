#include <iostream>
#include "linkedlist.hpp"

using namespace std;

int main() {
    node* nodes[20];
    int size = 0;
    List* list = new LinkedList();
    int input;
    char op;
    do {
        cout << "Enter op: ";
        cin >> op;
        switch (op) {
            case 'a':
                cin >> input;
                nodes[size++] = list->add(input);
                break;
            case 'f':
                list->flip();
                break;
            case 'p':
                list->print();
                break;
            case 'c':
                cout << "Checking nodes' elements: " << endl;
                for (int i = 0; i < size; i++) {
                    cout << nodes[i]->elem << " ";
                }
                cout << endl;
                break;
            case 'x':
                cout << "Exiting";
                break;
        }
    } while (op != 'x');
    return 0;
}
