#include <iostream>
#include <cmath>

int main()
{
    int year;

    std::cout << "Enter the year: ";
    std::cin >> year;

    // if (year % 4 == 0)
    // {
    //     std::cout << year << " is a leap year.\n";
    // }
    // else if (year % 100 == 0 && year % 400 == 0)
    // {
    //     std::cout << year << " is a leap year.\n";
    // }
    // else if (year % 400 == 0)
    // {
    //     std::cout << year << " is a leap year.\n";
    // }
    // else
    // {
    //     std::cout << year << " is not a leap year.\n";
    // }

    //// another way of using conditionals, uncomment to run
    if (year % 4 == 0 && year % 100 == 0 || year % 400 == 0)
    {
        std::cout << year << " is a leap year.\n";
    }
    else
    {
        std::cout << year << " is not a leap year.\n";
    }
}