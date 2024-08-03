#pragma once 
#include <string>
#include <vector>
#include <cstddef>
#include <iostream>

#include "GameEngine/DataType/ResourceDataType.hpp"
#include "GameEngine/DataType/ResourceLoader.hpp"

//Usage example: ResourceManager<Mesh> *MeshManager = new ResourceManager<Mesh>(); 

template <typename T>

class ResourceManager{
    public:
        ResourceManager(ResourceLoader *loader){
            mLoader = loader;
        };

        ~ResourceManager(){
            ClearResources();
        };

        bool PreloadResource(unsigned int index){
            if(index < mResources.size()){
                ResourceData<T> *resources = mResources.data();
                if(!resources[index].pointer){
                    resources[index].pointer = (ResourceData<T> *)mLoader->LoadResource(resources[index].filePath);
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
        ResourceLoader *mLoader;
        std::vector<ResourceData<T>> mResources;
};