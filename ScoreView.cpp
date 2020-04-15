

#include <iostream>
#include "ScoreView.h"

ScoreView::ScoreView(SnakeLogic &s): snake(s)
{
    backgrnd.loadFromFile( "background.jpg" );
    bg.setTexture(backgrnd);

    if (!font1.loadFromFile("Akronim.ttf")) {
        abort();
    }

    if (!font2.loadFromFile("Stylish.ttf")) {
        abort();
    }



    sn.setFont(font1);
    sn.setString("SNAKE");
    sn.setPosition(270, -10);
    sn.setFillColor(sf::Color::White);
    sn.setCharacterSize(100);

    head.setFont(font2);
    head.setString("Your Score:");
    head.setPosition(160, 100);
    head.setFillColor(sf::Color::Red);
    head.setCharacterSize(100);

    score.setFont(font2);
    score.setPosition(320, 120);
    score.setFillColor(sf::Color::Red);
    score.setCharacterSize(250);

    rectstart.setSize(sf::Vector2f(600,350));
    rectstart.setPosition(100,100);
    rectstart.setFillColor(sf::Color(156,177,186));
    rectstart.setOutlineThickness(5);
    rectstart.setOutlineColor(sf::Color(16,18,27));

    click.setFont(font2);
    click.setString("Click 'Space' to end game... ");
    click.setPosition(250, 400);
    click.setFillColor(sf::Color::White);
    click.setCharacterSize(30);
};

void ScoreView::draw(sf::RenderWindow &win)
{
    std::string sc = std::to_string(snake.getAppleCounter());
    score.setString(sc);
    win.draw(bg);
    win.draw(rectstart);
    win.draw(sn);
    win.draw(score);
    win.draw(head);
    win.draw(click);
};