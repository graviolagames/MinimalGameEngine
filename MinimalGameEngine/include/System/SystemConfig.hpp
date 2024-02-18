#ifndef SYSTEM_CONFIG_HPP
#define SYSTEM_CONFIG_HPP

    enum class GRAPHICS_STACK : unsigned int {
        OPEN_GL
    };
    
    /*
        Struct that holds parameters that inform the system resources to be used
    */
    struct SystemConfig{
            unsigned int graphicsStack; //The graphics stack to be used by the engine
    };
#endif