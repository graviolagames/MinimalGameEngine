#include "Renderer/OpenGLRenderer.hpp"

OpenGLRenderer::OpenGLRenderer(unsigned int bufferWidth,unsigned int bufferHeight){
    Initialize(bufferWidth,bufferHeight);
}

OpenGLRenderer::~OpenGLRenderer(){

}

void OpenGLRenderer::ClearScreen(){
    
}

void OpenGLRenderer::Initialize(unsigned int bufferWidth,unsigned int bufferHeight);