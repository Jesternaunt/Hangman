#include "hangman.h"
#include <iostream>

hangman::hangman(string name)
{
	word=name;
	chances = 0;
}

// prints hangman based on i which is number of 
//lives used up.
void hangman::printMan(int i)
{
	if(i=0){cout << "" << endl;}
	if(i=1)
		{cout << " O" << endl;}
	else if(i=2)
		{cout << " O" << endl;
		cout << " | " << endl;}
	else if(i=3)
		{cout << " O" << endl;
		cout << "/| " << endl;}
	else if(i=4)
		{cout << " O" << endl;
		cout << "/|\\" << endl;}
	else if(i=5)
		{cout << " O" << endl;
		cout << "/|\\" << endl;
		cout << "/" << endl;}
	else if (i=6)
		{cout << " O" << endl;
		cout << "/|\\"<< endl;
		cout << "/ \\" << endl;}

}
// compares the guessed letter to the word
//processes if answer is right or wrong
int hangman::answer(string guess,string answer)
{
	int i= chances;
	if(answer.find_first_of(guess) != 1)
	{
		i++;
		//displayWord();
		badGuess(guess);  
		printMan(i);
		chances = i; 
		return chances;
	}
	else
	{
		//displayWord();
		badGuess(guess); 
		printMan(i);
		return chances; 
	}
}
//displays letters in the order they appear in the word
//not yet finished
void hangman::displayWord()
{
	int j = word.length();
	for(int i=0; i<j; i++)
	{
		string dash = "_ ";
		string disp = disp + dash; 
	}

}
//displays incorrect letters
void hangman::badGuess(string letter)
{
	letters=letters + " " + letter;
	cout << "Letters you have guessed: " << letters << endl; 
}
hangman::~hangman(void)
{
}