#include "GameEngine/GameEngine.hpp"
#include "WindowManager/OpenGLWindowManager.hpp"
#include "WindowManager/DummyWindowManager.hpp"
#include <iostream>
GameEngine::GameEngine(SystemConfig systemConfig){
    if(systemConfig.graphicsStack==GRAPHICS_STACK::OPEN_GL){
        mWindowManager =  new OpenGLWindowManager(this);
    }
    else{
        mWindowManager =  new DummyWindowManager(this);
    }
}

GameEngine::~GameEngine(){
    delete mWindowManager;
}

void GameEngine::StartGame(){
    //[TEST]
    mWindowManager->SwapBuffer();
}

///////////////////////
//From iwindowHandler//
///////////////////////

void GameEngine::HandleKeyboardEvent(){
    std::cout<<"Keyboard event handled"<<std::endl;
}

void GameEngine::HandleWindowResize(){
    std::cout<<"Window resize handled"<<std::endl;
}