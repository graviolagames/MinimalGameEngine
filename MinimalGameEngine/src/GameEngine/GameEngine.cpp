#include "GameEngine/GameEngine.hpp"
#include "WindowManager/OpenGLWindowManager.hpp"
#include "WindowManager/DummyWindowManager.hpp"
#include <iostream>
GameEngine::GameEngine(SystemConfig systemConfig){
    
    if(systemConfig.graphicsStack==GRAPHICS_STACK::OPEN_GL){
        mWindowManager =  new OpenGLWindowManager(this);
    }
    else{
        mWindowManager =  new DummyWindowManager();
    }
    mInputManager = mWindowManager->GetInputManager();
    
}

GameEngine::~GameEngine(){
    delete mWindowManager;
}

void GameEngine::ProcessFrame(){
    KEY_STATUS escStatus = mInputManager->GetKeyPressed(KEY_VALUE::K_ESCAPE);
    if(mInputManager->GetKeyPressed(KEY_VALUE::K_ESCAPE)==KEY_STATUS::K_PRESSED){
        mWindowManager->StopWindow();
    }
}
