#pragma once
/*
Interface between the engine and the game. 
It can be consumed by the game, and provide objects necessary to prepare the engine 
before the start of a new game.
*/

#include "GameEngine/DataType/ResourceManager.hpp"

class iGameInitializer{
    virtual  MeshResourceManager *GetMeshResourceManager()=0;
    //Define here the getters for other resource managers. 
};