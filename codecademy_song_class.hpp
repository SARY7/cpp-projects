#include <string>

class Song
{
    std::string title;
    std::string artist;

public:
    // this is called constructor
    Song(std::string new_title, std::string new_artist);

    std::string get_title();
    std::string get_artist();
};