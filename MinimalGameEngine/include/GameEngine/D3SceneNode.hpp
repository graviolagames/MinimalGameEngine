#pragma once

#include "SceneNode.hpp"

class D3SceneNode : public SceneNode {
public:
    
    static std::shared_ptr<D3SceneNode> create(int modelId) {
        return std::make_shared<D3SceneNode>(modelId);
    }

    // Constructor that accepts a 3dModel id
    D3SceneNode(unsigned int modelId) : modelId(modelId) {}

    void update() override {
        
    }

private:
    unsigned int modelId; // ID for the 3d model used
};