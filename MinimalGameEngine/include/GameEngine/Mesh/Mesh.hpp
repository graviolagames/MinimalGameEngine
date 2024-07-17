#pragma once
#include <vector>
#include "GameEngine/DataType/BufferType.hpp"

class Mesh{
public:
    Mesh();
    ~Mesh();

    //Set Vertexes information
    void SetVertexes(const std::vector<float> &Vertexes);

    //Returns the vertex buffer
    FloatBuffer GetVertexBuffer();

    //Set vertex index information
    void SetVertexeIndexes(const std::vector<unsigned int> &indexes);

    //Returns the vertex indexes buffer
    uIntBuffer GetVertexIndexesBuffer();

private:
    //Array of vertex
    std::vector<float> mVertexes;
    std::vector<unsigned int> mVertexIndexes;
};
