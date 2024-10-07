#include "ExampleGame.hpp"
#include "GameEngine/DataType/ResourceDataType.hpp"

ExampleGame::ExampleGame(){

}

ExampleGame::~ExampleGame(){

}

void ExampleGame::OnGameStarted(iGameInitializer *gameInitializer){

    std::vector<MeshData> meshResources;
    
    meshResources.push_back({nullptr,"resource/3dModels/cube.m3d"});
    meshResources.push_back({nullptr,"resource/3dModels/pyramid.m3d"});
    
    MeshResourceManager *meshResourceManager = gameInitializer->GetMeshResourceManager();
    meshResourceManager->Initialize(meshResources);
    meshResourceManager->PreloadAllResources();

}
        
void ExampleGame::OnLevelStarted(){

}