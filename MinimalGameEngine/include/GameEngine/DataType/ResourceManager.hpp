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

        bool PreloadResource(unsigned int index){
            if(index < mResources.size()){
                ResourceData<T> *resources = mResources.data();
                if(!resources[index].pointer){
                    //[TODO] load resource from propper interface using resources[index].filePath
                    return false;
                };
                std::cerr << "Resource Manager: Trying to load Resource that is  already loaded" << std::endl;
                return true;
            }
            std::cerr << "Resource Manager Error: Resource index is out of range" << std::endl;
            return false;
        };

        T* GetResource(unsigned int index){
            if(index < mResources.size()){
                ResourceData<T> *resources = mResources.data();
                T *res = resources[index].pointer;
                if(res ){
                    return res;    
                }
                if(!PreloadResource(index)){
                    std::cerr << "Resource Manager: resource is NULL" << std::endl;
                    return NULL;    
                }
                res = resources[index].pointer;
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
            for (ResourceData<T> item : mResources) {
                if(item.pointer){
                    delete item.pointer;
                    item.pointer = nullptr;
                } 
            }
        };

        std::vector<ResourceData<T>> mResources;
};