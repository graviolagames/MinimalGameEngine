#include <iostream>
#include "GameEngine/D3Model/D3ModelManager.hpp"

D3ModelManager::D3ModelManager(std::vector<D3ModelData> D3Models){
    mD3Models = D3Models;
    Reset();
}

D3ModelManager::~D3ModelManager(){
    Reset(); 
}

D3Model* D3ModelManager::GetD3Model(unsigned int index){
    if(index < mD3Models.size()){
        D3ModelData *modelData = mD3Models.data();
        D3Model *model = modelData[index].pointer;
        if(!model){
            std::cerr << "Error: D3Model is NULL" << std::endl;
        }
        return model;
    }
    std::cerr << "Error: D3Model index is out of range" << std::endl;
    return NULL;
}


void D3ModelManager::Reset(){
    for (D3ModelData& item : mD3Models) {
            if(item.pointer){
                delete item.pointer;
                item.pointer = nullptr;
            } 
        }
}

void D3ModelManager::PreLoadModel(unsigned int index){
    if(index < mD3Models.size()){
        D3ModelData *modelData = mD3Models.data();
        if(!modelData[index].pointer){
            //[TODO] Read D3ModelFromFile
            //modelData[index].pointer = LoadModelFromFile(modelData.filePath);
            return;
        };
        std::cerr << "Error: Trying to load D3Model already loaded" << std::endl;
        return;
    }
    std::cerr << "Error: D3Model index is out of range" << std::endl;
}
        