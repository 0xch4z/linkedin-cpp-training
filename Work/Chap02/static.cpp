//
//  static.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include "static.hpp"

using namespace std;

int main() {
    for (int i = 5; i; --i) {
        cout << "calling automatic addition" << endl;
        addition();
        cout << "calling static addition" << endl;
        staticAddition();
    }
    
    /*
     * Static variables are initialzed and live beyond the life of the function in the
     * call stack, although they are only accessable from their origin in the stack. They
     * live for the duration of the process, i.e. static (in reference to their life span).
     *
     * Automatic variables are implicitly deleted as the scope exits their function block
     * of origin. They are only alive so long as their function of origin is on the call stack.
     * This frees memory.
     */
    
    return 0;
}

void addition() {
    int n = 5;
    n += 2;
    cout << "(automatic) n + 2 yeilds " << n << endl;
}

void staticAddition() {
    static int n = 5;
    n += 2;
    cout << "(static) n + 2 yeilds " << n << endl;
}
