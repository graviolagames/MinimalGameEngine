#ifndef DUMMY_WINDOW_MANAGER_HPP
#define DUMMY_WINDOW_MANAGER_HPP
#include "WindowManager/WindowManager.hpp"

class DummyWindowManager: public WindowManager{
    
    public:
        DummyWindowManager();
        ~DummyWindowManager();
        void StartWindow();
        void StopWindow();
        iInputManager *GetInputManager();
    protected:
        void PoolEvents();
        
       
        
       
};
#endif//DUMMY_WINDOW_MANAGER_HPP