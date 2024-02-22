#ifndef SYSTEM_HPP
#define SYSTEM_HPP
#include "System/SystemConfig.hpp"
#include "WindowManager/OpenGLWindowManager.hpp"
#include <memory>
class System{
    SystemConfig mSystemConfig;
    public:
        std::unique_ptr<OpenGLWindowManager> mWindowManager;
        System(SystemConfig systemConfig);
        ~System();

};
#endif //SYSTEM_HPP