#pragma once

#include "display.h"
#include <string.h>
#include <SFML/Graphics.hpp>

using std::string;

class Game {
    Display display;
    bool shouldShutdown = false;
public:
    Game(int w, int h, string t);
    void start();
    void tick();
    void render();
};