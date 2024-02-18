#ifndef SYSTEM_HPP
#define SYSTEM_HPP
#include "System/SystemConfig.hpp"
class System{
    SystemConfig mSystemConfig;
    public:
        System(SystemConfig systemConfig);
        ~System();

};
#endif SYSTEM_HPP