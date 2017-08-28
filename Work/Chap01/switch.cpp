//
//  switch.cpp
//  
//
//  Created by Charles Kenney on 8/27/17.
//

#include <iostream>
#include <string>

using namespace std;

enum Number {
    one,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    other
};

Number hashNum(int n) {
    if (n == 1) return one;
    else if (n == 2) return two;
    else if (n == 3) return three;
    else if (n == 4) return four;
    else if (n == 5) return five;
    else if (n == 6) return six;
    else if (n == 7) return seven;
    else if (n == 8) return eight;
    else if (n == 9) return nine;
    else if (n == 10) return ten;
    else return other;
}

int main() {
    
    int n;
    string s;
    Number num;
    
    while (true) {
        cout << "enter a valid number from 1 to 10, in written form: ";
        cin >> n;
        num = hashNum(n);
        switch (num) {
            case one:
                s = "one";
                break;
            case two:
                s = "two";
                break;
            case three:
                s = "three";
                break;
            case four:
                s = "four";
            case five:
                s = "five";
                break;
            case six:
                s = "six";
            case seven:
                s = "seven";
            case eight:
                s = "eight";
                break;
            case nine:
                s = "nine";
                break;
            case ten:
                s = "ten";
                break;
            default:
                s = "unknown";
        }
        cout << s << endl;
    }
    
    return 0;
}
