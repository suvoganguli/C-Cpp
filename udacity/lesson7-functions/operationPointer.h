#include <iostream>

using namespace std;

void operation(int a, int b, char op, int* result) // need * here
{
	
	switch (op)
	{
		case '+': 	*result = a + b;   // need * here
					break;
		case '-': 	*result = a - b;
					break;
		case '*': 	*result = a*b;
					break;
		case '/': 	*result = a/b;
					break;
		default:	cout << "Invalid operation \n";
	}	
}