#ifndef I_WINDOW_MANAGER_HPP
#define I_WINDOW_MANAGER_HPP
#include "iWindowController.hpp"

class iWindowManager: public iWindowController{
    public:
        void SwapBuffer() override{};
};
#endif //I_WINDOW_MANAGER_HPP