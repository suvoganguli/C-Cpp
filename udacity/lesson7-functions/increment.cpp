#include <iostream>
#include "increment.h"

using namespace std;

void increment(int &input);

int main()
{
	int a = 2;		
	cout << a << '\n';
	increment(a);	
	cout << a << '\n';
	
	return 0;
}
