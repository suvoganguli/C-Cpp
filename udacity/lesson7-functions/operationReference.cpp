// Passing by reference
//
// >> Use just like a normal function. 
// >> Except use & in the definition and the declaration
// >> Don't use & in function call
//


// https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-c/
//
// Since references can’t be NULL, they are safer to use
//
// Why use pass by reference instead of pass by value?
// 
// Ans: While pass by value is suitable in many cases, it has a couple of limitations. 
// First, when passing a large struct or class to a function, pass by value will make 
// a copy of the argument into the function parameter. In many cases, this is a 
// needless performance hit, as the original argument would have sufficed.
// Second, when passing arguments by value, the only way to return a value 
// back to the caller is via the function’s return value. While this is often 
// suitable, there are cases where it would be more clear and efficient to have 
// the function modify the argument passed in. Pass by reference solves both of 
// these issues.

#include "operation.h"

void operation(int a, int b, char operation, int &result); // need & here

int main()
{
	int a = 2, b = 3;
	int result;
	char op = '*';
			
	operation(a, b, op, result);	// don't need & here - this is non-intuitive
	cout << result << '\n';
	
	return 0;
}
