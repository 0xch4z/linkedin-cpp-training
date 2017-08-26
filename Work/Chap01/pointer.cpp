//
//  pointer.cpp
//  
//
//  Created by Charles Kenney on 8/25/17.
//

#include <cstdio>

using namespace std;

int main() {
    
    int x = 5;
    int *y = &x;
    
    printf("x = %d; y = %d\n", x, *y);
    printf("x and y should = 5\n");
    
    x += 2;
    
    printf("x = %d; y = %d\n", x, *y);
    printf("x and y should = 7\n");
    
    return 0;
}
