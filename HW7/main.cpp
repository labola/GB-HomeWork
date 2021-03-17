#include <iostream>
using namespace std;

#define CHECKVALUE(NUM, LIM) (((NUM) >= 0) && ((NUM)<(LIM)))
#define GETFRARR(ARR, C, R) *((*(ARR + R)) + C)
#define ARRAYSIZE(ARR) (sizeof((ARR))/sizeof((ARR)[0]))

int main(){
    
    //ex.1
    int number, limit;
    cout << "Please input value: ";
    cin >> number;
    cout << "Please input limit: ";
    cin >> limit;
    cout << "\n";
    
    if(CHECKVALUE(number, limit))
    {
        cout << "Number "<< number << " in the range from 0 to " << limit;
    }else
    {
        cout << "Number "<< number << " not in the range from 0 to " << limit;
    }
    cout << "\n";

    //ex.2 
    int **arrint = new int*[2];
    for(int i = 0; i<2; i++)
    {
        arrint[i]=new int[3];
    }
    for(int row = 0; row < 2; row++)
    {
        for(int column = 0; column < 3; column++)
        {
            arrint[row][column]=column+row;
        }
    }
	/* arrint[2][3] = 
	{ 
	  {0, 1, 2}
	  {1, 2, (3)}
	}
	*/
    cout <<"arrint[1][2] = " << GETFRARR(arrint, 2, 1);
	cout << "\n";
    //ex.3
	int arr2[] = {1,2,3,4,5};
    int s = ARRAYSIZE(arr2);
    cout << s;
}