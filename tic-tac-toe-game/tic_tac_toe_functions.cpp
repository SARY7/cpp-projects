#include <iostream>
#include <vector>
// #include <string>
using namespace std;

// making a 2-dimensional array: rows and column numbers of the game table
//---------------------------------------------------------------------------------------------
void initializer(std::string player1, std::string player2, std::vector<char> grid)
// std::vector<vector<data_type>> refers to a 2d-array
{
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

    // priting the grid to the output
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
//---------------------------------------------------------------------------------------------
void play(char token, std::string player1, std::string player2, int row, int column,
          std::vector<char> grid)
{
    int digit; // its a local variable
    if (token == 'X')
    {
        cout << player1 << " Choose a number to place your mark.";
        cin >> digit;
    }

    if (token == 'O')
    {
        cout << player2 << " now is your turn.";
        cin >> digit;

        if (digit < 1 || digit > 9)
        {
            cout << "This is an invalid choice." << endl;
        }
    }

    if (token == 'X' && grid[digit] != 'X' && grid[digit] != 'O')
    {
        grid[digit] = 'X';
        token = 'O';
    }
    else if (token == 'O' && grid[digit] != 'X' && token == 'X' && grid[digit] != 'O')
    {
        grid[digit] = 'O';
        token = 'X';
    }
    else
    {
        cout << "No empty space is left on the grid.";
    }
}
//---------------------------------------------------------------------------------------------
bool rules(std::vector<char> grid, bool tie)
{
    // for (int i = 1; i < 3; i++)
    // {
    // check the grid horizontally
    if (grid[1] == grid[2] && grid[1] == grid[3] ||
        grid[4] == grid[5] && grid[4] == grid[6] ||
        grid[7] == grid[8] && grid[7] == grid[9])
    {
        return true; // if this condition is true, the player wins
    }
    // }

    // check the grid vertically
    if (grid[1] == grid[4] && grid[1] == grid[7] ||
        grid[2] == grid[5] && grid[2] == grid[8] ||
        grid[3] == grid[6] && grid[3] == grid[9])
    {
        return true; // if this condition is true, the player wins
    }

    // check the diagonally
    if (grid[1] == grid[5] && grid[1] == grid[9] ||
        grid[3] == grid[5] && grid[3] == grid[7]) // check vertical and horizontally

    {
        return true; // if this condition is true, the player wins
    }

    for (int i = 0; i < 9; i++)
    {
        // for (int j = 0; j < 3; j++)
        {
            if (grid[i] != 'X' && grid[i] != 'O')
            {
                return false; // it mean tha the game  should still goes on
            }
        }
    }

    tie = true;

    return false; // it shows that the game is finished or not.
}
//---------------------------------------------------------------------------------------------