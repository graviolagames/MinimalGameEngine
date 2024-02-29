#ifndef I_WINDOW_HANDLER_HPP
#define I_WINDOW_HANDLER_HPP
class iWindowHandler{
    public: 
        virtual void HandleKeyboardEvent()= 0;
        virtual void HandleWindowResize() = 0;
};
#endif //I_WINDOW_HANDLER_HPP