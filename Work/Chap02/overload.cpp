//
//  overload.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include "overload.hpp"

using namespace std;

int main() {
    
    static const float f = 5.3;
    
    cout << timesTwo(4) << endl;
    // => 8
    cout << timesTwo(f) << endl;
    // => 10.6
    cout << timesTwo("foobar") << endl;
    // => "foobar foobar"
    
    return 0;
}

const int timesTwo(int n) {
    return n * 2;
}

const float timesTwo(float n) {
    return n * 2.0;
}

const string& timesTwo(string s) {
    static string str = "";
    str = s + " " + s;
    return str;
}

