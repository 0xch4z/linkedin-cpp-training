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
    printf("Successfully pushed %d to the stack\n", n);
}

int Stack::peek() {
    return _head -> data;
}

int Stack::pop() {
    if (_head == NULL) {
        puts("The stack is empty\n");
        return -1;
    }
    int v = _head -> data;
    _head = _head -> next;
    return v;
}

int main() {
    
    // init stack
    
    Stack s;
    
    s.push(5);
    s.push(6);
    s.push(7);
    
    printf("%d\n", s.pop());
    printf("%d\n", s.pop());
    
    s.push(20);
    
    printf("%d\n", s.pop());
    printf("%d\n", s.pop());
    printf("%d\n", s.pop());
    printf("%d\n", s.pop());
    
    return 0;
}

