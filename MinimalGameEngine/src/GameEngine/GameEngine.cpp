#include "GameEngine/GameEngine.hpp"
#include <memory>

GameEngine::GameEngine(SystemConfig systemConfig){
    mSystem = std::make_unique<System>(systemConfig);
}

GameEngine::~GameEngine(){
    
}

void GameEngine::StartGame(){
    
}