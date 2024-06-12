#pragma once
#include "Input/KeyboardDefs.hpp"

class iInputManager{
    public:
        virtual KEY_STATUS GetKeyStatus(KEY_VALUE key)= 0;
};
