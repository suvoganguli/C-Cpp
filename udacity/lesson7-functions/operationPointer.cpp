// Passing by reference

#include "operationPointer.h"

void operation(int a, int b, char operation, int* p); // need * here

int main()
{
	int a = 2, b = 3;
	int result;  // don't need the pointer here
	char op = '*';
			
	operation(a, b, op, &result);	// pass the address (pointer)
	cout << result << '\n';
	
	return 0;
}
