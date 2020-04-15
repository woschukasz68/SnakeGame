#include <SFML/Graphics.hpp>
#include <iostream>
#include "GameManager.h"
#include "IntroController.h"
#include "IntroView.h"
#include "SnakeView.h"
#include "SnakeController.h"
//#include "SnakeLogic.h"
#include "ScoreController.h"
#include "ScoreView.h"



int main() {

    sf::RenderWindow win(sf::VideoMode(800, 600), "SFML window");

    win.setFramerateLimit(60);

    SnakeLogic sl;
    IntroView iv;
    IntroController ic(iv);
    SnakeView sv(sl);
    SnakeController sc(sv,sl);
    ScoreView svv(sl);
    ScoreController scc(svv,win);
    GameManager gm(ic, sc, scc);

    while (win.isOpen()) {

        sf::Event event;
        while (win.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                win.close();

            gm.handleEvent(event);
        }
        if(gm.endofIntro()==true)
        sl.gameplay();

        win.clear();


        gm.draw(win);


        win.display();
    }

    return EXIT_SUCCESS;
}