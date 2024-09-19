#pragma once
#include "GameEngine/iCoreGameLoop.hpp"
#include "Input/iInputManager.hpp"
#include "Renderer/iRenderer.hpp"

class WindowManager{
    protected:
        const unsigned int DEFAULT_SCREAN_WIDTH = 800;
        const unsigned int DEFAULT_SCREAN_HEIGHT = 600;
        iCoreGameLoop *mGameLoop;
        iInputManager *mInputManager;
        iRenderer *mRenderer;
        virtual void PoolEvents() = 0;
    public:
        WindowManager(iCoreGameLoop *gameLoop):mGameLoop(gameLoop){};
        virtual void StartWindow() = 0;
        virtual void StopWindow() = 0;
        virtual iInputManager *GetInputManager() = 0;
        virtual iRenderer *GetRenderer() = 0;
};