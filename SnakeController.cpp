

#include <iostream>
#include "SnakeController.h"

SnakeController::SnakeController(SnakeView &v, SnakeLogic &s):view(v), snake(s)
{}



void SnakeController::handleEvent(sf::Event &event) {

        if (event.type == sf::Event::KeyPressed) {

            if (event.key.code == sf::Keyboard::Up) {
                snake.turnUp();
            }
            if (event.key.code == sf::Keyboard::Down) {
                snake.turnDown();
            }
            if (event.key.code == sf::Keyboard::Right) {
                snake.turnRight();
            }
            if (event.key.code == sf::Keyboard::Left) {
                snake.turnLeft();
            }
            if (event.key.code == sf::Keyboard::R) {
                view.setGreen();
                snake.setGame();
                snake.setAppleCounter();
            }
            if (event.key.code == sf::Keyboard::Space) {
                finished=true;
            }
        }

}

