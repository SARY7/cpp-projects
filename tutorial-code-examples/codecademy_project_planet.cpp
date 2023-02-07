#include <iostream>
#include <string>
using namespace std;

int main()
{
    double weight_earth;
    int planet_number;
    double gravity;
    double weigth_planet;
    string planet;

    std::cout << "Whats is your weight on earth: ";
    std::cin >> weight_earth;

    std::cout << "\n";
    std::cout << "|  #  |    Planet   |\n";
    std::cout << "|  1  |    Mercury  |\n";
    std::cout << "|  2  |    Venus    |\n";
    std::cout << "|  3  |    Mars     |\n";
    std::cout << "|  4  |    Jupyter  |\n";
    std::cout << "|  5  |    Saturn   |\n";
    std::cout << "|  6  |    uranus   |\n";
    std::cout << "|  7  |    Neptune  |\n";
    std::cout << "\n";

    std::cout << "enter the number of the planet you wana travel to: ";
    std::cin >> planet_number;

    switch (planet_number)
    {
    case 1:
        gravity = 0.38;
        planet = "Mercury";
        break;
    case 2:
        gravity = 0.91;
        planet = "Venus";
        break;
    case 3:
        gravity = 0.38;
        planet = "Mars";
        break;
    case 4:
        gravity = 2.34;
        planet = "Jupiter";
        break;
    case 5:
        gravity = 1.06;
        planet = "Saturn";
        break;
    case 6:
        gravity = 0.92;
        planet = "Uranus";
        break;
    case 7:
        gravity = 1.19;
        planet = "Neptune";
        break;
    default:
        break;
    }

    std::cout << "Your weight on " << planet << " is " << gravity * weight_earth;
}