//
//  if-statements.cpp
//  
//
//  Created by Charles Kenney on 8/26/17.
//

#include <iostream>

using namespace std;

int main() {
    
    int x = 5;
    int y = 10;
    
    if (x > y) {
        puts("x is greater than y");
    } else if (x < y) {
        puts("x is less than y");
    } else {
        puts("they must be equal");
    }
    
    return 0;
}
