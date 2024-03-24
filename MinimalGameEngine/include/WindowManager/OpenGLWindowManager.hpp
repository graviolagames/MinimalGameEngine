#ifndef OPEN_GL_WINDOW_MANAGER_HPP
#define OPEN_GL_WINDOW_MANAGER_HPP
#include "WindowManager/WindowManager.hpp"

/*
Be sure to include GLAD before GLFW. 
The include file for GLAD includes the required OpenGL headers
behind the scenes (like GL/gl.h) so be sure to include GLAD
before other header files that require OpenGL (like GFW).
*/
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>
#include "Renderer/OpenGLRenderer.hpp"
#include "input/GLFWInputManager.hpp"
class OpenGLWindowManager: public WindowManager{
    public:
        OpenGLWindowManager();
        ~OpenGLWindowManager();
        void StopWindow();
    protected:
        void StartWindow();
        void PoolEvents();
        
    private:
        GLFWwindow* mWindow;
        OpenGLRenderer *mRenderer;
        GLFWInputManager *mInputManager;

        GLFWwindow* InitializeGLFW(std::string windowName);
};
#endif//OPEN_GL_WINDOW_MANAGER_HPP