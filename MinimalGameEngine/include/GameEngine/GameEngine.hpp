#pragma once
#include "System/SystemConfig.hpp"
#include "WindowManager/WindowManager.hpp"
#include "GameEngine/iGameLoop.hpp"
#include "GameEngine/Mesh/Mesh.hpp"
#include "GameEngine/DataType/ResourceManager.hpp"
#include "Game/iGame.hpp"

class GameEngine:public iGameLoop{
    
    public:
            GameEngine(SystemConfig systemConfig,iGame *game);
            ~GameEngine();
            bool StartEngine();
            void ProcessFrame();
    private:
        iGame* mGame; 
        WindowManager* mWindowManager;
        iInputManager* mInputManager;
        iRenderer* mRenderer;
        MeshResourceManager *mMeshResourceManager;
        
};
