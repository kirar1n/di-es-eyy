#include <iostream>
#include "linkedlist.hpp"

using namespace std;

int main(int argc, char** argv) {
    DoublyLL* list = new DoublyLL();
    char op;
    int num, pos;
    do {
        cout << "Op: ";
        cin >> op;
        switch (op) {
            case 'a':
                cin >> num;
                pos = list->add(num);
                if (pos == 1) {
                    cout << "Added from head" << endl;
                } else {
                    cout << "Added from tail" << endl;
                }
                break;
            case 'p':
                list->print();
                break;
            case 'x':
                cout << "Exiting";
                break;
        }
    } while (op != 'x');
    return 0;
}
