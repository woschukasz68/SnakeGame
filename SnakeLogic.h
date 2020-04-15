
#ifndef SNAKE_SNAKELOGIC_H
#define SNAKE_SNAKELOGIC_H
#include <SFML/Graphics.hpp>
#include <time.h>
#include <cstdlib>
#include <vector>

struct Snake{
    int x,y;
};

struct Apple{
    int x,y;
};

class SnakeLogic {
    Snake snake[400];
    Apple apple;
    int direction;
    sf::Clock clk;
    int length;
    sf::Time tim;
    int appleCounter;
public:
    SnakeLogic();

    int moveSnake();
    void setGame();
    void eatApple();
    bool endGame();
    int getLength();
    void gameplay();
    void turnUp();
    void turnLeft();
    void turnRight();
    void turnDown();
    const int getSnakePosX(int w);
    const int getSnakePosY(int w);
    int getApplePosX();
    int getApplePosY();
    int setAppleCounter();
    int getAppleCounter();
};


#endif //SNAKE_SNAKELOGIC_H
