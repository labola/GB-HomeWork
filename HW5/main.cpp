#include <iostream>
#include "AddToArray2.hpp"
#include "ChangeValueInArr.hpp"
#include "CheckBalance.hpp"
#include "MoveArr.hpp"

int main() {
    
    int array1[] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
	int *ptr1 = array1;
    HW::ChangeValueInArr(ptr1, (sizeof(array1)/sizeof(array1[0])));
    
    int array2[8];
    int *ptr2=array2;
    HW::AddToArray2(ptr2, 8);

	int array3[] = {10, 1, 2, 3, 4};
	int* ptr3 = array3;
	std::cout << std::boolalpha << HW::CheckBalance(ptr3, (sizeof(array3)/sizeof(array3[0])));
	std::cout << "\n";
	
	int array4[] = {5, 1, 2, 3, 4};
	int* ptr4 = array4;
	int n = 2;
	for(int i =0; i <= 4; i++){
		std::cout << array4[i] << " ";}
	std::cout <<"\n";
	if(n>0 || n<0)
	{
		HW::MoveArr(ptr4, n, (sizeof(array4)/sizeof(array4[0])));
		for(int k =0; k <= 4; k++){
			std::cout << array4[k] << " ";
		}
	}

}



