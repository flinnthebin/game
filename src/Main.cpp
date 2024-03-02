#include <SFML/Graphics.hpp>
#include "headers/GameState.h"
#include "headers/Command.h"
#include "headers/InputCommands.h"
#include "headers/InputManager.h"
#include <memory>

int main() {
  sf::RenderWindow window(sf::VideoMode(800,600), "Game");
  std::unique_ptr<GameState> currState;

  while (window.isOpen()) {
    sf::Event event;
    while(window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear();
    currState = std::make_unique<MainMenuState>();
    
  //TODO: Draw Graphics here

    window.display();
  }
  return 0;
}