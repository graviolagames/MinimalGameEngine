#pragma once
#include <cstddef>
#include <stdint.h>

template <typename T>

struct Buffer{
    T* data;
    std::size_t size;
};

using FloatBuffer = Buffer<float>;
using uIntBuffer = Buffer<uint32_t>;


