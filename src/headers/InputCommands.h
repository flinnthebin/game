#ifndef INPUTCOMMANDS_H
#define INPUTCOMMANDS_H

#include "Command.h"
#include "GameState.h"

extern GameState* currState;

class MoveLeftCommand : public Command {
  public:
    void execute() override {
      if (currState) {
        currState->moveLeft();
      }
    }
};

class MoveRightCommand : public Command {
  public:
    void execute() override {
      if (currState) {
        currState->moveRight();
      }
    }
};

class MoveUpCommand : public Command {
  public:
    void execute() override {
      if (currState) {
        currState->moveUp();
      }
    }
};

class MoveDownCommand : public Command {
  public:
    void execute() override {
      if (currState) {
        currState->moveDown();
      }
    }
};

#endif
