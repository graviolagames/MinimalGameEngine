
#include "GameEngine/GameEngine.hpp"

int main(){
    SystemConfig systemConfig {GRAPHICS_STACK::OPEN_GL};
    GameEngine engine(systemConfig);
    engine.StartEngine();
    return 0;
}