#include <cstdlib>
#include <iostream>
#include "list.hpp"
#include "node.hpp"
using namespace std;

class LinkedList : public List {
	node* head = nullptr;
	node* tail = nullptr;
	int size = 0;
	
	public:
	void add(int num) {
        addTail(num);
    }

    int get(int pos) {
        if(pos <= 0 || pos > size){
            return -1;
        }
        
        node* curr = head;        
        for(int i = 1; i < pos; i++){
            curr = curr->next;
        }
        
        return curr->elem;
    }

    int remove(int num) {
        
        node* curr = head;
        node* prev = nullptr; 
        int flag = 0;
        int pos = 0;
        
        while(curr){
            if(curr->elem == num){
                flag = 1;
                break;
            }
            prev = curr;
            curr = curr->next;
            pos++;
            
        }
        
        if(curr == nullptr){
            return -1;
        }
        
        if(prev == nullptr){
            head = head->next;
        }else{
            prev->next = curr->next;
        }
        
        if(curr == tail){
            tail = prev;
        }
        
        delete curr;
        size--;
        return pos+1;
	}
	
	
	void addHead(int num){
	    node* created = new node();
	    created->elem = num;
	    
	    if(size == 0){
	        head = created;
	        tail = created;
	        tail->next = nullptr;
	    }else{
	        created->next = head;
	        head = created;
	    }
	    
	    size++;
	   
	}
	
	void addTail(int num){
	    node* created = new node();
	    created->elem = num;
	    
	    if(size == 0){
	        head = created;
	        tail = created;
	    }else{
	        tail->next = created;
            tail = created;
	        
	    }
	    tail->next = nullptr;
	    size++;
	    

	}
    
    void print() {
        node* curr = head;
        for(int i = 0; i < size; i++){
            cout << curr->elem;
            if(i != size-1) cout << " -> ";
            
            curr = curr->next;
        }
        cout << endl;
    }
};
