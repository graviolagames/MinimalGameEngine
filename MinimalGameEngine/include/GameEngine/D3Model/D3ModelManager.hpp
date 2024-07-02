/*
    This class manages D3Models
*/

#pragma once 
#include <string>
#include <vector>
#include "GameEngine/D3Model/D3Model.hpp"
#include "GameEngine/DataType/ResourceDataType.hpp"

class D3ModelManager{
    public:
        D3ModelManager(std::vector<D3ModelData> D3ModelsData);
        ~D3ModelManager();
        void PreLoadModel(unsigned int index);
        D3Model* GetD3Model(unsigned int index);
        
    private:
        void Initialize();
        
        std::vector<D3ModelData> mD3ModelData;
};