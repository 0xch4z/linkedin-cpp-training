//
//  fibonacci.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include <iostream>

using namespace std;

unsigned long int fib(unsigned long int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    
    cout << fib(4) << endl;
    // => 3
    
    /**
     * Its common pratice to avoid recursion in C++ where possible in favor
     * of for loops; it is less risky in overflowing the call stack.
     */
    
    return 0;
}
