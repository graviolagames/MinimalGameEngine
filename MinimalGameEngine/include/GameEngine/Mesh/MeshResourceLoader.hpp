/*
    Mesh resource loading
    Implements ResourceLoader class for the Mesh Resource.
    
*/
#pragma once
#include <string>
#include "GameEngine/DataType/ResourceLoader.hpp"
class MeshResourceLoader:public ResourceLoader{
    public:
    void* LoadResource(std::string resourcePath){
        return NULL;
    };
};
