#include <iostream>
using namespace std;

int main()
{

	int array[3][4] = {	11, 12, 13, 14,
					   	21, 22, 23, 24,
					   	31, 32, 33, 34};
					   	
	int i, j;
	
	for (i=0; i < 3; i++)
	{
		for (j=0; j < 4; j++)
		{
			cout << "a[" << (i+1) << "][" << (j+1) << "] = " << array[i][j] << '\n';
		}
	}
	
	return 0;

}