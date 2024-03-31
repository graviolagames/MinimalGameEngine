#include "Renderer/OpenGLRenderer.hpp"
#include <glad/glad.h>
OpenGLRenderer::OpenGLRenderer(unsigned int bufferWidth,unsigned int bufferHeight){
    Initialize(bufferWidth,bufferHeight);
}

OpenGLRenderer::~OpenGLRenderer(){

}

void OpenGLRenderer::ClearScreen(){
    glClear(GL_COLOR_BUFFER_BIT);
}

void OpenGLRenderer::Initialize(unsigned int bufferWidth,unsigned int bufferHeight){
    glViewport(0, 0, bufferWidth, bufferHeight);   
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f); 
}