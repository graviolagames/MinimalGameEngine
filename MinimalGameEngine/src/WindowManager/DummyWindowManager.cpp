#include "WindowManager/DummyWindowManager.hpp"
#include <iostream>

DummyWindowManager::DummyWindowManager(): WindowManager(){
    
}

DummyWindowManager::~DummyWindowManager(){
    
}

void DummyWindowManager::SwapBuffer(){
    std::cout<<"DummyWindowManager::SwapBuffer"<<std::endl;
}
