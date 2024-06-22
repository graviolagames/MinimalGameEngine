#include "GameEngine/D3Model/D3Model.hpp"

D3Model::D3Model(){

}

D3Model::~D3Model(){

}

void D3Model::SetVertexes(const std::vector<float> &Vertexes){
    mVertexes = Vertexes;
}

FloatBuffer D3Model::GetVertexBuffer(){
    FloatBuffer ret;
    ret.size = mVertexes.size();
    ret.data = mVertexes.data();
    return ret;
}

void D3Model::SetVertexeIndexes(const std::vector<unsigned int> &indexes){
    mVertexIndexes = indexes;
}

uIntBuffer D3Model::GetVertexIndexesBuffer(){
    uIntBuffer ret;
    ret.size = mVertexIndexes.size();
    ret.data = mVertexIndexes.data();
    return ret;
}