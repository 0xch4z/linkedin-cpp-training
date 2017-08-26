//
//  queue-implementation.cpp
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

class Queue {
    node *_head;
    node *_tail;
public:
    Queue();
    void enqueue(int);
    int dequeue();
    int peek();
};

Queue::Queue() {
    _head = NULL;
    _tail = NULL;
}

void Queue::enqueue(int n) {
    node *newNode = new node;
    newNode -> data = n;
    newNode -> next = NULL;
    if (_head == NULL) {
        _head = newNode;
    } else {
        _tail -> next = newNode;
    }
    _tail = newNode;
}

int Queue::dequeue() {
    if (_head == NULL) {
        cout << "the queue is empty" << endl;
        return -1;
    }
    node *oldHead = _head;
    int v = oldHead -> data;
    _head = _head -> next;
    delete oldHead;
    return v;
}

int Queue::peek() {
    return _head -> data;
}

int main() {
    
    // init queue
    Queue q;
    
    q.enqueue(5);
    q.enqueue(8);
    
    cout << q.dequeue() << endl; // should return 5
    cout << q.dequeue() << endl; // should return 8
    q.enqueue(5);
    cout << q.dequeue() << endl; // should return 5
    cout << q.dequeue() << endl; // should return -1
    
    return 0;
}
