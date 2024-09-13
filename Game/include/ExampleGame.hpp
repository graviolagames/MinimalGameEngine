#pragma once

#include "Game/iGame.hpp"

class ExampleGame:public iGame{

public:
    ExampleGame();
    ~ExampleGame();

     //Called when the game has started
    void OnGameStarted();
        
    //Called when the game level has started
    void OnLevelStarted();
};