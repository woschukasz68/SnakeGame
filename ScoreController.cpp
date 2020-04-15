
#include "ScoreController.h"

ScoreController::ScoreController(ScoreView &v, sf::RenderWindow &win) : view(v), window(win)
{}

void ScoreController::handleEvent(sf::Event &event) {

    if (event.type == sf::Event::KeyPressed) {

        if (event.key.code == sf::Keyboard::Space) {
            finished=true;
            window.close();
        }
    }
}