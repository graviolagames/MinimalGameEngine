#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP

#include "System/SystemConfig.hpp"

class GameEngine{
    
    public:
            GameEngine(SystemConfig systemConfig);
            ~GameEngine();

    private: 
        SystemConfig mSystemConfig;

};

#endif //GAME_ENGINE_HPP