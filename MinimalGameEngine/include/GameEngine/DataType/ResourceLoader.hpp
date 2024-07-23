/*
    Abstract class for resource loading
    Implement this class for each resource type.
    LoadResourceMethod must return the ResourceData according with the propper type
*/
#pragma once
#include <string>
class ResourceLoader{
    public:
    virtual void* LoadResource(std::string resourcePath)=0;
};
