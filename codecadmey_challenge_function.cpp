#include <iostream>
#include <cmath>
#include <vector>

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

int tenth_power(int num)
{
    return pow(num, 10);
}

std::vector<int> first_three_multiples(int num)
{
    std::vector<int> multiple{};
    multiple.push_back(num * 1);
    multiple.push_back(num * 2);
    multiple.push_back(num * 3);
    return multiple;
}

std::string needs_water(int days, bool is_succulent)
{
    if (is_succulent && days <= 12)
    {
        return "Dont water the plant!\n";
    }
    else if (!is_succulent && days >= 3)
    {
        return "Time to water the plant.\n";
    }
    else if (is_succulent && days >= 13)
    {
        return "Go ahead and give the plant a little water.\n";
    }
    else
    {
        return "Dont  water the plant!\n";
    }
}

bool is_palindrome(std::string text)
{
    std::string reverse;
    for (int i = text.size() - 1; i >= 0; i--) // Dont forget minus 1
    {
        reverse.push_back(text[i]);
    }
    std::cout << reverse << "\n";
    if (reverse == text)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    introduction("John", "Doe");

    std::cout << "\n"
              << average(42, 24) << "\n";

    std::cout << tenth_power(2) << "\n";

    for (int element : first_three_multiples(8))
    {
        std::cout << element << "\n";
    }

    for (int i = 0; i < first_three_multiples(8).size(); i++)
    {
        std::cout << first_three_multiples(8)[i] << "\n";
    }

    std::cout << needs_water(10, false) << "\n";

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
}