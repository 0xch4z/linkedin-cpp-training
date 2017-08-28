//
//  cstdarg.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include <iostream>
#include <cstdarg>

using namespace std;

// func sig
// addAll(int, int**)
// ... means a func takes a variable length of args
int addAll(const int count, ...) {
    va_list va;
    // starts indexing args
    va_start(va, count);
    int total = 0;
    for (int i = 0; i < count; ++i) {
        // grabs next var from stream
        total += va_arg(va, int);
    }
    // destroys arg list
    va_end(va);
    return total;
}

int main() {
    
    // 3 refs to total number of args
    // 1, 2, 3 refs to variable args
    cout << addAll(3, 1, 2, 3) << endl;
    
    return 0;
}

