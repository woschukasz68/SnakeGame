
#ifndef SNAKE_SCORECONTROLLER_H
#define SNAKE_SCORECONTROLLER_H

#include <SFML/Graphics.hpp>
#include "ScoreView.h"


class ScoreController {
    bool finished = false;
    ScoreView & view;

    sf::RenderWindow &window;
public:
    ScoreController(ScoreView & v, sf::RenderWindow &win);
    void handleEvent(sf::Event &event);


    void draw (sf::RenderWindow & win) { view.draw(win); }
    bool isFinished() const { return finished;}
};


#endif //SNAKE_SCORECONTROLLER_H
