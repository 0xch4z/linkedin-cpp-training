//
//  references.cpp
//
//
//  Created by Charles Kenney on 8/25/17.
//

#include <cstdio>

using namespace std;

int main() {
    
    int x = 7;
    int *ip = &x;
    int &y = x;
    
    printf("The value of x is %d\n", x);
    printf("The value of ip is %d\n", *ip);
    printf("The value of x is %d\n", y);
    
    x = 42;
    
    printf("The value of x is %d\n", x);
    printf("The value of ip is %d\n", *ip);
    printf("The value of x is %d\n", y);
    
    y = 73;
    
    printf("The value of x is %d\n", x);
    printf("The value of ip is %d\n", *ip);
    printf("The value of x is %d\n", y);
    
    int z = 149;
    ip = &z;
    
    printf("The value of x is %d\n", x);
    printf("The value of ip is %d\n", *ip);
    printf("The value of x is %d\n", y);
    printf("The value of x is %d\n", z);
    
    return 0;
}

