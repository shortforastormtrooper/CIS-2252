#include<iostream>
#include<string>
using namespace std;

class CMemoryGame
{
public:
	CMemoryGame();
	void playGame();
	void printArray(char arr[]);
	

private:
	int tries;
	int matches;
	bool matchesArray[10];
	char answerArray[10];
	char viewArray[10];
	char inputArray[10];
};




