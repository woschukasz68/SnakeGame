cmake_minimum_required(VERSION 3.13)
project(Snake)
set(CMAKE_CXX_STANDARD 14)
set(SFML_DIR "E:/SFML 2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics window system)
add_executable(Snake main.cpp GameManager.cpp GameManager.h IntroView.cpp IntroView.h IntroController.cpp IntroController.h SnakeView.cpp SnakeView.h SnakeController.cpp SnakeController.h SnakeLogic.cpp SnakeLogic.h ScoreView.cpp ScoreView.h ScoreController.cpp ScoreController.h)
target_link_libraries(Snake sfml-graphics sfml-window sfml-system)
