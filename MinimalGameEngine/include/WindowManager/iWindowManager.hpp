#ifndef I_WINDOW_MANAGER_HPP
#define I_WINDOW_MANAGER_HPP
#include "WindowManager/iWindowController.hpp"
#include "WindowManager/iInputEventSetup.hpp"
#include "WindowManager/iWindowEventSetup.hpp"
class iWindowManager: public iWindowController,iWindowEventSetup,iInputEventSetup{
    public:
        //WindowController methods
        void SwapBuffer() override{};
        //InputEventSetup methods
        void SetInputCallbacks() override{};
        //WindowEventSetup methods
        void SetWindowCallbacks() override{};
};
#endif //I_WINDOW_MANAGER_HPP