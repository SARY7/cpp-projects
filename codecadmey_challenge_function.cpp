#include <iostream>
#include <cmath>

void introduction(std::string first_name, std::string last_name)
{
    std::cout << "\n"
              << last_name << ", " << first_name << " " << last_name;
}

double average(double num1, double num2)
{
    double ave = (num1 + num2) / 2;
    return ave;
}

int thenth_power(int num)
{
    return pow(num, 10);
}

std::vector first_three_multiples(int num)
{
}

int main()
{
    introduction("John", "Doe");

    std::cout << "\n"
              << average(42, 24) << "\n";

    std::cout << thenth_power(2) << "\n";
}