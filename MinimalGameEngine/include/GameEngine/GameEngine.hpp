#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP

#include "System/SystemConfig.hpp"
#include "WindowManager/WindowManager.hpp"


class GameEngine{
    
    public:
            GameEngine(SystemConfig systemConfig);
            ~GameEngine();
            void StartGame();
    private: 
        WindowManager* mWindowManager;

};

#endif //GAME_ENGINE_HPP