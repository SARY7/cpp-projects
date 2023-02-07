#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    double root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
    double root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

    std::cout << "Roots are " << root1 << " and " << root2;
}