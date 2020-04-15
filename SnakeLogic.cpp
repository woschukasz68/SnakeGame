


#include <iostream>
#include "SnakeLogic.h"

SnakeLogic::SnakeLogic()
{
    srand(time(NULL));

    length = 4;
    direction = 2;


    apple.x =std::rand()%19;
    apple.y = std::rand()%19;

    snake[0].x=4;
    snake[0].y=10;
    snake[1].x=3;
    snake[1].y=10;
    snake[2].x=2;
    snake[2].y=10;
    snake[3].x=1;
    snake[3].y=10;
    appleCounter=0;
};

void SnakeLogic::setGame()
{
    length = 4;
    direction = 2;


    apple.x =std::rand()%19;
    apple.y = std::rand()%19;

    snake[0].x=4;
    snake[0].y=10;
    snake[1].x=3;
    snake[1].y=10;
    snake[2].x=2;
    snake[2].y=10;
    snake[3].x=1;
    snake[3].y=10;
    appleCounter=0;

}

int SnakeLogic::moveSnake()
{

        for (int i = length; i > 0; --i) {
            snake[i].x = snake[i - 1].x;
            snake[i].y = snake[i - 1].y;
        }
        // direction 1 = lewo
        // direction 3 = gora
        // direction 2 = prawo
        // direction 0 = dol

        if (direction == 0)
            snake[0].y += 1;
        if (direction == 1)
            snake[0].x -= 1;
        if (direction == 2)
            snake[0].x += 1;
        if (direction == 3)
            snake[0].y -= 1;

        return 0;

}

void SnakeLogic::turnUp()
{
    if(direction!=0)
    direction = 3;
}

void SnakeLogic::turnDown()
{
    if(direction!=3)
    direction = 0;
}

void SnakeLogic::turnLeft()
{
    if(direction!=2)
    direction = 1;
}

void SnakeLogic::turnRight()
{
    if(direction!=1)
    direction = 2;
}

void SnakeLogic::eatApple()
{
    if( snake[0].x == apple.x && snake[0].y == apple.y )
    {
        apple.x = std::rand()%19;
        apple.y = std::rand()%19;
        length++;
        appleCounter++;
    }
}

bool SnakeLogic::endGame()
{
    for(int i = 1; i < length; i++ ) {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y)
            return true;
    }

    if(snake[0].x<0 || snake[0].x>=20)
        return true;

    if(snake[0].y<0 || snake[0].y>=20)
        return true;

    else return false;

}

void SnakeLogic::gameplay()
{
    tim = clk.getElapsedTime();
    if (tim.asSeconds() >= 0.15) {

        if(endGame()==true)
        {}

        if(endGame()==false)
        {
            moveSnake();
            eatApple();
            clk.restart();
        }

    }
}

int SnakeLogic::getLength()
{
    return length;
};

const int SnakeLogic::getSnakePosX(int w)
{

    return snake[w].x;
}
const int SnakeLogic::getSnakePosY(int w)
{
    return snake[w].y;
}
int SnakeLogic::getApplePosX()
{
    return apple.x;
}
int SnakeLogic::getApplePosY()
{
    return apple.y;
}

int SnakeLogic::getAppleCounter()
{
    return appleCounter;
}

int SnakeLogic::setAppleCounter()
{
    appleCounter=0;
    return 0;
}