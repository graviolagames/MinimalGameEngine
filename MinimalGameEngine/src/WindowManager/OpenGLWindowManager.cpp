#include "WindowManager/OpenGLWindowManager.hpp"
#include <iostream>

OpenGLWindowManager::OpenGLWindowManager(iCoreGameLoop* gameLoop):WindowManager(gameLoop){
    mWindow = InitializeGLFW("Game Window");
    mRenderer = new OpenGLRenderer(DEFAULT_SCREAN_WIDTH,DEFAULT_SCREAN_HEIGHT);
    mInputManager = new GLFWInputManager(mWindow);
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

iInputManager *OpenGLWindowManager::GetInputManager(){
    return mInputManager;
}

iRenderer *OpenGLWindowManager::GetRenderer(){
    return mRenderer;
}

void OpenGLWindowManager::StartWindow(){

    while(!glfwWindowShouldClose(mWindow)){
        mGameLoop->ProcessFrame();
        PoolEvents();
        glfwSwapBuffers(mWindow);   
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

    window = glfwCreateWindow(DEFAULT_SCREAN_WIDTH,DEFAULT_SCREAN_HEIGHT, windowName.c_str(), NULL, NULL);
    if (window == NULL){
        std::cerr << "Failed to create GLFW window" << std::endl;
        return NULL;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cerr << "Failed to initialize GLAD" << std::endl;
        return NULL;
    }

    glfwSetWindowUserPointer(window,this); 	
    glfwSetFramebufferSizeCallback(window, &framebuffer_size_callback);

    return window;
}

void OpenGLWindowManager::framebuffer_size_callback(GLFWwindow* window, int width, int height){
    WindowManager *windowManager = (WindowManager*)glfwGetWindowUserPointer(window); 	
    iRenderer *renderer = windowManager->GetRenderer();
    renderer->SetViewPort(width,height);
}
    