#include "WindowManager/OpenGLWindowManager.hpp"
#include <iostream>

OpenGLWindowManager::OpenGLWindowManager(): WindowManager(){
    mWindow = InitializeGLFW("Game Window");
    mRenderer = new OpenGLRenderer(DEFAULT_SCREAN_WIDTH,DEFAULT_SCREAN_HEIGHT);
    mInputManager = new GLFWInputManager(mWindow);
    StartWindow();
}

OpenGLWindowManager::~OpenGLWindowManager(){
    delete mRenderer;
    delete mInputManager;
    glfwTerminate();
}


void OpenGLWindowManager::PoolEvents(){
    glfwPollEvents();
}

void OpenGLWindowManager::StopWindow(){
    glfwSetWindowShouldClose(mWindow, true);
}

void OpenGLWindowManager::StartWindow(){

    while(!glfwWindowShouldClose(mWindow)){
        
        PoolEvents();    
    }
}

GLFWwindow* OpenGLWindowManager::InitializeGLFW(std::string windowName){
    GLFWwindow* window;
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    #ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    #endif
    
    window = glfwCreateWindow(DEFAULT_SCREAN_WIDTH,DEFAULT_SCREAN_HEIGHT, "windowName", NULL, NULL);

    if (window == NULL){
        std::cout << "Failed to create GLFW window" << std::endl;
        return NULL;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "Failed to initialize GLAD" << std::endl;
        return NULL;
    }
    return window;
}
    