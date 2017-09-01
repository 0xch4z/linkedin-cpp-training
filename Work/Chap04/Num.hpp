//
//  Num.hpp
//  
//
//  Created by Charles Kenney on 8/30/17.
//

#ifndef Num_hpp
#define Num_hpp

#include <iostream>

class Num {
    int _data;
public:
    int get();
    bool operator ==(const int);
    void operator =(const int);
    void operator +(const int);
    void operator *(const int);
    void operator -(const int);
    void operator /(const int);
};

#endif /* Num_hpp */

