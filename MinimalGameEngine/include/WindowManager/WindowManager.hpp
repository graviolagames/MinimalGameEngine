#ifndef WINDOW_MANAGER_HPP
#define WINDOW_MANAGER_HPP
#include "GameEngine/iGameLoop.hpp"
#include "Input/iInputManager.hpp"
#include "Renderer/iRenderer.hpp"

class WindowManager{
    protected:
        const unsigned int DEFAULT_SCREAN_WIDTH = 800;
        const unsigned int DEFAULT_SCREAN_HEIGHT = 600;
        iGameLoop *mGameLoop;
        iInputManager *mInputManager;
        iRenderer *mRenderer;
        virtual void PoolEvents() = 0;
    public:
        WindowManager(iGameLoop *gameLoop):mGameLoop(gameLoop){};
        virtual void StartWindow() = 0;
        virtual void StopWindow() = 0;
        virtual iInputManager *GetInputManager() = 0;
        virtual iRenderer *GetRenderer() = 0;
};
#endif //WINDOW_MANAGER_HPP