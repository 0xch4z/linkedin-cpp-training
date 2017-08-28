//
//  queue-implementation.cpp
//  
//
//  Created by Charles Kenney on 8/26/17.
//

#include <iostream>

using namespace std;

struct node {
    node *next;
    int data;
};

class Queue {
    node *_head;
    node *_tail;
public:
    Queue();
    bool isEmpty();
    void enqueue(int);
    int dequeue();
    int peek();
};

Queue::Queue() {
    _head = nullptr;
    _tail = nullptr;
}

bool Queue::isEmpty() {
    return _head == nullptr;
}

void Queue::enqueue(int n) {
    node *newNode = new node;
    newNode -> data = n;
    newNode -> next = nullptr;
    if (isEmpty()) {
        _head = newNode;
        _tail = newNode;
    } else {
        _tail -> next = newNode;
        _tail = newNode;
    }
}

int Queue::peek() {
    if (isEmpty()) {
        cout << "The queue is empty" << endl;
        return -1;
    }
    return _head -> data;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "The queue is empty" << endl;
        return -1;
    }
    node *oldHead = _head;
    int val = oldHead -> data;
    _head = _head -> next;
    delete oldHead;
    return val;
}

int main( ) {
    
    // init queue
    Queue q;
    
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    
    for (int i = 4; i; --i) {
        cout << q.dequeue() << endl;
    }
    
    /**
     * => 5
     * => 4
     * => 3
     * => -1
     */
    
    return 0;
}

