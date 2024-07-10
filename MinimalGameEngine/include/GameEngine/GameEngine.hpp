#pragma once
#include "System/SystemConfig.hpp"
#include "WindowManager/WindowManager.hpp"
#include "GameEngine/iGameLoop.hpp"
#include "GameEngine/D3Model/D3Model.hpp"
#include "GameEngine/DataType/ResourceManager.hpp"

class GameEngine:public iGameLoop{
    
    public:
            GameEngine(SystemConfig systemConfig);
            ~GameEngine();
            bool StartEngine();
            void ProcessFrame();
    private: 
        WindowManager* mWindowManager;
        iInputManager* mInputManager;
        iRenderer* mRenderer;
        ResourceManager<D3Model> *D3ModelManager;
        

};
