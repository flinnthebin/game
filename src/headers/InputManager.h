#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H
#include <SFML/Window.hpp>

class InputManager {
  public:
    bool keyPress(sf::Keyboard::Key key) const;

    bool moveLeft() const;
    bool moveRight() const;
    bool moveUp() const;
    bool moveDown() const;

};
#endif
