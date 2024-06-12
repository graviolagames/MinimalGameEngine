#pragma once

#include "GameEntity.hpp"

class D3Entity : public GameEntity {
public:
    
    static std::shared_ptr<D3Entity> create(int modelId) {
        return std::make_shared<D3Entity>(modelId);
    }

    // Constructor that accepts a 3dModel id
    D3Entity(unsigned int modelId) : modelId(modelId) {}

    void update() override {
        
    }

private:
    unsigned int modelId; // ID for the 3d model used
};