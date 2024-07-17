#pragma once
#include <cstddef>
#include "GameEngine/Mesh/Mesh.hpp"
template <typename T>

struct ResourceData{
    T* pointer;
    std::string filePath;
};

using MeshData = ResourceData<Mesh>;


