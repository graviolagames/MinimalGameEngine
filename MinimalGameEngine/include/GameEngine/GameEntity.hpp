#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>

//Early class declaration for typedefs
class GameEntity;
using GameEntityPtr = std::shared_ptr<GameEntity>;
using WeakGameEntityPtr = std::weak_ptr<GameEntity>;

class GameEntity : public std::enable_shared_from_this<GameEntity> {
public:

    // Standard creation method
    static GameEntityPtr create() {
        return std::make_shared<GameEntity>();
    }

    GameEntity() = default;
    virtual ~GameEntity() = default;

    // Add children entity
    void AddChild(const GameEntityPtr& child) {
        child->parent = shared_from_this();
        children.push_back(child);
    }

    // Remove children entity
    void RemoveChild(const GameEntityPtr& child) {
        children.erase(std::remove(children.begin(), children.end(), child), children.end());
        child->parent.reset();
    }

    // Returns parent entity
    GameEntityPtr GetParent() const {
        returns parent.lock();
    }

    // Returns children list
    const std::vector<GameEntityPtr>& GetChildren() const {
        return children;
    }

    // Entity update method
    virtual void update() {
            
    }

private:
    WeakGameEntityPtr parent; // Parent reference
    std::vector<GameEntityPtr> children; // Children reference list
};

/*
//Usage refference
class Sprite : public GameEntity {
public:
    void update() override {
        GameEntity::update();
    }
};
*/