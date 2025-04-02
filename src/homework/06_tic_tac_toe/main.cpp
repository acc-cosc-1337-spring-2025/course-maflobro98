#include "tic_tac_toe.h"
#include<iostream>
using namespace std;
#include<typeinfo>


int main() 
{
	// Set variables
	TicTacToe game;
	string first_player;
	char user_choice = 'y';
	bool match = false;


	do
	{
		cout << "Enter first player: "; // get player ID at start
		cin >> first_player;
		
		while(match == false) // while loop until 'match' is true (valid input for first_player)
		{	
			if(first_player == "x" || first_player == "X" || first_player == "o" || first_player == "O") // checks if input is valid
			{
				match = true;
				
			}
			else{
				cout << "Invalid input. Please enter X or O: ";
				cin >> first_player;
			}
		}
		
		if(first_player == "x") // convert first_player to uppercase for easier condition testing later
		{
			first_player = "X";
		}
		else if(first_player == "y")
		{
			first_player = "Y";
		}


		game.start_game(first_player); // Start game with player input and initialize position
		int position;

		while(!game.game_over()) // loop through until game.over() is set to true
		{
			cout << "Enter a position: ";
			cin >> position;
			game.mark_board(position);
			game.display_board();
		}

		cout << "The winner is " << game.get_winner() << "!!" << endl << endl; // display the winner

		cout << "Play again, enter y or Y? "; // request if user would like to continue. 
		cin >> user_choice;

	} while ( user_choice == 'y' || user_choice == 'Y'); // if user enters y to continue keep loop going or the game ends including loop.
	
	return 0;
}