#ifndef OPENGL_RENDERER_HPP
#define OPENGL_RENDERER_HPP

#include "Renderer/iRenderer.hpp"

class OpenGLRenderer:public iRenderer{
        void Initialize(unsigned int bufferWidth,unsigned int bufferHeight);
    public: 
        OpenGLRenderer(unsigned int bufferWidth,unsigned int bufferHeight);
        ~OpenGLRenderer();
        void ClearScreen();
};
#endif //OPENGL_RENDERER_HPP