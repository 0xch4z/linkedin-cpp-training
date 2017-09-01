//
//  Num.cpp
//  
//
//  Created by Charles Kenney on 8/30/17.
//

#include "Num.hpp"

using namespace std;


int Num::get() {
    return _data;
}

bool Num::operator ==(const int rhs) {
    return _data == rhs;
}

void Num::operator =(const int rhs) {
    _data = rhs;
}

void Num::operator +(const int rhs) {
    _data += rhs;
}

void Num::operator *(const int rhs) {
    _data *= rhs;
}

void Num::operator -(const int rhs) {
    _data -= rhs;
}

void Num::operator /(const int rhs) {
    _data /= rhs;
}

int main() {
    
    Num n;
    
    n = 5;
    
    n * 5;
    cout << n.get() << endl;
}

