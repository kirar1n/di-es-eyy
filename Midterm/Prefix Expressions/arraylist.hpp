
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "list.hpp"

using namespace std;

class ArrayList : public List {
    int* array;
    int size;
    int capacity = 5;

    void dynamic_add() {
        int new_size = ceil(capacity * 1.5);
        array = (int*) realloc(array, sizeof(int) * new_size);
        capacity = new_size;
    }

    void dynamic_deduce() {
        int new_size = ceil(capacity * 0.75);
        int* new_array = (int*) realloc(array, sizeof(int) * new_size);
        array = new_array;
        capacity = new_size;
    }

public:
    ArrayList() {
        array = (int*) calloc(capacity, sizeof(int));
        size = 0;
    }

    void add(int num) {
        if (size == capacity) {
            dynamic_add();
        }
        array[size++] = num;
    }

    int _size() {
        return size;
    }

    int removeLast() {
        return array[--size];
    }

    int removeFirst() {
        int num = array[0];
        for (int j = 0; j < size - 1; j++) {
            array[j] = array[j + 1];
        }
        array[size - 1] = 0;
        size = size - 1;
        if (size <= 2.0 / 3 * capacity) {
            dynamic_deduce();
        }
        return num;
    }

    int remove(int num) {
        for (int i = 0; i < size; i++) {
            if (array[i] == num) {
                for (int j = i; j < size - 1; j++) {
                    array[j] = array[j + 1];
                }
                array[size - 1] = 0;
                size = size - 1;
                if (size <= 2.0 / 3 * capacity) {
                    dynamic_deduce();
                }
                return i + 1;
            }
        }
        return -1;
    }

    int get(int pos) {
        return array[pos - 1];
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
