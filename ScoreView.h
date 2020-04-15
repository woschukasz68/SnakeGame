#ifndef SNAKE_SCOREVIEW_H
#define SNAKE_SCOREVIEW_H

#include <SFML/Graphics.hpp>
#include "SnakeLogic.h"



class ScoreView {
    sf::Texture backgrnd;
    sf::Sprite bg;
    sf::RectangleShape rectstart;
    sf::Text sn,score,head,click;
    sf::Font font1,font2;
    SnakeLogic &snake;
public:
    ScoreView(SnakeLogic &sl);

    void draw(sf::RenderWindow &win);
};


#endif //SNAKE_SCOREVIEW_H
