//h  
#include<iostream>
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H  
#define TIC_TAC_TOE_H

using namespace std;

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const{return player;}
    void display_board() const;

    // New functions
    string get_winner() {return winner;}

private:
    string player, winner;
    vector<string> pegs{9, " "};
    void clear_board();
    void set_next_player();
    bool check_board_full();

    // New Functions
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
};

#endif