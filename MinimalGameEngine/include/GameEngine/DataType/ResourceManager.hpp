#pragma once 
#include <string>
#include <vector>
#include <cstddef>

#include "GameEngine/DataType/ResourceDataType.hpp"

//Usage example: ResourceManager<D3Model> *D3ModelManager = new ResourceManager<D3Model>(); 

template <typename T>

class ResourceManager{
    public:
        ResourceManager(){
            
        };

        ~ResourceManager(){
            ClearResources();
        };

        void PreloadResource(unsigned int index){
            if(index < mResources.size()){
                ResourceData<T> *resources = mResources.data();
                if(!resources[index].pointer){
                    //[TODO] load resource from propper interface using resources[index].filePath
                    return;
                };
                std::cerr << "Resource Manager Error: Trying to load Resource thjat is  already loaded" << std::endl;
                return;
            }
            std::cerr << "Resource Manager Error: D3Model index is out of range" << std::endl;
        };

        T* GetResource(unsigned int index){
            if(index < mResources.size()){
                ResourceData<T> *resources = mResources.data();
                T *res = resources[index].pointer;
                if(!res){
                    std::cerr << "Resource Manager Error: resource is NULL" << std::endl;
                }
                return res;
            }
            std::cerr << "Resource Manager Error: Resource index is out of range" << std::endl;
            return NULL;
        }
        
        void Initialize(std::vector< ResourceData<T> > resources){
            ClearResources();
            mResources = resources;
        };

    private:
        
        void ClearResources(){
            for (T& item : mResources) {
                if(item.pointer){
                    delete item.pointer;
                    item.pointer = nullptr;
                } 
            }
        };

        std::vector<ResourceData<T>> mResources;
};