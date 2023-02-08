#include <iostream>
#include <vector>

class Profile
{

private:
    std::string name;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;
    int age;

public:
    // this is called constructor
    Profile(std::string new_name, int new_age, std::string new_city,
            std::string new_country, std::string new_pronouns = "they/them");
};