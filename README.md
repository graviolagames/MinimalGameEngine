# MinimalGameEngine
A minimal game engine framework
# Game Engine Architecture Design

The `Main` class, instantiated by the application in order to execute the game, is called `GameEngine`.

The `GameEngine` object is initialized by a constructor that receives, as argument, a `SystemConfig` object that holds parameters that inform the system resources to be used. For example, it should have a parameter that informs if graphics will be created using OpenGL or another stack.

In the implementation of the `GameEngine` constructor, all game engine initialization is made. Under the constructor, a system object from the `System` class is initialized. The system object, in turn, is initialized by its own constructor, which receives the previously mentioned `SystemConfig` object. According to the system parameters, the system object will internally initialize `WindowManager` and a `Renderer`.

The `WindowManager` has two missions: managing buffer swapping and passing window events and input events. To accomplish these two tasks, `WindowManager` will implement some interfaces:
- `iInputEventSetup`: Specifies methods for setting the callbacks that will respond to each input event (example: keyboard and mouse events).
- `iWindowEventSetup`: Specifies methods for setting the callbacks that will respond to each window event (example: window resize).
- `iWindowController`: Specifies methods for commanding window operations (example: change window size, swap buffers).

The `Renderer` object will have the mission of rendering game entities on the screen. The renderer is an implementation of the abstract interface class `iRenderer`, in such a way that an OpenGL or DirectX renderer may be initialized according to the system parameters. The object will expose methods for receiving the metadata of a set of graphics objects and commanding the drawing of those same objects.

That said, the system object also has methods for exposing `inputEventSetup`, `iWindowEventSetup`, `iWindowController`, and `iRenderer`. So, the game engine may configure all event callbacks just before initializing the system object in such a way that all input and window events will pass through itself. Similarly, the game engine will have direct access to window controllers. The exposed interface `iRenderer` may be used by the game engine to draw the graphics at the right opportunity.


