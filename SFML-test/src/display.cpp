#include "display.h"
#include <SFML/Graphics.hpp>
#include <string.h>

using std::string;

Display::Display(const int& w, const int& h, const string& title) : window(sf::VideoMode(w, h), title) {
    this -> w = w;
    this -> h = h;
}

void Display::render() {
    window.display();
}

void Display::reset() {
    window.clear();
}

sf::RenderWindow& Display::getWindow() {
    return window;
}