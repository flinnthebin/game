#include <SFML/Graphics.hpp>
#include "headers/GameState.h"
#include "headers/Command.h"
#include "headers/InputCommands.h"
#include "headers/InputManager.h"
#include "headers/MainMenu.h"
#include <memory>
#include <iostream>

int main() {
  sf::RenderWindow window(sf::VideoMode(800,600), "Game");
  MainMenu mainMenu(window);
  std::unique_ptr<GameState> currState = std::make_unique<MainMenuState>();
  

  while (window.isOpen()) {
    sf::Event event;
    while(window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear();
    
    std::cout << "Working" << std::endl;
    mainMenu.draw();
    std::cout << "Segfault" << std::endl;
    
  //TODO: Draw Graphics here

    window.display();
  }
  return 0;
}
