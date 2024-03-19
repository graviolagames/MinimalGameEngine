#ifndef WINDOW_MANAGER_HPP
#define WINDOW_MANAGER_HPP
#include "GameEngine/iWindowHandler.hpp"
class WindowManager{
    public:
        WindowManager(iWindowHandler *windowHandler): mWindowHandler(windowHandler) {}
    protected:
        iWindowHandler *mWindowHandler = nullptr;

};
#endif //WINDOW_MANAGER_HPP