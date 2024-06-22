#pragma once

#include "GameEntity.hpp"

class D3Entity : public GameEntity {
public:
    
    static std::shared_ptr<D3Entity> create(int d3ModelId) {
        return std::make_shared<D3Entity>(modelId);
    }

    // Constructor that accepts a 3dModel id
    D3Entity(unsigned int d3ModelId) : mD3ModelId(d3ModelId) {}

    void update() override {
        
    }

private:
    unsigned int mD3ModelId; // ID for the 3d model used
};