/*
    Abstract class for resource loading
    Implement this class for each resource type.
    LoadResourceMethod must return the ResourceData according with the propper type
*/
#pragma once
#include <string>

template <typename T>

class ResourceLoader{
    public:
    virtual std::shared_ptr<T> LoadResource(std::string resourcePath)=0;
};
