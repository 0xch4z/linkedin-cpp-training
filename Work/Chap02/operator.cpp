//
//  operator.cpp
//  
//
//  Created by Charles Kenney on 8/28/17.
//

#include <iostream>

using namespace std;

class Num {
    int _data;
public:
    Num(const int& n);
    int get();
    void operator++();
    void operator+(const int& lhs);
};

Num::Num(const int& n) {
    _data = n;
}

int Num::get() {
    return _data;
}

void Num::operator ++() {
    _data++;
}

void Num::operator +(const int& rhs) {
    _data += rhs;
}

int main() {
    Num n(5);
    n + 5;
    // n => 10
    n + 10;
    // n => 20
    cout << n.get() << endl;
    // => 20
    
    return 0;
}
