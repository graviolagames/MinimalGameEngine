#ifndef OPEN_GL_WINDOW_CONTROLLER_HPP
#define OPEN_GL_WINDOW_CONTROLLER_HPP
#include "WindowManager/iWindowManager.hpp"
class OpenGLWindowManager: public iWindowManager{
    public:
        OpenGLWindowManager();
        ~OpenGLWindowManager();
        //WindowController methods
        void SwapBuffer();
        //InputEventSetup methods
        void SetInputCallbacks();
        //WindowEventSetup methods
        void SetWindowCallbacks();
    
};
#endif//OPEN_GL_WINDOW_CONTROLLER_HPP