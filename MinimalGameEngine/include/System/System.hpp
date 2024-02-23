#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include "System/SystemConfig.hpp"
#include "WindowManager/iWindowManager.hpp"
#include "WindowManager/iWindowController.hpp"
#include <memory>

class System{
    SystemConfig mSystemConfig;
    public:
        std::shared_ptr<iWindowManager> mWindowManager;
        System(SystemConfig systemConfig);
        ~System();

        /* 
            Returns a window controller
        */
        std::shared_ptr<iWindowController> GetWindowController();


};
#endif //SYSTEM_HPP