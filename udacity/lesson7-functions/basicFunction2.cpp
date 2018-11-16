#include <iostream>

using namespace std;

int mult(int, int);

int main()
{
	int a = 2, b = 3;
	int c;
		
	c = mult(a,b);
	
	cout << c << '\n';
	
	return 0;
}

int mult(int a, int b)
{
	int c;
	cout << a << " " << b << '\n';
	
	c = a*b;
	
	cout << c << '\n';
	
	return c;
}