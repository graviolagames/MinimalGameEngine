#pragma once
#include <cstddef>

template <typename T>

struct Buffer{
    T* data;
    std::size_t size;
};

using FloatBuffer = Buffer<float>;
using uIntBuffer = Buffer<unsigned int>;


