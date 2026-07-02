#include <iostream>
#include <cstdlib>
#include <math.h>
#include "list.hpp"
using namespace std;

class ArrayList : public List {
    int* array;
    int size;
    int capacity;

    public:
    ArrayList() {
        size = 0;
        capacity = 5;
        array = new int[capacity];
    }

    void add(int num) {
        if(size >= capacity){
            int newCap = capacity + ceil(capacity * 0.5);
            int* newArr = new int[newCap];
            
            for(int i = 0; i < size; i++){
                newArr[i] = array[i];
            }
            
            free(array);
            array = newArr;
            capacity = newCap;  
        }

        array[size++] = num;
    }

    int remove(int num) {
        int pos = -1;
        for(int i = 0; i < size; i++){
            if(array[i] == num){
                pos = i;
                break;
            }
        }
        
        if(pos == -1){
            return -1;
        }
        
        for(int i = pos; i < size-1; i++){
            array[i] = array[i+1];
        }
        
        array[size-1] = 0;
        size--;
        
        
        if(size <= floor(capacity * (3.0/4.0))){
            dynamic_deduce();
        }
        
        return pos;
    }    
       

    int get(int pos) {
        return array[pos-1];
    }
    
    int removeAll(int num){
        int res = remove(num);
        int count = 0;
        while(res != -1){
            res = remove(num);
            count++;
        }
        
        return count;
    }
    
    void dynamic_deduce(){
        int diff = floor(capacity * 0.20);
        int newCap = capacity - diff;
        if(newCap <= 5) newCap = 5;
        
        int* newArr = new int[newCap];
        
        for(int i = 0; i < size; i++){
            newArr[i] = array[i];
        }
        
        free(array);
        array = newArr;
        capacity = newCap;        
    }


    void print() {
        int i = 0;
        for(i = 0; i < size; i++){
            cout << array[i] << " ";
        }
        
        for(; i < capacity; i++){
            cout << "? ";
        }
        
        cout << endl;
    }
    
};