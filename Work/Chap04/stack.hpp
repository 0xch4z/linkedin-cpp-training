//
//  stack.hpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#ifndef stack_hpp
#define stack_hpp

#include <iostream>

struct node {
    node *next;
    int data;
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

#endif /* stack_hpp */
