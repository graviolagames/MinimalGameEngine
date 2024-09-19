#pragma once
/*
    Interface for the game engine main loop.
    Trough this interface, we can fire an interaction 
    of the core game loop
*/
class iCoreGameLoop{
    public:
        virtual void ProcessFrame()=0;
};
