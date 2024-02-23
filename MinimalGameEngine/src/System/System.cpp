#include "System/System.hpp"
#include "WindowManager/OpenGLWindowManager.hpp"

System::System(SystemConfig systemConfig){
    mSystemConfig = systemConfig;
    mWindowManager = std::make_shared<OpenGLWindowManager>();
}
System::~System(){
    
}

std::shared_ptr<iWindowController> System::GetWindowController(){
    return mWindowManager;
}