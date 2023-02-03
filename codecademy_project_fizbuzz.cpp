#include <iostream>
#include <cmath>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        // first do 15 then 5 and 3, its tricky, do you get it?
        if (i % 15 == 0 && i % 3 == 0)
        {
            std::cout << "FizzBuzz\n";
        }
        else if (i % 5 == 0)
        {
            std::cout << "Buzz\n";
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz\n";
        }
        else
        {
            std::cout << i << "\n";
        }
    }
}