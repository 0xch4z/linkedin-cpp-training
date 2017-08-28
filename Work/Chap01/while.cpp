//
//  while.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include <iostream>

using namespace std;

int main() {
    
    int v[] = { 1, 2, 3, 4, 5 };
    int *i = v;
    
    while (i) {
        cout << *i << endl;
        ++i;
    }
    
    return 0;
}
