#ifndef I_INPUT_MANAGER_HPP
#define I_INPUT_MANAGER_HPP
#include "input/KeyboardDefs.hpp"

class iInputManager{
    public:
        virtual bool GetKeyPressed(KEY_VALUE key)= 0;
};

#endif//I_INPUT_MANAGER_HPP