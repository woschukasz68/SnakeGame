#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <SFML/Graphics.hpp>
#include "IntroController.h"
#include "SnakeController.h"
#include "ScoreController.h"


class GameManager {
    IntroController &introController;
    SnakeController &snakeController;
    ScoreController &scoreController;

    enum GameState {
        INTRO, GAME, SCORE
    } state;

    void updateState();
public:
    GameManager(IntroController &ic, SnakeController &sc, ScoreController &scc);

    bool endofIntro();
    void draw(sf::RenderWindow &win);

    void handleEvent(sf::Event &event);
};



#endif //SAPER_INTRO_GAMEMANAGER_H
