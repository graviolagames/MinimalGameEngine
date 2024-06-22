#pragma once
#include <string>
#include <unordered_map>
#include <memory>
#include "GameEngine/D3Model/D3Model.hpp"

using D3ModelIndex = unsigned int;

class D3ModelManager {
private:
    std::unordered_map<std::string,unsigned int> mModelMap;
    std::vector<D3Model*> mModels;

public:

    D3ModelManager();
    ~D3ModelManager();
    //Create am Empty 3D model passing identifier name and returns its index
    D3ModelIndex CreateModel(const std::string& identifier);

    //Get the index of a 3D model, given its identifier name
    D3ModelIndex GetModelIndex(const std::string& identifier);

    //Returns a 3D model, given its index 
    D3Model* GetModel(const D3ModelIndex index);
};