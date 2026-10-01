#include <iostream>
#include <cstdlib>
#include <math.h>
#include "list.hpp"
using namespace std;

class ArrayList : public List {
    int* array;
    int size;
    int capacity = 5;

	void dynamic_add() {
		int new_size = ceil(capacity * 1.5);
		int* new_array = (int*) realloc(array, sizeof(int) * new_size);
		array = new_array;
		capacity = new_size;
	}

    // TODO dynamically reduce the capacity
	void dynamic_deduce() {
        if(size <= floor(capacity * 0.75)){
            int new_size = floor(capacity * 0.8);
            capacity = new_size < 5? 5 : new_size;
    		int* new_array = (int*) realloc(array, sizeof(int) * new_size);
    		array = new_array;
        }
    }

    public:
    ArrayList() {
    	array = (int*) calloc(capacity, sizeof(int) );
        size = 0;
    }

    void add(int num) {
    	if (size == capacity) {
        	dynamic_add();
		}
        array[size++] = num;
    }

    int remove(int num) {
        // Step 1: FIND the num
        for (int i = 0; i < size; i++) {
            if (array[i] == num) {
                // Step 2: MOVE the elements to left
                for (int j = i; j < size-1; j++) {
                    array[j] = array[j+1];
                }
                // Step 3: Set the size
                array[size-1] = 0;
                size--;
                // Step 4: Check to reduce capacity
                dynamic_deduce();
            
                // Step 5: Return
                return i+1;
            }
        }
        return -1;
    }
    
    int get(int pos) {
        return array[pos-1];
    }

    int removeAll(int num) {
        int ctr= -1;
        int temp = 1;
        
        while(temp != -1){
            temp = remove(num);
            ctr++;
        }
        return ctr;
    }

    void print() {
        int i;
        for (i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        for (; i < capacity; i++) {
            cout << "? ";
        }
        cout << endl;
    }
};
