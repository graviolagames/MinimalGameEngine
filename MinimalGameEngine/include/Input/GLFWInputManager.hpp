#ifndef GLFW_INPUT_MANAGER_HPP
#define GLFW_INPUT_MANAGER_HPP

#include "input/iInputManager.hpp"
#include <GLFW/glfw3.h>
#include <unordered_map>


class GLFWInputManager: public iInputManager{
    public: 
        GLFWInputManager(GLFWwindow* window,);
        ~GLFWInputManager();
        bool GetKeyPressed(KEY_VALUE key);
    privated:
        GLFWwindow* mWindow;
        std::unordered_map<KEY_VALUE, int> mGLFWKeyMap;
        void Initialize();
        std::unordered_map<KEY_VALUE, int> CreateGLFWKeyMap();
}

#endif //GLFW_INPUT_MANAGER_HPP