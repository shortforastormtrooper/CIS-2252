#include "CStack2.h"

CStack::CStack()
{
    top = -1;			
}
 
void CStack::Push(int item)
{
	if (IsFull())
	{
		cout << "Stack is full" << endl;
		return;
	}
		top++;
		items[top] = item;

}


 
void CStack::Pop()
{
    if(IsEmpty())
	{
		cout << "Stack is empty" << endl;
		return;
	}

	top--;
}
 
bool CStack::IsEmpty() const
{
    if(top == -1)
            return true;
    else
            return false;
}
 
bool CStack::IsFull() const
{
    if(top == MAX_SIZE-1)
		return true;
    else
		return false;
}
 
int CStack::Top() const
{
	if (IsEmpty())
	{
		cout << "Cannot return to top." << endl;
		return -1;
	}
	return items[top];
}


