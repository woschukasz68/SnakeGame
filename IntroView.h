
#ifndef SNAKE_INTROVIEW_H
#define SNAKE_INTROVIEW_H


#include <SFML/Graphics.hpp>

class IntroView {
    sf::Texture backgrnd;
    sf::Sprite bg;
    sf::RectangleShape rectstart;
    sf::Font font1,font2;
    sf::Text snake,ster,ster1,ster2,ster3,ster4,ne,click;

public:
    IntroView();
    void draw(sf::RenderWindow &win);
};


#endif //SNAKE_INTROVIEW_H
