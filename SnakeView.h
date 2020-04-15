
#ifndef SNAKE_SNAKEVIEW_H
#define SNAKE_SNAKEVIEW_H

#include <SFML/Graphics.hpp>
#include "SnakeLogic.h"

class SnakeView {
    sf::Texture backgrnd;
    sf::Sprite bg;
    sf::RectangleShape rect,rectbg,rectsnake,rectapple;
    SnakeLogic &snake;
    int size_of_square,xo,yo,width,height;
    sf::Text res,en;
    sf::Font font;



public:
    explicit SnakeView(SnakeLogic &sl);
    void draw(sf::RenderWindow &win);
    void setGreen();
};


#endif //SNAKE_SNAKEVIEW_H
