#include "headers/InputManager.h"
#include "headers/GameState.h"

extern GameState* currState;

bool InputManager::keyPress(sf::Keyboard::Key key) const {
  return sf::Keyboard::isKeyPressed(key);
}

bool InputManager::moveLeft() const {
  return keyPress(sf::Keyboard::H);
}

bool InputManager::moveRight() const {
  return keyPress(sf::Keyboard::L);
}

bool InputManager::moveUp() const {
  return keyPress(sf::Keyboard::K);
}

bool InputManager::moveDown() const {
  return keyPress(sf::Keyboard::J);
}
