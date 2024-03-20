# MinimalGameEngine
A minimal game engine framework
# Game Engine Architecture Design

The `Main` class, instantiated by the application in order to execute the game, is called `GameEngine`.

The `GameEngine` object is initialized by a constructor that receives, as argument, a `SystemConfig` object that holds parameters that inform the system resources to be used. For example, it should have a parameter that informs if graphics will be created using OpenGL or another stack.

In the implementation of the `GameEngine` constructor, all game engine initialization is made. Under the constructor. According to the system parameters, the GameEngine object will internally initialize `WindowManager` and a `Renderer`. Game engine will implement interfaces for calling assincronous methods
from subsystems like WindowManager or Renderer.

 Interfaces implemented by Game Engine: 
        iWindowHandler

# WindowManager: 

The `WindowManager` has several missions: 

1) Managing Rendering Control. 
2) Passing back window assincronous events to the game engine. 
3) Provide a way to read input devices. 

## Rendering Control:

    WindowManager will internally instantiate a Renderer object, whose nature will depend on the graphics architecture to be used (OpenGL,DirectX, Vulkan). The windowManager will expose a method for transfering data corresponding to the objects that must be drawm.

## Ascincronous Window handling 
    Assincronous events from the window may happen, in a way that demands a response from the engine. As an example, if the window is resized, the engine 
For that, it must receive, on constructor,  an object implementing iWindowHandler. 

The `Renderer` object will have the mission of rendering game entities on the screen. The renderer is an implementation of the abstract interface class `iRenderer`, in such a way that an OpenGL or DirectX renderer may be initialized according to the system parameters. The object will expose methods for receiving the metadata of a set of graphics objects and commanding the drawing of those same objects.

