# include <iostream>
# include <string>

using namespace std;

int main()
{
	int age = 0;
	string month = " ";
	string name;
		
	cout << "Enter your age: ";
	cin >> age;
	cout << "Your age is " << age << '\n';
	
	cout << "Enter month of your birth: ";
	cin >> month;
	cout << "You birth month is " << month << '\n';

	cout << "Enter your full name: ";
	cin.ignore();
	std::getline (std::cin, name);
	cout << "Your name is " << name << '\n';
	
	return 0;
}
	
