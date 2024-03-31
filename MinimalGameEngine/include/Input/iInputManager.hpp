#ifndef I_INPUT_MANAGER_HPP
#define I_INPUT_MANAGER_HPP
#include "Input/KeyboardDefs.hpp"

class iInputManager{
    public:
        virtual KEY_STATUS GetKeyStatus(KEY_VALUE key)= 0;
};

#endif//I_INPUT_MANAGER_HPP