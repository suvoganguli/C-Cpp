#include <iostream>
using namespace std;

int main()
{
	int a = 12;
	int *pa; 		// pointer to an int
	int **ppa; 		// pointer to a pointer to an int
	
	int b, *pb;
	
	pb = &b;
	*pb = 45;
	
	pa = &a;
	ppa = &pa;
	
	cout << "a = " << a << '\n';
	cout << "pa = " << pa << " (pointer to A stores this value)\n";
	cout << "*pa = " << *pa << " (pointer to A points to this)\n";
	
	cout << '\n';
	
	cout << "ppa = " << ppa << '\n';
	cout << "*ppa = " << *ppa << '\n';
	cout << "**ppa = " << **ppa << '\n';
	
	cout << '\n';
	cout << "b = " << b << '\n';
	
	return 0;	
}