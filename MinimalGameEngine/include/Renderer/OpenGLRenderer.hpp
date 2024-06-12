#pragma once
#include "Renderer/iRenderer.hpp"

class OpenGLRenderer:public iRenderer{
        void Initialize(unsigned int bufferWidth,unsigned int bufferHeight);
    public: 
        OpenGLRenderer(unsigned int bufferWidth,unsigned int bufferHeight);
        ~OpenGLRenderer();
        void ClearScreen();
        void SetViewPort(unsigned int width,unsigned int height);
};