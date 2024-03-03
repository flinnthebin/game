#include <iostream>
#include <cassert>
#include "headers/MainMenu.h"
#include "headers/UbuntuMonoRegular.h"
#include "headers/UbuntuMonoBold.h"

constexpr unsigned int fontSize = 24; // pixels
const sf::Color fontColor = sf::Color::White ;
constexpr float x = 100;
constexpr float y = 100;

MainMenu::MainMenu(sf::RenderWindow& window) : window(window) {
  
  sf::Font menuFont;
  sf::Font highlightFont;
  std::cout << "variables declared" << std::endl;

  bool loadedMenuFont = this->menuFont.loadFromMemory(UbuntuMono_R_ttf, UbuntuMono_R_ttf_len);
  assert(loadedMenuFont && "Failed to load menu font from memory. Check headers/UbuntuMonoRegular.h");
  std::cout << "menu loaded" << std::endl;

  bool loadedHighlightFont = this->highlightFont.loadFromMemory(UbuntuMono_B_ttf, UbuntuMono_B_ttf_len);
  assert(loadedHighlightFont && "Failed to load highlight font from memory. Check headers/UbuntuMonoBold.h");
  std::cout << "highlight loaded" << std::endl;

  newGame = menuObjectBuilder("New Game", highlightFont, fontSize, fontColor, x, y);
  enterPassword = menuObjectBuilder("Enter Password", menuFont, fontSize, fontColor, x, (y * 2));
  std::cout << "menuObject built" << std::endl;

}

sf::Text MainMenu::menuObjectBuilder(const std::string& text, const sf::Font& font, unsigned int size, sf::Color color, float x, float y) {
  sf::Text menuText;
  menuText.setFont(font);
  menuText.setString(text);
  menuText.setCharacterSize(size);
  menuText.setFillColor(color);
  menuText.setPosition(x, y);
  return menuText;
}

void MainMenu::handleInput() {

}

void MainMenu::update() {

}

void MainMenu::draw() {
  std::cout << "Drawing newGame" << std::endl;
  window.draw(newGame);
  std::cout << "Drawing enterPassword" << std::endl;
  window.draw(enterPassword);
}
