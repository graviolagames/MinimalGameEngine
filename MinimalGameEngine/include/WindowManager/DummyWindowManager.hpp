#ifndef DUMMY_WINDOW_MANAGER_HPP
#define DUMMY_WINDOW_MANAGER_HPP
#include "WindowManager/WindowManager.hpp"

class DummyWindowManager: public WindowManager{
    
    public:
        DummyWindowManager();
        ~DummyWindowManager();
        void StopWindow();
        iInputManager *GetInputManager();
    protected:
        void PoolEvents();
        void StartWindow();
        
       
        
       
};
#endif//DUMMY_WINDOW_MANAGER_HPP