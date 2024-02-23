#ifndef OPEN_GL_WINDOW_CONTROLLER_HPP
#define OPEN_GL_WINDOW_CONTROLLER_HPP
#include "WindowManager/iWindowManager.hpp"
class OpenGLWindowManager: public iWindowManager{
    public:
        OpenGLWindowManager();
        ~OpenGLWindowManager();
        void SwapBuffer();
    
};
#endif//OPEN_GL_WINDOW_CONTROLLER_HPP