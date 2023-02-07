#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << "\nThis is Magic 8-Ball\n";

    /*
        If you click Save a bunch of times, you will realize that answer doesn’t change.
        For our program to work, we need to get a different random number for each execution.
        To do so, we need to add this line of code before the declaration of answer:
    */
    srand(time(NULL));

    // We want a random number from 0-9. so we use modulus.
    int random = std::rand() % 10;

    switch (random)
    {
    case 0:
        std::cout << "it is certain.\n";
        break;

    case 1:
        std::cout << "Very doubtful.\n";
        break;

    case 2:
        std::cout << "You may rely on it.\n";
        break;

    case 3:
        std::cout << "Most likely.\n";
        break;

    case 4:
        std::cout << "Signs point to yes.\n";
        break;

    case 5:
        std::cout << "Ask again later.\n";
        break;

    case 6:
        std::cout << "Cannot predict now.\n";
        break;

    case 7:
        std::cout << "Don't count on it.\n";
        break;

    case 8:
        std::cout << "My sources say no.\n";
        break;

    case 9:
        std::cout << "Very doubtful.\n";
        break;

    default:
        break;
    }
}