#include <iostream>
#include <vector>
using namespace std;

// making a 2-dimensional array: rows and column numbers of the game table

void initializer(std::string player1, std::string player2, std::vector<vector<int>> grid)
// std::vector<vector<data_type>> refers to a 2d-array
{
    string player1, player2;
    std::cout << "\n Welcome to the Tic-Tac-Toe game! Have fun.\n\n";
    std::cout << "Enter the name of the first player: ";
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