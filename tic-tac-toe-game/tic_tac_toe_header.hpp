// including libraries and extensions------------------------------------------------------------------------------
#include <vector>
using namespace std;

// calling function declarations-----------------------------------------------------------------------------------
void initializer(std::vector<char> grid);
bool rules(std::vector<char> grid, bool tie);
void play(char token, std::string player1, std::string player2, std::vector<char> grid);
