//
//  itteration.cpp
//  
//
//  Created by Charles Kenney on 8/26/17.
//

#include <cstdio>

using namespace std;

int main() {
    
    char s[] = "string";
    
    // for index of
    puts("STARTING INDEX OF");
    for (int i = 0; s[i]; i++) {
        printf("character = %c\n", s[i]);
    }
    puts("\n");
    
    // pointer itteration
    puts("STARTING POINTER ITTERATION");
    for (char *cp = s; *cp; ++cp) {
        printf("character = %c\n", *cp);
    }
    puts("\n");
    
    // for element in
    puts("STARTING ELEMENT IN");
    for (char cp: s) {
        if (cp == 0) break;
        printf("character = %c\n", cp);
    }
    puts("\n");
    
}

