#include <iostream>
#include "GameEngine/D3Model/D3ModelManager.hpp"

D3ModelManager::D3ModelManager(){

}
D3ModelManager::~D3ModelManager(){

}

D3ModelIndex D3ModelManager::CreateModel(const std::string& identifier) {
    D3Model *model = new D3Model();
    mModels.push_back(model);
    D3ModelIndex index = D3ModelIndex(mModels.size()) - 1;
    mModelMap[identifier] = index;
    return index;
}

D3ModelIndex D3ModelManager::GetModelIndex(const std::string& identifier) {
    auto it = mModelMap.find(identifier);
    if (it != mModelMap.end()) {
        return it->second;
    }
   std::cerr << "Model not found. identifier = " << identifier  << std::endl;
   return NULL;
}

D3Model* D3ModelManager::GetModel(const D3ModelIndex index) {
    if (index >= 0 && index < mModels.size()) {
        return mModels[index];
    }
    std::cerr << "Bad model index. Index value = "<< index << std::endl;
    return NULL;
}