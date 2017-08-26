//
//  array.cpp
//  
//
//  Created by Charles Kenney on 8/26/17.
//

#include <iostream>

using namespace std;

int main() {
    
    int a[5];
    int b[] = { 1, 2, 3, 4, 5 };
    
    for (int i = 1; i < 6; ++i) {
        a[i - 1] = i;
    }
    
    for (int *ap = a; *ap; ++ap) {
        cout << *ap << endl;
    }
    
    for (int *bp = b; *bp; ++bp) {
        cout << *bp << endl;
    }
    
    return 0;
}
