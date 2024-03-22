#include "input/GLFWInputManager.hpp"

GLFWInputManager::GLFWInputManager(GLFWwindow* window){
    mWindow = window;
    Initialize();
}

GLFWInputManager::~GLFWInputManager(){

}

KEY_STATUS GLFWInputManager::GetKeyPressed(KEY_VALUE key){
    if (key>KEY_VALUE::K_UNKNOWN && key<KEY_VALUE::MAX_KEY_VALUES){
            return mKeyStatusMap[glfwGetKey(mWindow,mGLFWKeyMap[key])];
    }
    return KEY_STATUS::K_STATUS_UNKNOWN; 
}

void GLFWInputManager::Initialize()
{
    mGLFWKeyMap = CreateGLFWKeyMap();
    mKeyStatusMap = CreateKeyStatusMap();
}

std::unordered_map<KEY_VALUE, int> GLFWInputManager::CreateGLFWKeyMap(){
    std::unordered_map<KEY_VALUE, int> keyMap;
    keyMap[KEY_VALUE::K_UNKNOWN] = GLFW_KEY_UNKNOWN;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_SPACE;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_APOSTROPHE;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_COMMA;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_MINUS;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_PERIOD;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_SLASH;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_0;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_1;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_2;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_3;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_4;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_5;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_6;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_7;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_8;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_9;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_SEMICOLON;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_EQUAL;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_A;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_B;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_C;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_D;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_E;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_G;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_H;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_I;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_J;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_K;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_L;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_M;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_N;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_O;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_P;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_Q;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_R;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_S;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_T;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_U;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_V;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_W;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_X;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_Y;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_Z;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_LEFT_BRACKET;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_BACKSLASH;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_RIGHT_BRACKET;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_GRAVE_ACCENT;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_WORLD_1;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_WORLD_2;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_ESCAPE;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_ENTER;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_TAB;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_BACKSPACE;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_INSERT;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_DELETE;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_RIGHT;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_LEFT;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_DOWN;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_UP;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_PAGE_UP;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_PAGE_DOWN;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_HOME;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_END;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_CAPS_LOCK;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_SCROLL_LOCK;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_NUM_LOCK;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_PRINT_SCREEN;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_PAUSE;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F1;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F2;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F3;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F4;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F5;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F6;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F7;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F8;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F9;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F10;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F11;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F12;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F13;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F14;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F15;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F16;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F17;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F18;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F19;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F20;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F21;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F22;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F23;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F24;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_F25;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_0;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_1;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_2;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_3;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_4;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_5;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_6;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_7;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_8;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_9;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_DECIMAL;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_DIVIDE;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_MULTIPLY;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_SUBTRACT;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_ADD;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_ENTER;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_KP_EQUAL;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_LEFT_SHIFT;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_LEFT_CONTROL;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_LEFT_ALT;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_LEFT_SUPER;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_RIGHT_SHIFT;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_RIGHT_CONTROL;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_RIGHT_ALT;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_RIGHT_SUPER;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_MENU;
    keyMap[KEY_VALUE::K_APOSTROPHE]=GLFW_KEY_LAST;
    return keyMap;
}

std::unordered_map<int,KEY_STATUS> GLFWInputManager::CreateKeyStatusMap(){
    std::unordered_map<int ,KEY_STATUS> keyStatusMap;
    keyStatusMap[GLFW_PRESS]=KEY_STATUS::K_PRESSED;
    keyStatusMap[GLFW_RELEASE]=KEY_STATUS::K_RELEASED;
    keyStatusMap[GLFW_REPEAT]=KEY_STATUS::K_REPEAT;
    return keyStatusMap;
}