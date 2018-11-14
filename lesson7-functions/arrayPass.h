#include <iostream>

using namespace std;

void arrayPointer(int *array)
{
	int i;
	
	for (i=0; i<3; i++)
	{
		cout << array[i] << " ";
	}
	cout << '\n';
}
void arraySized(int array[3])
{
	int i;
	
	for (i=0; i<3; i++)
	{
		cout << array[i] << " ";
	}
	cout << '\n';
}

void arrayUnsized(int array[])
{
	int i;
	
	for (i=0; i<3; i++)
	{
		cout << array[i] << " ";
	}
	cout << '\n';
}