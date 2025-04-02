//cpp
#include<iostream>
#include "tic_tac_toe.h"
using namespace std;

bool TicTacToe::game_over()
{   
    if(check_column_win() == true || check_row_win() == true || check_diagonal_win() == true) // if user wins in any method, we set winner and return true.
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true) // if user does not win and all is filled out, we set winner to C and return true.
    {
        winner = "C";  
        return true;  
    }
    return false; // return false to keep game going
}

void TicTacToe::start_game(std::string first_player) // begins game by setting player variable and clears board.
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) // mark baord with current player ID and position input
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const // displays board for user visualization
{
    for(long unsigned int i=0;i < pegs.size(); i +=3)
    {
        cout << pegs[i]<<"|" << pegs[i+1] << "|" << pegs[i+2] << "\n";
    }
}



//***private functions*** 
void TicTacToe::clear_board() // clears board 
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player() // switchs player ID
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full() // returns true if board is filled out or false otherwise
{
    for(long unsigned int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_column_win() // checks if a column win is activated
{
    if(pegs[0] != " " && pegs[0] == pegs[3] && pegs[3] == pegs[6]) // check first column
    {
        return true;
    }
    if(pegs[1] != " " && pegs[1] == pegs[4] && pegs[4] == pegs[7]) // check second column
    {
        return true;
    }
    if(pegs[2] != " " && pegs[2] == pegs[5] && pegs[5] == pegs[8]) // check third column
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    if(pegs[0] != " " && pegs[0] == pegs[1] && pegs[1] == pegs[2])
    {
        return true;
    }
    if(pegs[3] != " " && pegs[3] == pegs[4] && pegs[4] == pegs[5])
    {
        return true;
    }
    if(pegs[6] != " " && pegs[6] == pegs[7] && pegs[7] == pegs[8])
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[8])
    {
        return true;
    }
    if(pegs[6] != " " && pegs[6] == pegs[4] && pegs[4] == pegs[2])
    {
        return true;
    }
    return false;
}

void TicTacToe::set_winner() // sets the winner variable to previous user ID
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}