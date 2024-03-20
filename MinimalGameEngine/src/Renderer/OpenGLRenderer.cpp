#include "Renderer/OpenGLRenderer.hpp"
#include <glad/glad.h>
OpenGLRenderer::OpenGLRenderer(unsigned int bufferWidth,unsigned int bufferHeight){
    Initialize(bufferWidth,bufferHeight);
}

OpenGLRenderer::~OpenGLRenderer(){

}

void OpenGLRenderer::ClearScreen(){
    
}

void OpenGLRenderer::Initialize(unsigned int bufferWidth,unsigned int bufferHeight){
    glViewport(0, 0, bufferWidth, bufferHeight);    
}