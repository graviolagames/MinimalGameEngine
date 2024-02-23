#include "GameEngine/GameEngine.hpp"
GameEngine::GameEngine(SystemConfig systemConfig){
    mSystem = std::make_unique<System>(systemConfig);
}

GameEngine::~GameEngine(){
    
}

void GameEngine::StartGame(){
    //[TEST]
    std::shared_ptr<iWindowController> windowController = mSystem.GetWindowController();
    windowController.SwapBuffer();
}