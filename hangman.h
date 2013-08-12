#pragma once
#include <string>
using namespace std;

class hangman
{
public:
	string word;
	string guess; 
	string letters; //incorrectly guessed letters 
	int chances;
	hangman(string name);
	void printMan(int i);
	int answer(string guess, string answer);
	void displayWord();
	void badGuess(string letter);
	~hangman(void);
};

