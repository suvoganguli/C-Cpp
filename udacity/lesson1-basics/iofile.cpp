#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string line;
	ofstream myFileIn ("input.txt", ios::app);
	
	if (myFileIn.is_open())
		{
		myFileIn << "line 1\n";
		myFileIn << "line 2\n";
		myFileIn.close();
		}
		 	
	ifstream myFileOut ("input.txt");
	
	if (myFileOut.is_open())
		{
		while (getline (myFileOut, line))
			{
			cout << line << '\n';
			}
		myFileOut.close();
		}
	else cout << "cannot open file\n";
	
	return 0;
}
		