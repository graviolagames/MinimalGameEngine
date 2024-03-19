#ifndef OPENGL_RENDERER_HPP
#define OPENGL_RENDERER_HPP

#include "Renderer/Renderer.hpp"

class OpenGLRenderer:public Renderer{
        void Initialize(unsigned int bufferWidth,unsigned int bufferHeight);
    public: 
        OpenGLRenderer(unsigned int bufferWidth,unsigned int bufferHeight);
        void ClearScreen();
}
#endif //OPENGL_RENDERER_HPP