//
//  stack.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include "stack.hpp"

using namespace std;

Stack::Stack() {
    _head = nullptr;
}

bool Stack::isEmpty() {
    return _head == NULL;
}

void Stack::push(int n) {
    node *newNode = new node;
    newNode -> data = n;
    newNode -> next = nullptr;
    if (isEmpty()) {
        _head = newNode;
    } else {
        node *oldHead = _head;
        _head = newNode;
        _head -> next = oldHead;
    }
}

int Stack::peek() {
    if (isEmpty()) {
        cout << "The stack is empty!" << endl;
        return -1;
    }
    return _head -> data;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "The stack is empty" << endl;
        return -1;
    }
    node *oldHead = _head;
    int val = oldHead -> data;
    _head = _head -> next;
    delete oldHead;
    return val;
}

