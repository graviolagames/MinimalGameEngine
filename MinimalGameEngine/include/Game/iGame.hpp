#pragma once

class iGame{
    public:
        //Called when the game has started
        virtual void OnGameStarted()=0;
        
        //Called when the game level has started
        virtual void OnLevelStarted()=0;

};