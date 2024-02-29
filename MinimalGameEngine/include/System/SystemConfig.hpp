#ifndef SYSTEM_CONFIG_HPP
#define SYSTEM_CONFIG_HPP

    enum class GRAPHICS_STACK : unsigned int {
        OPEN_GL
    };
    
    /*
        Struct that holds parameters that inform the system resources to be used
    */
    struct SystemConfig{
            GRAPHICS_STACK graphicsStack = GRAPHICS_STACK::OPEN_GL; //The graphics stack to be used by the engine
    };
#endif