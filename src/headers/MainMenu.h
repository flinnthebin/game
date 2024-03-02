#ifndef MAINMENU_H
#define MAINMENU_H

#include <SFML/Graphics.hpp>

class MainMenu {
  public:
    MainMenu(sf::RenderWindow& window);
    void handleInput();
    void update();
    void draw();
    sf::Text menuObjectBuilder(const std::string& text, const sf::Font& font, unsigned int size, sf::Color color, float x, float y);
    
  private:
    sf::RenderWindow& window;
    sf::Font menuFont;
    sf::Font highlightFont;
    sf::Text newGame;
    sf::Text enterPassword;
};

#endif
