//
//  stack-implementation.cpp
//  
//
//  Created by Charles Kenney on 8/26/17.
//

#include <iostream>

using namespace std;

struct node {
    int data;
    node *next;
};

class Stack {
    node *_head;
public:
    Stack();
    int pop();
    int peek();
    bool isEmpty();
    void push(int);
};

Stack::Stack() {
    _head = NULL;
}

bool Stack::isEmpty() {
    return _head == NULL;
}

void Stack::push(int n) {
    node *newNode = new node;
    newNode -> data = n;
    newNode -> next = NULL;
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
        cout << "The stack is empty!" << endl;
        return -1;
    }
    node *oldHead = _head;
    int val = oldHead -> data;
    _head = _head -> next;
    delete oldHead;
    return val;
}

int main() {
    
    // init stack
    Stack s;
    
    s.push(5);
    s.push(4);
    s.push(3);
    
    for (int i = 0; i < 4; ++i) {
        cout << s.pop() << endl;
    }
    
    /*
     * Test cases
     *
     * (1. => 3
     * (2. => 4
     * (3. => 5
     * (4. => -1
     */
    
    return 0;
}
