// How to pass array to a function in C++?
//
// Note: C++ does not allow passing of an array directly. 

// One needs to use pass by reference using one of the following 3 options:
//
// 1. void functionName(variableType *arrayName)
// 2. void functionName(variableType arrayName[length of array])
// 3. void functionName(variableType arrayName[])

#include "arrayPass.h"

void arrayPointer(int *array);
void arraySized(int array[3]);
void arrayUnsized(int array[]);

int main()
{

	int array[3] = {1,2,3};
	
	arrayPointer(array);			// note: passing just array in call
	arraySized(array);				// note: passing just array in call
	arrayUnsized(array);			// note: passing just array in call
	
	return 0;
	
}