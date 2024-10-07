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
            
        };

        bool PreloadResource(unsigned int index){
            if(index < mResources.size()){
                ResourceData<RESOURCE_TYPE> *resources = mResources.data();
                if(!resources[index].pointer){
                    resources[index].pointer = (std::shared_ptr<RESOURCE_TYPE>)mLoader.LoadResource(resources[index].filePath);
                    if (!resources[index].pointer) {
                        std::cerr << "Resource Manager: Could not load resource" << std::endl;
                        return false;
                    }
                    return true;
                };
                std::cerr << "Resource Manager: Trying to load Resource that is  already loaded" << std::endl;
                return true;
            }
            std::cerr << "Resource Manager Error: Resource index is out of range" << std::endl;
            return false;
        };

        bool PreloadAllResources(){
            for(unsigned int index = 0;index <  mResources.size();index++){
                if(!PreloadResource(index)){
                    return false;
                }
            }
            return true;
        }

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
            mResources = resources;
        };

    private:
        RESOURCE_LOADER_TYPE mLoader;
        std::vector<ResourceData<RESOURCE_TYPE>> mResources;
};


using  MeshResourceManager = ResourceManager<Mesh,MeshResourceLoader>;