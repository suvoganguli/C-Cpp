# include <iostream>
# include <string>
# include <sstream>

using namespace std;

int main()
{
	int age;
	string stringAge;
		
	cout << "Enter your age: ";
	getline(cin, stringAge);
	stringstream(stringAge) >> age;  
	cout << "Your age is " << age << '\n';
	
	return 0;
}
	
