#pragma once
class iRenderer{
    public:
        virtual void ClearScreen() = 0;
        virtual void SetViewPort(unsigned int width,unsigned int height)=0;

};
