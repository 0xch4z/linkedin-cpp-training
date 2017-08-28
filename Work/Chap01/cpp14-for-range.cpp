//
//  cpp14-for-range.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "foobar";
    
    for (char c : s) {
        cout << c << endl;
    }
    
    return 0;
}
