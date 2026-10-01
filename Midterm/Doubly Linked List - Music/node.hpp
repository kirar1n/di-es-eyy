#pragma once
#include "song.hpp"

struct node {
    Song* song;
    node* prev;
    node* next;
};
