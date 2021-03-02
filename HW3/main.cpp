#include <iostream>

// a=5, b=3, c=2, d=9 -  external values from external.cpp
extern int a,b,c,d;

int main() {
 
    int x = 50;
    //Exercise 1 included. 
    std::cout << ((static_cast<float>(a) * (static_cast<float>(b) + (static_cast<float>(c) / static_cast<float>(d))))) << '\n';

    int y= x-21;
    std::cout << y  << '\n';
    std::cout << ((x-21) > 21 ? y *= y : y);

    std::cout << '\n';
    
    int array[3][3][3]={
        {{1,1,1}, {1,1,1},{1,1,1}},
        {{2,2,2}, {2,8,2},{2,2,2}},
        {{3,3,3}, {3,3,3},{3,3,3}},
    };

    int* ptr = array[1][1];
        
    std::cout << *(ptr+1);

}