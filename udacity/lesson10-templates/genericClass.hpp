/*header file*/

#include <iostream>

using namespace std;

template <class T>
class Multiplier
{
	private:
		T M1, M2, prod;
	public:
		Multiplier();
		void setM1(T input);
		void setM2(T input);
		void setProduct();
		void printEquation();		
};

template <class T>
Multiplier<T>::Multiplier()
{
	T M1 = 0;
	T M2 = 0;
}

template <class T>
void Multiplier<T>::setM1(T input)
{
	M1 = input;
}
	
template <class T>
void Multiplier<T>::setM2(T input)
{
	M2 = input;
}

template <class T>
void Multiplier<T>::setProduct()
{
	prod = M1*M2;
}

template <class T>
void Multiplier<T>::printEquation()
{
	cout << M1 << " * " << M2 << " = " << prod << '\n';
}






