#include "WindowManager/OpenGLWindowManager.hpp"
#include <iostream>

OpenGLWindowManager::OpenGLWindowManager(): WindowManager(){
    mSuccessfullyInitialized = InitializeGLFW("Game Window");
}

OpenGLWindowManager::~OpenGLWindowManager(){
    glfwTerminate();
}

void OpenGLWindowManager::SwapBuffer(){
    std::cout<<"Swapping Buffers"<<std::endl;
}

bool OpenGLWindowManager::InitializeGLFW(std::string windowName){
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    #ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    #endif
    
    mWindow = glfwCreateWindow(DEFAULT_SCREAN_WIDTH,DEFAULT_SCREAN_HEIGHT, "windowName", NULL, NULL);

    if (mWindow == NULL){
        std::cout << "Failed to create GLFW window" << std::endl;
        return false;
    }

    glfwMakeContextCurrent(mWindow);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "Failed to initialize GLAD" << std::endl;
        return false;
    }
    return true;
}
    