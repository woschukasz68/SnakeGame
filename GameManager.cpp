#include "GameManager.h"

GameManager::GameManager(IntroController &ic, SnakeController &sc, ScoreController &scc)
        : introController(ic), snakeController(sc), scoreController(scc)
{

    state = INTRO;
}



void GameManager::updateState() {
    switch (state) {
        case INTRO:
            if (introController.isFinished())
                state = GAME;
            break;
        case GAME:
            if (snakeController.isFinished())
                state = SCORE;
            break;
        case SCORE:
            // oops - tu powinniśmy jakoś zamknąć aplikację
            break;
    }
}

void GameManager::handleEvent(sf::Event &event)
{
    switch (state) {
        case INTRO:
            introController.handleEvent(event);
            break;
        case GAME:
            snakeController.handleEvent(event);
            break;
        case SCORE:
            scoreController.handleEvent(event);
            break;
    }
    updateState();
}

void GameManager::draw(sf::RenderWindow &win) {
    // updateState() ??
    switch (state) {
        case INTRO:
            introController.draw(win);
            break;
        case GAME:
            snakeController.draw(win);
            break;
        case SCORE:
            scoreController.draw(win);
            break;
    }
}

bool GameManager::endofIntro()
{
    if(state==GAME)
        return true;
}