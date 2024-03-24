#ifndef WINDOW_MANAGER_HPP
#define WINDOW_MANAGER_HPP
class WindowManager{
    protected:
        const unsigned int DEFAULT_SCREAN_WIDTH = 800;
        const unsigned int DEFAULT_SCREAN_HEIGHT = 600;
        void StartWindow(){};
        void PoolEvents(){};
    public:
        WindowManager(){};
        void StopWindow();
        
};
#endif //WINDOW_MANAGER_HPP