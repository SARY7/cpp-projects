#include <iostream>

std::string it_service()
{
    std::string on_off_attempt;
    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";

    std::cin >> on_off_attempt;
    return on_off_attempt;
}

int main()
{
    std::string on_off_attempt;
    on_off_attempt = it_service();
}