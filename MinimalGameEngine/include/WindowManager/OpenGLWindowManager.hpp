#pragma once
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
#include "WindowManager/WindowManager.hpp"
#include "Renderer/OpenGLRenderer.hpp"
#include "Input/GLFWInputManager.hpp"
class OpenGLWindowManager: public WindowManager{
    public:
        OpenGLWindowManager(iCoreGameLoop* gameLoop);
        ~OpenGLWindowManager();
        void StartWindow();
        void StopWindow();
        iInputManager *GetInputManager();
        iRenderer *GetRenderer();
    protected:
        void PoolEvents();
        
    private:
        GLFWwindow* mWindow;
        OpenGLRenderer *mRenderer;
        GLFWInputManager *mInputManager;

        GLFWwindow* InitializeGLFW(std::string windowName);
        static void framebuffer_size_callback(GLFWwindow* window, int width, int height);
};
