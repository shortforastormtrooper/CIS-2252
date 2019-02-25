#include<iostream>
#include<string>
#include "CStack2.h"
using namespace std;

int main()
 {
	 CStack mystack;

	 for(int i = 0; i < 5; i++)
	 {
		 mystack.Push(i * 5);
	 }

	 mystack.Push(5);
	 
	 while (!mystack.IsEmpty())
	 {
		 cout << mystack.Top() << endl;
		 mystack.Pop();
	 }

	 mystack.Pop();
	 system("pause");
	 
	 return 0;
}





	