#include <iostream>

int main() {
     const int x1=10, x2=6;
    int a, b, natural_number, year;
   
    //ex. 1 
    std::cout << "Pls, enter number a> ";
    std::cin >> a;    
    std::cout << "Pls, enter number b> ";
    std::cin >> b;
    if(((a+b) >= 10) && ((a+b) <= 20)){
        std::cout << "true";
    }else{
        std::cout << "false";
    }
    std::cout << "\n";
    
    //ex. 2 
    std::cout << "Pls, enter number> ";
    std::cin >> natural_number;    
    
    if(((natural_number >= 1)) && (((natural_number % 1) == 0) && ((natural_number % natural_number) == 0)))
    {
        std::cout << natural_number << " is natural number";
    }else{
        std::cout << natural_number << " isn`t natural number";
    }
    std::cout << "\n";
    
    //ex. 3
    if((x1 == 10) || (x2 == 10) || ((x1 + x2) == 10))
    {
        std::cout << "true";
    }
    
    //ex.4
    std::cout << "Pls, enter year> ";
    std::cin >> year;
    
    if(year > 0)
    {
        if((((year % 4) == 0) && (!(year % 100 == 0))) || ((year % 400) == 0))
        {
            std::cout << year << " - leap year";
        }else
        {
            std::cout << year << " - no leap year";
        }
    }else {
        std::cout << year << "Wrong year entered! Year must be > 0!";
    }
}