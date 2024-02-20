#include "System/System.hpp"

System::System(SystemConfig systemConfig){
    mSystemConfig = systemConfig;
    mWindowManager = std::make_unique<OpenGLWindowManager>();
}
System::~System(){
    
}