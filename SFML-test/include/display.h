#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>

using std::string;

// Handles holding the window and all settings relating to it
class Display {
    sf::RenderWindow window;
    int w;
    int h;
public:
    Display(const int& w, const int& h, const string& title);
    void render();
    void reset();
    sf::RenderWindow& getWindow();
};