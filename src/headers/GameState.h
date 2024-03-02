#ifndef GAMESTATE_H
#define GAMESTATE_H

class GameState {
  public:
    virtual ~GameState() = default;
    virtual void moveLeft() = 0;
    virtual void moveRight() = 0;
    virtual void moveUp() = 0;
    virtual void moveDown() = 0;
};

class MainMenuState : public GameState {
  public:
    void moveLeft() override;
    void moveRight() override;
    void moveUp() override;
    void moveDown() override;
};

class PlatformerState : public GameState {
  public:
    void moveLeft() override;
    void moveRight() override;
    void moveUp() override;
    void moveDown() override;
};

#endif
