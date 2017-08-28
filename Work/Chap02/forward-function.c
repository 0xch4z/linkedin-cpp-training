//
//  forward-function.c
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include "forward-function.h"

int main() {
    
    int n = 5;
    myFunction(&n);
    // called before defined; defined in header
    
    printf("n = %d\n", n);
    // => 6
}

void myFunction(int *n) {
    ++*n;
}
