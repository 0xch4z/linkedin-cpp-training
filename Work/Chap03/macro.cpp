//
//  macro.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include "macro.hpp"

using namespace std;

int main() {
    int n, m;
    n = 101;
    m = 100;
    
    cout << MAX(n, m) << endl;
    // => 101
    cout << MIN(n, m) << endl;
    // => 100
    
    return 0;
}
