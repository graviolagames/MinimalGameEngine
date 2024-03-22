#ifndef GLFW_INPUT_MANAGER_HPP
#define GLFW_INPUT_MANAGER_HPP

#include "input/iInputManager.hpp"
#include <GLFW/glfw3.h>
#include <unordered_map>


class GLFWInputManager: public iInputManager{
    public: 
        GLFWInputManager(GLFWwindow* window);
        ~GLFWInputManager();
        KEY_STATUS GetKeyPressed(KEY_VALUE key);
    private:
        GLFWwindow* mWindow;
        std::unordered_map<KEY_VALUE, int> mGLFWKeyMap;
        std::unordered_map<int,KEY_STATUS> mKeyStatusMap;
        void Initialize();
        std::unordered_map<KEY_VALUE, int> CreateGLFWKeyMap();
        std::unordered_map<int,KEY_STATUS> CreateKeyStatusMap();
        
};

#endif //GLFW_INPUT_MANAGER_HPP