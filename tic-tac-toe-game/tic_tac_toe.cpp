
// including libraries and extensions------------------------------------------------------------------------------
#include <iostream>
#include "tic_tac_toe_header.hpp"
#include <vector>
using namespace std;

// main function call-----------------------------------------------------------------------------------------------
int main()
{

    get_input();
    // start the game-----------------------------------------------------------------------------------------------
    while (!rules())
    {
        initializer();
        play();
        rules();
    }

    // // checking game condition---------------------------------------------------------------------------------------
    // if (token == 'X' && tie == false)
    // {
    //     cout << player2 << "wins !" << endl;
    // }
    // else if (token == 'O' && tie == false)
    // {
    //     cout << player1 << "wins!" << endl;
    // }
    // else
    // {
    //     cout << "Its a draw!" << endl;
    // }
}