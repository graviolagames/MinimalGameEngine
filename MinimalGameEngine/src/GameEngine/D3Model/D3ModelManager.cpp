#include "GameEngine/D3Model/D3ModelManager.hpp"

D3ModelManager::D3ModelManager(std::vector<D3ModelData> D3ModelsData){
    mD3ModelData = D3ModelsData;
    Initialize();
}

D3ModelManager::~D3ModelManager(){
    //[TODO] Delete all D3Model pointes 
}

D3Model* D3ModelManager::GetD3Model(unsigned int index){
    //[TODO]
    // Access the D3ModelData using index
    // if D3Model pointer in D3ModelData is NULL
    //   Load D3Model from file
    // Return D3Model pointer
    return NULL;
}


void D3ModelManager::Initialize(){
    //[TODO] Delete all D3Model pointers with NULL
}

void D3ModelManager::PreLoadModel(unsigned int index){
    GetD3Model(index);
}
        