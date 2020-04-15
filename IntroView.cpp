
#include "IntroView.h"

IntroView::IntroView()
{
    backgrnd.loadFromFile( "background.jpg" );
    bg.setTexture(backgrnd);

    rectstart.setSize(sf::Vector2f(600,350));
    rectstart.setPosition(100,100);
    rectstart.setFillColor(sf::Color(156,177,186));
    rectstart.setOutlineThickness(5);
    rectstart.setOutlineColor(sf::Color(16,18,27));

    if (!font1.loadFromFile("Akronim.ttf")) {
        abort();
    }

    if (!font2.loadFromFile("Stylish.ttf")) {
        abort();
    }

    snake.setFont(font1);
    snake.setString("SNAKE");
    snake.setPosition(270, -10);
    snake.setFillColor(sf::Color::White);
    snake.setCharacterSize(100);

    click.setFont(font2);
    click.setString("Click 'Space' to start game... ");
    click.setPosition(250, 400);
    click.setFillColor(sf::Color::White);
    click.setCharacterSize(30);

    ster.setFont(font2);
    ster.setString("Controller settings ");
    ster.setPosition(230, 90);
    ster.setFillColor(sf::Color::White);
    ster.setCharacterSize(45);


    ster1.setFont(font2);
    ster1.setString("arrow UP - move up ");
    ster1.setPosition(120, 150);
    ster1.setFillColor(sf::Color::White);
    ster1.setCharacterSize(25);

    ster2.setFont(font2);
    ster2.setString("arrow LEFT - move left ");
    ster2.setPosition(120, 185);
    ster2.setFillColor(sf::Color::White);
    ster2.setCharacterSize(25);

    ster3.setFont(font2);
    ster3.setString("arrow RIGHT - move right ");
    ster3.setPosition(120, 220);
    ster3.setFillColor(sf::Color::White);
    ster3.setCharacterSize(25);

    ster4.setFont(font2);
    ster4.setString("arrow DOWN - move down ");
    ster4.setPosition(120, 255);
    ster4.setFillColor(sf::Color::White);
    ster4.setCharacterSize(25);

    ne.setFont(font2);
    ne.setString("r - restart game ");
    ne.setPosition(120, 290);
    ne.setFillColor(sf::Color::White);
    ne.setCharacterSize(25);

};

void IntroView::draw(sf::RenderWindow &win)
{
    win.draw(bg);
    win.draw(rectstart);

    win.draw(snake);
    win.draw(click);
    win.draw(ster);
    win.draw(ster1);
    win.draw(ster2);
    win.draw(ster3);
    win.draw(ster4);
    win.draw(ne);
};
