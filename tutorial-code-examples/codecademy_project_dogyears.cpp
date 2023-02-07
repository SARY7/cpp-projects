#include <iostream>

int main()
{
    // the age of my dog
    int dog_age = 3;
    int early_years = 21;                        // the first two years of a dog's life count as 21 human years.
    int later_years = (dog_age - 2) * 4;         // each following year counts as 4 human years.
    int human_years = later_years + early_years; // this is dogs age in human frame.

    std::cout << "My name is jessi! I am " << human_years << " years old in human years.\n";
}