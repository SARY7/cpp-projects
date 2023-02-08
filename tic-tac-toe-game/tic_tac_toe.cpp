
// including libraries and extensions------------------------------------------------------------------------------
#include <iostream>
#include "tic_tac_toe_header.hpp"
#include <vector>
using namespace std;

// Defining global variables----------------------------------------------------------------------------------------
std::vector<char> grid = {'1', '2', '3',
                          '4', '5', '6',
                          '7', '8', '9'};

char token = 'X'; // X is for initialization of token, it can be both X or O
int row, column;
string player1, player2 = ""; // initialization of strings
bool tie = false;
int digit; // its a local variable

// main function call-----------------------------------------------------------------------------------------------
int main()
{
    //--------------------------------------------------------------------------------------------------------------
    std::cout << "\nWelcome to the Tic-Tac-Toe game! Have fun.\n";
    std::cout << "Enter the name of the first player: ";
    /*
    The C++ getline() is an in-built function defined in the <string.h>
    header file that allows accepting and reading single and multiple
    line strings from the input stream. In C++, the cin object also allows
     input from the user, but not multi-word or multi-line input.
     That’s where the getline() function comes in handy.
    */
    getline(cin, player1);
    std::cout << "\nEnter the name of the second player: ";
    getline(cin, player2);
    cout << "\nThe game will start with " << player1 << "\n";
    //--------------------------------------------------------------------------------------------------------------

    // start the game-----------------------------------------------------------------------------------------------
    while (!rules(grid, tie))
    {
        initializer(grid);
        play(token, player1, player2, grid);
        rules(grid, tie);
    }

    // checking game condition---------------------------------------------------------------------------------------
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