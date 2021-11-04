#pragma once

#include <SFML/Graphics.hpp>
#include <map>
#include <string>

using std::string;
namespace assets
{
    extern std::map<string, sf::Sprite> sprites;
    extern int sq_size;
    void loadFromSheet(const string &folder_path);
    sf::Sprite &getSprite(const string &name);
};