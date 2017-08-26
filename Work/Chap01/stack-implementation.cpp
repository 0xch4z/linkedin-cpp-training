//
//  stack-implementation.cpp
//  
//
//  Created by Charles Kenney on 8/26/17.
//

#include <cstdio>

struct node {
    int data;
    node *next;
};

class Stack {
    node *_head;
public:
    Stack();
    void push(int);
    int pop();
    int peek();
};

Stack::Stack() {
    _head = NULL;
}

void Stack::push(int n) {
    node *newNode = new node;
    newNode -> data = n;
    newNode -> next = NULL;
    if (_head == NULL) {
        _head = newNode;
    } else {
        node *tmp;
        tmp = _head;
        _head = newNode;
        _head -> next = tmp;
    }
}

int Stack::peek() {
    return _head -> data;
}

int Stack::pop() {
    if (_head == NULL) {
        puts("The stack is empty");
        return -1;
    }
    node *oldHead = _head;
    int v = oldHead -> data;
    _head = _head -> next;
    delete oldHead;
    return v;
}

int main() {
    
    // init stack
    
    Stack s;
    
    s.push(5);
    s.push(6);
    s.push(7);
    
    printf("%d\n", s.pop()); // should return 7
    printf("%d\n", s.pop()); // should return 6
    
    s.push(20);
    
    printf("%d\n", s.pop()); // should return 20
    printf("%d\n", s.pop()); // should return 5
    printf("%d\n", s.pop()); // sould return -1
    printf("%d\n", s.pop()); // should return -1
    
    return 0;
}
