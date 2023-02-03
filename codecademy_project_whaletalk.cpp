#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string input_string = "turpentine and turtles.";

    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    std::vector<char> result;

    for (int i = 0; i < input_string.size(); i++)
    {
        for (int j = 0; j < vowels.size(); j++)
        {
            if (input_string[i] == vowels[j])
            {
                result.push_back(input_string[i]);

                if (input_string[i] == 'e' || input_string[i] == 'u')
                {
                    result.push_back(input_string[i]);
                }
            }
        }
    }

    for (int k = 0; k < result.size(); k++)
    {
        std::cout << result[k];
    }
    std::cout << "\n";
}