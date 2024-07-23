#pragma once

#include "GameEngine/DataType/ResourceLoader.hpp";

class MeshResourceLoader:public ResourceLoader{
    public:
    MeshResourceLoader();
    void* LoadResource(std::string resourcePath);
};