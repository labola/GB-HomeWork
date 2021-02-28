#include <iostream>

// a=5, b=3, c=2, d=9 -  external values from external.cpp
extern int a,b,c,d;

int main() {
 
    int x = 50;
    std::cout << ((static_cast<float>(a) * (static_cast<float>(b) + (static_cast<float>(c) / static_cast<float>(d))))) << '\n';

    int y= x-21;
    std::cout << y  << '\n';
    std::cout << ((x-21) > 21 ? y *= y : y);


}