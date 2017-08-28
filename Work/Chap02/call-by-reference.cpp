//
//  call-by-reference.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include <iostream>

using namespace std;

void addTwo(int *n) {
    *n += 2;
    cout << "N = " << n << "; according to addTwo()'s scope" << endl;
    // => 7
}

int main() {
    
    int n = 5;
    addTwo(&n);
    
    cout << "N = " << n << "; according to mains()'s scope" << endl;
    
    // => 5
    
    /**
     * Call by reference
     *
     * These functions are given the address of a variable as an argument. When the
     * function is called, the pointer is pointed at the given memory address, enabling
     * read/write access to the variable outside of the variables function scope. The
     * functions changes will remain so long as the function of original origin still
     * exists within the call stack (or in the case of a 'new' object: the object is
     * deleted from the heap).
     */
    
    return 0;
}
