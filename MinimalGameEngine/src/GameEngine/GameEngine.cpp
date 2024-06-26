#include "GameEngine/GameEngine.hpp"
#include "WindowManager/OpenGLWindowManager.hpp"
#include <iostream>
GameEngine::GameEngine(SystemConfig systemConfig){
    mWindowManager = NULL;
    mWindowManager =  new OpenGLWindowManager(this);
    if(mWindowManager){
        mInputManager = mWindowManager->GetInputManager();
        mRenderer = mWindowManager->GetRenderer();
    }
     
}

GameEngine::~GameEngine(){
    if(mWindowManager)
        delete mWindowManager;
}

bool GameEngine::StartEngine(){
    if(mWindowManager){
        mWindowManager->StartWindow();
        return true;
    }
    return false;
}

void GameEngine::ProcessFrame(){
    if(mInputManager->GetKeyStatus(KEY_VALUE::K_ESCAPE)==KEY_STATUS::K_PRESSED){
        mWindowManager->StopWindow();
    }
    mRenderer->ClearScreen();
}
