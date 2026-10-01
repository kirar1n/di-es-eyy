#pragma once
#include "node.hpp"
#include <iostream>
#include <string>
using namespace std;

class LinkedList {
    node* head;
    node* tail;
    node* curr;
    int size;

    void addBetween(Song* s, node* pred, node* succ) {
        node* n = new node;
        n->song = s;
        n->prev = pred;
        n->next = succ;
        pred->next = n;
        succ->prev = n;
        size++;
    }

    Song* playCurrent() {
        if (!curr || curr == head || curr == tail) {
            return NULL;
        }
        curr->song->played++;
        if (curr->song->played > 5) {
            curr->song->fave = true;
        }
        return curr->song;
    }

public:
    LinkedList() {
        head = new node;
        tail = new node;
        head->song = NULL;
        tail->song = NULL;
        head->next = tail;
        tail->prev = head;
        curr = NULL;
        size = 0;
    }

    void addSong(Song* s) {
        if (s->fave) {
            // Find the end of existing favorites (first non-favorite node)
            node* c = head->next;
            while (c != tail && c->song->fave) {
                c = c->next;
            }
            addBetween(s, c->prev, c);
        } else {
            // Add to the end of the playlist
            addBetween(s, tail->prev, tail);
        }
    }

    Song* next() {
        if (curr == NULL) {
            if (head->next == tail) return NULL;
            curr = head->next;
        } else {
            if (curr->next == tail) return NULL;
            curr = curr->next;
        }
        return playCurrent();
    }

    Song* previous() {
        if (curr == NULL || curr->prev == head) {
            return NULL;
        }
        curr = curr->prev;
        return playCurrent();
    }

    Song* play() {
        return playCurrent();
    }

    Song* skip() {
        if (curr == NULL || curr->next == tail) {
            return NULL;
        }
        curr->song->played--;
        curr = curr->next;
        return playCurrent();
    }

    Song* skip(int n) {
        if (curr == NULL || curr->next == tail) {
            return NULL;
        }
        curr->song->played--;
        for (int i = 0; i <= n; i++) {
            if (curr->next == tail) {
                break;
            }
            curr = curr->next;
        }
        return playCurrent();
    }

    Song* find(string art) {
        node* temp = (curr == NULL) ? head->next : curr->next;
        while (temp != tail) {
            if (temp->song->artist[0] == art || temp->song->artist[1] == art) {
                curr = temp;
                return playCurrent();
            }
            temp = temp->next;
        }
        return NULL;
    }

    bool toggleFavorite() {
        if (curr == NULL || curr == head || curr == tail) {
            return false;
        }
        curr->song->fave = !curr->song->fave;
        return curr->song->fave;
    }

    Song* remove() {
        if (curr == NULL || curr == head || curr == tail) {
            return NULL;
        }
        node* toRemove = curr;
        Song* removedSong = toRemove->song;

        // Next song becomes current; if none, previous song becomes current
        if (toRemove->next != tail) {
            curr = toRemove->next;
        } else if (toRemove->prev != head) {
            curr = toRemove->prev;
        } else {
            curr = NULL;
        }

        toRemove->prev->next = toRemove->next;
        toRemove->next->prev = toRemove->prev;
        delete toRemove;
        size--;

        return removedSong;
    }

    void print() {
        cout << "Song Count: " << size << endl;
        node* c = head->next;
        int i = 1;
        while (c != tail) {
            cout << i++ << ". ";
            c->song->print();
            cout << endl;
            c = c->next;
        }
    }
};
