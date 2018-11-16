/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog
{
	private:
		string name;
		int license;
	public:
		Dog();
		Dog(string name);
		Dog(int license);
		Dog(string name, int license);
		string getName();
		int getLicense();
};

Dog::Dog()
{
	name = "Unknown";
	license = -1;
}	

Dog::Dog(string nameIn)
{
	name = nameIn;
	license = -1;
}	

Dog::Dog(int licenseIn)
{
	name = "Unknown";
	license = licenseIn;
}	

Dog::Dog(string nameIn, int licenseIn)
{
	name = nameIn;
	license = licenseIn;
}	

string Dog::getName()
{
	return name;
}

int Dog::getLicense()
{
	return license;
}








