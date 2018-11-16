#include <iostream>
using namespace std;

int main()
{
	int a = 12;
	int *pa = &a;
	
	
	cout << "a = " << a << '\n';
	cout << "pa = " << pa << " (pointer to A stores this value)\n";
	cout << "*pa = " << *pa << " (pointer to A points to this)\n";
	
	return 0;	
}