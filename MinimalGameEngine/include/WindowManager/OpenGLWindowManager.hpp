#ifndef OPEN_GL_WINDOW_CONTROLLER_HPP
#define OPEN_GL_WINDOW_CONTROLLER_HPP
#include "WindowManager/iWindowController.hpp"
class OpenGLWindowManager: public iWindowController{
    public:
        OpenGLWindowManager();
        ~OpenGLWindowManager();
    //////////////////////////////////////
    // iWindowController implementation //
    //////////////////////////////////////
        void SwapBuffer() override;
    
};
#endif//OPEN_GL_WINDOW_CONTROLLER_HPP