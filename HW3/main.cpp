#include <iostream>

// a=5, b=3, c=2, d=9 -  external values from external.cpp
extern int a,b,c,d;

int main() {
 
    float value = (static_cast<float>(a) * (static_cast<float>(b) + (static_cast<float>(c) / static_cast<float>(d))));
    std::cout << value; 
}