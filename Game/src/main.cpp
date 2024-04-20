
#include "GameEngine/GameEngine.hpp"
#include <iostream>
int main(){
    SystemConfig systemConfig {GRAPHICS_STACK::OPEN_GL};
    GameEngine engine(systemConfig);
    if(!engine.StartEngine()){
        std::cerr << "Error starting the game engine." << std::endl;
        return 1;
    }
    return 0;
}