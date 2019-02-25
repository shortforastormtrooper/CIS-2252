#include<iostream>
#include<string>
using namespace std;

class CMemoryGame
{
public:
	void displayMessage() 
	{
		cout << "Welcome to the Memory Game!" << endl;
	}

	void displayCards()
	{
		cout << "[- - - - - - - - - - ]" << endl;
	}

	void ModifyCardArray(char arr[], int size)
		{
			const int ARRAY_SIZE = 11;



