
/*
Overal routine:
first we should make the structure of the game.
*/

#include <iostream>
#include "tic_tac_toe_header.hpp"
#include <vector>
// #include <string>
using namespace std;

// Defining global variables
std::vector<char> grid = {'1', '2', '3',
                          '4', '5', '6',
                          '7', '8', '9'};

char token = 'X'; // X is for initialization of token, it can be both X or O
int row, column;
string player1, player2 = ""; // initialization of strings
bool tie = false;

// main function
int main()
{
    while (!rules(grid, tie))
    {
        initializer(player1, player2, grid);
        play(token, player1, player2, row, column, grid);
        rules(grid, tie);

        if (token == 'X' && tie == false)
        {
            cout << player2 << "wins !" << endl;
        }
        else if (token == 'O' && tie == false)
        {
            cout << player1 << "wins!" << endl;
        }
        else
        {
            cout << "Its a draw!" << endl;
        }
    }
}