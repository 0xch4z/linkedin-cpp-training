//
//  main.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include <iostream>
#include "stack.hpp"

using namespace std;

int main() {
    
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    
    for (int i = 4; i; --i) {
        cout << s.pop() << endl;
    }
    
    return 0;
}
