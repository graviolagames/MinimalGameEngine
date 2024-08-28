/*
    Mesh resource loading
    Implements ResourceLoader class for the Mesh Resource.
    
*/
#pragma once
#include <string>
#include <cstdio>
#include <memory>
#include "GameEngine/DataType/ResourceLoader.hpp"
#include "GameEngine/Mesh/Mesh.hpp"


class MeshResourceLoader:public ResourceLoader<Mesh>{
    
    public:
        std::shared_ptr<Mesh> LoadResource(std::string resourcePath){
            return NULL;
        };
    
    private:

        
};
