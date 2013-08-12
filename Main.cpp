#include <iostream>
#include <string>
#include "hangman.h"
using namespace std;

int main()
{
	hangman *game= new hangman("charlie");
	cout << "HANGMAN!!!"<< endl;
	int j = game->word.length(); 

	for (int i=0; i<j; i++)
	{
		cout << "_ ";
	}

	while(bool done =1)
	{
	cout << "Guess a letter! " << endl; 
	cin >> game->guess;

	try
	{
	int result = game->answer(game->guess, game->word); 
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr <<"bad_alloc caught: " << ba.what() << '\n';
	}
	return 0;
system("pause");
}
}