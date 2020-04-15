

#include <iostream>
#include "SnakeView.h"

SnakeView::SnakeView(SnakeLogic &s):snake(s)
{
    size_of_square=25;
    xo=140;
    yo=30;
    width=20;
    height=20;
    rect.setSize(sf::Vector2f(size_of_square, size_of_square));

    if (!font.loadFromFile("Stylish.ttf")) {
        abort();
    }

    backgrnd.loadFromFile( "background.jpg" );
    bg.setTexture(backgrnd);

    rectbg.setSize(sf::Vector2f(538,538));
    rectbg.setPosition(140,30);
    rectbg.setFillColor(sf::Color::White);

    rectsnake.setSize(sf::Vector2f(size_of_square, size_of_square));
    rectsnake.setFillColor(sf::Color::Green);

    rectapple.setSize(sf::Vector2f(size_of_square, size_of_square));
    rectapple.setFillColor(sf::Color::Red);

    res.setFont(font);
    res.setString("Click 'R' to restart |");
    res.setPosition(140, 570);
    res.setFillColor(sf::Color::White);
    res.setCharacterSize(20);

    en.setFont(font);
    en.setString("| Click 'Space' to go to score");
    en.setPosition(455, 570);
    en.setFillColor(sf::Color::White);
    en.setCharacterSize(20);

};

void SnakeView::draw(sf::RenderWindow &win)
{
    win.draw(bg);
    win.draw(rectbg);
    win.draw(res);
    win.draw(en);

    for(int i=xo;i<width*size_of_square+xo+width*2;i+=(size_of_square+2)){
        for(int j=yo;j<height*size_of_square+yo+height*2;j+=(size_of_square+2))
        {
            rect.setPosition(i,j);
            rect.setFillColor(sf::Color::Black);
            win.draw(rect);
        }
    }

    int a=xo+size_of_square*snake.getApplePosX()+snake.getApplePosX()*2;
    int b= yo+size_of_square*snake.getApplePosY()+snake.getApplePosY()*2;


    rectapple.setPosition(a, b);
    win.draw(rectapple);


    int c,d;
    for(int i=0; i<snake.getLength();i++)
    {
        c=xo+snake.getSnakePosX(i)*size_of_square+2*snake.getSnakePosX(i);
        d=yo+snake.getSnakePosY(i)*size_of_square+2*snake.getSnakePosY(i);
        rectsnake.setPosition(c,d );

        if(snake.endGame()==true)
        {
            rectsnake.setFillColor(sf::Color::Red);
        }


        if(snake.getSnakePosX(i)>=0 && snake.getSnakePosX(i)<20 && snake.getSnakePosY(i)>=0 && snake.getSnakePosY(i)<20)
            win.draw(rectsnake);
    }

};

void SnakeView::setGreen()
{
    rectsnake.setFillColor(sf::Color::Green);
}