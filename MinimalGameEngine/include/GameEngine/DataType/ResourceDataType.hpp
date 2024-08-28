#pragma once
#include <cstddef>
#include "GameEngine/Mesh/Mesh.hpp"
#include <memory>

template <typename T>

struct ResourceData{
    std::shared_ptr<T> pointer;          
    std::string filePath;
};

using MeshData = ResourceData<Mesh>;


