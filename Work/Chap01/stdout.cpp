//
//  stdout.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include <iostream>

using namespace std;

int main() {
    
    /**
     * Cout is an object oriented solution for outputting to the console.
     *
     * The cout class overloads the left-wise bit shift operators to output to the console
     * and does not actually shift bits. Also, the cout class is rarely used to actually
     * create an instance of an object. For this reason, many enthusiasts stick to the
     * cstdio library's puts/printf for outputting to the console, to avoid confusion and/or
     * avoid using the bitwise operator in a way that overrides its meaning.
     *
     * Regardless, cout's overloading makes chaining multiple objects of different types
     * together most simple.
     */
    
    cout << "Hello, World " << 4 + 4 << endl;
    
    /**
     * Cout does increase executable size quite a bit, as it has to include a good bit
     * of the standard template library just to support how it works. This can be seen by
     * compiling the source code with '--static' flag. For a given "Hello World" program in
     * with cout and puts respectively:
     * puts file size:     651384 bytes
     * cout file size:    1317014 bytes
     */
    
    return 0;
}
