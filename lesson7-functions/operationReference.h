#include <iostream>

using namespace std;

void operation(int a, int b, char op, int &result) // need & here
{
	switch (op)
	{
		case '+': 	result = a + b; // don't need & here - this is counter-intuitive
					break;
		case '-': 	result = a - b;
					break;
		case '*': 	result = a*b;
					break;
		case '/': 	result = a/b;
					break;
		default:	cout << "Invalid operation \n";
	}	
}