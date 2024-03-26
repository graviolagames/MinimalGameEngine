#ifndef WINDOW_MANAGER_HPP
#define WINDOW_MANAGER_HPP
#include "GameEngine/iGameLoop.hpp"
class WindowManager{
    protected:
        const unsigned int DEFAULT_SCREAN_WIDTH = 800;
        const unsigned int DEFAULT_SCREAN_HEIGHT = 600;
        iGameLoop *mGameLoop;
        void StartWindow(){};
        void PoolEvents(){};
    public:
        WindowManager(iGameLoop *gameLoop):mGameLoop(gameLoop){};
        void StopWindow();
        
};
#endif //WINDOW_MANAGER_HPP