#pragma once

#include "SceneNode.hpp"

class D3SceneNode : public SceneNode {
public:
    
    static std::shared_ptr<D3SceneNode> create(int meshId) {
        return std::make_shared<D3SceneNode>(meshId);
    }

    // Constructor that accepts a mesh id
    D3SceneNode(unsigned int meshId) : meshId(meshId) {}

    void update() override {
        
    }

private:
    unsigned int meshId; // ID for the mesh used
};