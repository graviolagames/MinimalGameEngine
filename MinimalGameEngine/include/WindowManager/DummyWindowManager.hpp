#ifndef DUMMY_WINDOW_MANAGER_HPP
#define DUMMY_WINDOW_MANAGER_HPP
#include "WindowManager/WindowManager.hpp"
#include "Gameengine/iWindowHandler.hpp"

class DummyWindowManager: public WindowManager{
    public:
        DummyWindowManager(iWindowHandler *windowHandler);
        ~DummyWindowManager();
        void SwapBuffer();
       
};
#endif//DUMMY_WINDOW_MANAGER_HPP