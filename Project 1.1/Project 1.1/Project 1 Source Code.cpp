/*
Darryl Green
10/12/2012
CIS 2252
Baugh
*/

#include <iostream>
using namespace std;


class Math
{ 
public:

	int MultiplyPositive (int a, int b)
	{
		
		int product = 0;
		
		for (int i = 0; i < b; i++)
		{
			product += a;
		}
		return product;
	} 
};


int main()

{
	int a;
	int b;
	Math math;
	
	
	cout << "Input a positive interger for A" << endl;
	cin >> a;

	while (a <= 0)
	{
		cout << "LOLWUT? Interger must be postive and greater than zero." << endl;
		cout << "Enter first postive integer ";
		cin >> a;
	}

	cout << "Input a positive interger for B" << endl;
	cin >> b;


	while (b <= 0)
	{
		cout << "LOLWUT? Interger must be postive and greater than zero." << endl;
		cout << "Enter first postive integer ";
		cin >> b;
	}

	cout << "The answer for the integers you entered is " << math.MultiplyPositive(a, b) << endl;

	system("pause");

	return 0;

	
}

