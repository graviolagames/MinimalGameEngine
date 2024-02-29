#include "GameEngine/GameEngine.hpp"
#include "WindowManager/OpenGLWindowManager.hpp"
#include <iostream>
GameEngine::GameEngine(SystemConfig systemConfig){
    mWindowManager =  new OpenGLWindowManager(this);
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