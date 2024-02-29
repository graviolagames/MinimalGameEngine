# MinimalGameEngine
A minimal game engine framework
# Game Engine Architecture Design

The `Main` class, instantiated by the application in order to execute the game, is called `GameEngine`.

The `GameEngine` object is initialized by a constructor that receives, as argument, a `SystemConfig` object that holds parameters that inform the system resources to be used. For example, it should have a parameter that informs if graphics will be created using OpenGL or another stack.

In the implementation of the `GameEngine` constructor, all game engine initialization is made. Under the constructor. According to the system parameters, the GameEngine object will internally initialize `WindowManager` and a `Renderer`. Game engine will implement interfaces for calling assincronous methods
from subsystems like WindowManager or Renderer.

 Interfaces implemented by Game Engine: 
        iWindowHandler
 
The `WindowManager` has two missions: managing buffer swapping and passing back window and input assincronous calls to the game engine. For that, it must receive, on constructor,  an object implementing iWindowHandler. 

The `Renderer` object will have the mission of rendering game entities on the screen. The renderer is an implementation of the abstract interface class `iRenderer`, in such a way that an OpenGL or DirectX renderer may be initialized according to the system parameters. The object will expose methods for receiving the metadata of a set of graphics objects and commanding the drawing of those same objects.

