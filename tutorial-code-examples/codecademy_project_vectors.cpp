#include <iostream>
#include <vector>
int main()
{
    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

    int odd_product = 1;
    int even_sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even_sum += numbers[i];
        }
        else
        {
            odd_product = odd_product * numbers[i];
        }
    }

    std::cout << "Sum of even numbers is: " << even_sum;
    std::cout << "\nSum of odd numbers is: " << odd_product;
}