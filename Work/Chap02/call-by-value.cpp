//
//  call-by-value.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include <iostream>

using namespace std;

void addTwo(int n) {
    n += 2;
    cout << "N = " << n << "; according to addTwo()'s scope" << endl;
    // => 7
}

int main() {
    
    int n = 5;
    addTwo(n);
    
    cout << "N = " << n << "; according to mains()'s scope" << endl;
    
    // => 5
    
    /**
     * Call by value
     *
     * These functions are given a value as an argument. When the function is called:
     * modification of the value is limited to the functions scope, as the value passed
     * is merely a copy of the value provided at the function call. It does not effect
     * lasting changes on the containing variables value. In this particular case, the
     * function variable has the same identifier as the variable in the main scope, so
     * it is not accessable in favor of the function's scope.
     */
    
    return 0;
}
