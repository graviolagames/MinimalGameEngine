#pragma once

#include "Game/iGame.hpp"
#include "GameEngine/iGameInitializer.hpp"
class ExampleGame:public iGame{

public:
    ExampleGame();
    ~ExampleGame();

     //Called when the game has started
    void OnGameStarted(iGameInitializer *gameInitializer);
        
    //Called when the game level has started
    void OnLevelStarted();
};