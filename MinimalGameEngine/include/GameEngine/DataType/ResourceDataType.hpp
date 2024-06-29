#pragma once
#include <cstddef>
#include "GameEngine/D3Model/D3Model.hpp"
template <typename T>

struct ResourceData{
    T* pointer;
    std::string filePath;
};

using D3ModelData = ResourceData<D3Model>;


