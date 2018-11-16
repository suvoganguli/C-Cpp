// Compile using >> g++ vectorCreate.cpp -std=c++11

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec, vec2;
	vector<int>::iterator it;
	
	vec.assign(5,2);
	
	vec.push_back(3);	
	
	it = vec.begin() + 1;	
	vec.insert(it, -1);
	
	it = vec.begin() + 2;
	vec.insert(it, -2);
	
	it = vec.begin() + 1;
	vec.emplace(it, -3);
	
	cout<<"vec has "<<vec.size()<<" elements\n";
	
	for (it=vec.begin(); it!=vec.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << '\n';
	
	vec.clear();
	int i = 0;
	for (it=vec.begin(); it!=vec.end(); ++it)
	{
		cout << "element" << i++ << " " << *it << " ";
	}
	cout << '\n';
	
	//vec.erase();
	
	vec2.assign(0,1);
	cout << "i = ";
	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
		vec2.push_back(i);
	}
	cout << "\ni after for-loop \n";
	cout << i << " ";
	cout << '\n';
	
	vec2.erase(it=vec2.begin(),it=vec2.begin()+5);
	
	for (it=vec2.begin(); it<vec2.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << '\n';	
	
	for (it=vec2.end()-1; it<vec2.end(); ++it)
		vec2.pop_back();
	
	for (it=vec2.begin(); it<vec2.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << '\n';
	
	
	return 0;
	
}