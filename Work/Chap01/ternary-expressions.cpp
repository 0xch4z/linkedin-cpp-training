//
//  ternary-expressions.cpp
//  
//
//  Created by Charles Kenney on 8/26/17.
//

#include <iostream>

using namespace std;

int main() {
    
    int x, y;
    x = 5;
    y = 10;
    
    bool isEqual = x == y;
    
    cout << (isEqual ? "it's equal" : "it's not equal") << endl;
    
    return 0;
}
