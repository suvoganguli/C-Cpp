// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

void printVector(vector<float> vIn)
 {//printing the contents of vIns
 
 	vector<float>::iterator it;
 
    //TODO: Complete the function 
	for (it = vIn.begin(); it != vIn.end(); ++it)
		cout << *it << " ";
	cout << '\n';
 }
 