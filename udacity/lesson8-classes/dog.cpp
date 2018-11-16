#include <iostream>
using namespace std;

class Dog
{
		string name;
		int licenseNo;
		
	public:
		void setName(string name);
		void setLicenseNo(int licenseNo);
		string getName();
		int getLicenseNo();
		void print();
};

void Dog::setName(string nameIn)
{
	name = nameIn;
}

void Dog::setLicenseNo(int licenseNoIn)
{
	licenseNo = licenseNoIn;
}

string Dog::getName()
{
	return name;
}

int Dog::getLicenseNo()
{
	return licenseNo;
}

void Dog::print()
{
	cout << name << ", licenseNo = " << licenseNo << '\n';
}



int main()
{
	Dog dog1, dog2;
	
	dog1.setName("Trixie");
	dog1.setLicenseNo(1234);

	dog2.setName("Kali");
	dog2.setLicenseNo(5678);
	
	dog1.print();
	dog2.print();
	
	return 0;
}
	
	
	 
	


