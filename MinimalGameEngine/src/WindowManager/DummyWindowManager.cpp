#include "WindowManager/DummyWindowManager.hpp"
#include <iostream>

DummyWindowManager::DummyWindowManager(iWindowHandler *windowHandler): WindowManager(windowHandler){
    
}

DummyWindowManager::~DummyWindowManager(){
    
}

void DummyWindowManager::SwapBuffer(){
    std::cout<<"DummyWindowManager::SwapBuffer"<<std::endl;
}
