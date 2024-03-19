#ifndef RENDERER_HPP
#define RENDERER_HPP
class Renderer{
    public:
        Renderer(unsigned int bufferWidth,unsigned int bufferHeight){};
        virtual void ClearScreen() = 0;

};
#endif//RENDERER_HPP