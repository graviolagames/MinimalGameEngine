#include "WindowManager/DummyWindowManager.hpp"
#include <iostream>

DummyWindowManager::DummyWindowManager(): WindowManager(NULL){
    mInputManager = NULL; //[DEBT] Create a Dummy Input Manager
}

DummyWindowManager::~DummyWindowManager(){
    
}

void DummyWindowManager::PoolEvents(){

}

void DummyWindowManager::StartWindow(){

}

void DummyWindowManager::StopWindow(){

}

iInputManager *DummyWindowManager::GetInputManager(){
    return mInputManager;
}

