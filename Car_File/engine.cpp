//Engine.cpp
#include <iostream>

#include <string>
    using std::string;

#include "Engine.h"

Engine::Engine(string model)
:model{model}
{}


Engine::~Engine() //destructor
{
    //nothing to do here.
    std::cout << "calling Engine Destructor\n";
}


string Engine::getModel()
{
    return this->model;
}
