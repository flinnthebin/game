#include "headers/MainMenu.h"
#include <filesystem>
#include <iostream>

constexpr unsigned int fontSize = 24; // pixels
const sf::Color fontColor = sf::Color::White ;
constexpr float x = 100;
constexpr float y = 100;
constexpr const char* menuFontFile = "UbuntuMono-R.ttf";
constexpr const char* highlightFontFile = "UbuntuMono-B.ttf";

MainMenu::MainMenu(sf::RenderWindow& window) : window(window) {
  std::filesystem::path execPath  = std::filesystem::current_path();
  std::filesystem::path menuPath = execPath / ".." / "src" / "reqs" / "font" / menuFontFile;
  std::filesystem::path highlightPath = execPath / ".." / "src" / "reqs" / "font" / highlightFontFile;
  
  sf::Font menuFont;
  sf::Font highlightFont;

  if (!menuFont.loadFromFile(menuPath.string())) {
    std::cerr << "Failed to load font" << menuFontFile << "\nCheck font directory game/src/reqs/font" << std::endl;
  }

  if (!highlightFont.loadFromFile(highlightPath.string())) {
    std::cerr << "Failed to load font" << highlightFontFile << "\nCheck font directory game/src/reqs/font" << std::endl;
  }

  newGame = menuObjectBuilder("New Game", highlightFont, fontSize, fontColor, x, y);
  enterPassword = menuObjectBuilder("Enter Password", menuFont, fontSize, fontColor, (x * 2), (y * 2));

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
  window.draw(newGame);
  window.draw(enterPassword);
}
