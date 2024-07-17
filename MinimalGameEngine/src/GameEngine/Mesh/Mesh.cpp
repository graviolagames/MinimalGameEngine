#include "GameEngine/Mesh/Mesh.hpp"

Mesh::Mesh(){

}

Mesh::~Mesh(){

}

void Mesh::SetVertexes(const std::vector<float> &Vertexes){
    mVertexes = Vertexes;
}

FloatBuffer Mesh::GetVertexBuffer(){
    FloatBuffer ret;
    ret.size = mVertexes.size();
    ret.data = mVertexes.data();
    return ret;
}

void Mesh::SetVertexeIndexes(const std::vector<unsigned int> &indexes){
    mVertexIndexes = indexes;
}

uIntBuffer Mesh::GetVertexIndexesBuffer(){
    uIntBuffer ret;
    ret.size = mVertexIndexes.size();
    ret.data = mVertexIndexes.data();
    return ret;
}