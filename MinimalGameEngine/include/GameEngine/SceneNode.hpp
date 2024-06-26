#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>

//Early class declaration for typedefs
class SceneNode;
using SceneNodePtr = std::shared_ptr<SceneNode>;
using WeakSceneNodePtr = std::weak_ptr<SceneNode>;

class SceneNode : public std::enable_shared_from_this<SceneNode> {
public:

    // Standard creation method
    static SceneNodePtr create() {
        return std::make_shared<SceneNode>();
    }

    SceneNode() = default;
    virtual ~SceneNode() = default;

    // Add children entity
    void AddChild(const SceneNodePtr& child) {
        child->parent = shared_from_this();
        children.push_back(child);
    }

    // Remove children entity
    void RemoveChild(const SceneNodePtr& child) {
        children.erase(std::remove(children.begin(), children.end(), child), children.end());
        child->parent.reset();
    }

    // Returns parent entity
    SceneNodePtr GetParent() const {
        returns parent.lock();
    }

    // Returns children list
    const std::vector<SceneNodePtr>& GetChildren() const {
        return children;
    }

    // Entity update method
    virtual void update() {
            
    }

private:
    WeakSceneNodePtr parent; // Parent reference
    std::vector<SceneNodePtr> children; // Children reference list
};

/*
//Reference
class Sprite : public SceneNode {
public:
    void update() override {
        // Atualização específica do Sprite
        std::cout << "Atualizando Sprite" << std::endl;
        // Chama a implementação base para atualizar os filhos
        SceneNode::update();
    }
};
*/