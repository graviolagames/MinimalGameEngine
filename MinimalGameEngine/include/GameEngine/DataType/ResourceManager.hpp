#pragma once 
#include <string>
#include <vector>
#include <cstddef>
#include <iostream>

#include "GameEngine/DataType/ResourceDataType.hpp"
#include "GameEngine/Mesh/MeshResourceLoader.hpp"

//Usage example: ResourceManager<Mesh> *MeshManager = new ResourceManager<Mesh>(); 

template <typename RESOURCE_TYPE,typename RESOURCE_LOADER_TYPE>

class ResourceManager{
    public:
        ResourceManager(){
        };

        ~ResourceManager(){
            ClearResources();
        };

        bool PreloadResource(unsigned int index){
            if(index < mResources.size()){
                ResourceData<RESOURCE_TYPE> *resources = mResources.data();
                if(!resources[index].pointer){
                    resources[index].pointer = (ResourceData<RESOURCE_TYPE> *)mLoader->LoadResource(resources[index].filePath);
                    return false;
                };
                std::cerr << "Resource Manager: Trying to load Resource that is  already loaded" << std::endl;
                return true;
            }
            std::cerr << "Resource Manager Error: Resource index is out of range" << std::endl;
            return false;
        };

        RESOURCE_TYPE* GetResource(unsigned int index){
            if(index < mResources.size()){
                ResourceData<RESOURCE_TYPE> *resources = mResources.data();
                RESOURCE_TYPE *res = resources[index].pointer;
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
        
        void Initialize(std::vector< ResourceData<RESOURCE_TYPE> > resources){
            ClearResources();
            mResources = resources;
        };

    private:
        
        void ClearResources(){
            for (ResourceData<RESOURCE_TYPE> item : mResources) {
                if(item.pointer){
                    delete item.pointer;
                    item.pointer = nullptr;
                } 
            }
        };
        RESOURCE_LOADER_TYPE *mLoader;
        std::vector<ResourceData<RESOURCE_TYPE>> mResources;
};
