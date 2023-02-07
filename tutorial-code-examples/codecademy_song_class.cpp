#include <iostream>
#include "codecademy_song_class_header.hpp"

int main()
{

    Song back_to_black("Back to Black", "Amy Winehouse");

    std::cout << back_to_black.get_artist();
    std::cout << back_to_black.get_title();
}