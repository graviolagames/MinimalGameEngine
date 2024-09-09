/*
    Mesh resource loading
    Implements ResourceLoader class for the Mesh Resource.
    
*/
#pragma once
#include <string>
#include <cstring>
#include <cstdio>
#include <fstream>
#include <memory>
#include "GameEngine/DataType/ResourceLoader.hpp"
#include "GameEngine/Mesh/Mesh.hpp"


class MeshResourceLoader:public ResourceLoader<Mesh>{
    
    public:
        std::shared_ptr<Mesh> LoadResource(std::string resourcePath){
            
            std::ifstream file(resourcePath, std::ios::binary);       
            if (file.is_open()) {
                // Read Format Header
                char magic[14] = {0};
                file.read(magic, 13);
                if (std::strcmp(magic, "LESS_IS_MORE") == 0) {
                    file.read(reinterpret_cast<char*>(&mVersion), sizeof(uint32_t));
                    if(mVersion == 100){
                        // Read Data Header
                        file.read(reinterpret_cast<char*>(&mVertexCoordSize), sizeof(uint8_t));
                        file.read(reinterpret_cast<char*>(&mNumVertices), sizeof(uint32_t));
                        file.read(reinterpret_cast<char*>(&mIndexSize), sizeof(uint8_t));
                        file.read(reinterpret_cast<char*>(&mNumTriangles), sizeof(uint32_t));
                        // Read Vertex Buffer
                        size_t vertexBufferSize = mNumVertices * (mVertexCoordSize / 8);
                        mVertexBuffer.resize(vertexBufferSize / sizeof(float));
                        file.read(reinterpret_cast<char*>(mVertexBuffer.data()), vertexBufferSize);
                        // Read Index Buffer
                        size_t indexBufferSize = mNumTriangles * 3 * (mIndexSize / 8);
                        mIndexBuffer.resize(indexBufferSize / sizeof(uint32_t));
                        file.read(reinterpret_cast<char*>(mIndexBuffer.data()), indexBufferSize);
                    }    
                }
                file.close();
                //Create and return mesh
                std::shared_ptr<Mesh> mesh = std::make_shared<Mesh>();
                mesh->SetVertexes(mVertexBuffer);
                mesh->SetVertexeIndexes(mIndexBuffer);
                return mesh;
            }
            return NULL;
        };
    
    private:
        uint32_t mVersion;
        uint8_t mVertexCoordSize;
        uint32_t mNumVertices;
        uint8_t mIndexSize;
        uint32_t mNumTriangles;
        std::vector<float> mVertexBuffer;  // Assuming float32 for simplicity
        std::vector<uint32_t> mIndexBuffer;  // Assuming uint32 for simplicity         
};
