#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP

#include "System/SystemConfig.hpp"
#include "WindowManager/WindowManager.hpp"
#include "GameEngine/iGameLoop.hpp"

class GameEngine:public iGameLoop{
    
    public:
            GameEngine(SystemConfig systemConfig);
            ~GameEngine();
            void ProcessFrame();
    private: 
        WindowManager* mWindowManager;

};

#endif //GAME_ENGINE_HPP