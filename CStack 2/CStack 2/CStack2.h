#include <iostream>
using namespace std;

#ifndef CSTACK_H
#define CSTACK_H
class CStack
{
private:

	static const int MAX_SIZE = 5;
	int top;
	int items[MAX_SIZE];

public:
	CStack();
	void Push(int items);
	void Pop();
	bool IsEmpty() const;
	bool IsFull() const;
	int Top() const;
};
#endif