#include <vector>
using namespace std;
#include <string>

void initializer(std::string player1, std::string player2, std::vector<char> grid);
bool rules(std::vector<char> grid, bool tie);
void play(char token, std::string player1, std::string player2, int row, int column,
          std::vector<char> grid);
