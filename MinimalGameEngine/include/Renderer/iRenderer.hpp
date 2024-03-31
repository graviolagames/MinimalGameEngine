#ifndef I_RENDERER_HPP
#define I_RENDERER_HPP
class iRenderer{
    public:
        virtual void ClearScreen() = 0;
        virtual void SetViewPort(unsigned int width,unsigned int height)=0;

};
#endif//I_RENDERER_HPP