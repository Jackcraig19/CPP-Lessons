#include "game.h"
#include "display.h"
#include <string.h>
#include <SFML/Graphics.hpp>

using std::string;

Game::Game(int w, int h, string t) : display(w, h, t) {

}

void Game::start() {
    while (true) {
        tick();
        render();
    }
}

void Game::tick() {
    sf::Event closeEvent;
    display.getWindow().pollEvent(closeEvent);
    if (closeEvent.type == sf::Event::Closed) {
        shouldShutdown = true;
    }
    // Tick world / entity / whatever
}

void Game::render() {
    display.reset();
    
    // Render world / entity / whatever

    display.render();
}