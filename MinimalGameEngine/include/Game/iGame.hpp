#pragma once
#include "GameEngine/iGameInitializer.hpp"
/*
Interface for controlling the main flux of the game
*/
class iGame{
    public:
        //Called when the game has started
        virtual void OnGameStarted(iGameInitializer *gameInitializer)=0;
        
        //Called when the game level has started
        virtual void OnLevelStarted()=0;

};