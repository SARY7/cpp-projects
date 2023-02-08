// including libraries and extensions------------------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;

// making a 2-dimensional array: rows and column numbers of the game table-----------------------------------------
void initializer(std::vector<char> grid)
{
    // priting the grid to the output------------------------------------------------------------------------------
    cout << " ________ _________ ________ \n";
    cout << "|        |         |        |\n";
    cout << "|    " << grid[0] << "   |    " << grid[1] << "    |   " << grid[2] << "    | \n";
    cout << "|________|_________|________|\n";
    cout << "|        |         |        |\n";
    cout << "|    " << grid[3] << "   |    " << grid[4] << "    |   " << grid[5] << "    | \n";
    cout << "|________|_________|________|\n";
    cout << "|        |         |        |\n";
    cout << "|    " << grid[6] << "   |    " << grid[7] << "    |   " << grid[8] << "    | \n";
    cout << "|________|_________|________|\n";
}

// creating game dynamics------------------------------------------------------------------------------------------
void play(char token, std::string player1, std::string player2, std::vector<char> grid)
{
    int digit; // its a local variable
    if (token == 'X')
    {
        cout << "\n"
             << player1 << ", Choose a number to place your mark.";
        cin >> digit;
    }

    //--------------------------------------------------------------------------------------------------------------
    if (token == 'O')
    {
        cout << "\n"
             << player2 << ", now is your turn.";
        cin >> digit;

        if (digit < 1 || digit > 9)
        {
            cout << "This is an invalid choice." << endl;
        }
    }

    //--------------------------------------------------------------------------------------------------------------
    if (token == 'X' && grid[digit - 1] != 'X' && grid[digit - 1] != 'O')
    {
        grid[digit - 1] = 'X';
        token = 'O';
    }
    else if (token == 'O' && grid[digit - 1] != 'X' && grid[digit - 1] != 'O')
    {
        grid[digit - 1] = 'O';
        token = 'X';
    }
    else
    {
        cout << "No empty space is left on the grid.";
        // play(token, player1, player2, grid);
    }
    initializer(grid);
}

// making a rule table for the game------------------------------------------------------------------------------------
bool rules(std::vector<char> grid, bool tie)
{
    // check the grid horizontally
    if (grid[0] == grid[1] && grid[0] == grid[2] ||
        grid[3] == grid[4] && grid[3] == grid[5] ||
        grid[6] == grid[7] && grid[6] == grid[8])
    {
        return true; // if this condition is true, the player wins
    }
    // }

    // check the grid vertically
    if (grid[0] == grid[3] && grid[0] == grid[6] ||
        grid[1] == grid[4] && grid[1] == grid[7] ||
        grid[2] == grid[5] && grid[2] == grid[8])
    {
        return true; // if this condition is true, the player wins
    }

    // check the diagonally
    if (grid[0] == grid[4] && grid[0] == grid[8] ||
        grid[2] == grid[4] && grid[2] == grid[6]) // check vertical and horizontally

    {
        return true; // if this condition is true, the player wins
    }

    for (int i = 0; i < 9; i++)
    {
        {
            if (grid[i] != 'X' && grid[i] != 'O')
            {
                return false; // it mean tha the game should still goes on
            }
        }
    }

    tie = true;

    return false; // it shows that the game is finished or not.
}
