#include "CMemoryGame.h"


CMemoryGame::CMemoryGame()
{
	answerArray[0] = 'A';
	answerArray[1] = 'A';
	answerArray[2] = 'B';
	answerArray[3] = 'B';
	answerArray[4] = 'C';
	answerArray[5] = 'C';
	answerArray[6] = 'D';
	answerArray[7] = 'D';
	answerArray[8] = 'E';
	answerArray[9] = 'E';

	for(int i = 0; i < 10; i++)
	{
		viewArray[i] = '-';
	}

	tries = 0;
	matches = 0;

	
}


void CMemoryGame::playGame()
{
	int guess1;
	int guess2;


	while(matches != 5) //continues to loop through program until reaching max. matches 
	{
		cout << "[- - - - - - - - - -]" << endl;
		cout<<"Please enter your first guess."<<endl; //Takes first guess for a match
		cin>>guess1;
		viewArray[guess1] = answerArray[guess1];
		printArray(viewArray);

		cout<<"Please enter a second guess."<<endl; //Takes second guess to determine match 
		cin>>guess2;
		viewArray[guess2] = answerArray[guess2];
		printArray(viewArray);

		
		if(viewArray[guess1] == viewArray[guess2]) //determines if there is a match or not
		{
			matchesArray[guess1] = true;
			matchesArray[guess2] = true;     //<-- need to add a bool matches[10]; to the .h file.
			cout<<"Congratulations, you made a match!"<<endl;
			matches++;
		}
		else
		{
			//what if they re-guess a position that already has a match
			if (matchesArray[guess1] = false) //then you flip it.  If it's true, don't flip.
			cout<<"Sorry no match, guess again."<<endl;
			viewArray[guess1] = '-'; 
			viewArray[guess2] = '-';
			cin >> guess1;
			cout << "Enter second guess" << endl;
			cin >> guess2;

		}//end else
		printArray(viewArray);
	}//end while
	cout<<"Congratulations, you've won!"<<endl;

	void printArray(char arr[]);
	{
		for(int i = 0; i < 10; i++)
		{
		cout<<viewArray[i]<<" ";
	}
	cout<<endl;
	}
}

void CMemoryGame::printArray(char arr[])
{
}
