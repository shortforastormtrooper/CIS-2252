#include <iostream>
#include <string>


using namespace std;

const int maxstack = 5;




void createstack(stacktype &stack);
void destroystack(stacktype &stack);
bool fullstack(stacktype stack);
bool emptystack(stacktype stack);
void push(stacktype &stack, int &newelement);
void pop(stacktype &stack, int &poppedelement);


int main()
{
	stacktype stack;
	int newelement, poppedelement;
	char quest;

	createstack(stack);

	cout << "Do you want to enter data (y/n)? ";
	cin >> quest; //short for question
	while ((quest == 'y' || quest == 'Y') && !(fullstack(stack)))
	{
		cout << "Please enter interger: ";
		cin >> newelement;

		push(stack, newelement);

		cout << "Do you want to enter data (y/n)? ";
		cin >> quest; //short for question
	
	};

	cout << endl << endl;

	while (!emptystack(stack))
	{
		pop(stack, poppedelement);
		cout << poppedelement << endl;
	};

	destroystack(stack);

	system ("pause");
	
};

void createstack(stacktype &stack)
{
	stack.top = -1;
}

void destroystack(stacktype &stack)
{
	stack.top = -1;
}


bool fullstack(stacktype stack)
{
	if (stack.top == maxstack -1) return 1; //return true;
	else return 0; //return false;
}

void push(stacktype &stack, int &newelement)
{
	stack.top++;
	stack.element[stack.top] = newelement;
}

bool emptystack(stacktype stack)
{
	if (stack.top == -1)
		return 1; //returns true;
	else return 0; //returns false
}

void pop(stacktype &stack, int &poppedelement)
{
	poppedelement = stack.element[stack.top];
	stack.top--;
}

