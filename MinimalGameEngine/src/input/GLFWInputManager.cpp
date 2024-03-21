#include "input/GLFWInputManager.hpp"

GLFWInputManager::GLFWInputManager(GLFWwindow* window,){
    mWindow = window;
}

GLFWInputManager::~GLFWInputManager(){

}

bool GLFWInputManager::GetKeyPressed(KEY_VALUE key){
    if (glfwGetKey(mWindow,mGLFWKeyMap[key])==GLFW_PRESS){
        return K_STATUS.PRESS;
    }
    return 
        K_STATUS.RELEASED;
}

void GLFWInputManager::Initialize()
{
    mGLFWKeyMap = CreateGLFWKeyMap();
}

std::unordered_map<KEY_VALUE, int> GLFWInputManager::CreateGLFWKeyMap(){
    std::unordered_map<KEY_VALUE, int> keyMap;

    keyMap[KEY_VALUE::K_UNKNOWN] = GLFW_K_UNKNOWN;
    keyMap[KEY_VALUE::K_SPACE] = GLFW_K_SPACE;
    keyMap[KEY_VALUE::K_APOSTROPHE] = GLFW_K_APOSTROPHE;
    keyMap[KEY_VALUE::K_COMMA] = GLFW_K_COMMA;
    keyMap[KEY_VALUE::K_MINUS] = GLFW_K_MINUS;
    keyMap[KEY_VALUE::K_PERIOD] = GLFW_K_PERIOD;
    keyMap[KEY_VALUE::K_SLASH] = GLFW_K_SLASH;
    keyMap[KEY_VALUE::K_0] = GLFW_K_0;
    keyMap[KEY_VALUE::K_1] = GLFW_K_1;
    keyMap[KEY_VALUE::K_2] = GLFW_K_2;
    keyMap[KEY_VALUE::K_3] = GLFW_K_3;
    keyMap[KEY_VALUE::K_4] = GLFW_K_4;
    keyMap[KEY_VALUE::K_5] = GLFW_K_5;
    keyMap[KEY_VALUE::K_6] = GLFW_K_6;
    keyMap[KEY_VALUE::K_7] = GLFW_K_7;
    keyMap[KEY_VALUE::K_8] = GLFW_K_8;
    keyMap[KEY_VALUE::K_9] = GLFW_K_9;
    keyMap[KEY_VALUE::K_SEMICOLON] = GLFW_K_SEMICOLON;
    keyMap[KEY_VALUE::K_EQUAL] = GLFW_K_EQUAL;
    keyMap[KEY_VALUE::K_A] = GLFW_K_A;
    keyMap[KEY_VALUE::K_B] = GLFW_K_B;
    keyMap[KEY_VALUE::K_C] = GLFW_K_C;
    keyMap[KEY_VALUE::K_D] = GLFW_K_D;
    keyMap[KEY_VALUE::K_E] = GLFW_K_E;
    keyMap[KEY_VALUE::K_F] = GLFW_K_F;
    keyMap[KEY_VALUE::K_G] = GLFW_K_G;
    keyMap[KEY_VALUE::K_H] = GLFW_K_H;
    keyMap[KEY_VALUE::K_I] = GLFW_K_I;
    keyMap[KEY_VALUE::K_J] = GLFW_K_J;
    keyMap[KEY_VALUE::K_K] = GLFW_K_K;
    keyMap[KEY_VALUE::K_L] = GLFW_K_L;
    keyMap[KEY_VALUE::K_M] = GLFW_K_M;
    keyMap[KEY_VALUE::K_N] = GLFW_K_N;
    keyMap[KEY_VALUE::K_O] = GLFW_K_O;
    keyMap[KEY_VALUE::K_P] = GLFW_K_P;
    keyMap[KEY_VALUE::K_Q] = GLFW_K_Q;
    keyMap[KEY_VALUE::K_R] = GLFW_K_R;
    keyMap[KEY_VALUE::K_S] = GLFW_K_S;
    keyMap[KEY_VALUE::K_T] = GLFW_K_T;
    keyMap[KEY_VALUE::K_U] = GLFW_K_U;
    keyMap[KEY_VALUE::KEY_V] = GLFW_KEY_V;
    keyMap[KEY_VALUE::K_W] = GLFW_K_W;
    keyMap[KEY_VALUE::K_X] = GLFW_K_X;
    keyMap[KEY_VALUE::K_Y] = GLFW_K_Y;
    keyMap[KEY_VALUE::K_Z] = GLFW_K_Z;
    keyMap[KEY_VALUE::K_LEFT_BRACKET] = GLFW_K_LEFT_BRACKET;
    keyMap[KEY_VALUE::K_BACKSLASH] = GLFW_K_BACKSLASH;
    keyMap[KEY_VALUE::K_RIGHT_BRACKET] = GLFW_K_RIGHT_BRACKET;
    keyMap[KEY_VALUE::K_GRAVE_ACCENT] = GLFW_K_GRAVE

    return keyMap;

}