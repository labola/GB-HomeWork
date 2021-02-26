#include <iostream>

enum TicTacToe {Circle = 'X', Cross = 'O'};

//Структура с значением в ячейке, нахождение на доске  
struct TicTacToeBrd {
    TicTacToe Vl;
    int x;
    int y;

};

struct STRVL{
    bool toint      :1;
    bool todouble   :1;
    bool tochar     :1;
    
       union Un{
                    int i;
                    double dbl;
                    char chr;
                }un;
}strvl;



int main() {
    // Константа обозначающая нормальное давление
    const uint32_t Pn = 101325;  

    bool b = false; 
    int unsigned ui = 11;
    int signed si = -22;
    short sh = 33;
    char s = 48;
    float fl = 5.00005;
    double db = 6.4003453006;

    enum TicTacToe Cr, Ci;
    Cr = Cross;
    Ci = Circle;
      
    TicTacToe arr[2]= {Cr, Ci};
       
}
