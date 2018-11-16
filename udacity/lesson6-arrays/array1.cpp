#include <iostream>
#include <stdio.h>
 
using namespace std;

int main()
{
	int arrayA[3] = {1,2,3};
	int arrayB[4];
	int i;
	
	// print arrayA
	for (i=0; i<3; i++)
	{
		cout << arrayA[i] << " ";	
	}
	cout << '\n';
	
	// read arrayB
	for (i=0; i<4; i++)
	{
		scanf("%d", &arrayB[i]);
	}
	
	//print arrayB
	for (i=0; i<4; i++)
	{
		cout << arrayB[i] << " ";
	}
	cout << '\n';
	
	return 0;
	
}
	
	