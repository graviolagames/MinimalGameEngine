#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP

#include "System/SystemConfig.hpp"
#include "GameEngine/iWindowHandler.hpp"
#include "WindowManager/WindowManager.hpp"


class GameEngine:public iWindowHandler{
    
    public:
            GameEngine(SystemConfig systemConfig);
            ~GameEngine();
            void StartGame();
            ///////////////////////
            //From iwindowHandler//
            ///////////////////////
            void HandleKeyboardEvent();
            void HandleWindowResize();
    private: 
        WindowManager* mWindowManager;

};

#endif //GAME_ENGINE_HPP