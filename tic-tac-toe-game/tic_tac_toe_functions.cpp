#include <iostream>
#include <vector>
#include <string>
using namespace std;

// making a 2-dimensional array: rows and column numbers of the game table
//---------------------------------------------------------------------------------------------
void initializer(std::string player1, std::string player2, std::vector<vector<char>> grid)
// std::vector<vector<data_type>> refers to a 2d-array
{
    std::cout << "\n Welcome to the Tic-Tac-Toe game! Have fun.\n\n";
    std::cout << "Enter the name of the first player: ";
    /*
    The C++ getline() is an in-built function defined in the <string.h>
    header file that allows accepting and reading single and multiple
    line strings from the input stream. In C++, the cin object also allows
     input from the user, but not multi-word or multi-line input.
     That’s where the getline() function comes in handy.
    */
    getline(cin, player1);
    std::cout << "\n Enter the name of the second player: ";
    getline(cin, player2);
    cout << "The game will start with " << player1 << "\n";

    // priting the grid to the output
    cout << " ________ _________ ________\n";
    cout << "|        |         |        |\n";
    cout << "|    " << grid[0][0] << "   |    " << grid[0][1] << "    |   " << grid[0][2] << "    | \n";
    cout << "|________|_________|________|\n";
    cout << "|        |         |        |\n";
    cout << "|    " << grid[1][0] << "   |    " << grid[1][1] << "    |   " << grid[1][2] << "    | \n";
    cout << "|________|_________|________|\n";
    cout << "|        |         |        |\n";
    cout << "|    " << grid[2][0] << "   |    " << grid[2][1] << "    |   " << grid[2][2] << "    | \n";
    cout << "|________|_________|________|\n";
}
//---------------------------------------------------------------------------------------------
void play(char token, std::string player1, std::string player2, int row, int column,
          std::vector<vector<char>> grid)
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
    }

    // for (int i = 1; i < 10, i++)
    // {
    //     if (digit == 1){
    //         row = i-1 ;
    //         column = i-1 ;
    //     }
    // }

    if (digit == 1)
    {
        row = 0;
        column = 0;
    }

    if (digit == 2)
    {
        row = 0;
        column = 1;
    }

    if (digit == 3)
    {
        row = 0;
        column = 2;
    }

    if (digit == 4)
    {
        row = 1;
        column = 0;
    }

    if (digit == 5)
    {
        row = 1;
        column = 1;
    }

    if (digit == 6)
    {
        row = 1;
        column = 2;
    }

    if (digit == 7)
    {
        row = 2;
        column = 0;
    }

    if (digit == 8)
    {
        row = 2;
        column = 1;
    }

    if (digit == 9)
    {
        row = 2;
        column = 2;
    }

    else if (digit < 1 || digit > 9)
    {
        cout << "This is an invalid choice." << endl;
    }

    if (token == 'X' && grid[row][column] != 'X' && grid[row][column] != 'O')
    {
        grid[row][column] = 'X';
        token = 'O';
    }
    else if (token == 'O' && grid[row][column] != 'X' && token == 'X' && grid[row][column] != 'O')
    {
        grid[row][column] = 'O';
        token = 'X';
    }
    else
    {
        cout << "No empty space is left on the grid.";
    }
}
//---------------------------------------------------------------------------------------------
bool rules(std::vector<vector<char>> grid, bool tie)
{
    for (int i = 0; i < 3; i++)
    {
        if (grid[i][0] == grid[i][1] && grid[i][0] == grid[i][2] ||
            grid[0][i] == grid[1][i] && grid[0][i] == grid[2][i]) // check vertical and horizontally

        {
            return true; // if this condition is true, the player wins
        }
    }

    if (grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2] ||
        grid[0][2] == grid[1][1] && grid[0][2] == grid[2][0]) // check vertical and horizontally

    {
        return true; // if this condition is true, the player wins
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] != 'X' && grid[i][j] != 'O')
            {
                return false; // it mean tha the game  should still goes on
            }
        }
    }

    tie = true;

    return false; // it shows that the game is finished or not.
}
//---------------------------------------------------------------------------------------------