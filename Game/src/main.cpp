
#include "ExampleGame.hpp"
#include "GameEngine/GameEngine.hpp"
#include <iostream>
#include <memory>
int main(){
    ExampleGame game;
    SystemConfig systemConfig {GRAPHICS_STACK::OPEN_GL};
    GameEngine engine(systemConfig,&game);
    if(!engine.StartEngine()){
        std::cerr << "Error starting the game engine." << std::endl;
        return 1;
    }
    return 0;
}