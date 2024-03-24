#include "GameEngine/GameEngine.hpp"
#include "WindowManager/OpenGLWindowManager.hpp"
#include "WindowManager/DummyWindowManager.hpp"
#include <iostream>
GameEngine::GameEngine(SystemConfig systemConfig){
    
    if(systemConfig.graphicsStack==GRAPHICS_STACK::OPEN_GL){
        mWindowManager =  new OpenGLWindowManager();
    }
    else{
        mWindowManager =  new DummyWindowManager();
    }
    
}

GameEngine::~GameEngine(){
    delete mWindowManager;
}
