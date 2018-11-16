#include <iostream>
#include <stdio.h>
 
using namespace std;

int main()
{
	int arrayA[6] = {1,2,3,4,5,6};
	int a, i;
	bool breakloop;
	
	breakloop = 0;
	
	while (1)
	{
	
		cout << "a = ";
		cin >> a;
		
		if (a == -1)
		{
			cout << "exiting while loop\n";
			break;
		}
		
		for (i=0; i<6; i++)
		{			
			if (arrayA[i] == a)
			{	
				cout << "idx = " << i << '\n';
				a = -1;
				break;
			}
			
			if (i == 5)
			{
				cout << "a not found in arrayA\n";
				a = -1;
			}
		}
	}
		
	cout << '\n';
	
	return 0;
	
}
	
	