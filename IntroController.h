
#ifndef SNAKE_INTROCONTROLLER_H
#define SNAKE_INTROCONTROLLER_H

#include <SFML/Graphics.hpp>
#include "IntroView.h"


class IntroController {
    bool finished = false;
    IntroView &view;


public:
    IntroController(IntroView & iv);
    void handleEvent(sf::Event &event);

    void draw (sf::RenderWindow & win) { view.draw(win); }
    bool isFinished() const { return finished;}
};


#endif //SNAKE_INTROCONTROLLER_H
