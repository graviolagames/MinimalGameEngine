#pragma once
#include "System/SystemConfig.hpp"
#include "WindowManager/WindowManager.hpp"
#include "GameEngine/iCoreGameLoop.hpp"
#include "GameEngine/iGameInitializer.hpp"
#include "GameEngine/Mesh/Mesh.hpp"
#include "GameEngine/DataType/ResourceManager.hpp"
#include "Game/iGame.hpp"


class GameEngine:public iCoreGameLoop,iGameInitializer{
    
    public:
            GameEngine(SystemConfig systemConfig,iGame *game);
            ~GameEngine();
            bool StartEngine();

            //Implementation of iCoreGameLoop//
            void ProcessFrame();
            
            //Implementation of iGameInitializer
            MeshResourceManager *GetMeshResourceManager();
            
    private:
        iGame* mGame; 
        WindowManager* mWindowManager;
        iInputManager* mInputManager;
        iRenderer* mRenderer;
        MeshResourceManager *mMeshResourceManager;
        
};
