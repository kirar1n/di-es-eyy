#include <iostream>
#include "linkedlist.hpp"

int main() {
	LinkedList* list = new LinkedList();
    int input, pos;
    char op;
    do {
    	cout << "Enter op: ";
    	cin >> op;
    	switch (op) {
    		case 'h' :
		    	cin >> input;
		    	list->addHead(input);
		    	break;
    		case 't' :
		    	cin >> input;
		    	list->addTail(input);
		    	break;
            case 'g':
                cin >> pos;
                cout << "Element " << pos << ": " << list->get(pos) << endl;
                break;
		    case 'r':
		    	cin >> input;
		    	cout << "Removed position " << list->remove(input) << endl;
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
