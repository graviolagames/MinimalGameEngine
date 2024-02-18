#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP

#include "System/SystemConfig.hpp"
#include "System/System.hpp"
#include <memory>

class GameEngine{
    
    public:
            GameEngine(SystemConfig systemConfig);
            ~GameEngine();
            void StartGame();
    private: 
        std::unique_ptr<System> mSystem;

};

#endif //GAME_ENGINE_HPP