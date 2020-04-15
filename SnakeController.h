
#ifndef SNAKE_SNAKECONTROLLER_H
#define SNAKE_SNAKECONTROLLER_H

#include <SFML/Graphics.hpp>
#include "SnakeView.h"
#include "SnakeLogic.h"


class SnakeController {
    bool finished = false;
    sf::Clock clk;
    sf::Time tim;

    SnakeView &view;
    SnakeLogic &snake;

public:
    explicit SnakeController(SnakeView & sv, SnakeLogic &sl);
    void handleEvent(sf::Event &event);


    // no need to change this
    void draw (sf::RenderWindow & win) { view.draw(win); }
    bool isFinished() const { return finished;}
};


#endif //SNAKE_SNAKECONTROLLER_H
