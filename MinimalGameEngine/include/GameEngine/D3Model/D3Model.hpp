#pragma once
#include <vector>
#include "GameEngine/DataType/BufferType.hpp"

class D3Model{
public:
    D3Model();
    ~D3Model();
    
    //Set Vertexes indormation
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