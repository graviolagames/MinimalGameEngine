#ifndef OPEN_GL_WINDOW_CONTROLLER_HPP
#define OPEN_GL_WINDOW_CONTROLLER_HPP
#include "WindowManager/iWindowManager.hpp"
/*
Be sure to include GLAD before GLFW. 
The include file for GLAD includes the required OpenGL headers
behind the scenes (like GL/gl.h) so be sure to include GLAD
before other header files that require OpenGL (like GFW).
*/
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>

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
    private:
    const unsigned int DEFAULT_SCREAN_WIDTH = 800;
    const unsigned int DEFAULT_SCREAN_HEIGHT = 600;

    bool mSuccessfullyInitialized;
    GLFWwindow* mWindow;
    /*
        Initializes GLFW subsystem, returning true if everything is ok
    */
    bool InitializeGLFW(std::string windowName);
};
#endif//OPEN_GL_WINDOW_CONTROLLER_HPP